/*
 * XREFs of sub_1800B9410 @ 0x1800B9410
 * Callers:
 *     sub_1800678B0 @ 0x1800678B0 (sub_1800678B0.c)
 * Callees:
 *     sub_18005E8F8 @ 0x18005E8F8 (sub_18005E8F8.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800BB4E0 @ 0x1800BB4E0 (sub_1800BB4E0.c)
 *     sub_1800BB524 @ 0x1800BB524 (sub_1800BB524.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall sub_1800B9410(__int64 a1, unsigned __int8 a2)
{
  unsigned int v2; // r13d
  __int64 v4; // rcx
  __int64 v5; // r9
  __int64 v6; // r12
  unsigned int i; // r14d
  unsigned int v8; // edi
  _QWORD *v9; // rcx
  int v10; // eax
  int v11; // eax
  __int64 v13; // [rsp+30h] [rbp-38h] BYREF
  LPVOID pv; // [rsp+38h] [rbp-30h] BYREF
  __int64 v15; // [rsp+40h] [rbp-28h] BYREF
  PROPVARIANT pvar[2]; // [rsp+48h] [rbp-20h] BYREF
  __int64 v17; // [rsp+58h] [rbp-10h]
  unsigned int v18; // [rsp+B0h] [rbp+48h] BYREF
  unsigned int v19; // [rsp+B8h] [rbp+50h] BYREF
  __int64 v20; // [rsp+C0h] [rbp+58h] BYREF
  __int64 v21; // [rsp+C8h] [rbp+60h] BYREF

  v2 = a2;
  v4 = 0LL;
  v15 = 0LL;
  v5 = *(unsigned int *)(a1 + 96);
  if ( a2 != (_DWORD)v5 )
  {
    *(_DWORD *)(a1 + 96) = a2;
    v6 = qword_18019EE40;
    if ( !qword_18019EE40 )
      goto LABEL_49;
    if ( (*(int (__fastcall **)(_QWORD, _QWORD, __int64, __int64 *))(**(_QWORD **)&dwCreationFlags + 24LL))(
           *(_QWORD *)&dwCreationFlags,
           0LL,
           1LL,
           &v15) >= 0
      && (*(int (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v15 + 24LL))(v15, &v18) >= 0 )
    {
      for ( i = 0; i < v18; ++i )
      {
        v13 = 0LL;
        v21 = 0LL;
        v20 = 0LL;
        v8 = v2;
        if ( (*(int (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v15 + 32LL))(v15, i, &v20) >= 0 )
        {
          pv = 0LL;
          if ( (*(int (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v20 + 40LL))(v20, &pv) < 0
            || (*(int (__fastcall **)(__int64, LPVOID, __int64 *))(*(_QWORD *)v6 + 48LL))(v6, pv, &v13) < 0 )
          {
            CoTaskMemFree(pv);
            pv = 0LL;
          }
          else
          {
            if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
              && (*((_BYTE *)off_18019C348 + 28) & 0x10) != 0
              && *((_BYTE *)off_18019C348 + 25) >= 4u )
            {
              sub_1800BB524(*((_QWORD *)off_18019C348 + 2), 34LL, &unk_18016D4B0, pv);
            }
            CoTaskMemFree(pv);
            if ( (*(int (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v20 + 32LL))(v20, 2LL, &v21) >= 0 )
            {
              *(_OWORD *)pvar = 0LL;
              v17 = 0LL;
              if ( (*(int (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v21 + 40LL))(
                     v21,
                     &unk_180172E00,
                     pvar) < 0
                || LOWORD(pvar[0]) != 19 && LOWORD(pvar[0]) )
              {
                PropVariantClear(pvar);
              }
              else if ( (*(int (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v13 + 152LL))(v13, &v19) >= 0 )
              {
                v9 = off_18019C348;
                if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
                  && (*((_BYTE *)off_18019C348 + 28) & 0x10) != 0
                  && *((_BYTE *)off_18019C348 + 25) >= 4u )
                {
                  sub_1800BB4E0(*((_QWORD *)off_18019C348 + 2), 35LL, &unk_18016D4B0, v19);
                  v9 = off_18019C348;
                }
                if ( (_BYTE)v2 )
                {
                  LOWORD(pvar[0]) = 19;
                  if ( v19 )
                    LODWORD(pvar[1]) |= 4u;
                  else
                    LODWORD(pvar[1]) &= ~4u;
                  v10 = (*(__int64 (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v21 + 48LL))(
                          v21,
                          &unk_180172E00,
                          pvar);
                  if ( v10 < 0 )
                    sub_18005E8F8((__int64)"CAudioSrv::ProcessAwayModeStateChange", 1385, v10);
                }
                else
                {
                  v8 = (LODWORD(pvar[1]) >> 2) & 1;
                  if ( v9 != &off_18019C348 && (*((_BYTE *)v9 + 28) & 0x10) != 0 && *((_BYTE *)v9 + 25) >= 4u )
                    sub_1800BB4E0(v9[2], 36LL, &unk_18016D4B0, (LODWORD(pvar[1]) >> 2) & 1);
                }
                PropVariantClear(pvar);
                if ( v19 != v8 )
                {
                  v11 = (*(__int64 (__fastcall **)(__int64, _QWORD, void *, _QWORD))(*(_QWORD *)v13 + 144LL))(
                          v13,
                          v8,
                          &unk_180172DF0,
                          0LL);
                  if ( v11 < 0 )
                    sub_18005E8F8((__int64)"CAudioSrv::ProcessAwayModeStateChange", 1408, v11);
                }
              }
            }
          }
        }
        if ( v20 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
        if ( v21 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
        if ( v13 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
      }
    }
    goto LABEL_48;
  }
  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_BYTE *)off_18019C348 + 28) & 0x10) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    sub_1800BB4E0(*((_QWORD *)off_18019C348 + 2), 33LL, &unk_18016D4B0, v5);
LABEL_48:
    v4 = v15;
  }
LABEL_49:
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  return 0LL;
}
