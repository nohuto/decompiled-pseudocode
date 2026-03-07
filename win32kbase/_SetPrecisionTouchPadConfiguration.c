__int64 __fastcall SetPrecisionTouchPadConfiguration(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rsi
  __int64 v10; // rcx
  int v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // rcx
  unsigned int v14; // ebx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rdx
  int v18; // ebp
  __int64 v19; // rdx
  int v20; // ecx
  int v21; // edx
  int v22; // ecx
  int v23; // ecx
  int v24; // eax
  int v25; // ecx
  unsigned __int8 v26; // al
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9

  if ( a1 && !*(_DWORD *)a1 )
  {
    v5 = SGDGetUserSessionState(a1, a2, a3, a4);
    v9 = v5 + 16800;
    dword_1C02C97CC = *(_DWORD *)(v5 + 16808);
    v10 = *(unsigned int *)(v5 + 16816);
    dword_1C02C983C = *(_DWORD *)(v5 + 16816);
    if ( *(_DWORD *)(a1 + 8) <= 4u )
    {
      dword_1C02C97CC = *(_DWORD *)(a1 + 8);
      *(_DWORD *)(v5 + 16808) = *(_DWORD *)(a1 + 8);
    }
    v11 = *(_DWORD *)(a1 + 16);
    SGDGetUserSessionState(v10, v6, v7, v8);
    if ( (unsigned int)(v11 - 1) <= 0x13 )
      dword_1C02C983C = *(_DWORD *)(a1 + 16);
    if ( *(_BYTE *)(a1 + 21) <= 0x64u )
      dword_1C02C988C = *(char *)(a1 + 21);
    dword_1C02C97DC = -__CFSHR__(*(_DWORD *)(a1 + 12), 3);
    dword_1C02C97EC = -__CFSHR__(*(_DWORD *)(a1 + 12), 4);
    dword_1C02C97FC = -__CFSHR__(*(_DWORD *)(a1 + 12), 8);
    dword_1C02C980C = -__CFSHR__(*(_DWORD *)(a1 + 12), 9);
    dword_1C02C981C = -__CFSHR__(*(_DWORD *)(a1 + 12), 10);
    dword_1C02C982C = -__CFSHR__(*(_DWORD *)(a1 + 12), 11);
    dword_1C02C984C = -(*(_DWORD *)(a1 + 20) & 1);
    dword_1C02C985C = -__CFSHR__(*(_DWORD *)(a1 + 20), 2);
    dword_1C02C986C = -__CFSHR__(*(_DWORD *)(a1 + 20), 3);
    dword_1C02C987C = -__CFSHR__(*(_DWORD *)(a1 + 20), 7);
    dword_1C02C989C = -__CFSHR__(*(_DWORD *)(a1 + 20), 17);
    v14 = WriteSettingValues(0LL, &off_1C02C97C0, 14LL);
    if ( !v14 )
      goto LABEL_19;
    v17 = *(_DWORD *)(v9 + 12) ^ (*(_DWORD *)(a1 + 12) ^ *(_DWORD *)(v9 + 12)) & 8u;
    *(_DWORD *)(v9 + 12) = v17;
    *(_DWORD *)(v9 + 12) = v17 ^ (*(_DWORD *)(a1 + 12) ^ v17) & 4;
    v18 = *(_DWORD *)(a1 + 16);
    if ( *(_DWORD *)(v9 + 16) != v18 )
    {
      SGDGetUserSessionState(v13, v17, v15, v16);
      if ( (unsigned int)(v18 - 1) <= 0x13 )
      {
        *(_DWORD *)(v9 + 16) = *(_DWORD *)(a1 + 16);
        ResetAccelerationCurves(1LL, v19, v15, v16);
      }
    }
    *(_DWORD *)(v9 + 12) ^= (*(_DWORD *)(a1 + 12) ^ *(_DWORD *)(v9 + 12)) & 0x80;
    v20 = *(_DWORD *)(v9 + 12) ^ (*(_DWORD *)(a1 + 12) ^ *(_DWORD *)(v9 + 12)) & 0x100;
    *(_DWORD *)(v9 + 12) = v20;
    v21 = v20 ^ (*(_DWORD *)(a1 + 12) ^ v20) & 0x200;
    v22 = *(_DWORD *)(v9 + 20);
    *(_DWORD *)(v9 + 12) = v21;
    *(_DWORD *)(v9 + 12) = v21 ^ (*(_DWORD *)(a1 + 12) ^ v21) & 0x400;
    v23 = *(_DWORD *)(v9 + 20) ^ (*(_DWORD *)(a1 + 20) ^ v22) & 1;
    *(_DWORD *)(v9 + 20) = v23;
    v24 = v23 ^ (*(_DWORD *)(a1 + 20) ^ v23) & 2;
    *(_DWORD *)(v9 + 20) = v24;
    v25 = v24 ^ (*(_DWORD *)(a1 + 20) ^ v24) & 4;
    *(_DWORD *)(v9 + 20) = v25;
    v12 = v25 ^ (*(_DWORD *)(a1 + 20) ^ v25) & 0x40u;
    v13 = 0x10000LL;
    *(_DWORD *)(v9 + 20) = v12;
    if ( *(_BYTE *)(v9 + 21) == *(_BYTE *)(a1 + 21) && ((*(_DWORD *)(a1 + 20) ^ (unsigned int)v12) & 0x10000) == 0 )
      goto LABEL_19;
    *(_DWORD *)(v9 + 20) = v12 ^ (*(_DWORD *)(a1 + 20) ^ v12) & 0x10000;
    v26 = *(_BYTE *)(a1 + 21);
    if ( v26 <= 0x64u )
      *(_BYTE *)(v9 + 21) = v26;
    if ( (*(_DWORD *)(v9 + 20) & 0x80u) != 0 )
    {
      v27 = SGDGetUserSessionState(0x10000LL, v12, v15, v16);
      CBaseInput::EnumDevices(
        *(struct CInpPushLock ***)(v27 + 16840),
        0LL,
        (unsigned __int8 (__fastcall *)(__int64, void *))lambda_368b033a81a9ff5b62db10e322fc5b96_::_lambda_invoker_cdecl_);
      UpdateTPCurrentActiveState(v29, v28, v30, v31);
    }
    else
    {
LABEL_19:
      UpdateTPCurrentActiveState(v13, v12, v15, v16);
      if ( !v14 )
        return v14;
    }
    BroadcastSettingsUpdateToAllContainers(v33, v32, v34, v35);
    return v14;
  }
  return 0LL;
}
