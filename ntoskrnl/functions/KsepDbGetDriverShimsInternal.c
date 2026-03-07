__int64 __fastcall KsepDbGetDriverShimsInternal(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        _QWORD *a6,
        unsigned int *a7)
{
  _QWORD *Paged; // rsi
  unsigned int *v8; // r13
  __int64 v10; // r8
  unsigned int DatabaseMatch; // eax
  int SdbString; // ebx
  __int64 v14; // rdi
  unsigned int FirstTag; // eax
  __int64 v16; // rbx
  unsigned int NextTag; // eax
  __int64 i; // r15
  unsigned int v19; // eax
  unsigned int v20; // eax
  __int64 v21; // r14
  unsigned int v22; // eax
  unsigned int v23; // eax
  unsigned int v24; // eax
  unsigned int v25; // ebp
  __int128 v26; // [rsp+40h] [rbp-58h] BYREF
  _BYTE v27[16]; // [rsp+50h] [rbp-48h] BYREF
  unsigned int v28; // [rsp+B0h] [rbp+18h] BYREF

  Paged = 0LL;
  v8 = a7;
  v10 = *(_QWORD *)(a3 + 8);
  *(_QWORD *)&v26 = 0LL;
  *a6 = 0LL;
  v28 = 0;
  *v8 = 0;
  DatabaseMatch = SdbGetDatabaseMatchEx(a1, 0LL, v10);
  if ( !DatabaseMatch
    || !(unsigned int)SdbTagRefToTagID(a1, DatabaseMatch, &v26, &v28)
    || (v14 = v26, (FirstTag = SdbFindFirstTag(v26, v28, 28710LL)) == 0) )
  {
    SdbString = -1073741275;
LABEL_3:
    KsepDbFreeDriverShims(Paged, *v8);
    return (unsigned int)SdbString;
  }
  LODWORD(v16) = 0;
  do
  {
    FirstTag = SdbFindNextTag(v14, v28, FirstTag);
    v16 = (unsigned int)(v16 + 1);
  }
  while ( FirstTag );
  *v8 = v16;
  Paged = KsepPoolAllocatePaged(80 * v16);
  if ( !Paged )
  {
    SdbString = -1073741801;
    goto LABEL_3;
  }
  NextTag = SdbFindFirstTag(v14, v28, 28710LL);
  for ( i = 0LL; ; i = (unsigned int)(i + 1) )
  {
    v25 = NextTag;
    if ( !NextTag )
      break;
    if ( (unsigned int)i < *v8 )
    {
      v19 = SdbFindFirstTag(v14, NextTag, 36880LL);
      if ( v19 )
      {
        v26 = 0LL;
        *(_OWORD *)&Paged[10 * i] = *(_OWORD *)SdbReadGUIDTag(v27, v14, v19, &v26);
      }
      v20 = SdbFindFirstTag(v14, v25, 24577LL);
      v21 = 10 * i;
      if ( v20 )
      {
        SdbString = KsepDbGetSdbString(v14, v20, &Paged[v21 + 2]);
        if ( SdbString < 0 )
          goto LABEL_3;
      }
      v22 = SdbFindFirstTag(v14, v25, 24579LL);
      if ( v22 )
      {
        SdbString = KsepDbGetSdbString(v14, v22, &Paged[v21 + 4]);
        if ( SdbString < 0 )
          goto LABEL_3;
      }
      v23 = SdbFindFirstTag(v14, v25, 16407LL);
      if ( v23 )
        LODWORD(Paged[v21 + 8]) = SdbReadDWORDTag(v14, v23, 0LL);
      v24 = SdbFindFirstTag(v14, v25, 24584LL);
      if ( v24 )
      {
        SdbString = KsepDbGetSdbString(v14, v24, &Paged[v21 + 6]);
        if ( SdbString < 0 )
          goto LABEL_3;
      }
      HIDWORD(Paged[v21 + 8]) = 1;
    }
    NextTag = SdbFindNextTag(v14, v28, v25);
  }
  SdbString = 0;
  *a6 = Paged;
  return (unsigned int)SdbString;
}
