/*
 * XREFs of ?InitializeWppRecorder@@YAJPEAPEAURECORDER_LOG__@@PEADK@Z @ 0x1C00ABE10
 * Callers:
 *     ?InitializeWppLogging@@YAJPEAU_DRIVER_OBJECT@@@Z @ 0x1C00ABCF0 (-InitializeWppLogging@@YAJPEAU_DRIVER_OBJECT@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00C5400 (__security_check_cookie.c)
 */

__int64 __fastcall InitializeWppRecorder(struct RECORDER_LOG__ **a1, char *a2)
{
  __int64 v3; // r9
  __int64 v4; // rdx
  __int128 *v5; // rcx
  char v6; // al
  __int128 *v7; // rax
  __int64 v9; // [rsp+20h] [rbp-40h] BYREF
  __int64 v10; // [rsp+28h] [rbp-38h]
  __int64 v11; // [rsp+30h] [rbp-30h]
  __int64 v12; // [rsp+38h] [rbp-28h]
  __int128 v13; // [rsp+40h] [rbp-20h] BYREF

  v11 = 0LL;
  v12 = 0x1000000000LL;
  v3 = 16LL;
  v10 = 0xC800000000LL;
  v9 = 48LL;
  v13 = 0LL;
  LOBYTE(v13) = 0;
  if ( a2 )
  {
    v4 = a2 - (char *)&v13;
    v5 = &v13;
    do
    {
      if ( v3 == -2147483630 )
        break;
      v6 = *((_BYTE *)v5 + v4);
      if ( !v6 )
        break;
      *(_BYTE *)v5 = v6;
      v5 = (__int128 *)((char *)v5 + 1);
      --v3;
    }
    while ( v3 );
    v7 = (__int128 *)((char *)v5 - 1);
    if ( v3 )
      v7 = v5;
    *(_BYTE *)v7 = 0;
  }
  LODWORD(v10) = 4096;
  return imp_WppRecorderLogCreate(WPP_GLOBAL_Control, &v9, a1);
}
