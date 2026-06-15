/*
 * XREFs of sub_1801001B8 @ 0x1801001B8
 * Callers:
 *     sub_180103730 @ 0x180103730 (sub_180103730.c)
 * Callees:
 *     sub_180074180 @ 0x180074180 (sub_180074180.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800BC578 @ 0x1800BC578 (sub_1800BC578.c)
 *     sub_1800BD7DC @ 0x1800BD7DC (sub_1800BD7DC.c)
 *     sub_1800CB5A0 @ 0x1800CB5A0 (sub_1800CB5A0.c)
 *     sub_1800FEBC0 @ 0x1800FEBC0 (sub_1800FEBC0.c)
 */

void __fastcall sub_1801001B8(__int64 a1)
{
  _UNKNOWN **v2; // rcx
  struct _TP_WORK *v3; // rax
  volatile signed __int32 *v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  volatile signed __int32 *v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx

  *(_QWORD *)a1 = &off_180155760;
  v2 = (_UNKNOWN **)off_18019C348;
  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_DWORD *)off_18019C348 + 7) & 0x800000) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    sub_1800BD7DC(*((_QWORD *)off_18019C348 + 2), 0x19u, (__int64)&unk_1801726D0, a1);
    v2 = (_UNKNOWN **)off_18019C348;
  }
  if ( *(_QWORD *)(a1 + 496) )
  {
    v3 = *(struct _TP_WORK **)(a1 + 496);
    if ( v2 != &off_18019C348 && (*((_DWORD *)v2 + 7) & 0x800000) != 0 && *((_BYTE *)v2 + 25) >= 4u )
    {
      sub_1800CB5A0((__int64)v2[2], 0x1Au, (__int64)&unk_1801726D0);
      v3 = *(struct _TP_WORK **)(a1 + 496);
    }
    CloseThreadpoolWork(v3);
    *(_QWORD *)(a1 + 496) = 0LL;
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 400));
  sub_1800BC578((__int64 *)(a1 + 352));
  sub_1800BC578((__int64 *)(a1 + 304));
  if ( *(_QWORD *)(a1 + 296) )
    sub_180074180((void **)(a1 + 296));
  if ( *(_QWORD *)(a1 + 280) )
    sub_180074180((void **)(a1 + 280));
  if ( *(_QWORD *)(a1 + 240) )
    sub_180074180((void **)(a1 + 240));
  v4 = *(volatile signed __int32 **)(a1 + 232);
  if ( v4 )
    sub_1800FEBC0(v4);
  v5 = *(_QWORD *)(a1 + 224);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  v6 = *(_QWORD *)(a1 + 216);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  CoTaskMemFree(*(LPVOID *)(a1 + 208));
  *(_QWORD *)(a1 + 208) = 0LL;
  v7 = *(_QWORD *)(a1 + 200);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  v8 = *(_QWORD *)(a1 + 192);
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  v9 = *(_QWORD *)(a1 + 184);
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  CoTaskMemFree(*(LPVOID *)(a1 + 176));
  *(_QWORD *)(a1 + 176) = 0LL;
  v10 = *(volatile signed __int32 **)(a1 + 168);
  if ( v10 )
    sub_1800FEBC0(v10);
  if ( *(_QWORD *)(a1 + 120) )
    sub_180074180((void **)(a1 + 120));
  v11 = *(_QWORD *)(a1 + 112);
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  CoTaskMemFree(*(LPVOID *)(a1 + 104));
  *(_QWORD *)(a1 + 104) = 0LL;
  v12 = *(_QWORD *)(a1 + 96);
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  v13 = *(_QWORD *)(a1 + 88);
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  v14 = *(_QWORD *)(a1 + 80);
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  CoTaskMemFree(*(LPVOID *)(a1 + 72));
  *(_QWORD *)(a1 + 72) = 0LL;
  DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 16));
}
