/*
 * XREFs of RIMUpdatePrimaryAndFinalizePointerFlags @ 0x1C01AE2AC
 * Callers:
 *     RIMCompletePointerDeviceFrame @ 0x1C01A62A0 (RIMCompletePointerDeviceFrame.c)
 * Callees:
 *     RIMCmActiveContactsEnd @ 0x1C00E756C (RIMCmActiveContactsEnd.c)
 *     RIMGetPointerInputType @ 0x1C019369C (RIMGetPointerInputType.c)
 *     RIMUpdatePrimaryDevice @ 0x1C0195A10 (RIMUpdatePrimaryDevice.c)
 *     rimFinalizePointerFlags @ 0x1C01B0BC4 (rimFinalizePointerFlags.c)
 *     rimIsPointerDevicePrimaryContactDown @ 0x1C01B11B0 (rimIsPointerDevicePrimaryContactDown.c)
 *     RIMCmActiveContactsBeginNoButton @ 0x1C01B609C (RIMCmActiveContactsBeginNoButton.c)
 *     RIMCmActiveContactsNext @ 0x1C01B6120 (RIMCmActiveContactsNext.c)
 *     RIMCmIsContactDeliveringPointerData @ 0x1C01B6928 (RIMCmIsContactDeliveringPointerData.c)
 *     RIMCmIsContactSuppressed @ 0x1C01B6958 (RIMCmIsContactSuppressed.c)
 *     ApiSetIsPointerInputTypeRedirected @ 0x1C020E2CC (ApiSetIsPointerInputTypeRedirected.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMUpdatePrimaryAndFinalizePointerFlags(__int64 a1, __int64 a2)
{
  _DWORD *v2; // r14
  __int64 v3; // r13
  int v4; // r12d
  __int64 active; // rax
  __int64 v7; // r8
  int v8; // esi
  __int64 v9; // xmm1_8
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 result; // rax
  __int64 v14; // rcx
  _DWORD *v15; // rbx
  BOOL v16; // r13d
  BOOL v17; // r15d
  int v18; // eax
  unsigned int v19; // eax
  int IsPointerInputTypeRedirected; // eax
  __int64 v21; // rdx
  int v22; // r15d
  int v23; // r8d
  BOOL v24; // ecx
  BOOL v25; // r14d
  __int64 v26; // rcx
  int v27; // ebx
  __int128 v28; // [rsp+20h] [rbp-30h] BYREF
  __int64 v29; // [rsp+30h] [rbp-20h]
  __int64 v30; // [rsp+38h] [rbp-18h] BYREF
  unsigned int v31; // [rsp+40h] [rbp-10h]
  __int64 v32; // [rsp+48h] [rbp-8h]
  int IsContactDeliveringPointerData; // [rsp+98h] [rbp+48h]

  v2 = 0LL;
  v3 = a1;
  IsContactDeliveringPointerData = 0;
  v4 = 0;
  active = RIMCmActiveContactsBeginNoButton(&v30, a2);
  v8 = 1;
  v9 = *(_QWORD *)(active + 16);
  v28 = *(_OWORD *)active;
  v29 = v9;
  while ( 1 )
  {
    RIMCmActiveContactsEnd((__int64)&v30, a2, v7);
    if ( (_QWORD)v28 == v30 )
    {
      result = v31;
      if ( DWORD2(v28) == v31 && v29 == v32 )
        break;
    }
    v14 = *(unsigned int *)(v29 + 2644);
    v15 = (_DWORD *)(v29 - 16);
    v16 = (v14 & 2) == 0 && (v15[605] & 2) != 0;
    v17 = (v14 & 4) == 0 && (v15[605] & 4) != 0;
    v18 = v15[8];
    if ( (v18 & 2) == 0 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v14, v10, v12);
      v18 = v15[8];
    }
    if ( (v18 & 4) != 0 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v14, v10, v12);
    if ( (unsigned int)RIMCmIsContactDeliveringPointerData(v15) )
      ++v4;
    if ( (v15[585] & 1) != 0 )
    {
      if ( !*(_QWORD *)(a2 + 1016) && (v16 || v17) && !v2 && !(unsigned int)RIMCmIsContactSuppressed(v15) )
      {
        IsContactDeliveringPointerData = RIMCmIsContactDeliveringPointerData(v15);
        v2 = v15;
      }
      v3 = a1;
      rimFinalizePointerFlags(a1, a2, v15);
    }
    else
    {
      v3 = a1;
    }
    RIMCmActiveContactsNext(a2, &v28);
  }
  if ( v2 && (!v4 || v4 == 1 && IsContactDeliveringPointerData) )
  {
    if ( *(_QWORD *)(a2 + 1016) )
      result = MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v10, v12);
    v2[8] |= 8u;
    v2[605] |= 0x4000000u;
    *(_QWORD *)(a2 + 1016) = v2;
  }
  if ( *(_QWORD *)(a2 + 1016) )
  {
    v19 = RIMGetPointerInputType(a2);
    IsPointerInputTypeRedirected = ApiSetIsPointerInputTypeRedirected(v19);
    v21 = *(_QWORD *)(a2 + 1016);
    v22 = IsPointerInputTypeRedirected;
    v23 = *(_DWORD *)(v21 + 2660);
    v24 = (v23 & 2) == 0 && (*(_DWORD *)(v21 + 2420) & 2) != 0;
    result = (v23 & 4) == 0 && (*(_DWORD *)(v21 + 2420) & 4) != 0;
    v25 = v24 || (_DWORD)result;
    v26 = *(_QWORD *)(v3 + 504);
    if ( v26 )
    {
      v27 = RIMGetPointerInputType(v26);
      result = RIMGetPointerInputType(a2);
      if ( v27 == (_DWORD)result
        || (result = rimIsPointerDevicePrimaryContactDown(*(_QWORD *)(v3 + 504)), (_DWORD)result)
        || (result = rimIsPointerDevicePrimaryContactDown(a2), !(_DWORD)result) )
      {
        if ( !*(_DWORD *)(v3 + 512) || v22 )
          v8 = 0;
      }
    }
    if ( v25 && v8 )
    {
      *(_DWORD *)(*(_QWORD *)(a2 + 1016) + 2420LL) |= 0x2000u;
      return RIMUpdatePrimaryDevice(v3, a2);
    }
  }
  return result;
}
