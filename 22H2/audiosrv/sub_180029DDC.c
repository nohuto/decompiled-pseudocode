/*
 * XREFs of sub_180029DDC @ 0x180029DDC
 * Callers:
 *     sub_180029F54 @ 0x180029F54 (sub_180029F54.c)
 *     sub_18002A340 @ 0x18002A340 (sub_18002A340.c)
 *     sub_180047720 @ 0x180047720 (sub_180047720.c)
 *     sub_18005BC6C @ 0x18005BC6C (sub_18005BC6C.c)
 *     sub_18011D248 @ 0x18011D248 (sub_18011D248.c)
 *     sub_18012CF58 @ 0x18012CF58 (sub_18012CF58.c)
 * Callees:
 *     sub_1800296D4 @ 0x1800296D4 (sub_1800296D4.c)
 *     sub_1800461B8 @ 0x1800461B8 (sub_1800461B8.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_180109778 @ 0x180109778 (sub_180109778.c)
 */

__int64 __fastcall sub_180029DDC(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned int v4; // ebx
  int v5; // eax
  __int64 (__fastcall ***v7)(_QWORD, void *, _QWORD *); // [rsp+40h] [rbp-10h] BYREF
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
    sub_1800461B8(&v7);
    v5 = sub_1800296D4((__int64 *)&v7, &v9, &v10);
    v4 = v5;
    if ( v5 < 0 )
    {
      if ( (unsigned int)dword_18019C480 > 2 )
      {
        LODWORD(v11) = v5;
        LODWORD(v12) = 181;
        v8 = (__int64)"Create_SpatialAudioDevicePropertyReader";
        sub_180109778((int)&dword_18019C480, (__int64)&v8, (__int64)&v12, (__int64)&v11);
      }
    }
    else
    {
      v4 = (**v7)(v7, &unk_18015B8B0, a3);
    }
  }
  else
  {
    if ( (unsigned int)dword_18019C480 > 2 )
    {
      LODWORD(v11) = -2147024809;
      v8 = (__int64)"Create_SpatialAudioDevicePropertyReader";
      LODWORD(v12) = 176;
      sub_180109778((int)&dword_18019C480, (__int64)&v8, (__int64)&v12, (__int64)&v11);
    }
    v4 = -2147024809;
  }
  sub_1800461B8(&v7);
  return v4;
}
