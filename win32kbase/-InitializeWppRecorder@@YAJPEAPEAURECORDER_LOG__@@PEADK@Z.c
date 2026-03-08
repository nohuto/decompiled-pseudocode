/*
 * XREFs of ?InitializeWppRecorder@@YAJPEAPEAURECORDER_LOG__@@PEADK@Z @ 0x1C00C3740
 * Callers:
 *     ?InitializeWppLogging@@YAJPEAU_DRIVER_OBJECT@@@Z @ 0x1C00C35F8 (-InitializeWppLogging@@YAJPEAU_DRIVER_OBJECT@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 */

__int64 __fastcall InitializeWppRecorder(struct RECORDER_LOG__ **a1, char *a2)
{
  __int64 v3; // rdx
  __int64 v5; // r8
  __int128 *v6; // rcx
  char v7; // al
  __int128 *v8; // rax
  __int64 v10; // [rsp+20h] [rbp-40h] BYREF
  __int64 v11; // [rsp+28h] [rbp-38h]
  __int64 v12; // [rsp+30h] [rbp-30h]
  __int64 v13; // [rsp+38h] [rbp-28h]
  __int128 v14; // [rsp+40h] [rbp-20h] BYREF
  __int64 v15; // [rsp+50h] [rbp-10h]

  v15 = 0LL;
  v12 = 0LL;
  v13 = 0x1000000000LL;
  v3 = 16LL;
  v11 = 0xC800000000LL;
  v10 = 56LL;
  v14 = 0LL;
  LOBYTE(v14) = 0;
  if ( a2 )
  {
    v5 = a2 - (char *)&v14;
    v6 = &v14;
    do
    {
      if ( v3 == -2147483630 )
        break;
      v7 = *((_BYTE *)v6 + v5);
      if ( !v7 )
        break;
      *(_BYTE *)v6 = v7;
      v6 = (__int128 *)((char *)v6 + 1);
      --v3;
    }
    while ( v3 );
    v8 = (__int128 *)((char *)v6 - 1);
    if ( v3 )
      v8 = v6;
    *(_BYTE *)v8 = 0;
  }
  LODWORD(v11) = 4096;
  v15 = 0x200000002LL;
  return imp_WppRecorderLogCreate(WPP_GLOBAL_Control, &v10, a1);
}
