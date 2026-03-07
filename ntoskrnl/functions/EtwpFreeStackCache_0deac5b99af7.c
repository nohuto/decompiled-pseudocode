void __fastcall EtwpFreeStackCache(char *P)
{
  __int64 i; // rsi
  char *v3; // rax
  _QWORD *v4; // rcx
  PSLIST_ENTRY v5; // rbx
  PSLIST_ENTRY v6; // rcx
  _QWORD *v7; // rdx
  _QWORD *v8; // rbx

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)P + 2); i = (unsigned int)(i + 1) )
  {
    while ( 1 )
    {
      v3 = &P[16 * i + 32 + 8 * i];
      v4 = *(_QWORD **)v3;
      if ( *(char **)v3 == v3 )
        break;
      if ( (char *)v4[1] != v3 || (v7 = (_QWORD *)*v4, *(_QWORD **)(*v4 + 8LL) != v4) )
        __fastfail(3u);
      *(_QWORD *)v3 = v7;
      v7[1] = v3;
      do
      {
        v8 = (_QWORD *)v4[2];
        ExFreePoolWithTag(v4, 0);
        v4 = v8;
      }
      while ( v8 );
    }
  }
  v5 = RtlpInterlockedFlushSList((PSLIST_HEADER)P + 1);
  while ( v5 )
  {
    v6 = v5;
    v5 = v5->Next;
    ExFreePoolWithTag(v6, 0);
  }
  ExFreePoolWithTag(P, 0);
}
