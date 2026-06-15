/*
 * XREFs of sub_1800C00CC @ 0x1800C00CC
 * Callers:
 *     sub_1800BF4C0 @ 0x1800BF4C0 (sub_1800BF4C0.c)
 * Callees:
 *     sub_18000F708 @ 0x18000F708 (sub_18000F708.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_18005C8A4 @ 0x18005C8A4 (sub_18005C8A4.c)
 *     sub_18005CB34 @ 0x18005CB34 (sub_18005CB34.c)
 *     sub_18005D370 @ 0x18005D370 (sub_18005D370.c)
 *     sub_18005D45C @ 0x18005D45C (sub_18005D45C.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800BD7DC @ 0x1800BD7DC (sub_1800BD7DC.c)
 *     sub_1800BD820 @ 0x1800BD820 (sub_1800BD820.c)
 *     sub_1800C2584 @ 0x1800C2584 (sub_1800C2584.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_1800C00CC(__int64 a1)
{
  __int64 v1; // rdi
  int v2; // eax
  unsigned int v3; // ebx
  int v4; // eax
  int v5; // eax
  __int64 *v6; // rdx
  int v7; // r8d
  int v8; // r9d
  int v9; // r9d
  int v10; // edx
  float *v11; // r15
  unsigned int v12; // esi
  float v13; // xmm6_4
  unsigned __int16 i; // cx
  __int64 j; // rbx
  float v16; // xmm7_4
  __int64 v17; // rdx
  float v18; // xmm3_4
  ATL::CAtlException *v20; // rbx
  __int64 v21; // [rsp+0h] [rbp-108h] BYREF
  __int64 v22; // [rsp+30h] [rbp-D8h] BYREF
  unsigned int v23; // [rsp+38h] [rbp-D0h]
  __int64 v24; // [rsp+40h] [rbp-C8h] BYREF
  PROPVARIANT pvar[2]; // [rsp+48h] [rbp-C0h] BYREF
  float *v26; // [rsp+58h] [rbp-B0h]
  float *v27; // [rsp+60h] [rbp-A8h]
  ATL::CAtlException *v28; // [rsp+68h] [rbp-A0h] BYREF
  float v29[26]; // [rsp+70h] [rbp-98h] BYREF
  _UNKNOWN *retaddr; // [rsp+108h] [rbp+0h]
  float v32; // [rsp+118h] [rbp+10h]
  int v33; // [rsp+120h] [rbp+18h]
  int v34; // [rsp+128h] [rbp+20h]

  v1 = a1;
  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_DWORD *)off_18019C348 + 7) & 0x10000) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    sub_1800BD820(*((_QWORD *)off_18019C348 + 2), 0x2Eu, (__int64)&unk_18016DDC0, a1, *(_QWORD *)(a1 + 64));
  }
  v24 = 0LL;
  v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(**(_QWORD **)&dwCreationFlags + 40LL))(
         *(_QWORD *)&dwCreationFlags,
         *(_QWORD *)(v1 + 64),
         &v24);
  v3 = v2;
  if ( v2 < 0 )
  {
    sub_18004BD84((int)retaddr, 1726, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\volumecontrol.cpp", v2);
    goto LABEL_42;
  }
  v22 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v24 + 32LL))(v24, 0LL, &v22);
  v3 = v4;
  if ( v4 < 0 )
  {
    sub_18004BD84((int)retaddr, 1729, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\volumecontrol.cpp", v4);
LABEL_9:
    sub_18000F708(&v22);
    goto LABEL_42;
  }
  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_DWORD *)off_18019C348 + 7) & 0x10000) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    sub_1800BD7DC(*((_QWORD *)off_18019C348 + 2), 0x2Fu, (__int64)&unk_18016DDC0, v1);
  }
  *(_OWORD *)pvar = 0LL;
  v26 = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v22 + 40LL))(v22, &unk_180172E68, pvar);
  v3 = v5;
  if ( v5 < 0 )
  {
    v9 = v5;
    v10 = 1739;
LABEL_16:
    sub_18004BD84((int)retaddr, v10, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\volumecontrol.cpp", v9);
    PropVariantClear(pvar);
    goto LABEL_9;
  }
  if ( LOWORD(pvar[0]) == 65 && LODWORD(pvar[1]) >= 4 )
  {
    v11 = v26;
    v27 = v26;
    v12 = LODWORD(pvar[1]) >> 2;
    v23 = LODWORD(pvar[1]) >> 2;
    v13 = *v26;
    v32 = *v26;
    if ( LODWORD(pvar[1]) >> 2 != *(_DWORD *)(v1 + 124) )
    {
      for ( i = 1; i < v12; ++i )
      {
        v13 = fmaxf(v26[i], v13);
        v32 = v13;
      }
    }
    for ( j = 0LL; ; j = (unsigned int)(j + 1) )
    {
      v33 = j;
      if ( (unsigned int)j >= *(_DWORD *)(v1 + 124) )
        break;
      if ( v12 == *(_DWORD *)(v1 + 124) )
        v16 = v11[j];
      else
        v16 = v13;
      if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
        && (*((_DWORD *)off_18019C348 + 7) & 0x10000) != 0
        && *((_BYTE *)off_18019C348 + 25) >= 4u )
      {
        sub_1800C2584(*((_QWORD *)off_18019C348 + 2), 48LL, &unk_18016DDC0, v1, j, v16);
      }
      sub_18005D370((__int64)v29, (int)v6, v7, v8);
      if ( *(_DWORD *)(v1 + 296) == 4 )
        v18 = 30.0;
      else
        v18 = 0.0;
      sub_18005D45C((__int64)v29, v17, -96.0, v18, 1069547520, 0x3FFC000000000000LL);
      sub_18005C8A4(v29, v16);
      try
      {
        sub_18005CB34((_QWORD *)(v1 + 88), (unsigned int)j, (__int64)v29);
      }
      catch ( ATL::CAtlException *v28 )
      {
        v6 = &v21;
        v20 = v28;
        if ( *(_DWORD *)v28 == -1073741571 )
          o__resetstkoflw();
        v34 = *(_DWORD *)v20;
        v3 = *(_DWORD *)v20;
        if ( v34 < 0 )
        {
          v9 = v34;
          v10 = 1778;
          goto LABEL_16;
        }
        v1 = a1;
        v11 = v27;
        v12 = v23;
        v13 = v32;
        LODWORD(j) = v33;
      }
    }
    PropVariantClear(pvar);
    sub_18000F708(&v22);
    v3 = 0;
  }
  else
  {
    PropVariantClear(pvar);
    sub_18000F708(&v22);
    v3 = -2147023728;
  }
LABEL_42:
  sub_18000F708(&v24);
  return v3;
}
