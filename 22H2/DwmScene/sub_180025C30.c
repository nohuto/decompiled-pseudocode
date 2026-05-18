/*
 * XREFs of sub_180025C30 @ 0x180025C30
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800617C4 @ 0x1800617C4 (sub_1800617C4.c)
 *     sub_180061808 @ 0x180061808 (sub_180061808.c)
 *     sub_18006B5F0 @ 0x18006B5F0 (sub_18006B5F0.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180025C30(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 result; // rax

  sub_180061808(a1 + 24);
  sub_1800617C4(a1 + 24);
  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
  if ( (_BYTE)result )
  {
    sub_18006B5F0(a1, a2, a3, a4, a5);
    (*(void (__fastcall **)(_QWORD, __int64, __int64, __int64))(*(_QWORD *)*a2 + 24LL))(*a2, a3, a4, a5);
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 288LL))(a1);
  }
  return result;
}
