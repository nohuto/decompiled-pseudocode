/*
 * XREFs of VerifierEtwRegister @ 0x140AA0E40
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     VfTargetEtwRegister @ 0x140A8AD1C (VfTargetEtwRegister.c)
 */

__int64 __fastcall VerifierEtwRegister(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  int v5; // ebx
  unsigned __int64 retaddr; // [rsp+38h] [rbp+0h]

  v5 = ((__int64 (*)(void))pXdvEtwRegister)();
  if ( v5 >= 0 )
    VfTargetEtwRegister(*a4, retaddr);
  return (unsigned int)v5;
}
