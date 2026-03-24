/*
 * XREFs of LW_BrushInit @ 0x1C00B8480
 * Callers:
 *     xxxRemoteConnect @ 0x1C0117AB0 (xxxRemoteConnect.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 */

__int64 (*LW_BrushInit())(void)
{
  __int64 (*result)(void); // rax

  result = qword_1C0255DA8;
  if ( qword_1C0255DA8 )
    return (__int64 (*)(void))qword_1C0255DA8();
  return result;
}
