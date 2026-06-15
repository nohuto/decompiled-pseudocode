/*
 * XREFs of sub_18005C8D0 @ 0x18005C8D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18005C8A4 @ 0x18005C8A4 (sub_18005C8A4.c)
 *     sub_18005CB34 @ 0x18005CB34 (sub_18005CB34.c)
 *     sub_18005CCC8 @ 0x18005CCC8 (sub_18005CCC8.c)
 *     sub_18005D19C @ 0x18005D19C (sub_18005D19C.c)
 *     sub_18005D1C0 @ 0x18005D1C0 (sub_18005D1C0.c)
 *     sub_18005D2D8 @ 0x18005D2D8 (sub_18005D2D8.c)
 *     sub_18005D370 @ 0x18005D370 (sub_18005D370.c)
 *     sub_18005D45C @ 0x18005D45C (sub_18005D45C.c)
 *     sub_18005E8F8 @ 0x18005E8F8 (sub_18005E8F8.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800BD7DC @ 0x1800BD7DC (sub_1800BD7DC.c)
 *     sub_1800BD8A8 @ 0x1800BD8A8 (sub_1800BD8A8.c)
 *     sub_1800C2584 @ 0x1800C2584 (sub_1800C2584.c)
 *     sub_1800C2650 @ 0x1800C2650 (sub_1800C2650.c)
 *     sub_1800C27A0 @ 0x1800C27A0 (sub_1800C27A0.c)
 */

__int64 __fastcall sub_18005C8D0(__int64 a1)
{
  int v2; // edi
  int v3; // eax
  __int64 v4; // rdx
  __int64 v5; // r8
  float v6; // xmm8_4
  float v7; // xmm9_4
  float i; // esi
  __int64 v9; // rdx
  __int64 v10; // r8
  int v11; // r9d
  float v12; // xmm7_4
  float v13; // xmm6_4
  unsigned int j; // esi
  __int64 v15; // rax
  __int64 v17; // [rsp+20h] [rbp-F8h]
  float v18[6]; // [rsp+40h] [rbp-D8h] BYREF
  __int64 v19; // [rsp+58h] [rbp-C0h]
  float v20[32]; // [rsp+70h] [rbp-A8h] BYREF
  float v21; // [rsp+128h] [rbp+10h] BYREF
  float v22; // [rsp+130h] [rbp+18h] BYREF
  float v23; // [rsp+138h] [rbp+20h] BYREF

  v2 = -2147467259;
  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_DWORD *)off_18019C348 + 7) & 0x10000) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    sub_1800BD7DC(*((_QWORD *)off_18019C348 + 2), 28LL, &unk_18016DDC0, a1);
  }
  if ( !*(_QWORD *)(a1 + 256) )
    goto LABEL_25;
  v3 = *(_DWORD *)(a1 + 284);
  *(_DWORD *)(a1 + 124) = v3;
  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_DWORD *)off_18019C348 + 7) & 0x10000) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    sub_1800BD8A8(*((_QWORD *)off_18019C348 + 2), 29LL, &unk_18016DDC0, a1, v3);
  }
  v19 = a1 + 88;
  sub_18005CCC8(a1 + 88, 0LL);
  if ( !*(_QWORD *)(a1 + 256) )
  {
LABEL_25:
    v2 = -2147418113;
LABEL_26:
    sub_18005E8F8("CVolumeHardware::GetLevelData", 1242LL, (unsigned int)v2);
    return (unsigned int)v2;
  }
  v6 = 1000.0;
  v7 = -1000.0;
  for ( i = 0.0; ; ++LODWORD(i) )
  {
    v18[1] = i;
    if ( LODWORD(i) >= *(_DWORD *)(a1 + 124) )
      break;
    sub_18005D370(v20);
    v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, float *, float *, float *))(**(_QWORD **)(a1 + 256) + 32LL))(
           *(_QWORD *)(a1 + 256),
           0LL,
           &v23,
           &v22,
           &v21);
    if ( v2 < 0 )
      goto LABEL_26;
    if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
      && (*((_DWORD *)off_18019C348 + 7) & 0x10000) != 0
      && *((_BYTE *)off_18019C348 + 25) >= 4u )
    {
      *(float *)&v17 = i;
      sub_1800C2650(*((_QWORD *)off_18019C348 + 2), v9, v10, a1, v17, v23, v22, v21);
    }
    v12 = v22;
    v13 = v23;
    sub_18005D45C((unsigned int)v20, v9, v10, v11, LODWORD(v21), 0x3FFC000000000000LL);
    v6 = fminf(v13, v6);
    v18[3] = v6;
    v7 = fmaxf(v12, v7);
    v18[4] = v7;
    v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, float *))(**(_QWORD **)(a1 + 256) + 40LL))(
           *(_QWORD *)(a1 + 256),
           LODWORD(i),
           v18);
    if ( v2 < 0 )
      goto LABEL_26;
    if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
      && (*((_DWORD *)off_18019C348 + 7) & 0x10000) != 0
      && *((_BYTE *)off_18019C348 + 25) >= 4u )
    {
      sub_1800C2584(*((_QWORD *)off_18019C348 + 2), 31LL, &unk_18016DDC0, a1, LODWORD(i), v18[0]);
    }
    sub_18005C8A4(v20, v18[0]);
    v2 = 0;
    sub_18005CB34(a1 + 88, LODWORD(i), v20);
  }
  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_DWORD *)off_18019C348 + 7) & 0x10000) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    sub_1800C27A0(*((_QWORD *)off_18019C348 + 2), v4, v5, a1, v6, v7);
  }
  for ( j = 0; j < *(_DWORD *)(a1 + 124); ++j )
  {
    v15 = sub_18005D19C(a1 + 88, j);
    sub_18005D2D8(v15);
  }
  sub_18005D1C0(a1);
  if ( v2 < 0 )
    goto LABEL_26;
  return (unsigned int)v2;
}
