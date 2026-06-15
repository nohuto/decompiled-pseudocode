/*
 * XREFs of sub_18013D280 @ 0x18013D280
 * Callers:
 *     sub_18013D810 @ 0x18013D810 (sub_18013D810.c)
 *     sub_18013D8C0 @ 0x18013D8C0 (sub_18013D8C0.c)
 *     sub_18013D970 @ 0x18013D970 (sub_18013D970.c)
 * Callees:
 *     sub_180066980 @ 0x180066980 (sub_180066980.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800F3D60 @ 0x1800F3D60 (sub_1800F3D60.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18013D280(__int64 a1, __int64 a2)
{
  __int64 *v4; // rax
  __int64 **v5; // rcx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v8; // [rsp+28h] [rbp-10h]
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF

  sub_180066980((__int64)&lpCriticalSection, (struct _RTL_CRITICAL_SECTION *)(a1 + 168));
  v9 = a2;
  v4 = sub_1800F3D60(a1 + 120, &v9, *(_QWORD *)(a1 + 128));
  v5 = *(__int64 ***)(a1 + 128);
  if ( v5 )
    *v5 = v4;
  else
    *(_QWORD *)(a1 + 120) = v4;
  *(_QWORD *)(a1 + 128) = v4;
  SetEvent(*(HANDLE *)(a1 + 208));
  if ( v9 )
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 8LL))(v9, 1LL);
  if ( v8 )
    LeaveCriticalSection(lpCriticalSection);
  return 0LL;
}
