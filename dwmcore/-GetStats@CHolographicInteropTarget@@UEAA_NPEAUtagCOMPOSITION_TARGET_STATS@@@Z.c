/*
 * XREFs of ?GetStats@CHolographicInteropTarget@@UEAA_NPEAUtagCOMPOSITION_TARGET_STATS@@@Z @ 0x1802A5CE0
 * Callers:
 *     ?GetStats@CHolographicInteropTarget@@$4PPPPPPPM@A@EAA_NPEAUtagCOMPOSITION_TARGET_STATS@@@Z @ 0x18011D630 (-GetStats@CHolographicInteropTarget@@$4PPPPPPPM@A@EAA_NPEAUtagCOMPOSITION_TARGET_STATS@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall CHolographicInteropTarget::GetStats(
        CHolographicInteropTarget *this,
        struct tagCOMPOSITION_TARGET_STATS *a2)
{
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rcx
  LONGLONG v7; // rax
  int v8; // edx
  __int64 v9; // rcx
  LONGLONG v10; // rax
  _DWORD v12[2]; // [rsp+20h] [rbp-48h] BYREF
  __int128 v13; // [rsp+28h] [rbp-40h] BYREF
  __int128 v14; // [rsp+38h] [rbp-30h]
  __int128 v15; // [rsp+48h] [rbp-20h]

  *(_DWORD *)a2 = 0;
  *((_QWORD *)a2 + 1) = *((_QWORD *)this - 12);
  v4 = *((_QWORD *)this - 19);
  v13 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  if ( v4
    && (v5 = *(_QWORD *)(v4 + 40)) != 0
    && (v6 = *(_QWORD *)(v5 + 32)) != 0
    && (*(int (__fastcall **)(__int64, __int128 *, _DWORD *))(*(_QWORD *)v6 + 24LL))(v6, &v13, v12) >= 0 )
  {
    v7 = g_qpcFrequency.QuadPart * v12[1] / v12[0];
    v8 = v14;
    *((_QWORD *)a2 + 2) = v7;
    *((_DWORD *)a2 + 6) = *((_DWORD *)this - 25);
    *((_DWORD *)a2 + 13) = v8;
    *((_DWORD *)a2 + 7) = v8 + 1;
    *((_DWORD *)a2 + 8) = v8 + 1;
    v9 = *((_QWORD *)&v14 + 1);
    v10 = *((_QWORD *)&v14 + 1) + v7;
    *((_DWORD *)a2 + 14) = v8;
    *((_QWORD *)a2 + 5) = v10;
    *((_DWORD *)a2 + 12) = v13;
    *((_QWORD *)a2 + 8) = v9;
  }
  else
  {
    *((_QWORD *)a2 + 2) = 0LL;
    *((_DWORD *)a2 + 6) = 0;
    *((_DWORD *)a2 + 7) = 0;
    *((_DWORD *)a2 + 8) = 0;
    *((_QWORD *)a2 + 5) = 0LL;
    *((_DWORD *)a2 + 12) = 0;
    *((_DWORD *)a2 + 13) = 0;
    *((_DWORD *)a2 + 14) = 0;
    *((_QWORD *)a2 + 8) = 0LL;
  }
  return 1;
}
