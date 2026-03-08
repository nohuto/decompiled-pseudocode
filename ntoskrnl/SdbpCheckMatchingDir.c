/*
 * XREFs of SdbpCheckMatchingDir @ 0x140A4C9D0
 * Callers:
 *     <none>
 * Callees:
 *     AslLogCallPrintf @ 0x14079CA00 (AslLogCallPrintf.c)
 *     SdbGetStringTagPtr @ 0x1407A20E8 (SdbGetStringTagPtr.c)
 *     SdbFindFirstTag @ 0x1407A2798 (SdbFindFirstTag.c)
 *     SdbpInitializeSearchDBContext @ 0x140A4E760 (SdbpInitializeSearchDBContext.c)
 *     SdbpResolveMatchingFile @ 0x140A4EB00 (SdbpResolveMatchingFile.c)
 *     AslDoesDirectoryExistNtPath @ 0x140A51428 (AslDoesDirectoryExistNtPath.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SdbpCheckMatchingDir(
        _DWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        const WCHAR *P)
{
  unsigned int v7; // ebx
  int v8; // r12d
  unsigned int FirstTag; // eax
  __int64 v10; // r8
  __int64 StringTagPtr; // rax
  unsigned __int16 *v12; // r15
  __int64 v13; // r14
  const WCHAR *v14; // rsi
  int *v15; // r13
  int v16; // ebp
  WCHAR *v17; // r12
  unsigned __int64 v18; // rax
  __int64 v19; // rcx

  v7 = 0;
  v8 = 0;
  FirstTag = SdbFindFirstTag(a3, a5, 24577LL);
  if ( FirstTag )
  {
    StringTagPtr = SdbGetStringTagPtr(a3, FirstTag, v10);
    v12 = (unsigned __int16 *)StringTagPtr;
    if ( !StringTagPtr )
      goto LABEL_3;
    v13 = -1LL;
    do
      ++v13;
    while ( *(_WORD *)(StringTagPtr + 2 * v13) );
    v14 = P;
    if ( (*(_DWORD *)P & 1) == 0 && !(unsigned int)SdbpInitializeSearchDBContext(P) )
    {
LABEL_3:
      AslLogCallPrintf(1LL);
      goto LABEL_18;
    }
    v15 = (int *)*((_QWORD *)v14 + 9);
    v16 = 0;
    if ( *v15 > 0 )
    {
      do
      {
        P = 0LL;
        if ( !(unsigned int)SdbpResolveMatchingFile(a2, v14, v12, (unsigned int)v13, &v15[12 * v16 + 2], &P) )
          goto LABEL_3;
        v17 = (WCHAR *)P;
        LODWORD(P) = AslDoesDirectoryExistNtPath(P);
        if ( v17 )
          ExFreePoolWithTag(v17, 0x74705041u);
        v8 = (int)P;
        if ( (_DWORD)P )
        {
          if ( v16 > 0 )
            *((_DWORD *)v14 + 20) = 1;
          break;
        }
      }
      while ( ++v16 < *v15 );
    }
    v18 = *v12;
    LOWORD(v18) = v18 - 37;
    if ( (unsigned __int16)v18 <= 0x37u )
    {
      v19 = 0x80000000000201LL;
      if ( _bittest64(&v19, v18) )
        *((_DWORD *)v14 + 20) = 1;
    }
    v7 = 1;
  }
LABEL_18:
  *a1 = v8;
  return v7;
}
