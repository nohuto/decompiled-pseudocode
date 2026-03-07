__int64 __fastcall rimFinalizePointerFlags(__int64 a1, __int64 a2, _DWORD *a3)
{
  int v3; // r10d
  int *v4; // rbx
  int v5; // r9d
  bool v9; // bp
  bool v10; // r15
  unsigned int *v11; // rdx
  _DWORD *v12; // rsi
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  __int64 v16; // rax
  __int64 result; // rax
  int v18; // ebp

  v3 = a3[671];
  v4 = a3 + 611;
  v5 = a3[611];
  v9 = (v3 & 4) == 0 && (v5 & 4) != 0;
  v10 = (v3 & 4) != 0 && (v5 & 4) == 0;
  if ( !(unsigned int)RIMCmIsContactDeliveringPointerData(a3)
    && (unsigned int)RIMCmIsContactSuppressed((__int64)a3)
    && (unsigned int)RIMCmIsSuppressedContactMarkedForDelivery(a3) )
  {
    *v4 &= 0x3000000u;
    v11 = a3 + 8;
LABEL_18:
    v15 = *v4;
    goto LABEL_19;
  }
  v12 = a3 + 8;
  if ( (a3[2] & 0x10) != 0 )
  {
    v14 = a3[611];
  }
  else
  {
    v13 = *v4;
    *v12 |= 1u;
    v14 = v13 | 0x4000;
  }
  if ( v9 )
  {
    v15 = v14 | 0x10000;
  }
  else if ( v10 )
  {
    v15 = v14 | 0x40000;
  }
  else
  {
    v15 = v14 | 0x20000;
  }
  *v4 = v15;
  v11 = a3 + 8;
  if ( (*v12 & 8) != 0 )
  {
    v15 |= 0x4000000u;
    *v4 = v15;
    v16 = *(_QWORD *)(a1 + 480);
    if ( v16 == a2 )
    {
      if ( *(_DWORD **)(v16 + 1016) != a3 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1606);
      *v4 |= 0x2000u;
      v11 = a3 + 8;
      goto LABEL_18;
    }
  }
LABEL_19:
  if ( (v15 & 0x1000000) == 0 )
    *v4 = v15 & 0xFDFFFFFF;
  result = *v11;
  if ( (result & 4) == 0 )
  {
    if ( (unsigned int)RIMCmIsButtonContactActiveAndNotSuppressed(a2) )
    {
      v18 = *(_DWORD *)(RIMCmGetButtonContact(a2) + 2444);
      if ( (v18 & 0x10) != 0 )
      {
        if ( (v18 & 4) == 0 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1629);
        *v4 |= 0x10u;
      }
      if ( (v18 & 0x20) != 0 )
      {
        if ( (v18 & 4) == 0 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1634);
        *v4 |= 0x20u;
      }
      if ( (v18 & 0x40) != 0 )
      {
        if ( (v18 & 4) == 0 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1639);
        *v4 |= 0x40u;
      }
    }
    result = (unsigned int)(*(_DWORD *)(a2 + 24) - 5);
    if ( (unsigned int)result <= 1 )
      result = rimPenButtonsPolicyApply(a2, a3);
  }
  *v4 &= ~0x1000000u;
  return result;
}
