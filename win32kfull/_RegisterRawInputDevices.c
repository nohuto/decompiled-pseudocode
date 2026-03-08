/*
 * XREFs of _RegisterRawInputDevices @ 0x1C00D5AC8
 * Callers:
 *     NtUserRegisterRawInputDevices @ 0x1C00D51E0 (NtUserRegisterRawInputDevices.c)
 *     RegisterModernAppThreadForRawKeyboard @ 0x1C01AB1FC (RegisterModernAppThreadForRawKeyboard.c)
 *     UnregisterModernAppThreadForRawKeyboard @ 0x1C01AB2A8 (UnregisterModernAppThreadForRawKeyboard.c)
 * Callees:
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     AllocateProcessHidTable @ 0x1C00D5128 (AllocateProcessHidTable.c)
 *     ?AdjustLegacyDeviceFlags@@YAXPEAUtagPROCESSINFO@@@Z @ 0x1C00D5560 (-AdjustLegacyDeviceFlags@@YAXPEAUtagPROCESSINFO@@@Z.c)
 *     FreeHidProcessRequest @ 0x1C00D58B8 (FreeHidProcessRequest.c)
 *     ?HidRequestValidityCheck@@YAHQEAUtagRAWINPUTDEVICE@@PEBUtagPROCESS_HID_TABLE@@W4_REGISTER_RAW_INPUT_INTERNAL@@@Z @ 0x1C00D5C58 (-HidRequestValidityCheck@@YAHQEAUtagRAWINPUTDEVICE@@PEBUtagPROCESS_HID_TABLE@@W4_REGISTER_RAW_IN.c)
 *     ?SearchProcessHidRequest@@YAPEAUtagPROCESS_HID_REQUEST@@PEAUtagPROCESSINFO@@GGPEAK@Z @ 0x1C00D5DF8 (-SearchProcessHidRequest@@YAPEAUtagPROCESS_HID_REQUEST@@PEAUtagPROCESSINFO@@GGPEAK@Z.c)
 *     ?SetProcDeviceRequest@@YAHPEAUtagPROCESSINFO@@PEAUtagRAWINPUTDEVICE@@PEAUtagPROCESS_HID_REQUEST@@KW4_REGISTER_RAW_INPUT_INTERNAL@@@Z @ 0x1C00D5E84 (-SetProcDeviceRequest@@YAHPEAUtagPROCESSINFO@@PEAUtagRAWINPUTDEVICE@@PEAUtagPROCESS_HID_REQUEST@.c)
 *     ?IsLegacyDevice@@YAHGG@Z @ 0x1C00D6024 (-IsLegacyDevice@@YAHGG@Z.c)
 *     ?CleanupFreedTLCInfo@@YAXXZ @ 0x1C00D6558 (-CleanupFreedTLCInfo@@YAXXZ.c)
 */

__int64 __fastcall RegisterRawInputDevices(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 CurrentProcessWin32Process; // rax
  __int64 v7; // r9
  __int64 v8; // rbx
  __int64 v9; // rax
  unsigned int v10; // edi
  __int128 *v11; // rsi
  __int64 v12; // rdx
  __int64 ProcessHidTable; // rax
  unsigned int v14; // esi
  _DWORD *v15; // rdi
  unsigned __int16 v16; // r8
  unsigned __int16 v17; // dx
  struct tagPROCESS_HID_REQUEST *v18; // rax
  unsigned int v19; // edi
  __int64 v20; // rbx
  __int64 v21; // r10
  __int64 i; // r9
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 *v26; // r9
  __int16 v27; // r11
  __int64 *j; // rax
  __int128 v29; // [rsp+30h] [rbp-38h] BYREF
  unsigned int v30; // [rsp+78h] [rbp+10h] BYREF

  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  v8 = CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process )
  {
    v7 = -*(_QWORD *)CurrentProcessWin32Process;
    v8 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
  }
  v9 = *(_QWORD *)(v8 + 824);
  if ( v9 )
  {
    *(_QWORD *)(v9 + 88) = 0LL;
    *(_DWORD *)(v9 + 96) = 0;
  }
  v10 = 0;
  if ( a2 )
  {
    v11 = (__int128 *)a1;
    do
    {
      v12 = *(_QWORD *)(v8 + 824);
      v29 = *v11;
      if ( !(unsigned int)HidRequestValidityCheck(&v29, v12, a3, v7) )
        goto LABEL_22;
      ++v10;
      ++v11;
    }
    while ( v10 < a2 );
  }
  if ( !*(_QWORD *)(v8 + 824) )
  {
    ProcessHidTable = AllocateProcessHidTable();
    *(_QWORD *)(v8 + 824) = ProcessHidTable;
    if ( !ProcessHidTable )
    {
      UserSetLastError(8);
LABEL_22:
      v19 = 0;
      goto LABEL_17;
    }
  }
  v14 = 0;
  if ( a2 )
  {
    v15 = (_DWORD *)(a1 + 4);
    do
    {
      v16 = *((_WORD *)v15 - 1);
      v17 = *((_WORD *)v15 - 2);
      v30 = 0;
      v18 = SearchProcessHidRequest((struct tagPROCESSINFO *)v8, v17, v16, &v30);
      if ( (*v15 & 1) != 0 )
      {
        if ( v18 )
          FreeHidProcessRequest(v18, v30, *(struct tagPROCESS_HID_TABLE **)(v8 + 824));
      }
      else if ( !(unsigned int)SetProcDeviceRequest(v8, a1 + 16LL * v14, v18, v30, a3) )
      {
        goto LABEL_22;
      }
      ++v14;
      v15 += 4;
    }
    while ( v14 < a2 );
  }
  v19 = 1;
LABEL_17:
  if ( *(_QWORD *)(v8 + 824) )
  {
    AdjustLegacyDeviceFlags((struct tagPROCESSINFO *)v8);
    v20 = *(_QWORD *)(v8 + 824);
    v21 = v20 + 48;
    for ( i = *(_QWORD *)(v20 + 48); i != v21; i = *v26 )
    {
      if ( !(unsigned int)IsLegacyDevice(*(_WORD *)(i + 16), *(_WORD *)(i + 18)) )
      {
        for ( j = *(__int64 **)(v20 + 32); j != (__int64 *)(v20 + 32); j = (__int64 *)*j )
        {
          if ( *((_WORD *)j + 8) == v27 )
            goto LABEL_32;
        }
        j = 0LL;
LABEL_32:
        if ( j )
        {
          if ( __CFSHR__(*((_DWORD *)v26 + 5), 4) )
          {
            --*(_DWORD *)(v26[3] + 40);
            *((_DWORD *)v26 + 5) &= ~8u;
          }
        }
        else if ( !__CFSHR__(*((_DWORD *)v26 + 5), 4) )
        {
          ++*(_DWORD *)(v26[3] + 40);
          *((_DWORD *)v26 + 5) |= 8u;
        }
      }
    }
    CleanupFreedTLCInfo();
    v24 = SGDGetUserSessionState(v23);
    CHidInput::HandleDirectStartStopDeviceReadRequest(*(CHidInput **)(v24 + 16840));
  }
  return v19;
}
