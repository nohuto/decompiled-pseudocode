/*
 * XREFs of RIMUpdatePrimaryAndFinalizePointerFlags @ 0x1C0178CF4
 * Callers:
 *     RIMCompletePointerDeviceFrame @ 0x1C01714F4 (RIMCompletePointerDeviceFrame.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RIMGetPointerInputType @ 0x1C015E628 (RIMGetPointerInputType.c)
 *     RIMUpdatePrimaryDevice @ 0x1C015FD6C (RIMUpdatePrimaryDevice.c)
 *     rimFinalizePointerFlags @ 0x1C017B4A4 (rimFinalizePointerFlags.c)
 *     rimIsPointerDevicePrimaryContactDown @ 0x1C017BA94 (rimIsPointerDevicePrimaryContactDown.c)
 *     RIMCmActiveContactsBeginNoButton @ 0x1C017FC88 (RIMCmActiveContactsBeginNoButton.c)
 *     RIMCmActiveContactsEnd @ 0x1C017FD1C (RIMCmActiveContactsEnd.c)
 *     RIMCmActiveContactsNext @ 0x1C017FD8C (RIMCmActiveContactsNext.c)
 *     RIMCmIsContactDeliveringPointerData @ 0x1C01803F4 (RIMCmIsContactDeliveringPointerData.c)
 *     RIMCmIsContactSuppressed @ 0x1C0180440 (RIMCmIsContactSuppressed.c)
 *     ApiSetIsPointerInputTypeRedirected @ 0x1C01CFA1C (ApiSetIsPointerInputTypeRedirected.c)
 */

__int64 __fastcall RIMUpdatePrimaryAndFinalizePointerFlags(__int64 a1, __int64 a2)
{
  int v2; // r15d
  __int64 v3; // r13
  _DWORD *v4; // r14
  int v5; // r12d
  __int64 active; // rax
  int v8; // esi
  __int64 v9; // xmm1_8
  __int64 v10; // rax
  __int128 v11; // xmm1
  __int64 v12; // xmm0_8
  __int64 v13; // rax
  __int64 result; // rax
  int v15; // ecx
  _DWORD *v16; // rbx
  int v17; // r13d
  int v18; // eax
  unsigned int v19; // eax
  int IsPointerInputTypeRedirected; // eax
  __int64 v21; // rdx
  int v22; // r15d
  int v23; // r8d
  int v24; // ecx
  int v25; // r14d
  __int64 v26; // rcx
  int v27; // ebx
  __int128 v28; // [rsp+20h] [rbp-58h] BYREF
  __int64 v29; // [rsp+30h] [rbp-48h]
  __int128 v30; // [rsp+38h] [rbp-40h] BYREF
  __int64 v31; // [rsp+48h] [rbp-30h]
  _BYTE v32[40]; // [rsp+50h] [rbp-28h] BYREF
  int IsContactDeliveringPointerData; // [rsp+D8h] [rbp+60h]

  v2 = 0;
  v3 = a1;
  IsContactDeliveringPointerData = 0;
  v4 = 0LL;
  v5 = 0;
  active = RIMCmActiveContactsBeginNoButton(&v30, a2);
  v8 = 1;
  v9 = *(_QWORD *)(active + 16);
  v28 = *(_OWORD *)active;
  v29 = v9;
  while ( 1 )
  {
    v10 = RIMCmActiveContactsEnd(v32, a2);
    v11 = *(_OWORD *)v10;
    v12 = *(_QWORD *)(v10 + 16);
    v13 = *(_QWORD *)v10;
    v31 = v12;
    v30 = v11;
    if ( (_QWORD)v28 == v13 )
    {
      result = DWORD2(v30);
      if ( DWORD2(v28) == DWORD2(v30) && v29 == v31 )
        break;
    }
    v15 = *(_DWORD *)(v29 + 2644);
    v16 = (_DWORD *)(v29 - 16);
    if ( (v15 & 2) != 0 || (v17 = 1, (v16[605] & 2) == 0) )
      v17 = 0;
    if ( (v15 & 4) == 0 && (v16[605] & 4) != 0 )
      v2 = 1;
    v18 = v16[8];
    if ( (v18 & 2) == 0 )
    {
      MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 1686);
      v18 = v16[8];
    }
    if ( (v18 & 4) != 0 )
      MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 1687);
    if ( (unsigned int)RIMCmIsContactDeliveringPointerData(v16) )
      ++v5;
    if ( (v16[585] & 1) != 0 )
    {
      if ( !*(_QWORD *)(a2 + 960) && (v17 || v2) && !v4 && !(unsigned int)RIMCmIsContactSuppressed(v16) )
      {
        IsContactDeliveringPointerData = RIMCmIsContactDeliveringPointerData(v16);
        v4 = v16;
      }
      v3 = a1;
      rimFinalizePointerFlags(a1, a2, v16);
    }
    else
    {
      v3 = a1;
    }
    RIMCmActiveContactsNext(a2, &v28);
    v2 = 0;
  }
  if ( v4 && (!v5 || v5 == 1 && IsContactDeliveringPointerData) )
  {
    if ( *(_QWORD *)(a2 + 960) )
      result = MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 1723);
    v4[8] |= 8u;
    *(_QWORD *)(a2 + 960) = v4;
  }
  if ( *(_QWORD *)(a2 + 960) )
  {
    v19 = RIMGetPointerInputType(a2);
    IsPointerInputTypeRedirected = ApiSetIsPointerInputTypeRedirected(v19);
    v21 = *(_QWORD *)(a2 + 960);
    v22 = IsPointerInputTypeRedirected;
    v23 = *(_DWORD *)(v21 + 2660);
    if ( (v23 & 2) != 0 || (v24 = 1, (*(_DWORD *)(v21 + 2420) & 2) == 0) )
      v24 = 0;
    if ( (v23 & 4) != 0 || (result = 1LL, (*(_DWORD *)(v21 + 2420) & 4) == 0) )
      result = 0LL;
    if ( v24 || (v25 = 0, (_DWORD)result) )
      v25 = 1;
    v26 = *(_QWORD *)(v3 + 480);
    if ( v26 )
    {
      v27 = RIMGetPointerInputType(v26);
      result = RIMGetPointerInputType(a2);
      if ( v27 == (_DWORD)result
        || (result = rimIsPointerDevicePrimaryContactDown(*(_QWORD *)(v3 + 480)), (_DWORD)result)
        || (result = rimIsPointerDevicePrimaryContactDown(a2), !(_DWORD)result) )
      {
        if ( !*(_DWORD *)(v3 + 488) || v22 )
          v8 = 0;
      }
    }
    if ( v25 && v8 )
    {
      *(_DWORD *)(*(_QWORD *)(a2 + 960) + 2420LL) |= 0x2000u;
      return RIMUpdatePrimaryDevice(v3, a2);
    }
  }
  return result;
}
