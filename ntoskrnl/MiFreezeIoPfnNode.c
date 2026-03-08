/*
 * XREFs of MiFreezeIoPfnNode @ 0x14062BCF8
 * Callers:
 *     MiDbgTranslatePhysicalAddress @ 0x140641B08 (MiDbgTranslatePhysicalAddress.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14027F8D0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiLockIoPfnTree @ 0x14029C1B0 (MiLockIoPfnTree.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140305AB0 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140333520 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExTryAcquireSpinLockSharedAtDpcLevel @ 0x140462EB0 (ExTryAcquireSpinLockSharedAtDpcLevel.c)
 */

__int64 __fastcall MiFreezeIoPfnNode(unsigned __int64 a1, int a2, __int64 a3)
{
  __int64 v6; // rsi
  volatile LONG *v8; // rbx
  unsigned __int64 v9; // rax

  *(_QWORD *)a3 = 0LL;
  v6 = *((_QWORD *)KeGetCurrentPrcb()->MmInternal + 1577);
  if ( a2 )
  {
    *(_BYTE *)(a3 + 8) = 1;
    if ( !(unsigned int)ExTryAcquireSpinLockSharedAtDpcLevel((_DWORD *)(v6 + 384)) )
      return 0LL;
  }
  else
  {
    *(_BYTE *)(a3 + 8) = 0;
    MiLockIoPfnTree(5);
  }
  v8 = (volatile LONG *)*((_QWORD *)&xmmword_140C69200 + 1);
  while ( v8 )
  {
    v9 = *((_QWORD *)v8 + 3);
    if ( a1 >= v9 )
    {
      if ( a1 < v9 + 512 )
        break;
      v8 = (volatile LONG *)*((_QWORD *)v8 + 1);
    }
    else
    {
      v8 = *(volatile LONG **)v8;
    }
  }
  if ( v8 )
  {
    if ( a2 )
    {
      if ( !(unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel() )
      {
        ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v6 + 384));
        *(_BYTE *)(a3 + 8) = 0;
        return 0LL;
      }
    }
    else
    {
      ExAcquireSpinLockExclusiveAtDpcLevel(v8 + 43);
    }
    *(_QWORD *)a3 = v8;
  }
  return 1LL;
}
