/*
 * XREFs of sub_18004B5C0 @ 0x18004B5C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18004B9F0 @ 0x18004B9F0 (sub_18004B9F0.c)
 *     sub_18005B754 @ 0x18005B754 (sub_18005B754.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     sub_18006C4AC @ 0x18006C4AC (sub_18006C4AC.c)
 *     sub_1800721CC @ 0x1800721CC (sub_1800721CC.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall sub_18004B5C0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        int a6,
        _DWORD *a7,
        _BYTE *a8,
        __int64 a9)
{
  char v11; // si
  __int64 v12; // rcx
  __int64 v13; // rdx
  int v14; // ebx
  int v15; // eax
  int v16; // ecx
  __int64 v17; // rcx
  _BYTE v19[64]; // [rsp+50h] [rbp-69h] BYREF
  _DWORD v20[8]; // [rsp+90h] [rbp-29h] BYREF

  v11 = 0;
  *a7 = 0;
  *a8 = 0;
  sub_18004B9F0();
  v13 = 0LL;
  if ( *(_QWORD *)(a1 + 8) || !byte_18019D9F0 )
  {
    v20[0] = 268;
    v20[1] = 1051882;
    v20[2] = -1442840448;
    v20[3] = 1905997824;
    v20[4] = 12;
    v20[5] = 1051882;
    v20[6] = -1442840448;
    v20[7] = 1905997824;
    v14 = 2;
    if ( (unsigned __int8)sub_18006C4AC(v12) && (unsigned int)IsDolbyMatSupportedByAudioDriver() )
      v14 = 1;
    v15 = sub_18005B754(v19, a5);
    v11 = sub_1800721CC(v16, a4, v15, (unsigned int)v20, v14, (__int64)a7, (__int64)a8, a9);
  }
  v17 = *(_QWORD *)(a5 + 56);
  if ( v17 )
  {
    LOBYTE(v13) = v17 != a5;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v17 + 32LL))(v17, v13);
    *(_QWORD *)(a5 + 56) = 0LL;
  }
  return v11;
}
