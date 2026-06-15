/*
 * XREFs of sub_1800BBCE4 @ 0x1800BBCE4
 * Callers:
 *     sub_1800BC7E0 @ 0x1800BC7E0 (sub_1800BC7E0.c)
 * Callees:
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 */

__int64 __fastcall sub_1800BBCE4(__int64 a1, __int64 a2)
{
  int v4; // ebx
  __int64 v6; // [rsp+50h] [rbp-59h] BYREF
  __int64 v7; // [rsp+58h] [rbp-51h] BYREF
  int v8; // [rsp+60h] [rbp-49h]
  GUID HidGuid; // [rsp+68h] [rbp-41h] BYREF
  __int64 v10; // [rsp+80h] [rbp-29h] BYREF
  __int128 v11; // [rsp+88h] [rbp-21h]
  int v12; // [rsp+98h] [rbp-11h]
  int v13; // [rsp+9Ch] [rbp-Dh]
  __int64 v14; // [rsp+A0h] [rbp-9h]
  int v15; // [rsp+A8h] [rbp-1h]
  int v16; // [rsp+ACh] [rbp+3h]
  __int64 v17; // [rsp+B0h] [rbp+7h]
  __int64 v18; // [rsp+B8h] [rbp+Fh]
  __int128 v19; // [rsp+C0h] [rbp+17h]
  int v20; // [rsp+D0h] [rbp+27h]
  int v21; // [rsp+D4h] [rbp+2Bh]
  __int64 v22; // [rsp+D8h] [rbp+2Fh]
  int v23; // [rsp+E0h] [rbp+37h]
  int v24; // [rsp+E4h] [rbp+3Bh]
  GUID *p_HidGuid; // [rsp+E8h] [rbp+3Fh]

  v6 = 0LL;
  HidD_GetHidGuid(&HidGuid);
  v8 = 0;
  v13 = 0;
  v14 = 0LL;
  v21 = 0;
  v22 = 0LL;
  v12 = 2;
  v20 = 4;
  p_HidGuid = &HidGuid;
  v15 = 13;
  v23 = 13;
  v11 = xmmword_18016D4D8;
  v16 = 16;
  v24 = 16;
  v7 = a2;
  v10 = 2LL;
  v18 = 2LL;
  v17 = a1;
  v19 = xmmword_18016D4C0;
  v4 = DevCreateObjectQuery(1LL, 0LL, 0LL, 0LL, 2, &v10, sub_1800BBA90, &v7, &v6);
  if ( v4 >= 0 )
  {
    while ( !v8 )
      Sleep(0x64u);
    v4 = 0;
  }
  if ( v6 )
    DevCloseObjectQuery();
  return (unsigned int)v4;
}
