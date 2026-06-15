/*
 * XREFs of sub_1800296D4 @ 0x1800296D4
 * Callers:
 *     sub_180029348 @ 0x180029348 (sub_180029348.c)
 *     sub_180029DDC @ 0x180029DDC (sub_180029DDC.c)
 * Callees:
 *     sub_180029880 @ 0x180029880 (sub_180029880.c)
 *     sub_18006A18C @ 0x18006A18C (sub_18006A18C.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800296D4(__int64 *a1, _QWORD *a2, _QWORD *a3)
{
  __int64 v6; // rbx
  __int64 *v7; // rdi
  __int64 v8; // rcx
  LPUNKNOWN v9; // rcx
  int v10; // edi
  LPUNKNOWN ppunkMarshal; // [rsp+60h] [rbp+8h] BYREF
  __int64 v13; // [rsp+78h] [rbp+20h]

  *a1 = 0LL;
  v6 = sub_18006A18C(520LL, &unk_18019F848);
  v13 = v6;
  if ( v6 )
  {
    *(_QWORD *)(v6 + 8) = &off_180146ED0;
    v7 = (__int64 *)(v6 + 32);
    *(_QWORD *)(v6 + 32) = 0LL;
    ppunkMarshal = 0LL;
    if ( CoCreateFreeThreadedMarshaler(0LL, &ppunkMarshal) >= 0 )
    {
      v8 = *v7;
      if ( *v7 )
      {
        *v7 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
      }
      ((void (__fastcall *)(LPUNKNOWN, void *, __int64))ppunkMarshal->lpVtbl->QueryInterface)(
        ppunkMarshal,
        &unk_18015B8E0,
        v6 + 32);
    }
    v9 = ppunkMarshal;
    if ( ppunkMarshal )
    {
      ppunkMarshal = 0LL;
      ((void (__fastcall *)(LPUNKNOWN))v9->lpVtbl->Release)(v9);
    }
    *(_DWORD *)(v6 + 44) = 1;
    *(_QWORD *)v6 = off_180146F28;
    *(_QWORD *)(v6 + 8) = off_180146C40;
    if ( qword_18019E418 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_18019E418 + 8LL))(qword_18019E418);
    *(_QWORD *)v6 = off_180146C88;
    *(_QWORD *)(v6 + 8) = off_180146C40;
    *(_QWORD *)(v6 + 48) = 0LL;
    *(_QWORD *)(v6 + 56) = 0LL;
    InitializeCriticalSectionEx((LPCRITICAL_SECTION)(v6 + 64), 0, 0);
    *(_QWORD *)(v6 + 400) = 0LL;
    *(_QWORD *)(v6 + 408) = 0LL;
    *(_QWORD *)(v6 + 416) = 0LL;
    *(_DWORD *)(v6 + 424) = 0;
    *(_QWORD *)(v6 + 504) = 0LL;
    *(_DWORD *)(v6 + 512) = 0;
    v13 = 0LL;
    v10 = sub_180029880(v6, *a2, *a3);
    if ( v10 >= 0 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
      *a1 = v6;
      v10 = 0;
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v10;
}
