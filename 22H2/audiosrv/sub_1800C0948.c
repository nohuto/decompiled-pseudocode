/*
 * XREFs of sub_1800C0948 @ 0x1800C0948
 * Callers:
 *     sub_1800C08F0 @ 0x1800C08F0 (sub_1800C08F0.c)
 *     sub_1800C0CB0 @ 0x1800C0CB0 (sub_1800C0CB0.c)
 * Callees:
 *     sub_18005C878 @ 0x18005C878 (sub_18005C878.c)
 *     sub_18005D19C @ 0x18005D19C (sub_18005D19C.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800BB524 @ 0x1800BB524 (sub_1800BB524.c)
 *     sub_1800C2408 @ 0x1800C2408 (sub_1800C2408.c)
 */

// Hidden C++ exception states: #wind=2
int __fastcall sub_1800C0948(__int64 a1)
{
  float *v2; // rax
  unsigned int i; // esi
  float *v4; // rax
  __int64 v5; // rbx
  float *v6; // rax
  double v7; // xmm2_8
  PROPVARIANT pvar[2]; // [rsp+30h] [rbp-20h] BYREF
  float *v10; // [rsp+40h] [rbp-10h]
  __int64 v11; // [rsp+80h] [rbp+30h] BYREF
  __int64 v12; // [rsp+88h] [rbp+38h] BYREF

  v12 = 0LL;
  v11 = 0LL;
  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_DWORD *)off_18019C348 + 7) & 0x10000) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    sub_1800BB524(*((_QWORD *)off_18019C348 + 2), 0x2Bu, (__int64)&unk_18016DDC0, *(const wchar_t **)(a1 + 64));
  }
  LODWORD(v2) = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(**(_QWORD **)&dwCreationFlags + 40LL))(
                  *(_QWORD *)&dwCreationFlags,
                  *(_QWORD *)(a1 + 64),
                  &v12);
  if ( (int)v2 >= 0 )
  {
    LODWORD(v2) = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v12 + 32LL))(v12, 1LL, &v11);
    if ( (int)v2 >= 0 )
    {
      *(_OWORD *)pvar = 0LL;
      v10 = 0LL;
      LOWORD(pvar[0]) = 65;
      if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
        && (*((_DWORD *)off_18019C348 + 7) & 0x10000) != 0
        && *((_BYTE *)off_18019C348 + 25) >= 4u )
      {
        sub_1800BB524(*((_QWORD *)off_18019C348 + 2), 0x2Cu, (__int64)&unk_18016DDC0, *(const wchar_t **)(a1 + 64));
      }
      LODWORD(pvar[1]) = 4 * *(_DWORD *)(a1 + 124);
      v2 = (float *)CoTaskMemAlloc(LODWORD(pvar[1]));
      v10 = v2;
      if ( v2 )
      {
        for ( i = 0; i < *(_DWORD *)(a1 + 124); ++i )
        {
          v4 = (float *)sub_18005D19C((_QWORD *)(a1 + 88), i);
          v10[i] = sub_18005C878(v4);
          if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
            && (*((_DWORD *)off_18019C348 + 7) & 0x10000) != 0
            && *((_BYTE *)off_18019C348 + 25) >= 4u )
          {
            v5 = *(_QWORD *)(a1 + 64);
            v6 = (float *)sub_18005D19C((_QWORD *)(a1 + 88), i);
            v7 = sub_18005C878(v6);
            sub_1800C2408(*((_QWORD *)off_18019C348 + 2), 45, (unsigned int)&unk_18016DDC0, v5, i, v7, pvar[0]);
          }
        }
        (*(void (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v11 + 48LL))(v11, &unk_180172E68, pvar);
        LODWORD(v2) = PropVariantClear(pvar);
        *(_BYTE *)(a1 + 300) = 0;
      }
    }
  }
  if ( v11 )
    LODWORD(v2) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  if ( v12 )
    LODWORD(v2) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  return (int)v2;
}
