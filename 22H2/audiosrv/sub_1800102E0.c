/*
 * XREFs of sub_1800102E0 @ 0x1800102E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800103D4 @ 0x1800103D4 (sub_1800103D4.c)
 *     sub_18006A148 @ 0x18006A148 (sub_18006A148.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800102E0(__int64 a1, char a2)
{
  LPCRITICAL_SECTION v4; // rdi
  __int64 v6; // rcx
  __int64 v7; // rcx

  *(_QWORD *)a1 = off_180146668;
  *(_QWORD *)(a1 + 8) = off_180146618;
  *(_QWORD *)(a1 + 16) = off_1801465F8;
  *(_QWORD *)(a1 + 24) = off_1801465C8;
  *(_QWORD *)(a1 + 32) = off_1801465A8;
  *(_QWORD *)(a1 + 40) = off_180146588;
  v4 = lpCriticalSection;
  EnterCriticalSection(lpCriticalSection);
  if ( LODWORD(v4[1].DebugInfo)-- == 1 )
    sub_1800103D4(v4);
  LeaveCriticalSection(v4);
  v6 = *(_QWORD *)(a1 + 64);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  v7 = *(_QWORD *)(a1 + 56);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  *(_DWORD *)(a1 + 52) = -1073741823;
  if ( (a2 & 1) != 0 )
    sub_18006A148(a1, 80LL);
  return a1;
}
