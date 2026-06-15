/*
 * XREFs of sub_180118DBC @ 0x180118DBC
 * Callers:
 *     sub_180119DB0 @ 0x180119DB0 (sub_180119DB0.c)
 * Callees:
 *     sub_1800384A4 @ 0x1800384A4 (sub_1800384A4.c)
 *     sub_18004B9B4 @ 0x18004B9B4 (sub_18004B9B4.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x180069C50 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     sub_18006A148 @ 0x18006A148 (sub_18006A148.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_180119D08 @ 0x180119D08 (sub_180119D08.c)
 *     sub_1801257AC @ 0x1801257AC (sub_1801257AC.c)
 */

void __fastcall sub_180118DBC(__int64 a1)
{
  int i; // edi
  __int64 v3; // rcx
  __int64 v4; // rcx
  int j; // edi
  __int64 v6; // rcx
  __int64 v7; // rcx
  _DWORD *v8; // rdi
  _DWORD *v9; // rdi
  __int64 v10; // rcx
  __int64 v11; // rcx
  void *v12; // rcx
  __int64 v13; // rcx

  *(_QWORD *)a1 = &off_180147A38;
  if ( *(_QWORD *)(a1 + 224) )
  {
    for ( i = 0; ; ++i )
    {
      v3 = *(_QWORD *)(a1 + 224);
      if ( i >= *(_DWORD *)(v3 + 8) )
        break;
      v4 = *(_QWORD *)sub_18004B9B4(v3, i);
      if ( v4 )
        sub_180119D08(v4);
    }
  }
  if ( *(_QWORD *)(a1 + 232) )
  {
    for ( j = 0; ; ++j )
    {
      v6 = *(_QWORD *)(a1 + 232);
      if ( j >= *(_DWORD *)(v6 + 8) )
        break;
      v7 = *(_QWORD *)sub_18004B9B4(v6, j);
      if ( v7 )
        sub_180119D08(v7);
    }
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 8688));
  sub_1801257AC(a1 + 1768);
  `eh vector destructor iterator'((char *)(a1 + 1592), 16LL, 4LL, (void (*)(void *))sub_180046F90);
  `eh vector destructor iterator'((char *)(a1 + 1528), 16LL, 4LL, (void (*)(void *))sub_180046F90);
  `eh vector destructor iterator'((char *)(a1 + 1432), 24LL, 4LL, (void (*)(void *))sub_180118D70);
  `eh vector destructor iterator'((char *)(a1 + 1032), 96LL, 4LL, sub_180119030);
  `eh vector destructor iterator'((char *)(a1 + 648), 96LL, 4LL, sub_180119030);
  `eh vector destructor iterator'((char *)(a1 + 264), 96LL, 4LL, sub_180119030);
  v8 = *(_DWORD **)(a1 + 232);
  if ( v8 )
  {
    if ( *(_QWORD *)v8 )
    {
      _o_free(*(_QWORD *)v8);
      *(_QWORD *)v8 = 0LL;
    }
    v8[2] = 0;
    v8[3] = 0;
    sub_18006A148(v8);
  }
  *(_QWORD *)(a1 + 232) = 0LL;
  v9 = *(_DWORD **)(a1 + 224);
  if ( v9 )
  {
    if ( *(_QWORD *)v9 )
    {
      _o_free(*(_QWORD *)v9);
      *(_QWORD *)v9 = 0LL;
    }
    v9[2] = 0;
    v9[3] = 0;
    sub_18006A148(v9);
  }
  *(_QWORD *)(a1 + 224) = 0LL;
  sub_1800384A4((__int64 *)(a1 + 168));
  `eh vector destructor iterator'((char *)(a1 + 88), 16LL, 4LL, (void (*)(void *))sub_180046F90);
  v10 = *(_QWORD *)(a1 + 80);
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  v11 = *(_QWORD *)(a1 + 40);
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  v12 = *(void **)(a1 + 24);
  if ( v12 )
    CoTaskMemFree(v12);
  v13 = *(_QWORD *)(a1 + 16);
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  *(_DWORD *)(a1 + 12) = -1073741823;
}
