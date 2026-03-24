/*
 * XREFs of MiInitializeTbFlushStamps @ 0x1402E9930
 * Callers:
 *     MiReleasePtes @ 0x140245170 (MiReleasePtes.c)
 *     MiDeleteSystemPagableVm @ 0x140286100 (MiDeleteSystemPagableVm.c)
 *     MiTerminateWsleCluster @ 0x1402BB3B0 (MiTerminateWsleCluster.c)
 *     MiDeleteNonPagedPoolPte @ 0x1402E9620 (MiDeleteNonPagedPoolPte.c)
 * Callees:
 *     MiSwizzleInvalidPte @ 0x1402AA620 (MiSwizzleInvalidPte.c)
 *     MiPteInShadowRange @ 0x1402C9180 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14030E10C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14030E16C (MiPteHasShadow.c)
 */

struct _KTHREAD *__fastcall MiInitializeTbFlushStamps(unsigned __int64 a1)
{
  __int64 v1; // rbx
  struct _KTHREAD *result; // rax
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  unsigned __int64 v7; // rdx
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v9; // rax
  __int64 v10; // rdx
  signed __int32 v11[10]; // [rsp+0h] [rbp-28h] BYREF

  v1 = *(_QWORD *)a1;
  if ( MiPteInShadowRange(a1)
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v1 & 1) != 0
    && ((v1 & 0x20) == 0 || (v1 & 0x42) == 0) )
  {
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v9 = *((_QWORD *)&Flink->Flink + ((a1 >> 3) & 0x1FF));
      v10 = v1 | 0x20;
      if ( (v9 & 0x20) == 0 )
        v10 = v1;
      v1 = v10;
      if ( (v9 & 0x42) != 0 )
        v1 = v10 | 0x42;
    }
  }
  _InterlockedOr(v11, 0);
  if ( v1 && qword_140C4DF40 )
  {
    if ( (v1 & 0x10) != 0 )
      LODWORD(v1) = v1 & 0xFFFFFFEF;
    else
      LODWORD(v1) = ~(_DWORD)qword_140C4DF40 & v1;
  }
  result = (struct _KTHREAD *)MiSwizzleInvalidPte(((unsigned __int64)(unsigned int)KiTbFlushTimeStamp << 32) | (unsigned int)v1);
  v7 = (unsigned __int64)result;
  if ( !(_DWORD)v5 )
    goto LABEL_4;
  if ( !(unsigned int)MiPteHasShadow(v4, result, v5, v6) )
  {
    result = KeGetCurrentThread();
    if ( (HIDWORD(result->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 && (v7 & 1) != 0 )
    {
      result = (struct _KTHREAD *)0x8000000000000000LL;
      v7 |= 0x8000000000000000uLL;
    }
LABEL_4:
    *(_QWORD *)a1 = v7;
    return result;
  }
  if ( !HIBYTE(word_140C4E008) && (v7 & 1) != 0 )
    v7 |= 0x8000000000000000uLL;
  *(_QWORD *)a1 = v7;
  return (struct _KTHREAD *)MiWritePteShadow(a1, v7);
}
