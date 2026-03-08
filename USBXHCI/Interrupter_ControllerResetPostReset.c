/*
 * XREFs of Interrupter_ControllerResetPostReset @ 0x1C003DC84
 * Callers:
 *     Controller_InternalReset @ 0x1C0033D04 (Controller_InternalReset.c)
 * Callees:
 *     Controller_IsControllerAccessible @ 0x1C000A8E4 (Controller_IsControllerAccessible.c)
 *     Interrupter_InterrupterRegisterIntialize @ 0x1C0014B54 (Interrupter_InterrupterRegisterIntialize.c)
 *     Interrupter_Initialize @ 0x1C0014CBC (Interrupter_Initialize.c)
 *     Interrupter_InterruptEnable @ 0x1C0018928 (Interrupter_InterruptEnable.c)
 */

char __fastcall Interrupter_ControllerResetPostReset(__int64 a1)
{
  __int64 v2; // rax
  __int64 i; // rdi
  __int64 v4; // rcx

  LOBYTE(v2) = Controller_IsControllerAccessible(*(_QWORD *)(a1 + 8));
  if ( (_BYTE)v2 )
  {
    Interrupter_Initialize(a1);
    LOBYTE(v2) = Interrupter_InterrupterRegisterIntialize(a1);
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 80); i = (unsigned int)(i + 1) )
    {
      v2 = *(_QWORD *)(a1 + 32);
      v4 = *(_QWORD *)(v2 + 8 * i);
      if ( v4 )
      {
        *(_DWORD *)(v4 + 96) &= ~0x10u;
        LODWORD(v2) = *(_DWORD *)(v4 + 96);
        if ( (v2 & 4) != 0 )
          LOBYTE(v2) = Interrupter_InterruptEnable(v4);
      }
    }
  }
  return v2;
}
