/*
 * XREFs of sub_1801372AC @ 0x1801372AC
 * Callers:
 *     sub_18005EF08 @ 0x18005EF08 (sub_18005EF08.c)
 *     sub_18005F1D4 @ 0x18005F1D4 (sub_18005F1D4.c)
 *     sub_180137110 @ 0x180137110 (sub_180137110.c)
 * Callees:
 *     sub_1800087F4 @ 0x1800087F4 (sub_1800087F4.c)
 *     sub_18006D26C @ 0x18006D26C (sub_18006D26C.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1801349C4 @ 0x1801349C4 (sub_1801349C4.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_1801372AC(char *pv)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  __int64 v3; // rcx
  int v4; // eax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (struct _RTL_CRITICAL_SECTION *)(pv + 56);
  EnterCriticalSection((LPCRITICAL_SECTION)(pv + 56));
  v3 = *((_QWORD *)pv + 27);
  if ( v3 && pv[210] )
  {
    v4 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v3 + 56LL))(v3, pv + 8);
    if ( v4 < 0 )
      sub_18006D26C((int)retaddr, 2488, (int)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp", v4);
    pv[210] = 0;
  }
  if ( v2 )
    LeaveCriticalSection(v2);
  sub_1801349C4((__int64)pv);
  EnterCriticalSection(v2);
  if ( !pv[552] )
    sub_1800087F4(pv);
  if ( v2 )
    LeaveCriticalSection(v2);
}
