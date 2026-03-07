int VfSuspectDriversParseRegistryString()
{
  __int64 *v0; // rcx
  BOOL v1; // ebp
  unsigned __int64 Entry; // rax
  __int64 *v3; // rsi
  __int64 v4; // r8
  unsigned __int64 v5; // rdx
  __int64 *v6; // rbx
  unsigned __int64 v7; // rdx
  int v8; // edx
  _QWORD *v9; // rdi
  _QWORD *v10; // rdi
  _QWORD *v11; // rax
  _OWORD v13[2]; // [rsp+20h] [rbp-28h] BYREF

  v0 = MmVerifyDriverBuffer;
  v13[0] = 0LL;
  v1 = (VfOptionFlags & 1) == 0;
  Entry = ((unsigned __int64)(unsigned int)MmVerifyDriverBufferLength - 2) >> 1;
  v3 = (__int64 *)((char *)MmVerifyDriverBuffer + 2 * Entry);
  if ( MmVerifyDriverBuffer >= v3 )
    return Entry;
  v4 = 0x100002601LL;
  while ( 1 )
  {
    v5 = *(unsigned __int16 *)v0;
    if ( (unsigned int)v5 <= 0x20 && _bittest64(&v4, v5) || (_WORD)v5 == 12288 )
    {
      v6 = v0;
      goto LABEL_29;
    }
    if ( (_DWORD)v5 == 42 && v1 )
    {
      ViVerifyAllDrivers = 1;
      return Entry;
    }
    v6 = (__int64 *)((char *)v0 + 2);
    if ( (_DWORD)v5 == 34 )
      break;
    while ( v6 < v3 )
    {
      v7 = *(unsigned __int16 *)v6;
      if ( (unsigned int)v7 <= 0x20 )
      {
        if ( _bittest64(&v4, v7) )
          break;
      }
      if ( (_WORD)v7 == 12288 )
        break;
      v6 = (__int64 *)((char *)v6 + 2);
    }
LABEL_18:
    v8 = 2 * (((char *)v6 - (char *)v0) >> 1);
    if ( !v8 )
      goto LABEL_29;
    LODWORD(Entry) = v8 + 2;
    LOWORD(v13[0]) = 2 * (((char *)v6 - (char *)v0) >> 1);
    WORD1(v13[0]) = v8 + 2;
    if ( (unsigned __int16)(v8 + 2) < (unsigned __int16)v8 )
      return Entry;
    *((_QWORD *)&v13[0] + 1) = v0;
    if ( v1 )
    {
      Entry = VfSuspectDriversAllocateEntry((const void **)v13);
      v9 = (_QWORD *)Entry;
      if ( Entry )
      {
        VfDriverLock();
        VfSuspectDriversInsert(v9);
LABEL_26:
        LODWORD(Entry) = VfDriverUnlock();
      }
    }
    else
    {
      Entry = VfSuspectExcludedDriversAllocateEntry((unsigned __int16 *)v13, 0x44456656u);
      v10 = (_QWORD *)Entry;
      if ( Entry )
      {
        VfDriverLock();
        v11 = (_QWORD *)qword_140C36AB8;
        if ( *(__int64 **)qword_140C36AB8 != &VfExcludedDriversList )
          __fastfail(3u);
        *v10 = &VfExcludedDriversList;
        v10[1] = v11;
        *v11 = v10;
        qword_140C36AB8 = (__int64)v10;
        goto LABEL_26;
      }
    }
    v4 = 0x100002601LL;
LABEL_29:
    v0 = (__int64 *)((char *)v6 + 2);
    if ( (__int64 *)((char *)v6 + 2) >= v3 )
      return Entry;
  }
  v0 = (__int64 *)((char *)v0 + 2);
  while ( 1 )
  {
    v6 = (__int64 *)((char *)v6 + 2);
    if ( v6 >= v3 )
      return Entry;
    if ( *(_WORD *)v6 == 34 )
      goto LABEL_18;
  }
}
