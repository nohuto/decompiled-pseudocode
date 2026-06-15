/*
 * XREFs of sub_1800455C0 @ 0x1800455C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18004568C @ 0x18004568C (sub_18004568C.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_18013CB58 @ 0x18013CB58 (sub_18013CB58.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall sub_1800455C0(__int64 a1)
{
  _QWORD *v2; // rsi
  _QWORD *v3; // rbp
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 944) )
    result = sub_18013CB58(a1, 0LL, 0LL);
  if ( *(_QWORD *)(a1 + 568) )
  {
    sub_18004568C(a1 - 32);
    result = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)qword_18019E640 + 16LL))(
               qword_18019E640,
               *(_QWORD *)(a1 + 568));
    *(_QWORD *)(a1 + 568) = 0LL;
  }
  v2 = *(_QWORD **)(a1 + 744);
  v3 = *(_QWORD **)(a1 + 752);
  while ( v2 != v3 )
  {
    result = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v2 + 32LL))(*v2, a1 - 32);
    ++v2;
  }
  if ( *(_QWORD *)(a1 + 576) )
  {
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)qword_18019E640 + 64LL))(qword_18019E640);
    *(_QWORD *)(a1 + 576) = 0LL;
  }
  return result;
}
