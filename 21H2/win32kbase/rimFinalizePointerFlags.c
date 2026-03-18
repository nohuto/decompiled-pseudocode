/*
 * XREFs of rimFinalizePointerFlags @ 0x1C01B0BC4
 * Callers:
 *     RIMUpdatePrimaryAndFinalizePointerFlags @ 0x1C01AE2AC (RIMUpdatePrimaryAndFinalizePointerFlags.c)
 * Callees:
 *     rimPenButtonsPolicyApply @ 0x1C01B1468 (rimPenButtonsPolicyApply.c)
 *     RIMCmGetButtonContact @ 0x1C01B6870 (RIMCmGetButtonContact.c)
 *     RIMCmIsButtonContactActiveAndNotSuppressed @ 0x1C01B688C (RIMCmIsButtonContactActiveAndNotSuppressed.c)
 *     RIMCmIsContactDeliveringPointerData @ 0x1C01B6928 (RIMCmIsContactDeliveringPointerData.c)
 *     RIMCmIsContactSuppressed @ 0x1C01B6958 (RIMCmIsContactSuppressed.c)
 *     RIMCmIsSuppressedContactMarkedForDelivery @ 0x1C01B69A4 (RIMCmIsSuppressedContactMarkedForDelivery.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimFinalizePointerFlags(__int64 a1, __int64 a2, _DWORD *a3)
{
  int v3; // r9d
  int v5; // r10d
  bool v8; // si
  bool v9; // di
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rcx
  unsigned int v13; // ecx
  int v14; // eax
  __int64 v15; // rax
  __int64 result; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  int v19; // esi
  __int64 v20; // r8

  v3 = a3[605];
  v5 = a3[665];
  v8 = (v5 & 4) == 0 && (v3 & 4) != 0;
  v9 = (v5 & 4) != 0 && (v3 & 4) == 0;
  if ( !(unsigned int)RIMCmIsContactDeliveringPointerData(a3)
    && (unsigned int)RIMCmIsContactSuppressed(a3)
    && (unsigned int)RIMCmIsSuppressedContactMarkedForDelivery(a3) )
  {
    a3[605] &= 0x3000000u;
    LODWORD(v12) = a3[605];
  }
  else
  {
    v13 = a3[605];
    if ( (a3[2] & 0x10) == 0 )
    {
      a3[8] |= 1u;
      v13 |= 0x4000u;
    }
    if ( v8 )
    {
      v14 = 0x10000;
    }
    else
    {
      v10 = 0x20000LL;
      v14 = v9 ? 0x40000 : 0x20000;
    }
    v12 = v14 | v13;
    a3[605] = v12;
    if ( (a3[8] & 8) != 0 )
    {
      LODWORD(v12) = v12 | 0x4000000;
      a3[605] = v12;
      v15 = *(_QWORD *)(a1 + 504);
      if ( v15 == a2 )
      {
        if ( *(_DWORD **)(v15 + 1016) != a3 )
        {
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v10, v11);
          LODWORD(v12) = a3[605];
        }
        LODWORD(v12) = v12 | 0x2000;
        a3[605] = v12;
      }
    }
  }
  if ( (v12 & 0x1000000) == 0 )
    a3[605] = v12 & 0xFDFFFFFF;
  result = (unsigned int)a3[8];
  if ( (result & 4) == 0 )
  {
    if ( (unsigned int)RIMCmIsButtonContactActiveAndNotSuppressed(a2) )
    {
      v19 = *(_DWORD *)(RIMCmGetButtonContact(a2) + 2420);
      if ( (v19 & 0x10) != 0 )
      {
        if ( (v19 & 4) == 0 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v18, v17, v20);
        a3[605] |= 0x10u;
      }
      if ( (v19 & 0x20) != 0 )
      {
        if ( (v19 & 4) == 0 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v18, v17, v20);
        a3[605] |= 0x20u;
      }
      if ( (v19 & 0x40) != 0 )
      {
        if ( (v19 & 4) == 0 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v18, v17, v20);
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
