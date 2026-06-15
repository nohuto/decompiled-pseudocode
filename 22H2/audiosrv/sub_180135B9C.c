/*
 * XREFs of sub_180135B9C @ 0x180135B9C
 * Callers:
 *     sub_18005F1D4 @ 0x18005F1D4 (sub_18005F1D4.c)
 * Callees:
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180135B9C(__int64 a1)
{
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  __int64 v3; // rcx
  int v4; // eax
  unsigned int v5; // edi
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (struct _RTL_CRITICAL_SECTION *)(a1 + 56);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 56));
  if ( *(_BYTE *)(a1 + 209) )
  {
    v3 = *(_QWORD *)(a1 + 216);
    if ( v3 )
    {
      v4 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 48LL))(v3, a1 + 8);
      v5 = v4;
      if ( v4 < 0 )
      {
        sub_18004BD84((int)retaddr, 2474, (int)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp", v4);
        goto LABEL_7;
      }
      *(_BYTE *)(a1 + 210) = 1;
    }
  }
  v5 = 0;
LABEL_7:
  if ( v2 )
    LeaveCriticalSection(v2);
  return v5;
}
