/*
 * XREFs of PspTlsAlloc @ 0x140849A64
 * Callers:
 *     PsTlsAlloc @ 0x140849A30 (PsTlsAlloc.c)
 * Callees:
 *     MmIsSessionAddress @ 0x140239ED0 (MmIsSessionAddress.c)
 *     KiCheckForKernelApcDelivery @ 0x1402B7850 (KiCheckForKernelApcDelivery.c)
 *     RtlpFlsAlloc @ 0x140849B60 (RtlpFlsAlloc.c)
 *     PsTlsFree @ 0x1409B31F0 (PsTlsFree.c)
 */

__int64 __fastcall PspTlsAlloc(__int64 a1, unsigned int a2, int a3, unsigned int *a4)
{
  int v6; // ebx
  int v7; // edi
  int v8; // ecx
  struct _KTHREAD *CurrentThread; // rax
  int v10; // eax
  struct _KTHREAD *v11; // rcx
  int v12; // ebx
  bool v13; // zf
  unsigned int v15; // [rsp+50h] [rbp+18h] BYREF

  v15 = 0;
  v6 = a1;
  v7 = a3 & 0x40000000;
  if ( (a3 & 0x40000000) == 0 )
    goto LABEL_2;
  if ( !a1 )
    return (unsigned int)-1073741811;
  if ( a3 < 0 || MmIsSessionAddress(a1) )
  {
LABEL_2:
    v8 = KeGetCurrentThread()[1].EndPadding[0];
    if ( (v8 & 3) != 0 )
    {
      return (unsigned int)-1073741749;
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->SpecialApcDisable;
      v10 = RtlpFlsAlloc(v8, a2, v6, v7 != 0 ? 0x40000000 : 0, (__int64)&v15);
      v11 = KeGetCurrentThread();
      v12 = v10;
      v13 = v11->SpecialApcDisable++ == -1;
      if ( v13 && ($C71981A45BEB2B45F82C232A7085991E *)v11->ApcState.ApcListHead[0].Flink != &v11->152 )
        KiCheckForKernelApcDelivery();
      if ( v12 >= 0 )
      {
        if ( v15 > a2 )
        {
          PsTlsFree(v15);
          return (unsigned int)-1073741801;
        }
        else
        {
          *a4 = v15;
        }
      }
    }
  }
  else
  {
    return (unsigned int)-1073741790;
  }
  return (unsigned int)v12;
}
