/*
 * XREFs of CreateDwmSceneRenderer @ 0x18000F450
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000DC98 @ 0x18000DC98 (sub_18000DC98.c)
 *     sub_18000F160 @ 0x18000F160 (sub_18000F160.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CreateDwmSceneRenderer(_QWORD *a1, __int64 a2, __int64 a3)
{
  unsigned int v5; // ebx
  int v6; // edx
  signed int v7; // eax
  int v8; // edx
  __int64 v9; // rcx
  __int64 (__fastcall ***v11)(_QWORD, __int64, __int64); // [rsp+20h] [rbp-28h] BYREF
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  if ( !a3 )
  {
    v5 = -2147467261;
    v6 = 20;
LABEL_3:
    sub_18000DC98(retaddr, v6, (__int64)"DwmSceneAPI.cpp", v5);
    return v5;
  }
  if ( !*a1 )
  {
    v5 = -2147024809;
    v6 = 21;
    goto LABEL_3;
  }
  if ( qword_180218700 )
  {
    v5 = -2147418113;
    v6 = 24;
    goto LABEL_3;
  }
  v11 = 0LL;
  v7 = sub_18000F160((__int64 *)&v11, (__int64)a1);
  v5 = v7;
  if ( v7 < 0 )
  {
    v8 = 29;
LABEL_12:
    sub_18000DC98(retaddr, v8, (__int64)"DwmSceneAPI.cpp", v7);
    goto LABEL_14;
  }
  v7 = (**v11)(v11, a2, a3);
  v5 = v7;
  if ( v7 < 0 )
  {
    v8 = 31;
    goto LABEL_12;
  }
  v5 = 0;
LABEL_14:
  v9 = (__int64)v11;
  if ( v11 )
  {
    v11 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  return v5;
}
