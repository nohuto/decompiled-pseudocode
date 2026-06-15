/*
 * XREFs of sub_18013D630 @ 0x18013D630
 * Callers:
 *     sub_18013D520 @ 0x18013D520 (sub_18013D520.c)
 *     sub_18013DA8C @ 0x18013DA8C (sub_18013DA8C.c)
 *     sub_18013DCA0 @ 0x18013DCA0 (sub_18013DCA0.c)
 * Callees:
 *     sub_1800561E0 @ 0x1800561E0 (sub_1800561E0.c)
 *     sub_180066980 @ 0x180066980 (sub_180066980.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_18013D350 @ 0x18013D350 (sub_18013D350.c)
 *     sub_18013D38C @ 0x18013D38C (sub_18013D38C.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_18013D630(__int64 a1, __int64 a2, _DWORD *a3, _QWORD *a4)
{
  unsigned int v8; // ebx
  int v9; // eax
  int v10; // eax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-10h] BYREF
  char v13; // [rsp+28h] [rbp-8h]
  __int64 v14; // [rsp+60h] [rbp+30h] BYREF
  __int64 v15; // [rsp+68h] [rbp+38h] BYREF

  v8 = 0;
  v14 = 0LL;
  sub_180066980((__int64)&lpCriticalSection, (struct _RTL_CRITICAL_SECTION *)(a1 + 80));
  if ( !a2 )
  {
    v8 = -2147024809;
    goto LABEL_20;
  }
  if ( !a4 )
  {
    v8 = -2147467261;
    goto LABEL_20;
  }
  if ( a3 )
    *a3 = 0;
  if ( (unsigned int)sub_18013D38C(a1, a2, (__int64)&v14, 0LL) != -2147023728 )
    goto LABEL_16;
  v15 = 0LL;
  v9 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64 *))(**(_QWORD **)(a1 + 40) + 40LL))(
         *(_QWORD *)(a1 + 40),
         a2,
         &v15);
  if ( v9 >= 0 )
  {
    v9 = sub_1800561E0(a1, v15, (__int64)&v14);
    if ( v9 >= 0 )
    {
      if ( a3 )
        *a3 = 1;
      if ( v15 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
LABEL_16:
      if ( v14 || (v10 = sub_18013D38C(a1, a2, (__int64)&v14, 0LL), v10 >= 0) )
        sub_18013D350(&v14, a4);
      else
        v8 = v10;
      goto LABEL_20;
    }
  }
  v8 = v9;
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
LABEL_20:
  if ( v13 )
    LeaveCriticalSection(lpCriticalSection);
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  return v8;
}
