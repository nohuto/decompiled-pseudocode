/*
 * XREFs of sub_18000DE20 @ 0x18000DE20
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18000DE20(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  try
  {
    result = (**(__int64 (***)(void))a2)();
  }
  catch ( ... )
  {
    return (*(unsigned int (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 8LL))(a2, a3);
  }
  return result;
}
