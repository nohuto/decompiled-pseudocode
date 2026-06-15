/*
 * XREFs of sub_1800BF4C0 @ 0x1800BF4C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18005C8A4 @ 0x18005C8A4 (sub_18005C8A4.c)
 *     sub_18005CB34 @ 0x18005CB34 (sub_18005CB34.c)
 *     sub_18005D1C0 @ 0x18005D1C0 (sub_18005D1C0.c)
 *     sub_18005D370 @ 0x18005D370 (sub_18005D370.c)
 *     sub_18005D45C @ 0x18005D45C (sub_18005D45C.c)
 *     sub_18005E8F8 @ 0x18005E8F8 (sub_18005E8F8.c)
 *     sub_1800BB524 @ 0x1800BB524 (sub_1800BB524.c)
 *     sub_1800BFDE0 @ 0x1800BFDE0 (sub_1800BFDE0.c)
 *     sub_1800C00CC @ 0x1800C00CC (sub_1800C00CC.c)
 */

__int64 __fastcall sub_1800BF4C0(__int64 a1)
{
  __int64 v1; // rbx
  int v3; // esi
  __int64 *v4; // rdx
  int v5; // r8d
  int v6; // r9d
  unsigned int i; // edi
  __int64 v8; // rdx
  float v9; // xmm3_4
  int *v10; // rbx
  __int64 v11; // [rsp+0h] [rbp-A8h] BYREF
  ATL::CAtlException *v12; // [rsp+30h] [rbp-78h] BYREF
  float v13[16]; // [rsp+40h] [rbp-68h] BYREF

  v1 = a1;
  if ( !*(_DWORD *)(a1 + 124) )
    return 0LL;
  v3 = 0;
  if ( (int)sub_1800C00CC() < 0 && (int)sub_1800BFDE0(v1) < 0 )
  {
    if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
      && (*((_DWORD *)off_18019C348 + 7) & 0x10000) != 0
      && *((_BYTE *)off_18019C348 + 25) >= 4u )
    {
      sub_1800BB524(*((_QWORD *)off_18019C348 + 2), 0x35u, (__int64)&unk_18016DDC0, *(const wchar_t **)(v1 + 64));
    }
    for ( i = 0; i < *(_DWORD *)(v1 + 124); ++i )
    {
      sub_18005D370((__int64)v13, (int)v4, v5, v6);
      if ( *(_DWORD *)(v1 + 296) == 4 )
        v9 = 30.0;
      else
        v9 = 0.0;
      sub_18005D45C((__int64)v13, v8, -96.0, v9, 1069547520, 0x3FFC000000000000LL);
      sub_18005C8A4(v13, 0.0);
      v3 = 0;
      try
      {
        sub_18005CB34((_QWORD *)(v1 + 88), i, (__int64)v13);
      }
      catch ( ATL::CAtlException *v12 )
      {
        v4 = &v11;
        v10 = (int *)v12;
        if ( *(_DWORD *)v12 == -1073741571 )
          o__resetstkoflw();
        v3 = *v10;
        if ( *v10 < 0 )
          goto LABEL_19;
        v1 = a1;
      }
    }
  }
  sub_18005D1C0(v1);
  if ( v3 < 0 )
LABEL_19:
    sub_18005E8F8((__int64)"CVolumeSoftware::GetLevelData", 1969, v3);
  return (unsigned int)v3;
}
