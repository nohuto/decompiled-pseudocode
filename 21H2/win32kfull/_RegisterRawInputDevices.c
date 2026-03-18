/*
 * XREFs of _RegisterRawInputDevices @ 0x1C00AE358
 * Callers:
 *     NtUserRegisterRawInputDevices @ 0x1C00AE7A0 (NtUserRegisterRawInputDevices.c)
 *     RegisterModernAppThreadForRawKeyboard @ 0x1C01D1230 (RegisterModernAppThreadForRawKeyboard.c)
 *     UnregisterModernAppThreadForRawKeyboard @ 0x1C01D12DC (UnregisterModernAppThreadForRawKeyboard.c)
 * Callees:
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     ?AdjustLegacyDeviceFlags@@YAXPEAUtagPROCESSINFO@@@Z @ 0x1C00ADF5C (-AdjustLegacyDeviceFlags@@YAXPEAUtagPROCESSINFO@@@Z.c)
 *     ?CleanupFreedTLCInfo@@YAXXZ @ 0x1C00AE4F8 (-CleanupFreedTLCInfo@@YAXXZ.c)
 *     ?HidRequestValidityCheck@@YAHQEAUtagRAWINPUTDEVICE@@PEBUtagPROCESS_HID_TABLE@@W4_REGISTER_RAW_INPUT_INTERNAL@@@Z @ 0x1C00AE5F4 (-HidRequestValidityCheck@@YAHQEAUtagRAWINPUTDEVICE@@PEBUtagPROCESS_HID_TABLE@@W4_REGISTER_RAW_IN.c)
 *     ?SearchProcessHidRequest@@YAPEAUtagPROCESS_HID_REQUEST@@PEAUtagPROCESSINFO@@GGPEAK@Z @ 0x1C00AEDCC (-SearchProcessHidRequest@@YAPEAUtagPROCESS_HID_REQUEST@@PEAUtagPROCESSINFO@@GGPEAK@Z.c)
 *     FreeHidProcessRequest @ 0x1C0102B44 (FreeHidProcessRequest.c)
 *     ?SetProcDeviceRequest@@YAHPEAUtagPROCESSINFO@@PEAUtagRAWINPUTDEVICE@@PEAUtagPROCESS_HID_REQUEST@@KW4_REGISTER_RAW_INPUT_INTERNAL@@@Z @ 0x1C0102C04 (-SetProcDeviceRequest@@YAHPEAUtagPROCESSINFO@@PEAUtagRAWINPUTDEVICE@@PEAUtagPROCESS_HID_REQUEST@.c)
 *     ?IsLegacyDevice@@YAHGG@Z @ 0x1C01030EC (-IsLegacyDevice@@YAHGG@Z.c)
 *     AllocateProcessHidTable @ 0x1C0121408 (AllocateProcessHidTable.c)
 */

__int64 __fastcall RegisterRawInputDevices(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 CurrentProcessWin32Process; // rbx
  __int64 v7; // rax
  unsigned int v8; // edi
  __int128 *v9; // rsi
  __int64 v10; // rdx
  unsigned int v11; // esi
  _DWORD *v12; // rdi
  unsigned __int16 v13; // r8
  unsigned __int16 v14; // dx
  struct tagPROCESS_HID_REQUEST *v15; // rax
  unsigned int v16; // edi
  __int64 v17; // rbx
  __int64 v18; // r10
  __int64 i; // r9
  __int64 ProcessHidTable; // rax
  __int64 v22; // rdx
  __int64 *v23; // r9
  __int16 v24; // r11
  __int64 *j; // rax
  int v26; // ecx
  __int128 v27; // [rsp+30h] [rbp-38h] BYREF
  unsigned int v28; // [rsp+78h] [rbp+10h] BYREF

  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  v7 = *(_QWORD *)(CurrentProcessWin32Process + 832);
  if ( v7 )
  {
    *(_QWORD *)(v7 + 88) = 0LL;
    *(_DWORD *)(v7 + 96) = 0;
    v7 = *(_QWORD *)(CurrentProcessWin32Process + 832);
  }
  v8 = 0;
  if ( a2 )
  {
    v9 = (__int128 *)a1;
    while ( 1 )
    {
      v10 = *(_QWORD *)(CurrentProcessWin32Process + 832);
      v27 = *v9;
      if ( !(unsigned int)HidRequestValidityCheck(&v27, v10, a3) )
        goto LABEL_22;
      ++v8;
      ++v9;
      if ( v8 >= a2 )
      {
        v7 = *(_QWORD *)(CurrentProcessWin32Process + 832);
        break;
      }
    }
  }
  if ( !v7 )
  {
    ProcessHidTable = AllocateProcessHidTable();
    *(_QWORD *)(CurrentProcessWin32Process + 832) = ProcessHidTable;
    if ( !ProcessHidTable )
    {
      UserSetLastError(8LL, v22);
LABEL_22:
      v16 = 0;
      goto LABEL_15;
    }
  }
  v11 = 0;
  if ( a2 )
  {
    v12 = (_DWORD *)(a1 + 4);
    do
    {
      v13 = *((_WORD *)v12 - 1);
      v14 = *((_WORD *)v12 - 2);
      v28 = 0;
      v15 = SearchProcessHidRequest((struct tagPROCESSINFO *)CurrentProcessWin32Process, v14, v13, &v28);
      if ( (*v12 & 1) != 0 )
      {
        if ( v15 )
          FreeHidProcessRequest(v15);
      }
      else if ( !(unsigned int)SetProcDeviceRequest(CurrentProcessWin32Process, a1 + 16LL * v11, v15, v28, a3) )
      {
        goto LABEL_22;
      }
      ++v11;
      v12 += 4;
    }
    while ( v11 < a2 );
  }
  v16 = 1;
LABEL_15:
  if ( *(_QWORD *)(CurrentProcessWin32Process + 832) )
  {
    AdjustLegacyDeviceFlags((struct tagPROCESSINFO *)CurrentProcessWin32Process);
    v17 = *(_QWORD *)(CurrentProcessWin32Process + 832);
    v18 = v17 + 48;
    for ( i = *(_QWORD *)(v17 + 48); i != v18; i = *v23 )
    {
      if ( !(unsigned int)IsLegacyDevice(*(_WORD *)(i + 16), *(_WORD *)(i + 18)) )
      {
        for ( j = *(__int64 **)(v17 + 32); j != (__int64 *)(v17 + 32); j = (__int64 *)*j )
        {
          if ( *((_WORD *)j + 8) == v24 )
            goto LABEL_31;
        }
        j = 0LL;
LABEL_31:
        v26 = *((_DWORD *)v23 + 5);
        if ( j )
        {
          if ( (v26 & 8) != 0 )
          {
            --*(_DWORD *)(v23[3] + 40);
            *((_DWORD *)v23 + 5) &= ~8u;
          }
        }
        else if ( (v26 & 8) == 0 )
        {
          ++*(_DWORD *)(v23[3] + 40);
          *((_DWORD *)v23 + 5) |= 8u;
        }
      }
    }
    CleanupFreedTLCInfo();
    CHidInput::HandleDirectStartStopDeviceReadRequest(gpHidInput);
  }
  return v16;
}
