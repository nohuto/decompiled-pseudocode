/*
 * XREFs of rimHidP_FreeCollectionDescription @ 0x1C01B1EE4
 * Callers:
 *     RIMIDECreateHIDDesc @ 0x1C01C16CC (RIMIDECreateHIDDesc.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall rimHidP_FreeCollectionDescription(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax

  result = SGDGetUserSessionState(a1, a2, a3, a4);
  if ( *(_QWORD *)(result + 168) )
  {
    v10 = SGDGetUserSessionState(v7, v6, v8, v9);
    return (*(__int64 (__fastcall **)(__int64))(v10 + 168))(a1);
  }
  return result;
}
