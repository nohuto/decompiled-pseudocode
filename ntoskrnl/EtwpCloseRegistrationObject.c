/*
 * XREFs of EtwpCloseRegistrationObject @ 0x14076FB60
 * Callers:
 *     <none>
 * Callees:
 *     EtwEventEnabled @ 0x140231870 (EtwEventEnabled.c)
 *     EtwpEventWriteTemplateSessAndProv @ 0x1408A20CA (EtwpEventWriteTemplateSessAndProv.c)
 */

void __fastcall EtwpCloseRegistrationObject(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rcx
  __int64 v6; // r8

  if ( a4 == 1 )
  {
    if ( (*(_BYTE *)(a2 + 98) & 2) != 0 )
    {
      if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_PROVIDER_UNREGISTERS) )
        EtwpEventWriteTemplateSessAndProv(
          v5,
          &ETW_EVENT_PROVIDER_UNREGISTERS,
          v6,
          1LL,
          0LL,
          *(_QWORD *)(a2 + 32) + 40LL);
    }
    _InterlockedOr16((volatile signed __int16 *)(a2 + 98), 0x40u);
  }
}
