/*
 * XREFs of sub_18004F040 @ 0x18004F040
 * Callers:
 *     sub_18004EF00 @ 0x18004EF00 (sub_18004EF00.c)
 *     sub_1800E349C @ 0x1800E349C (sub_1800E349C.c)
 *     sub_1800E3A30 @ 0x1800E3A30 (sub_1800E3A30.c)
 * Callees:
 *     sub_1800472E0 @ 0x1800472E0 (sub_1800472E0.c)
 *     sub_18006A148 @ 0x18006A148 (sub_18006A148.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800BB290 @ 0x1800BB290 (sub_1800BB290.c)
 *     sub_1800E2D60 @ 0x1800E2D60 (sub_1800E2D60.c)
 */

void __fastcall sub_18004F040(__int64 a1)
{
  __int64 v2; // rcx
  __int64 *v3; // rdi
  __int64 *v4; // rsi
  __int64 *v5; // r14
  unsigned __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  struct _RTL_CRITICAL_SECTION *v10; // rdi
  PRTL_CRITICAL_SECTION_DEBUG DebugInfo; // rcx
  __int64 CriticalSection; // rsi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rcx
  unsigned __int64 v16; // [rsp+50h] [rbp+8h] BYREF
  __int64 *v17; // [rsp+58h] [rbp+10h] BYREF

  *(_QWORD *)a1 = &off_180148300;
  v2 = *(_QWORD *)(a1 + 88);
  if ( v2 )
  {
    v13 = *(_QWORD *)(a1 + 72);
    if ( v13 )
      (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD))(*(_QWORD *)v2 + 72LL))(
        v2,
        2LL,
        0xFFFFFFFFLL,
        *(unsigned int *)(v13 + 56));
  }
  v3 = *(__int64 **)(a1 + 216);
  if ( v3 )
  {
    v4 = *(__int64 **)(a1 + 224);
    v5 = *(__int64 **)(a1 + 216);
    if ( v3 != v4 )
    {
      do
      {
        v14 = *v5;
        if ( *v5 )
        {
          *v5 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
        }
        ++v5;
      }
      while ( v5 != v4 );
    }
    v6 = (*(_QWORD *)(a1 + 232) - (_QWORD)v3) & 0xFFFFFFFFFFFFFFF8uLL;
    v16 = v6;
    v17 = v3;
    if ( v6 >= 0x1000 )
    {
      sub_1800BB290(&v17, &v16);
      v6 = v16;
      v3 = v17;
    }
    sub_18006A148(v3, v6);
    *(_QWORD *)(a1 + 216) = 0LL;
    *(_QWORD *)(a1 + 224) = 0LL;
    *(_QWORD *)(a1 + 232) = 0LL;
  }
  v7 = *(_QWORD *)(a1 + 192);
  if ( v7 )
  {
    sub_1800472E0(v7, (*(_QWORD *)(a1 + 208) - v7) & 0xFFFFFFFFFFFFFFF8uLL);
    *(_QWORD *)(a1 + 192) = 0LL;
    *(_QWORD *)(a1 + 200) = 0LL;
    *(_QWORD *)(a1 + 208) = 0LL;
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 152));
  DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 96));
  v8 = *(_QWORD *)(a1 + 88);
  if ( v8 )
  {
    *(_QWORD *)(a1 + 88) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  v9 = *(_QWORD *)(a1 + 80);
  if ( v9 )
  {
    *(_QWORD *)(a1 + 80) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  v10 = *(struct _RTL_CRITICAL_SECTION **)(a1 + 72);
  if ( v10 )
  {
    DebugInfo = v10[1].DebugInfo;
    CriticalSection = (__int64)DebugInfo->CriticalSection;
    if ( !*(_BYTE *)(CriticalSection + 25) )
    {
      do
      {
        sub_1800E2D60(&v10[1], &v10[1], *(_QWORD *)(CriticalSection + 16));
        v15 = CriticalSection;
        CriticalSection = *(_QWORD *)CriticalSection;
        sub_1800472E0(v15, 0x28uLL);
      }
      while ( !*(_BYTE *)(CriticalSection + 25) );
      DebugInfo = v10[1].DebugInfo;
    }
    sub_18006A148(DebugInfo, 40LL);
    DeleteCriticalSection(v10);
    sub_18006A148(v10, 64LL);
  }
  *(_QWORD *)(a1 + 72) = 0LL;
  sub_18006A148(*(_QWORD *)(a1 + 64), 16LL);
  *(_QWORD *)(a1 + 64) = 0LL;
  CoTaskMemFree(*(LPVOID *)(a1 + 48));
  *(_QWORD *)(a1 + 48) = 0LL;
  CoTaskMemFree(*(LPVOID *)(a1 + 40));
  *(_QWORD *)(a1 + 40) = 0LL;
}
