char MiLogPinDriverAddressesWorker()
{
  unsigned int v0; // ebx
  __int64 *v1; // rdi
  __int64 v2; // rax
  unsigned int v3; // r15d
  _DWORD *v4; // rbx
  unsigned int i; // r14d
  unsigned int j; // edi
  int v7; // esi
  __int64 v8; // r8
  int v9; // r9d
  __int64 v10; // r10
  __int64 v12; // [rsp+30h] [rbp-69h] BYREF
  unsigned int v13; // [rsp+38h] [rbp-61h] BYREF
  BOOL v14; // [rsp+3Ch] [rbp-5Dh] BYREF
  BOOL v15; // [rsp+40h] [rbp-59h] BYREF
  __int64 v16; // [rsp+48h] [rbp-51h] BYREF
  __int64 v17; // [rsp+50h] [rbp-49h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v18; // [rsp+60h] [rbp-39h] BYREF
  __int64 *v19; // [rsp+80h] [rbp-19h]
  __int64 v20; // [rsp+88h] [rbp-11h]
  unsigned int *v21; // [rsp+90h] [rbp-9h]
  __int64 v22; // [rsp+98h] [rbp-1h]
  BOOL *v23; // [rsp+A0h] [rbp+7h]
  __int64 v24; // [rsp+A8h] [rbp+Fh]
  BOOL *v25; // [rsp+B0h] [rbp+17h]
  __int64 v26; // [rsp+B8h] [rbp+1Fh]
  __int64 *v27; // [rsp+C0h] [rbp+27h]
  __int64 v28; // [rsp+C8h] [rbp+2Fh]

  v0 = 0;
  v1 = MiPinDriverAddressLog;
  do
  {
    v2 = *v1;
    v12 = v2;
    if ( (v2 & 1) != 0 )
    {
      LODWORD(v12) = v2 & 0xFFFFFFFE;
      MiPinDriverAddressLog[v0] = v12;
      RtlInterlockedClearBitRun((__int64)&dword_140C12DA0, v0, 1u);
      LOBYTE(v2) = MiLogPinDriverAddress(&v12);
    }
    ++v0;
    ++v1;
  }
  while ( v0 < 0x800 );
  v3 = 0;
  v4 = &unk_140C12EB4;
  do
  {
    for ( i = 0; i < 2; ++i )
    {
      for ( j = 0; j < 2; ++j )
      {
        v7 = *(v4 - 1);
        if ( v7 != *v4 )
        {
          if ( **(_DWORD **)&qword_140C69568 > 5u )
          {
            LOBYTE(v2) = tlgKeywordOn(*(__int64 *)&qword_140C69568, 0x400000000000LL);
            if ( (_BYTE)v2 )
            {
              v20 = 8LL;
              v13 = v3;
              v16 = (unsigned int)(v7 - v9);
              v22 = 4LL;
              v24 = 4LL;
              v19 = &v16;
              v26 = 4LL;
              v21 = &v13;
              v17 = 0x1000000LL;
              v28 = 8LL;
              v14 = i == 1;
              v23 = &v14;
              v15 = j == 1;
              v25 = &v15;
              v27 = &v17;
              LOBYTE(v2) = tlgWriteAgg(v10, (unsigned __int8 *)&byte_140039E1D, v8, 7u, &v18);
            }
          }
          *v4 = v7;
        }
        v4 += 2;
      }
    }
    ++v3;
  }
  while ( v3 < 2 );
  word_140C12F10 = 0;
  return v2;
}
