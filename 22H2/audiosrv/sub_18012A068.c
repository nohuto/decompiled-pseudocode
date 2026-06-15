/*
 * XREFs of sub_18012A068 @ 0x18012A068
 * Callers:
 *     sub_180067640 @ 0x180067640 (sub_180067640.c)
 *     sub_180129E00 @ 0x180129E00 (sub_180129E00.c)
 * Callees:
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_180109778 @ 0x180109778 (sub_180109778.c)
 */

__int64 __fastcall sub_18012A068(__int64 a1, __int64 a2)
{
  int v4; // eax
  __int64 v5; // r8
  __int64 v6; // r9
  unsigned int v7; // ebx
  int v8; // eax
  __int64 v9; // r8
  __int64 v10; // r9
  int v12; // [rsp+40h] [rbp-79h] BYREF
  _DWORD v13[3]; // [rsp+44h] [rbp-75h] BYREF
  _BYTE v14[160]; // [rsp+50h] [rbp-69h] BYREF

  v4 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 88) + 40LL))(*(_QWORD *)(a1 + 88));
  v7 = v4;
  if ( v4 >= 0 )
  {
    v8 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)a2 + 24LL))(a2, v14);
    v7 = v8;
    if ( v8 >= 0 )
    {
      v8 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**(_QWORD **)(a1 + 88) + 56LL))(*(_QWORD *)(a1 + 88), v14);
      v7 = v8;
      if ( v8 >= 0 || (unsigned int)dword_18019C480 <= 2 )
        return v7;
      v12 = 469;
    }
    else
    {
      if ( (unsigned int)dword_18019C480 <= 2 )
        return v7;
      v12 = 466;
    }
    v13[0] = v8;
    *(_QWORD *)&v13[1] = "SpatialAudioConfigureDevice::ConfigureMultiChannel";
    sub_180109778(
      (__int64)&dword_18019C480,
      byte_18016C0FA,
      v9,
      v10,
      (const CHAR **)&v13[1],
      (__int64)&v12,
      (__int64)v13);
    return v7;
  }
  if ( (unsigned int)dword_18019C480 > 2 )
  {
    v12 = v4;
    v13[0] = 463;
    *(_QWORD *)&v13[1] = "SpatialAudioConfigureDevice::ConfigureMultiChannel";
    sub_180109778(
      (__int64)&dword_18019C480,
      byte_18016C0FA,
      v5,
      v6,
      (const CHAR **)&v13[1],
      (__int64)v13,
      (__int64)&v12);
  }
  return v7;
}
