/*
 * XREFs of sub_18005E354 @ 0x18005E354
 * Callers:
 *     sub_18005EAB8 @ 0x18005EAB8 (sub_18005EAB8.c)
 * Callees:
 *     sub_18002BB14 @ 0x18002BB14 (sub_18002BB14.c)
 *     sub_18005E8F8 @ 0x18005E8F8 (sub_18005E8F8.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800BD7DC @ 0x1800BD7DC (sub_1800BD7DC.c)
 *     sub_1800BD820 @ 0x1800BD820 (sub_1800BD820.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_18005E354(__int64 a1, void (__fastcall ***a2)(_QWORD, __int64, __int64 *), __int64 a3)
{
  __int64 v6; // rcx
  int v7; // ebx
  _QWORD *v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rax
  int v11; // eax
  LPVOID pv; // [rsp+30h] [rbp-10h] BYREF
  __int64 *v14; // [rsp+38h] [rbp-8h]
  int v15; // [rsp+78h] [rbp+38h] BYREF
  void (__fastcall ***v16)(_QWORD, __int64, __int64 *); // [rsp+88h] [rbp+48h] BYREF

  v6 = 0LL;
  v16 = 0LL;
  v15 = 0;
  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_DWORD *)off_18019C348 + 7) & 0x10000) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    sub_1800BD7DC(*((_QWORD *)off_18019C348 + 2), 33LL, &unk_18016DDC0, a1);
    v6 = (__int64)v16;
  }
  if ( a2 )
  {
    v14 = 0LL;
    pv = 0LL;
    v7 = ((__int64 (__fastcall *)(_QWORD, void *, __int64))(*a2)[3])(a2, &unk_18015C488, 23LL);
    if ( v7 < 0 )
      goto LABEL_36;
    v7 = ((__int64 (__fastcall *)(void (__fastcall ***)(_QWORD, __int64, __int64 *), LPVOID *))(*a2)[5])(a2, &pv);
    if ( v7 < 0 )
      goto LABEL_36;
    v8 = off_18019C348;
    if ( off_18019C348 != (_UNKNOWN *)&off_18019C348 )
    {
      if ( (*((_DWORD *)off_18019C348 + 7) & 0x10000) != 0 && *((_BYTE *)off_18019C348 + 25) >= 4u )
      {
        sub_1800BD820(*((_QWORD *)off_18019C348 + 2), 34, (unsigned int)&unk_18016DDC0, a1, (__int64)pv);
        v8 = off_18019C348;
      }
      if ( v8 != &off_18019C348 && (*((_DWORD *)v8 + 7) & 0x10000) != 0 && *((_BYTE *)v8 + 25) >= 4u )
        sub_1800BD7DC(v8[2], 35LL, &unk_18016DDC0, a1);
    }
    v9 = (__int64)v16;
    if ( v16 != a2 )
    {
      sub_18002BB14((__int64 *)&v16, a2, (__int64)&unk_18015B040);
      v9 = (__int64)v16;
    }
    if ( v9 )
    {
      v7 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v9 + 88LL))(v9, &v15);
      if ( v7 < 0 )
        goto LABEL_36;
    }
    v10 = *v14;
    v11 = v15
        ? (*(__int64 (__fastcall **)(__int64 *, __int64, void *, void *, __int64))(v10 + 72))(
            v14,
            a3,
            &unk_18016D848,
            &unk_18015C698,
            a1 + 248)
        : (*(unsigned __int64 (__fastcall **)(__int64 *, __int64, void *, __int64))(v10 + 32))(
            v14,
            a3,
            &unk_18015C698,
            a1 + 248);
    v7 = v11;
    if ( v11 < 0 )
      goto LABEL_36;
    if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
      && (*((_DWORD *)off_18019C348 + 7) & 0x10000) != 0
      && *((_BYTE *)off_18019C348 + 25) >= 4u )
    {
      sub_1800BD7DC(*((_QWORD *)off_18019C348 + 2), 36LL, &unk_18016DDC0, a1);
    }
    v7 = (*(__int64 (__fastcall **)(_QWORD, __int64, void *, __int64))(**(_QWORD **)(a1 + 248) + 104LL))(
           *(_QWORD *)(a1 + 248),
           23LL,
           &unk_18015C698,
           a1 + 256);
    if ( v7 < 0 )
LABEL_36:
      sub_18005E8F8("CVolumeHardware::FindVolumeControlForEndpoint", 1319LL, (unsigned int)v7);
    CoTaskMemFree(pv);
    pv = 0LL;
    if ( v14 )
      (*(void (__fastcall **)(__int64 *))(*v14 + 16))(v14);
    v6 = (__int64)v16;
  }
  else
  {
    v7 = -2147467261;
  }
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  return (unsigned int)v7;
}
