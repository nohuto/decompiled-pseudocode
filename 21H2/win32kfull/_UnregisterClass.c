/*
 * XREFs of _UnregisterClass @ 0x1C0071084
 * Callers:
 *     NtUserUnregisterClass @ 0x1C0070F40 (NtUserUnregisterClass.c)
 * Callees:
 *     DestroyClass @ 0x1C0060880 (DestroyClass.c)
 *     ?EnforceConsistency@AtomicExecutionCheck@@AEAAXXZ @ 0x1C0071408 (-EnforceConsistency@AtomicExecutionCheck@@AEAAXXZ.c)
 *     _InnerGetClassPtr @ 0x1C00714A8 (_InnerGetClassPtr.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 */

__int64 __fastcall UnregisterClass(AtomicExecutionCheck *a1, __int64 a2, _QWORD *a3)
{
  AtomicExecutionCheck *v5; // rsi
  int v6; // r15d
  char v7; // bl
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  _DWORD *Data; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  unsigned __int16 *v15; // rax
  int v16; // r10d
  unsigned __int16 v17; // r9
  _DWORD *v18; // rax
  __int64 v19; // rbx
  struct _CALLPROCDATA ***ClassPtr; // r8
  __int64 v21; // rcx
  struct _CALLPROCDATA **v23; // rcx
  struct _CALLPROCDATA *v24; // rax

  v5 = a1;
  v6 = 0;
  v7 = 0;
  AtomicExecutionCheck::EnforceConsistency(a1);
  Data = (_DWORD *)GetData(v9, v8, v10);
  if ( Data )
  {
    ++*Data;
    v7 = 1;
  }
  if ( ((unsigned __int64)v5 & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    v14 = 2147483646LL;
    v12 = 256LL;
    v15 = gawchAtomScratch;
    v16 = 0;
    v13 = 0LL;
    while ( v12 )
    {
      if ( !v14 )
        goto LABEL_9;
      v17 = *(_WORD *)v5;
      if ( !*(_WORD *)v5 )
        goto LABEL_9;
      v5 = (AtomicExecutionCheck *)((char *)v5 + 2);
      *v15++ = v17;
      --v12;
      --v14;
      ++v13;
    }
    --v15;
    --v13;
    v16 = -2147483643;
LABEL_9:
    *v15 = 0;
    if ( v16 < 0 )
      LOWORD(v5) = 0;
    else
      LOWORD(v5) = UserFindAtom(gawchAtomScratch);
  }
  if ( v7 )
  {
    v18 = (_DWORD *)GetData(v13, v12, v14);
    --*v18;
  }
  v19 = *(_QWORD *)(gptiCurrent + 424LL);
  ClassPtr = (struct _CALLPROCDATA ***)InnerGetClassPtr((unsigned __int16)v5, v19 + 344, a2);
  if ( !ClassPtr )
  {
    ClassPtr = (struct _CALLPROCDATA ***)(v19 + 352);
    if ( !(_WORD)v5 )
      goto LABEL_18;
    v23 = *ClassPtr;
    if ( *ClassPtr )
    {
      while ( 1 )
      {
        v24 = v23[1];
        if ( *(_WORD *)v24 == (_WORD)v5 && (*((_BYTE *)v24 + 6) & 4) == 0 )
          break;
        ClassPtr = (struct _CALLPROCDATA ***)v23;
        v23 = (struct _CALLPROCDATA **)*v23;
        if ( !v23 )
          goto LABEL_30;
      }
    }
    else
    {
LABEL_30:
      ClassPtr = 0LL;
    }
    if ( !ClassPtr )
    {
LABEL_18:
      v21 = 1411LL;
LABEL_19:
      UserSetLastError(v21);
      return 0LL;
    }
    v6 = 1;
  }
  if ( *((_DWORD *)*ClassPtr + 18) )
  {
    v21 = 1412LL;
    goto LABEL_19;
  }
  *a3 = *((_QWORD *)(*ClassPtr)[1] + 2);
  a3[1] = *((_QWORD *)(*ClassPtr)[1] + 3);
  a3[2] = 0LL;
  if ( v6 )
    *(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 12LL) &= ~0x2000u;
  DestroyClass(*(struct tagPROCESSINFO **)(gptiCurrent + 424LL), ClassPtr);
  return 1LL;
}
