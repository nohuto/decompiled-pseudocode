/*
 * XREFs of VerifierEtwRegisterClassicProvider @ 0x140AE1000
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     VfTargetEtwRegister @ 0x140AC8648 (VfTargetEtwRegister.c)
 */

__int64 __fastcall VerifierEtwRegisterClassicProvider(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 *a5)
{
  int v5; // ebx
  unsigned __int64 retaddr; // [rsp+38h] [rbp+0h]

  v5 = ((__int64 (__fastcall *)(__int64))pXdvEtwRegisterClassicProvider)(a1);
  if ( v5 >= 0 )
    VfTargetEtwRegister(*a5, retaddr);
  return (unsigned int)v5;
}
