/*
 * XREFs of LdrpFindLoadedDllByMappingLockHeld @ 0x1800144C0
 * Callers:
 *     LdrpMapDllWithSectionHandle @ 0x180014A90 (LdrpMapDllWithSectionHandle.c)
 *     LdrpFindLoadedDllByMapping @ 0x1800757C4 (LdrpFindLoadedDllByMapping.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x180032AD0 (RtlImageNtHeaderEx.c)
 *     memcmp @ 0x1800906D0 (memcmp.c)
 *     ZwAreMappedFilesTheSame @ 0x18009E690 (ZwAreMappedFilesTheSame.c)
 */

__int64 __fastcall LdrpFindLoadedDllByMappingLockHeld(
        __int64 a1,
        const void *a2,
        unsigned int *a3,
        volatile signed __int32 **a4)
{
  unsigned __int64 v5; // rax
  _QWORD *i; // rbx
  unsigned int v10; // r8d
  unsigned int v11; // ecx
  unsigned __int64 v12; // rcx
  volatile signed __int32 *v14; // rdi
  _QWORD **v15; // rax
  _QWORD *v16; // rcx
  _QWORD *v17; // rcx
  unsigned int v18; // eax
  unsigned int v19; // eax
  __int64 v20; // rax
  void *Buf2; // [rsp+20h] [rbp-28h] BYREF

  v5 = LdrpMappingInfoIndex;
  if ( (qword_18016D4C0 & 1) != 0 && LdrpMappingInfoIndex )
    v5 = (unsigned __int64)&LdrpMappingInfoIndex ^ LdrpMappingInfoIndex;
  i = 0LL;
  if ( v5 )
  {
    v10 = *a3;
    while ( 1 )
    {
      if ( v10 < *(_DWORD *)(v5 - 96) )
        goto LABEL_11;
      if ( v10 <= *(_DWORD *)(v5 - 96) )
      {
        v11 = *(_DWORD *)(v5 - 160);
        if ( a3[1] < v11 )
          goto LABEL_11;
        if ( a3[1] <= v11 )
          break;
      }
      v12 = *(_QWORD *)(v5 + 8);
LABEL_12:
      if ( (qword_18016D4C0 & 1) != 0 && v12 )
        v5 ^= v12;
      else
        v5 = v12;
      if ( !v5 )
        goto LABEL_15;
    }
    i = (_QWORD *)v5;
LABEL_11:
    v12 = *(_QWORD *)v5;
    goto LABEL_12;
  }
LABEL_15:
  while ( i )
  {
    v14 = (volatile signed __int32 *)(i - 28);
    if ( (int)RtlImageNtHeaderEx(3LL, *(i - 22), 0LL, &Buf2) >= 0
      && !memcmp(a2, Buf2, 0x30uLL)
      && (int)ZwAreMappedFilesTheSame(*((_QWORD *)v14 + 6), a1) >= 0 )
    {
      v20 = *((_QWORD *)v14 + 19);
      if ( *(_DWORD *)(v20 + 24) != -1 && (*(_BYTE *)(*(_QWORD *)v20 - 56LL) & 0x20) == 0 )
        _InterlockedIncrement(v14 + 69);
      *a4 = v14;
      return i == 0LL ? 0xC0000135 : 0;
    }
    v15 = (_QWORD **)i[1];
    v16 = i;
    if ( v15 )
    {
      v17 = *v15;
      for ( i = (_QWORD *)i[1]; v17; v17 = (_QWORD *)*v17 )
        i = v17;
    }
    else
    {
      while ( 1 )
      {
        i = (_QWORD *)(i[2] & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !i || (_QWORD *)*i == v16 )
          break;
        v16 = i;
      }
    }
    if ( !i )
      return i == 0LL ? 0xC0000135 : 0;
    v18 = *((_DWORD *)i - 24);
    if ( *a3 >= v18 && *a3 <= v18 )
    {
      v19 = *((_DWORD *)i - 40);
      if ( a3[1] >= v19 && a3[1] <= v19 )
        continue;
    }
    i = 0LL;
  }
  return i == 0LL ? 0xC0000135 : 0;
}
