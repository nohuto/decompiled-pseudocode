/*
 * XREFs of PpmInfoTraceProfileSettings @ 0x14098FFDC
 * Callers:
 *     PpmEventTraceControlCallback @ 0x140860AA0 (PpmEventTraceControlCallback.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     PpmEventTraceProfileSetting @ 0x140826110 (PpmEventTraceProfileSetting.c)
 */

char PpmInfoTraceProfileSettings()
{
  __int64 *v0; // rdi
  unsigned __int8 i; // bp
  char *v2; // rsi
  __int64 *v3; // rbp
  __int64 *v4; // r12
  __int64 v5; // rbx
  int *v6; // rcx
  __int128 *v7; // rax
  unsigned int v8; // r15d
  __int64 v9; // r14
  unsigned __int8 v11; // [rsp+40h] [rbp-58h]
  __int64 v12; // [rsp+48h] [rbp-50h]
  __int128 v13; // [rsp+50h] [rbp-48h] BYREF

  v0 = PpmDefaultProfile;
  v13 = 0LL;
  for ( i = 0; ; i = v11 + 1 )
  {
    v11 = i;
    v2 = (char *)&unk_140D1E038;
    v3 = v0 + 5;
    v12 = 62LL;
    do
    {
      v4 = v0 + 60;
      v5 = 1LL << v2[12];
      v6 = (int *)(v2 + 8);
      v7 = (__int128 *)*((_QWORD *)v2 - 2);
      v8 = ((v2[13] & 4) != 0) + 1;
      v9 = 0LL;
      v13 = *v7;
      do
      {
        if ( (v5 & v3[v9]) != 0 )
        {
          LOBYTE(v7) = PpmEventTraceProfileSetting(
                         *((_BYTE *)v0 + 8),
                         *((_QWORD *)v2 - 3),
                         (__int64)&v13,
                         v9,
                         (__int64)v3 + *(_QWORD *)v2 + (unsigned int)(v9 * *((_DWORD *)v2 + 2)),
                         *((_DWORD *)v2 + 2),
                         0,
                         1);
          v6 = (int *)(v2 + 8);
        }
        if ( (v5 & v4[v9]) != 0 )
          LOBYTE(v7) = PpmEventTraceProfileSetting(
                         *((_BYTE *)v0 + 8),
                         *((_QWORD *)v2 - 3),
                         (__int64)&v13,
                         v9,
                         (__int64)v4 + *(_QWORD *)v2 + (unsigned int)(v9 * *v6),
                         *v6,
                         1,
                         1);
        ++HIBYTE(v13);
        v6 = (int *)(v2 + 8);
        v9 = (unsigned int)(v9 + 1);
      }
      while ( (unsigned int)v9 < v8 );
      v2 += 40;
      --v12;
    }
    while ( v12 );
    if ( v11 == PpmProfileCount )
      break;
    v0 = (__int64 *)(PpmProfiles + 960LL * v11);
  }
  return (char)v7;
}
