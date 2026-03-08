/*
 * XREFs of RtlpCreateUserThreadEx @ 0x1407F0B7C
 * Callers:
 *     ExpWorkerFactoryCreateThread @ 0x1403679CC (ExpWorkerFactoryCreateThread.c)
 *     RtlCreateUserThread @ 0x1409B5DE0 (RtlCreateUserThread.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     ZwCreateThreadEx @ 0x140413BF0 (ZwCreateThreadEx.c)
 */

__int64 __fastcall RtlpCreateUserThreadEx(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        HANDLE *a10,
        _OWORD *a11)
{
  __int64 result; // rax
  HANDLE Handle; // [rsp+60h] [rbp-A0h] BYREF
  int v13; // [rsp+68h] [rbp-98h]
  int v14; // [rsp+6Ch] [rbp-94h]
  __int64 v15; // [rsp+70h] [rbp-90h]
  __int64 v16; // [rsp+78h] [rbp-88h]
  int v17; // [rsp+80h] [rbp-80h]
  int v18; // [rsp+84h] [rbp-7Ch]
  __int64 v19; // [rsp+88h] [rbp-78h]
  __int64 v20; // [rsp+90h] [rbp-70h]
  __int128 v21; // [rsp+98h] [rbp-68h] BYREF
  __int64 v22; // [rsp+B0h] [rbp-50h]
  __int64 v23; // [rsp+B8h] [rbp-48h]
  __int64 v24; // [rsp+C0h] [rbp-40h]
  __int128 *v25; // [rsp+C8h] [rbp-38h]
  __int64 v26; // [rsp+D0h] [rbp-30h]
  __int64 v27; // [rsp+D8h] [rbp-28h]
  __int128 v28; // [rsp+E0h] [rbp-20h]
  __int64 v29; // [rsp+F0h] [rbp-10h]

  v27 = 0LL;
  v29 = 0LL;
  v18 = 0;
  Handle = 0LL;
  v14 = 0;
  v28 = 0LL;
  v21 = 0LL;
  if ( (a3 & 0xFFFFFF88) != 0 )
    return 3221225485LL;
  v13 = 48;
  v17 = 512;
  v19 = a2;
  v23 = 65539LL;
  v24 = 16LL;
  v22 = 40LL;
  v15 = 0LL;
  v16 = 0LL;
  v20 = 0LL;
  v26 = 0LL;
  v25 = &v21;
  result = ZwCreateThreadEx((__int64)&Handle, 0x1FFFFFLL);
  if ( (int)result >= 0 )
  {
    if ( a10 )
      *a10 = Handle;
    else
      ZwClose(Handle);
    if ( a11 )
      *a11 = v21;
    return 0LL;
  }
  return result;
}
