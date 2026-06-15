/*
 * XREFs of sub_1800E6A1C @ 0x1800E6A1C
 * Callers:
 *     sub_1800E4790 @ 0x1800E4790 (sub_1800E4790.c)
 *     sub_1800E4A50 @ 0x1800E4A50 (sub_1800E4A50.c)
 *     sub_1800E5DE0 @ 0x1800E5DE0 (sub_1800E5DE0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_1800E6A1C(__int64 a1, int a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rdi
  int v5; // edx
  int v6; // eax
  __int64 v7; // rcx

  v4 = (struct _RTL_CRITICAL_SECTION *)(a1 + 96);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 96));
  v5 = *(_DWORD *)(a1 + 136);
  v6 = v5 + a2;
  *(_DWORD *)(a1 + 136) = v5 + a2;
  v7 = *(_QWORD *)(a1 + 88);
  if ( v7 && v5 != v6 && (!v5 || !v6) )
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 112LL))(v7, a1);
  if ( v4 )
    LeaveCriticalSection(v4);
}
