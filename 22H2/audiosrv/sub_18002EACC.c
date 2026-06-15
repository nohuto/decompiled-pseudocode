/*
 * XREFs of sub_18002EACC @ 0x18002EACC
 * Callers:
 *     sub_18002E060 @ 0x18002E060 (sub_18002E060.c)
 *     sub_18002E6A0 @ 0x18002E6A0 (sub_18002E6A0.c)
 *     sub_1800C7000 @ 0x1800C7000 (sub_1800C7000.c)
 *     sub_1800C9970 @ 0x1800C9970 (sub_1800C9970.c)
 * Callees:
 *     sub_180067A50 @ 0x180067A50 (sub_180067A50.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18002EACC(__int64 a1)
{
  struct _RTL_CRITICAL_SECTION *v3; // rsi
  __int64 v4; // rbx

  if ( *(_BYTE *)(a1 + 984) )
  {
    v3 = (struct _RTL_CRITICAL_SECTION *)(a1 + 1000);
    EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 1000));
    if ( *(_QWORD *)(a1 + 1040) )
    {
      v4 = _InterlockedExchange64((volatile __int64 *)(a1 + 1040), 0LL);
      (*(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD, _DWORD))(*(_QWORD *)qword_18019E640 + 24LL))(
        qword_18019E640,
        v4,
        0LL,
        0LL,
        0);
      (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)qword_18019E640 + 32LL))(qword_18019E640, v4, 1LL);
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)qword_18019E640 + 16LL))(qword_18019E640, v4);
      if ( *(_QWORD *)(a1 + 1048) )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_18019E640 + 64LL))(qword_18019E640);
        *(_QWORD *)(a1 + 1048) = 0LL;
      }
      sub_180067A50(a1 + 32);
    }
    if ( v3 )
      LeaveCriticalSection(v3);
  }
  return 0LL;
}
