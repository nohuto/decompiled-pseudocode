/*
 * XREFs of sub_1800C8F7C @ 0x1800C8F7C
 * Callers:
 *     sub_1800CFF9C @ 0x1800CFF9C (sub_1800CFF9C.c)
 * Callees:
 *     sub_18000F708 @ 0x18000F708 (sub_18000F708.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800C64A4 @ 0x1800C64A4 (sub_1800C64A4.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800C8F7C(__int64 a1, __int64 a2, const WCHAR *a3, const WCHAR *a4)
{
  struct _RTL_CRITICAL_SECTION *v7; // rdi
  __int64 *v8; // rdx
  __int64 v9; // rdx
  unsigned int v10; // edi
  __int64 v11; // rbx
  const WCHAR *v12; // rax
  const WCHAR *v13; // rax
  __int64 v15; // [rsp+40h] [rbp+8h] BYREF

  v15 = 0LL;
  v7 = (struct _RTL_CRITICAL_SECTION *)(a1 + 736);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 736));
  v8 = *(__int64 **)(a1 + 776);
  if ( *(_QWORD *)(a1 + 784) - (_QWORD)v8 < 8uLL || (v9 = *v8) == 0 )
  {
    if ( v7 )
      LeaveCriticalSection(v7);
    goto LABEL_13;
  }
  sub_1800C64A4(&v15, v9);
  if ( v7 )
    LeaveCriticalSection(v7);
  v10 = 1;
  v11 = v15;
  if ( a3
    && ((v12 = (const WCHAR *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 64LL))(v15)) == 0LL
     || CompareStringOrdinal(a3, -1, v12, -1, 1) != 2)
    || a4
    && (v13 = (const WCHAR *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 56LL))(v11),
        CompareStringOrdinal(a4, -1, v13, -1, 1) != 2) )
  {
LABEL_13:
    v10 = 0;
  }
  sub_18000F708(&v15);
  return v10;
}
