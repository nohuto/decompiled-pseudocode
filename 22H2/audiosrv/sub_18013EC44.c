/*
 * XREFs of sub_18013EC44 @ 0x18013EC44
 * Callers:
 *     sub_1801403F0 @ 0x1801403F0 (sub_1801403F0.c)
 *     sub_180140660 @ 0x180140660 (sub_180140660.c)
 *     sub_180140820 @ 0x180140820 (sub_180140820.c)
 *     sub_180140900 @ 0x180140900 (sub_180140900.c)
 *     sub_180140A80 @ 0x180140A80 (sub_180140A80.c)
 * Callees:
 *     sub_180066980 @ 0x180066980 (sub_180066980.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800F3D60 @ 0x1800F3D60 (sub_1800F3D60.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18013EC44(__int64 a1, __int64 a2)
{
  __int64 *v4; // rax
  __int64 **v5; // rcx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v8; // [rsp+28h] [rbp-10h]
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF

  sub_180066980((__int64)&lpCriticalSection, (struct _RTL_CRITICAL_SECTION *)(a1 + 48));
  v9 = a2;
  v4 = sub_1800F3D60(a1 + 88, &v9, *(_QWORD *)(a1 + 96));
  v5 = *(__int64 ***)(a1 + 96);
  if ( v5 )
    *v5 = v4;
  else
    *(_QWORD *)(a1 + 88) = v4;
  *(_QWORD *)(a1 + 96) = v4;
  SetEvent(*(HANDLE *)(a1 + 40));
  if ( v9 )
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 8LL))(v9, 1LL);
  if ( v8 )
    LeaveCriticalSection(lpCriticalSection);
  return 0LL;
}
