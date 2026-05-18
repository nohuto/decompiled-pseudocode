/*
 * XREFs of sub_180085A04 @ 0x180085A04
 * Callers:
 *     sub_1800856DC @ 0x1800856DC (sub_1800856DC.c)
 * Callees:
 *     sub_18001269C @ 0x18001269C (sub_18001269C.c)
 *     unknown_libname_101 @ 0x1800129D4 (unknown_libname_101.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180085A04(__int64 a1, __int64 *a2, _QWORD *a3)
{
  __int64 v6; // rax

  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  sub_18001269C((_QWORD *)a1, (__int64)a2);
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  v6 = a3[1];
  if ( v6 )
    _InterlockedIncrement((volatile signed __int32 *)(v6 + 8));
  *(_QWORD *)(a1 + 32) = *a3;
  *(_QWORD *)(a1 + 40) = a3[1];
  *(_QWORD *)(a1 + 48) = qword_18021AB40;
  *(_DWORD *)(a1 + 56) = dword_18021AB48;
  *(_QWORD *)(a1 + 60) = qword_18021AB40;
  *(_DWORD *)(a1 + 68) = dword_18021AB48;
  *(_BYTE *)(a1 + 72) = 1;
  *(_DWORD *)(a1 + 76) = 0;
  _InterlockedExchange((volatile __int32 *)(a1 + 76), 0);
  *(_BYTE *)(a1 + 80) = 1;
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_QWORD *)(a1 + 96) = 0LL;
  unknown_libname_101(a2);
  return a1;
}
