void __fastcall PspTlsDataCleanup(__int64 a1, int a2)
{
  unsigned __int64 v2; // rdx
  int v3; // eax
  __int64 v4; // rdi
  unsigned __int64 v5; // rdi
  __int64 v6; // r8
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v8; // rax

  if ( !a2 )
  {
    v2 = *(_QWORD *)(a1 + 2280);
    *(_DWORD *)(a1 + 2280) |= 1u;
    if ( !v2 )
      return;
    v6 = 1LL;
    goto LABEL_12;
  }
  if ( a2 != 1 )
    __int2c();
  v3 = *(_DWORD *)(a1 + 2280);
  if ( (v3 & 1) == 0 )
    __int2c();
  v4 = *(_QWORD *)(a1 + 2280);
  *(_DWORD *)(a1 + 2280) = v3 | 2;
  v5 = v4 & 0xFFFFFFFFFFFFFFFCuLL;
  if ( v5 )
  {
    if ( !RtlpFlsSlotDataValidateEmpty(a1, v5) )
      __fastfail(0x46u);
    v6 = 2LL;
    v2 = v5;
LABEL_12:
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    RtlpFlsDataCleanup(a1, v2, v6);
    v8 = KeGetCurrentThread();
    if ( v8->SpecialApcDisable++ == -1
      && ($C71981A45BEB2B45F82C232A7085991E *)v8->ApcState.ApcListHead[0].Flink != &v8->152 )
    {
      KiCheckForKernelApcDelivery();
    }
  }
}
