/*
 * XREFs of HalpHvMapDeviceMsiRange @ 0x140A928BC
 * Callers:
 *     HalpInterruptRemap @ 0x140378D78 (HalpInterruptRemap.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     HalpHvBuildDeviceId @ 0x140A92814 (HalpHvBuildDeviceId.c)
 */

__int64 __fastcall HalpHvMapDeviceMsiRange(
        unsigned int a1,
        unsigned int a2,
        int *a3,
        char a4,
        __int64 a5,
        unsigned int a6)
{
  unsigned int v6; // edi
  bool v7; // zf
  __int64 v9; // rbx
  int v10; // r10d
  int v11; // r8d
  __int64 v12; // rcx
  int v13; // r9d
  __int64 v14; // rdx
  int v15; // eax
  _BYTE v16[2]; // [rsp+30h] [rbp-50h] BYREF
  __int16 v17; // [rsp+32h] [rbp-4Eh]
  __int64 v18; // [rsp+38h] [rbp-48h] BYREF
  __int128 v19; // [rsp+40h] [rbp-40h] BYREF
  __int64 v20; // [rsp+50h] [rbp-30h] BYREF
  unsigned int v21; // [rsp+58h] [rbp-28h]
  int v22; // [rsp+5Ch] [rbp-24h]
  int v23; // [rsp+60h] [rbp-20h]
  __int64 v24; // [rsp+64h] [rbp-1Ch]
  int v25; // [rsp+6Ch] [rbp-14h]

  v6 = 0;
  v7 = *a3 == 3;
  v18 = 0LL;
  v19 = 0LL;
  if ( v7 )
    return 3221225659LL;
  v16[1] = a1;
  v17 = a1 >> 8;
  v16[0] = (8 * a2) | (a2 >> 5) & 7;
  HalpHvBuildDeviceId((__int64)v16, a3, a4, (__int64)&v18);
  v9 = v18;
  v23 = *(_DWORD *)(a5 + 4);
  v22 = 0;
  v24 = 0LL;
  v25 = 0;
  v20 = 0LL;
  v21 = a6;
  v10 = ((__int64 (__fastcall *)(__int64, __int64 *, __int64, __int128 *))qword_140C62148)(v18, &v20, a5 + 24, &v19);
  if ( v10 >= 0 && a6 )
  {
    v11 = HIDWORD(v19);
    v12 = a5 + 52;
    v13 = DWORD2(v19);
    v14 = a5 + 44;
    do
    {
      *(_QWORD *)v14 = 0LL;
      *(_DWORD *)(v14 + 8) = 0;
      v14 += 88LL;
      v15 = v11 + v6;
      *(_DWORD *)(v12 - 4) = v13;
      ++v6;
      *(_DWORD *)v12 = v15;
      *(_QWORD *)(v12 + 12) = v9;
      v12 += 88LL;
    }
    while ( v6 < a6 );
  }
  return (unsigned int)v10;
}
