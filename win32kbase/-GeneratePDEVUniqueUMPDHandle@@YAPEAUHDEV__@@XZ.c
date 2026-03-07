unsigned __int64 __fastcall GeneratePDEVUniqueUMPDHandle(__int64 a1)
{
  __int64 v1; // rcx
  __int64 v2; // r10
  __int64 v3; // r11
  unsigned __int64 v4; // rcx
  __int64 ***v5; // r9
  unsigned int i; // r8d
  __int64 **j; // rdx
  _QWORD v9[3]; // [rsp+20h] [rbp-18h] BYREF

  v1 = *(_QWORD *)(SGDGetSessionState(a1) + 24);
  v2 = *(_QWORD *)(v1 + 6080);
  v3 = *(_QWORD *)(v1 + 6072);
  do
  {
    do
LABEL_2:
      v4 = __rdtsc();
    while ( !v4 );
    v9[0] = v2;
    v5 = (__int64 ***)v9;
    v9[1] = v3;
    for ( i = 0; i < 2; ++i )
    {
      if ( !v4 )
        goto LABEL_2;
      for ( j = *v5; j; j = (__int64 **)*j )
      {
        if ( ((_DWORD)j[5] & 0x8000) != 0 && j[2] == (__int64 *)v4 )
        {
          v4 = 0LL;
          break;
        }
      }
      ++v5;
    }
  }
  while ( !v4 );
  return v4;
}
