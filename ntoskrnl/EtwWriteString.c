/*
 * XREFs of EtwWriteString @ 0x1405FCA30
 * Callers:
 *     <none>
 * Callees:
 *     EtwpLevelKeywordEnabled @ 0x140231970 (EtwpLevelKeywordEnabled.c)
 *     EtwpEventWriteFull @ 0x1402319C0 (EtwpEventWriteFull.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

NTSTATUS __stdcall EtwWriteString(
        REGHANDLE RegHandle,
        UCHAR Level,
        ULONGLONG Keyword,
        LPCGUID ActivityId,
        PCWSTR String)
{
  unsigned int v8; // r9d
  REGHANDLE v9; // rbx
  __int64 v11; // rax
  void *v12; // r14
  __int64 v13; // rax
  char v14; // r10
  unsigned __int8 v15; // r10
  __int64 v16; // r11
  unsigned __int8 v17; // r10
  __int64 v18; // r11
  __int64 v19; // rax
  char v20; // r10
  unsigned __int8 v21; // r10
  __int64 v22; // r11
  __int64 v23; // r10
  unsigned __int64 v24; // [rsp+90h] [rbp-21h] BYREF
  PCWSTR v25; // [rsp+98h] [rbp-19h] BYREF
  int v26; // [rsp+A0h] [rbp-11h]
  int v27; // [rsp+A4h] [rbp-Dh]
  _QWORD v28[2]; // [rsp+A8h] [rbp-9h] BYREF
  __int128 v29; // [rsp+B8h] [rbp+7h] BYREF
  __int128 v30; // [rsp+C8h] [rbp+17h]

  v24 = 0LL;
  v8 = 0;
  v29 = 0LL;
  v30 = 0LL;
  v9 = RegHandle & -(__int64)(RegHandle != 0);
  if ( !v9 )
    return -1073741816;
  v11 = *(_QWORD *)((RegHandle & -(__int64)(RegHandle != 0)) + 0x68);
  v28[0] = 0LL;
  BYTE4(v28[0]) = Level;
  v28[1] = Keyword;
  v12 = (void *)((v11 + 28) & -(__int64)(v11 != 0));
  v25 = String;
  v13 = -1LL;
  do
    ++v13;
  while ( String[v13] );
  v14 = *(_BYTE *)((RegHandle & -(__int64)(RegHandle != 0)) + 0x64);
  v26 = 2 * v13 + 2;
  v27 = 0;
  if ( v14
    && EtwpLevelKeywordEnabled(*(_QWORD *)((RegHandle & -(__int64)(RegHandle != 0)) + 0x20) + 96LL, Level, Keyword) )
  {
    v8 = EtwpEventWriteFull(
           v16,
           v15,
           0,
           v8,
           (__int64)v28,
           4,
           0,
           (GUID *)ActivityId,
           0LL,
           1u,
           (__int64)&v25,
           0LL,
           (__int64)&v29,
           0LL,
           *(_WORD *)(v9 + 98),
           v12,
           &v24);
  }
  if ( *(_BYTE *)(v9 + 101) && EtwpLevelKeywordEnabled(*(_QWORD *)(v9 + 40) + 96LL, Level, Keyword) )
    v8 = EtwpEventWriteFull(
           *(_QWORD *)(v9 + 32),
           v17,
           0,
           0,
           (__int64)v28,
           4,
           0,
           (GUID *)ActivityId,
           0LL,
           1u,
           (__int64)&v25,
           0LL,
           (__int64)&v29,
           v18,
           *(_WORD *)(v9 + 98),
           v12,
           &v24);
  v19 = *(_QWORD *)(v9 + 32);
  if ( *(_QWORD *)(v19 + 400) )
  {
    v20 = *(_BYTE *)(v9 + 102);
    v29 = 0LL;
    v30 = 0LL;
    if ( v20 && EtwpLevelKeywordEnabled(*(_QWORD *)(v19 + 400) + 96LL, Level, Keyword) )
      v8 = EtwpEventWriteFull(
             v22,
             v21,
             0,
             0,
             (__int64)v28,
             4,
             0,
             (GUID *)ActivityId,
             0LL,
             1u,
             (__int64)&v25,
             0LL,
             (__int64)&v29,
             0LL,
             *(_WORD *)(v9 + 98),
             v12,
             &v24);
    if ( *(_BYTE *)(v9 + 103) )
    {
      if ( EtwpLevelKeywordEnabled(*(_QWORD *)(*(_QWORD *)(v9 + 40) + 400LL) + 96LL, Level, Keyword) )
        return EtwpEventWriteFull(
                 *(_QWORD *)(*(_QWORD *)(v9 + 32) + 400LL),
                 *(_BYTE *)(v9 + 101),
                 0,
                 0,
                 (__int64)v28,
                 4,
                 0,
                 (GUID *)ActivityId,
                 0LL,
                 1u,
                 (__int64)&v25,
                 0LL,
                 (__int64)&v29,
                 v23,
                 *(_WORD *)(v9 + 98),
                 v12,
                 &v24);
    }
  }
  return v8;
}
