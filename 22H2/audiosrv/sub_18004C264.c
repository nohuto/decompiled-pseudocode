/*
 * XREFs of sub_18004C264 @ 0x18004C264
 * Callers:
 *     sub_18001F9C0 @ 0x18001F9C0 (sub_18001F9C0.c)
 *     sub_180048910 @ 0x180048910 (sub_180048910.c)
 *     sub_180072034 @ 0x180072034 (sub_180072034.c)
 *     sub_1800720A4 @ 0x1800720A4 (sub_1800720A4.c)
 *     sub_180117FF4 @ 0x180117FF4 (sub_180117FF4.c)
 *     sub_18011F15C @ 0x18011F15C (sub_18011F15C.c)
 * Callees:
 *     sub_18001FEF0 @ 0x18001FEF0 (sub_18001FEF0.c)
 *     sub_18004C540 @ 0x18004C540 (sub_18004C540.c)
 *     sub_18004C564 @ 0x18004C564 (sub_18004C564.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_180125838 @ 0x180125838 (sub_180125838.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_18004C264(__int64 a1, char a2, unsigned int a3, __int64 a4)
{
  int v8; // edi
  __int128 *v9; // rax
  __int64 v10; // rdx
  __int64 v12; // [rsp+38h] [rbp-71h] BYREF
  __int64 v13; // [rsp+40h] [rbp-69h] BYREF
  __int64 v14; // [rsp+48h] [rbp-61h] BYREF
  PROPVARIANT propvar1[2]; // [rsp+50h] [rbp-59h] BYREF
  __int64 v16; // [rsp+60h] [rbp-49h]
  PROPVARIANT propvar2[2]; // [rsp+68h] [rbp-41h] BYREF
  __int64 v18; // [rsp+78h] [rbp-31h]
  int v19[4]; // [rsp+80h] [rbp-29h] BYREF
  __int128 v20; // [rsp+90h] [rbp-19h]
  __int128 v21; // [rsp+A0h] [rbp-9h]
  __int128 v22; // [rsp+B0h] [rbp+7h]
  __int128 v23; // [rsp+C0h] [rbp+17h] BYREF
  int v24; // [rsp+D0h] [rbp+27h]

  v8 = 0;
  v14 = 0LL;
  v13 = 0LL;
  v12 = 0LL;
  *(_OWORD *)propvar1 = 0LL;
  v16 = 0LL;
  *(_OWORD *)propvar2 = 0LL;
  v18 = 0LL;
  if ( a4 )
  {
    v8 = sub_18001FEF0(a4);
    if ( v8 < 0 )
      goto LABEL_20;
    LOWORD(propvar1[0]) = 65;
    LODWORD(propvar1[1]) = *(unsigned __int16 *)(a4 + 16) + 18;
    v16 = a4;
  }
  else
  {
    sub_180125838(a1 + 1768, *(_QWORD *)(a1 + 24));
  }
  v9 = (__int128 *)&unk_18015C618;
  if ( a3 != 3 )
    v9 = &xmmword_18015B780;
  v23 = *v9;
  v24 = *((_DWORD *)v9 + 4);
  if ( (*(int (__fastcall **)(_QWORD, __int128 *, PROPVARIANT *))(**(_QWORD **)(a1 + 40) + 40LL))(
         *(_QWORD *)(a1 + 40),
         &v23,
         propvar2) >= 0
    && !PropVariantCompareEx(propvar1, propvar2, PVCU_DEFAULT, 0)
    || (v8 = (*(__int64 (__fastcall **)(_QWORD, __int128 *, PROPVARIANT *))(**(_QWORD **)(a1 + 40) + 48LL))(
               *(_QWORD *)(a1 + 40),
               &v23,
               propvar1),
        v8 >= 0) )
  {
    if ( a4 )
    {
      if ( !a2 && a3 != 3 && !*(_DWORD *)(a1 + 32) )
      {
        sub_18004C564(a1, 0LL, a3, a4);
        if ( !*(_BYTE *)(a1 + 8734) )
        {
          v8 = (*(__int64 (__fastcall **)(_QWORD, void *, __int64))(**(_QWORD **)(a1 + 16) + 24LL))(
                 *(_QWORD *)(a1 + 16),
                 &unk_18015C488,
                 1LL);
          if ( v8 >= 0 )
          {
            v19[0] = 64;
            v20 = xmmword_180160A08;
            v21 = xmmword_18015B710;
            v22 = xmmword_1801609F8;
            v8 = (*(__int64 (__fastcall **)(_QWORD, int *, __int64, _QWORD, __int64 *))(MEMORY[0] + 24LL))(
                   0LL,
                   v19,
                   64LL,
                   0LL,
                   &v14);
            if ( v8 >= 0
              && (*(int (__fastcall **)(_QWORD, __int64, void *, __int64 *))(MEMORY[0] + 32LL))(
                   0LL,
                   v14,
                   &unk_18015C5C0,
                   &v13) >= 0
              && (*(int (__fastcall **)(__int64, __int64, void *, __int64 *))(*(_QWORD *)v13 + 104LL))(
                   v13,
                   1LL,
                   &unk_18015C5C0,
                   &v12) >= 0 )
            {
              if ( *(_WORD *)a4 == 0xFFFE )
                v10 = *(unsigned int *)(a4 + 20);
              else
                v10 = (unsigned int)(*(_WORD *)(a4 + 2) != 2) + 3;
              (*(void (__fastcall **)(__int64, __int64, void *))(*(_QWORD *)v12 + 24LL))(v12, v10, &unk_18015C608);
            }
          }
        }
      }
    }
  }
LABEL_20:
  PropVariantClear(propvar2);
  sub_18004C540("CEndpointCharacteristics::UpdateDeviceFormatEPProperty", 6774LL, (unsigned int)v8);
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  return (unsigned int)v8;
}
