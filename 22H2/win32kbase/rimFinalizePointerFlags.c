/*
 * XREFs of rimFinalizePointerFlags @ 0x1C017B3D4
 * Callers:
 *     RIMUpdatePrimaryAndFinalizePointerFlags @ 0x1C0178C24 (RIMUpdatePrimaryAndFinalizePointerFlags.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     rimPenButtonsPolicyApply @ 0x1C017BBF8 (rimPenButtonsPolicyApply.c)
 *     RIMCmGetButtonContact @ 0x1C01802CC (RIMCmGetButtonContact.c)
 *     RIMCmIsButtonContactActiveAndNotSuppressed @ 0x1C01802E8 (RIMCmIsButtonContactActiveAndNotSuppressed.c)
 *     RIMCmIsContactDeliveringPointerData @ 0x1C0180324 (RIMCmIsContactDeliveringPointerData.c)
 *     RIMCmIsContactSuppressed @ 0x1C0180370 (RIMCmIsContactSuppressed.c)
 *     RIMCmIsSuppressedContactMarkedForDelivery @ 0x1C01803E4 (RIMCmIsSuppressedContactMarkedForDelivery.c)
 */

__int64 __fastcall rimFinalizePointerFlags(__int64 a1, __int64 a2, _DWORD *a3)
{
  int v3; // r9d
  int v5; // r10d
  bool v8; // si
  bool v9; // di
  int v10; // ecx
  int v11; // eax
  int v12; // edx
  __int64 v13; // rax
  __int64 result; // rax
  int v15; // esi

  v3 = a3[605];
  v5 = a3[665];
  v8 = (v5 & 4) == 0 && (v3 & 4) != 0;
  v9 = (v5 & 4) != 0 && (v3 & 4) == 0;
  if ( !(unsigned int)RIMCmIsContactDeliveringPointerData(a3)
    && (unsigned int)RIMCmIsContactSuppressed(a3)
    && (unsigned int)RIMCmIsSuppressedContactMarkedForDelivery(a3) )
  {
    a3[605] &= 0x3000000u;
    v10 = a3[605];
  }
  else
  {
    if ( (a3[2] & 0x10) == 0 )
    {
      a3[605] |= 0x4000u;
      a3[8] |= 1u;
    }
    if ( v8 )
      v11 = 0x10000;
    else
      v11 = v9 ? 0x40000 : 0x20000;
    v12 = v11 | a3[605];
    a3[605] = v12;
    v10 = v12;
    if ( (a3[8] & 8) != 0 )
    {
      v13 = *(_QWORD *)(a1 + 480);
      if ( v13 == a2 )
      {
        if ( *(_DWORD **)(v13 + 960) != a3 )
        {
          MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 1579);
          v10 = a3[605];
        }
        v10 |= 0x2000u;
        a3[605] = v10;
      }
    }
  }
  if ( (v10 & 0x1000000) == 0 )
    a3[605] = v10 & 0xFDFFFFFF;
  result = (unsigned int)a3[8];
  if ( (result & 4) == 0 )
  {
    if ( (unsigned int)RIMCmIsButtonContactActiveAndNotSuppressed(a2) )
    {
      v15 = *(_DWORD *)(RIMCmGetButtonContact(a2) + 2420);
      if ( (v15 & 0x10) != 0 )
      {
        if ( (v15 & 4) == 0 )
          MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 1601);
        a3[605] |= 0x10u;
      }
      if ( (v15 & 0x20) != 0 )
      {
        if ( (v15 & 4) == 0 )
          MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 1606);
        a3[605] |= 0x20u;
      }
      if ( (v15 & 0x40) != 0 )
      {
        if ( (v15 & 4) == 0 )
          MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 1611);
        a3[605] |= 0x40u;
      }
    }
    result = (unsigned int)(*(_DWORD *)(a2 + 24) - 5);
    if ( (unsigned int)result <= 1 )
      result = rimPenButtonsPolicyApply(a2, a3);
  }
  a3[605] &= ~0x1000000u;
  return result;
}
