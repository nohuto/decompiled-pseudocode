/*
 * XREFs of VfXdvExcludeParseRegistryString @ 0x140B93D2C
 * Callers:
 *     VfInitBootDriversLoaded @ 0x140B4EE44 (VfInitBootDriversLoaded.c)
 * Callees:
 *     VfDriverLock @ 0x140AC773C (VfDriverLock.c)
 *     VfDriverUnlock @ 0x140AC7860 (VfDriverUnlock.c)
 *     VfSuspectExcludedDriversAllocateEntry @ 0x140AD7C10 (VfSuspectExcludedDriversAllocateEntry.c)
 */

int VfXdvExcludeParseRegistryString()
{
  unsigned __int64 Entry; // rax
  __int64 *v1; // rcx
  __int64 *v2; // rsi
  __int64 v3; // r12
  unsigned __int64 v4; // rdx
  __int64 *v5; // rbx
  unsigned __int64 v6; // rdx
  int v7; // edx
  _QWORD *v8; // rdi
  _QWORD *v9; // rax
  __int128 v11; // [rsp+20h] [rbp-28h] BYREF

  v11 = 0LL;
  LODWORD(Entry) = VfXdvSuppressDriversBufferLength;
  if ( VfXdvSuppressDriversBufferLength == -1 )
  {
    VfXdvSuppressDriversBufferLength = 0;
    return Entry;
  }
  v1 = VfXdvSuppressDriversBuffer;
  Entry = ((unsigned __int64)(unsigned int)VfXdvSuppressDriversBufferLength - 2) >> 1;
  v2 = (__int64 *)((char *)VfXdvSuppressDriversBuffer + 2 * Entry);
  if ( VfXdvSuppressDriversBuffer >= v2 )
    return Entry;
  v3 = 0x100002601LL;
  while ( 1 )
  {
    v4 = *(unsigned __int16 *)v1;
    if ( ((unsigned int)v4 > 0x20 || !_bittest64(&v3, v4)) && (_WORD)v4 != 12288 )
      break;
    v5 = v1;
LABEL_25:
    v1 = (__int64 *)((char *)v5 + 2);
    if ( (__int64 *)((char *)v5 + 2) >= v2 )
      return Entry;
  }
  v5 = (__int64 *)((char *)v1 + 2);
  if ( (_DWORD)v4 != 34 )
  {
    while ( v5 < v2 )
    {
      v6 = *(unsigned __int16 *)v5;
      if ( (unsigned int)v6 <= 0x20 )
      {
        if ( _bittest64(&v3, v6) )
          break;
      }
      if ( (_WORD)v6 == 12288 )
        break;
      v5 = (__int64 *)((char *)v5 + 2);
    }
LABEL_19:
    v7 = 2 * (((char *)v5 - (char *)v1) >> 1);
    if ( v7 )
    {
      LODWORD(Entry) = v7 + 2;
      LOWORD(v11) = 2 * (((char *)v5 - (char *)v1) >> 1);
      WORD1(v11) = v7 + 2;
      if ( (unsigned __int16)(v7 + 2) < (unsigned __int16)v7 )
        return Entry;
      *((_QWORD *)&v11 + 1) = v1;
      Entry = VfSuspectExcludedDriversAllocateEntry((unsigned __int16 *)&v11, 0x45586656u);
      v8 = (_QWORD *)Entry;
      if ( Entry )
      {
        VfDriverLock();
        v9 = (_QWORD *)qword_140C36AA8;
        if ( *(__int64 **)qword_140C36AA8 != &VfXdvExcludedDriversList )
          __fastfail(3u);
        *v8 = &VfXdvExcludedDriversList;
        v8[1] = v9;
        *v9 = v8;
        qword_140C36AA8 = (__int64)v8;
        LODWORD(Entry) = VfDriverUnlock();
      }
    }
    goto LABEL_25;
  }
  v1 = (__int64 *)((char *)v1 + 2);
  while ( 1 )
  {
    v5 = (__int64 *)((char *)v5 + 2);
    if ( v5 >= v2 )
      return Entry;
    if ( *(_WORD *)v5 == 34 )
      goto LABEL_19;
  }
}
