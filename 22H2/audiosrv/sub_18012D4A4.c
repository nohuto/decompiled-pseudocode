/*
 * XREFs of sub_18012D4A4 @ 0x18012D4A4
 * Callers:
 *     sub_180127590 @ 0x180127590 (sub_180127590.c)
 * Callees:
 *     sub_1800461B8 @ 0x1800461B8 (sub_1800461B8.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_180109778 @ 0x180109778 (sub_180109778.c)
 *     sub_18012C454 @ 0x18012C454 (sub_18012C454.c)
 */

__int64 __fastcall sub_18012D4A4(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  unsigned int v5; // ebx
  int v6; // eax
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v10; // [rsp+40h] [rbp-20h] BYREF
  __int64 (__fastcall ***v11)(_QWORD, _DWORD *, _QWORD *); // [rsp+48h] [rbp-18h] BYREF
  __int64 v12[2]; // [rsp+50h] [rbp-10h] BYREF
  __int64 v13; // [rsp+98h] [rbp+38h] BYREF

  v11 = 0LL;
  if ( a4 )
  {
    *a4 = 0LL;
    v12[0] = 0LL;
    LODWORD(v13) = 1;
    sub_1800461B8((__int64 *)&v11);
    v6 = sub_18012C454((__int64 *)&v11, (int *)&v13, (int)&xmmword_18015B730);
    v5 = v6;
    if ( v6 >= 0 )
    {
      v5 = (**v11)(v11, dword_18015EE08, a4);
    }
    else if ( (unsigned int)dword_18019C480 > 2 )
    {
      LODWORD(v13) = v6;
      LODWORD(v10) = 115;
      v12[0] = (__int64)"Create_SpatialAudioMetadataDictionaryFromData";
      sub_180109778((__int64)&dword_18019C480, byte_18016C0FA, v7, v8, (const CHAR **)v12, (__int64)&v10, (__int64)&v13);
    }
  }
  else
  {
    if ( (unsigned int)dword_18019C480 > 2 )
    {
      LODWORD(v13) = -2147024809;
      v12[0] = (__int64)"Create_SpatialAudioMetadataDictionaryFromData";
      LODWORD(v10) = 110;
      sub_180109778(
        (__int64)&dword_18019C480,
        byte_18016C12C,
        a3,
        0LL,
        (const CHAR **)v12,
        (__int64)&v10,
        (__int64)&v13);
    }
    v5 = -2147024809;
  }
  sub_1800461B8((__int64 *)&v11);
  return v5;
}
