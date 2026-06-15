/*
 * XREFs of sub_18005C098 @ 0x18005C098
 * Callers:
 *     sub_18005BC6C @ 0x18005BC6C (sub_18005BC6C.c)
 *     sub_18010DE28 @ 0x18010DE28 (sub_18010DE28.c)
 * Callees:
 *     sub_18005C280 @ 0x18005C280 (sub_18005C280.c)
 *     sub_180068310 @ 0x180068310 (sub_180068310.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_180109778 @ 0x180109778 (sub_180109778.c)
 */

__int64 __fastcall sub_18005C098(__int64 a1, __int64 a2, _QWORD *a3)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v7; // [rsp+40h] [rbp-10h] BYREF
  __int64 v8; // [rsp+48h] [rbp-8h] BYREF
  __int64 v9; // [rsp+70h] [rbp+20h] BYREF
  __int64 v10; // [rsp+78h] [rbp+28h] BYREF
  __int64 v11; // [rsp+80h] [rbp+30h] BYREF
  __int64 v12; // [rsp+88h] [rbp+38h] BYREF

  v10 = a2;
  v9 = a1;
  v7 = 0LL;
  if ( a3 )
  {
    *a3 = 0LL;
    sub_180068310(&v7);
    v4 = sub_18005C280(&v7, &v9, &v10);
    v5 = v4;
    if ( v4 < 0 )
    {
      if ( (unsigned int)dword_18019C480 > 2 )
      {
        LODWORD(v11) = v4;
        LODWORD(v12) = 68;
        v8 = (__int64)"Create_SpatialAudioDeviceStateWriter";
        sub_180109778((int)&dword_18019C480, (__int64)&v8, (__int64)&v12, (__int64)&v11);
      }
    }
    else
    {
      v5 = (**(__int64 (__fastcall ***)(__int64, void *, _QWORD *))(v7 + 568))(v7 + 568, &unk_18015BC98, a3);
    }
  }
  else
  {
    if ( (unsigned int)dword_18019C480 > 2 )
    {
      LODWORD(v11) = -2147024809;
      v8 = (__int64)"Create_SpatialAudioDeviceStateWriter";
      LODWORD(v12) = 63;
      sub_180109778((int)&dword_18019C480, (__int64)&v8, (__int64)&v12, (__int64)&v11);
    }
    v5 = -2147024809;
  }
  sub_180068310(&v7);
  return v5;
}
