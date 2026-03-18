/*
 * XREFs of PspTlsDataCleanup @ 0x1407A0818
 * Callers:
 *     PspExitThread @ 0x1407A0088 (PspExitThread.c)
 * Callees:
 *     RtlpFlsSlotDataValidateEmpty @ 0x140248A78 (RtlpFlsSlotDataValidateEmpty.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     RtlpFlsDataCleanup @ 0x1406B7804 (RtlpFlsDataCleanup.c)
 */

void __fastcall PspTlsDataCleanup(__int64 a1, int a2)
{
  _DWORD *v2; // rdx
  struct _KTHREAD *v3; // rax
  struct _KTHREAD *v4; // rax
  bool v5; // zf
  int v6; // eax
  __int64 v7; // rdi
  _DWORD *v8; // rdi
  __int64 v9; // rcx
  struct _KTHREAD *CurrentThread; // rax

  if ( a2 )
  {
    if ( a2 != 1 )
      __int2c();
    v6 = *(_DWORD *)(a1 + 2280);
    if ( (v6 & 1) == 0 )
      __int2c();
    v7 = *(_QWORD *)(a1 + 2280);
    *(_DWORD *)(a1 + 2280) = v6 | 2;
    v8 = (_DWORD *)(v7 & 0xFFFFFFFFFFFFFFFCuLL);
    if ( v8 )
    {
      if ( !RtlpFlsSlotDataValidateEmpty(a1, (__int64)v8) )
        __fastfail(0x46u);
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->SpecialApcDisable;
      RtlpFlsDataCleanup(v9, v8, 2);
      v4 = KeGetCurrentThread();
      v5 = v4->SpecialApcDisable++ == -1;
      if ( v5 )
        goto LABEL_4;
    }
  }
  else
  {
    v2 = *(_DWORD **)(a1 + 2280);
    *(_DWORD *)(a1 + 2280) |= 1u;
    if ( v2 )
    {
      v3 = KeGetCurrentThread();
      --v3->SpecialApcDisable;
      RtlpFlsDataCleanup(a1, v2, 1);
      v4 = KeGetCurrentThread();
      v5 = v4->SpecialApcDisable++ == -1;
      if ( v5 )
      {
LABEL_4:
        if ( ($CEA84C04E3712D858E5667A507841A2A *)v4->ApcState.ApcListHead[0].Flink != &v4->152 )
          KiCheckForKernelApcDelivery();
      }
    }
  }
}
