/*
 * XREFs of sub_18005C014 @ 0x18005C014
 * Callers:
 *     sub_18005BF88 @ 0x18005BF88 (sub_18005BF88.c)
 *     sub_18005C61C @ 0x18005C61C (sub_18005C61C.c)
 * Callees:
 *     sub_1800461B8 @ 0x1800461B8 (sub_1800461B8.c)
 *     sub_18005C490 @ 0x18005C490 (sub_18005C490.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_180109778 @ 0x180109778 (sub_180109778.c)
 */

__int64 __fastcall sub_18005C014(__int64 a1, __int64 a2, _QWORD *a3)
{
  int v4; // eax
  unsigned int v5; // ebx
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
    sub_1800461B8((__int64 *)&v7);
    v4 = sub_18005C490(&v7, &v9, &v10);
    v5 = v4;
    if ( v4 < 0 )
    {
      if ( (unsigned int)dword_18019C480 > 2 )
      {
        LODWORD(v11) = v4;
        LODWORD(v12) = 85;
        v8 = (__int64)"Create_SpatialAudioDevicePropertyWriter";
        sub_180109778((int)&dword_18019C480, (__int64)&v8, (__int64)&v12, (__int64)&v11);
      }
    }
    else
    {
      v5 = (**v7)(v7, &unk_18015BC88, a3);
    }
  }
  else
  {
    if ( (unsigned int)dword_18019C480 > 2 )
    {
      LODWORD(v11) = -2147024809;
      v8 = (__int64)"Create_SpatialAudioDevicePropertyWriter";
      LODWORD(v12) = 80;
      sub_180109778((int)&dword_18019C480, (__int64)&v8, (__int64)&v12, (__int64)&v11);
    }
    v5 = -2147024809;
  }
  sub_1800461B8((__int64 *)&v7);
  return v5;
}
