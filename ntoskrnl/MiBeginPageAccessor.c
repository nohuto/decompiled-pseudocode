/*
 * XREFs of MiBeginPageAccessor @ 0x140350290
 * Callers:
 *     MiGetFreeLargePage @ 0x14034FBD0 (MiGetFreeLargePage.c)
 *     MiTryUnlinkNodeLargePages @ 0x14039BDDC (MiTryUnlinkNodeLargePages.c)
 *     MiGetHugeRangeFromNode @ 0x1403BF1C4 (MiGetHugeRangeFromNode.c)
 * Callees:
 *     RtlAvlInsertNodeEx @ 0x140331710 (RtlAvlInsertNodeEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140333520 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiIsFreeZeroPfnCold @ 0x140350240 (MiIsFreeZeroPfnCold.c)
 */

__int64 __fastcall MiBeginPageAccessor(unsigned __int64 a1, __int64 a2, int a3)
{
  bool v3; // bl
  __int64 v5; // r9
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v8; // rax
  volatile LONG *v9; // rbp
  _QWORD *v10; // rdx
  _QWORD *v11; // rax
  __int64 *v12; // rcx
  _QWORD *v13; // rax

  v3 = 0;
  *(_BYTE *)(a1 + 72) = 0;
  if ( !a3 )
  {
    if ( (*(_BYTE *)(a2 + 34) & 8) == 0 )
    {
      *(_QWORD *)(a1 + 24) = a2;
      *(_BYTE *)(a2 + 34) |= 8u;
      if ( MiIsFreeZeroPfnCold(a2) )
        *(_BYTE *)(a1 + 72) = 1;
      *(_QWORD *)(v5 + 16) = a1;
      goto LABEL_6;
    }
    return 0LL;
  }
  if ( (*(_QWORD *)a2 & 0x800000000000000LL) != 0 )
    return 0LL;
  v8 = *(_QWORD *)a2 | 0x800000000000000LL;
  *(_BYTE *)(a1 + 68) = 1;
  *(_QWORD *)(a1 + 24) = a2;
  *(_QWORD *)a2 = v8;
LABEL_6:
  CurrentThread = KeGetCurrentThread();
  *(_QWORD *)(a1 + 56) = CurrentThread;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_WORD *)(a1 + 70) = 0;
  if ( *(_BYTE *)(a1 + 73) )
  {
    v9 = &dword_140C66EE0;
  }
  else
  {
    if ( !a3 )
    {
      *(_BYTE *)(a1 + 69) = 1;
      return 1LL;
    }
    v9 = &dword_140C66EF0;
  }
  ExAcquireSpinLockExclusiveAtDpcLevel(v9);
  if ( *(_BYTE *)(a1 + 73) )
  {
    v10 = (_QWORD *)qword_140C66EE8;
    if ( qword_140C66EE8 )
    {
      while ( 1 )
      {
        if ( (unsigned __int64)CurrentThread >= v10[7] )
        {
          v13 = (_QWORD *)v10[1];
          if ( !v13 )
          {
            v3 = 1;
            break;
          }
        }
        else
        {
          v13 = (_QWORD *)*v10;
          if ( !*v10 )
            break;
        }
        v10 = v13;
      }
    }
    v12 = &qword_140C66EE8;
    goto LABEL_27;
  }
  v10 = (_QWORD *)qword_140C66EF8;
  if ( !qword_140C66EF8 )
    goto LABEL_19;
  while ( a1 < (unsigned __int64)v10 )
  {
    v11 = (_QWORD *)*v10;
    if ( !*v10 )
      goto LABEL_19;
LABEL_22:
    v10 = v11;
  }
  v11 = (_QWORD *)v10[1];
  if ( v11 )
    goto LABEL_22;
  v3 = 1;
LABEL_19:
  v12 = &qword_140C66EF8;
LABEL_27:
  RtlAvlInsertNodeEx((unsigned __int64 *)v12, (unsigned __int64)v10, v3, a1);
  *(_BYTE *)(a1 + 69) = 1;
  ExReleaseSpinLockExclusiveFromDpcLevel(v9);
  return 1LL;
}
