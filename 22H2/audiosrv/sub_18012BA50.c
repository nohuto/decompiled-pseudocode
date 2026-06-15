/*
 * XREFs of sub_18012BA50 @ 0x18012BA50
 * Callers:
 *     sub_18001BB10 @ 0x18001BB10 (sub_18001BB10.c)
 *     sub_180067640 @ 0x180067640 (sub_180067640.c)
 *     sub_180129E00 @ 0x180129E00 (sub_180129E00.c)
 * Callees:
 *     sub_1800461B8 @ 0x1800461B8 (sub_1800461B8.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_180109778 @ 0x180109778 (sub_180109778.c)
 *     sub_18012A5D4 @ 0x18012A5D4 (sub_18012A5D4.c)
 */

__int64 __fastcall sub_18012BA50(__int64 a1, int a2, _QWORD *a3, __int64 a4)
{
  unsigned int v6; // ebx
  int v7; // eax
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned int v11; // [rsp+40h] [rbp-10h] BYREF
  __int64 v12; // [rsp+48h] [rbp-8h] BYREF
  __int64 v13; // [rsp+78h] [rbp+28h] BYREF
  __int64 v14; // [rsp+80h] [rbp+30h] BYREF
  __int64 (__fastcall ***v15)(_QWORD, _DWORD *, _QWORD *); // [rsp+88h] [rbp+38h] BYREF

  LODWORD(v13) = a2;
  v11 = 0;
  v15 = 0LL;
  if ( a3 )
  {
    *a3 = 0LL;
    sub_1800461B8((__int64 *)&v15);
    v7 = sub_18012A5D4((__int64 *)&v15, a1, &v11);
    v6 = v7;
    if ( v7 >= 0 )
    {
      v6 = (**v15)(v15, dword_180174A90, a3);
    }
    else if ( (unsigned int)dword_18019C480 > 2 )
    {
      LODWORD(v13) = v7;
      LODWORD(v14) = 122;
      v12 = (__int64)"Create_SpatialAudioEncoderProperties";
      sub_180109778(
        (__int64)&dword_18019C480,
        byte_18016C0FA,
        v8,
        v9,
        (const CHAR **)&v12,
        (__int64)&v14,
        (__int64)&v13);
    }
  }
  else
  {
    if ( (unsigned int)dword_18019C480 > 2 )
    {
      LODWORD(v13) = -2147024809;
      v12 = (__int64)"Create_SpatialAudioEncoderProperties";
      LODWORD(v14) = 117;
      sub_180109778(
        (__int64)&dword_18019C480,
        byte_18016C12C,
        0LL,
        a4,
        (const CHAR **)&v12,
        (__int64)&v14,
        (__int64)&v13);
    }
    v6 = -2147024809;
  }
  sub_1800461B8((__int64 *)&v15);
  return v6;
}
