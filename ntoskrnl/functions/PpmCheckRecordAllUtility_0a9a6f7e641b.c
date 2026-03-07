char PpmCheckRecordAllUtility()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8
  __int64 Prcb; // rax
  __int64 i; // rbx
  __int64 v6; // rax
  int v7; // edi
  _QWORD v8[2]; // [rsp+20h] [rbp-28h] BYREF
  __int16 v9; // [rsp+30h] [rbp-18h]
  int v10; // [rsp+32h] [rbp-16h]
  __int16 v11; // [rsp+36h] [rbp-12h]
  unsigned int v12; // [rsp+50h] [rbp+8h] BYREF

  v10 = 0;
  v11 = 0;
  v9 = 0;
  v12 = 0;
  v8[1] = qword_140C0BD78;
  v8[0] = &PpmCheckRegistered;
  while ( !(unsigned int)KeEnumerateNextProcessor(&v12, v8) )
  {
    Prcb = KeGetPrcb(v12);
    PpmPerfRecordUtility(Prcb + 33968);
  }
  for ( i = PpmPerfDomainHead; (__int64 *)i != &PpmPerfDomainHead; i = *(_QWORD *)i )
  {
    if ( *(_DWORD *)(i + 296) )
    {
      v6 = 0LL;
      LODWORD(v0) = 0;
      v7 = 0;
      do
      {
        v1 = *(_QWORD *)(i + 312) + 144 * v6;
        if ( *(_DWORD *)(v1 + 16) == 1 )
        {
          PpmPerfRecordUtility(*(_QWORD *)v1);
          LODWORD(v0) = v7;
        }
        v6 = (unsigned int)(v0 + 1);
        v0 = (unsigned int)v6;
        v7 = v6;
      }
      while ( (unsigned int)v6 < *(_DWORD *)(i + 296) );
    }
  }
  PpmParkRecordNodeStatistics(v1, v0, v2);
  return 1;
}
