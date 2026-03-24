/*
 * XREFs of NVMeHwFindAdapter @ 0x1C000A790
 * Callers:
 *     <none>
 * Callees:
 *     NVMeZeroMemory @ 0x1C0005A70 (NVMeZeroMemory.c)
 *     GetControllerMaxTransferSize @ 0x1C0005CE0 (GetControllerMaxTransferSize.c)
 *     __security_check_cookie @ 0x1C00066D0 (__security_check_cookie.c)
 *     memset @ 0x1C0008040 (memset.c)
 *     ControllerAllocateUncachedExtension @ 0x1C000A324 (ControllerAllocateUncachedExtension.c)
 *     IsIntelChatham @ 0x1C000A684 (IsIntelChatham.c)
 *     NVMeControllerStartFailureEventLog @ 0x1C000A6FC (NVMeControllerStartFailureEventLog.c)
 *     ControllerReset @ 0x1C000B3DC (ControllerReset.c)
 *     NVMeControllerInitPart1 @ 0x1C000DC0C (NVMeControllerInitPart1.c)
 *     GetNVMeRegisterAddress @ 0x1C001CF0C (GetNVMeRegisterAddress.c)
 *     GetRegistrySettings @ 0x1C001CF78 (GetRegistrySettings.c)
 */

__int64 __fastcall NVMeHwFindAdapter(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v6; // r15
  char v7; // r13
  char v8; // cl
  char v9; // al
  __int16 v10; // r14
  int v11; // eax
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 *NVMeRegisterAddress; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  unsigned __int8 v19; // al
  int v20; // eax
  unsigned int v21; // eax
  unsigned int v22; // edx
  int v23; // eax
  bool v24; // zf
  int v25; // ecx
  int v26; // ecx
  __int64 v27; // r8
  void **v28; // r14
  char v29; // r9
  int v30; // edx
  __int64 v31; // r8
  int v32; // eax
  int v33; // eax
  _OWORD v34[5]; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v35[8]; // [rsp+C0h] [rbp-40h] BYREF

  v6 = *(_QWORD *)(a5 + 64);
  if ( (*(_DWORD *)(a1 + 24) & 2) != 0 )
  {
    v7 = 1;
  }
  else
  {
    v8 = g_ControllerExtensionIndex;
    v7 = 0;
    g_ControllerExtension[(unsigned __int8)g_ControllerExtensionIndex] = a1;
    g_ControllerExtensionIndex = (v8 + 1) & 0xF;
  }
  v9 = *(_BYTE *)(a5 + 197);
  v10 = 64;
  *(_BYTE *)(a1 + 16) = v9;
  if ( v9 )
  {
    if ( !v6 )
    {
      *(_DWORD *)(a1 + 28) = 2;
      return 2LL;
    }
    StorPortExtendedFunction(45LL, a1, v6, 136LL);
    *(_WORD *)(a1 + 4) = *(_WORD *)v6;
    *(_WORD *)(a1 + 6) = *(_WORD *)(v6 + 2);
    *(_BYTE *)(a1 + 8) = *(_BYTE *)(v6 + 4);
    *(_QWORD *)(a1 + 152) = *(_QWORD *)(v6 + 8);
    *(_OWORD *)(a1 + 32) = *(_OWORD *)(v6 + 16);
    *(_OWORD *)(a1 + 48) = *(_OWORD *)(v6 + 32);
    *(_OWORD *)(a1 + 64) = *(_OWORD *)(v6 + 48);
    *(_OWORD *)(a1 + 80) = *(_OWORD *)(v6 + 64);
    *(_OWORD *)(a1 + 96) = *(_OWORD *)(v6 + 80);
    *(_OWORD *)(a1 + 112) = *(_OWORD *)(v6 + 96);
    *(_OWORD *)(a1 + 128) = *(_OWORD *)(v6 + 112);
    *(_DWORD *)(a1 + 144) = *(_DWORD *)(v6 + 128);
    v11 = *(_DWORD *)(v6 + 132);
    *(_DWORD *)(a1 + 56) |= 4u;
    *(_DWORD *)(a1 + 200) = v11;
  }
  else
  {
    memset(v35, 0, sizeof(v35));
    if ( (unsigned int)StorPortGetBusData(a1, 4LL, *(unsigned int *)(a5 + 4), *(unsigned int *)(a5 + 100), v35, 64) != 64 )
    {
      *(_DWORD *)(a1 + 28) = 3;
      NVMeControllerStartFailureEventLog(a1);
      StorPortNotification(4109LL, a1, 0LL);
      return 3LL;
    }
    *(_DWORD *)(a1 + 4) = v35[0];
    *(_BYTE *)(a1 + 8) = v35[1];
    if ( IsIntelChatham(a1) )
    {
      v13 = v35[3];
      v14 = 4294963200LL;
      v15 = HIDWORD(v35[3]);
    }
    else
    {
      v13 = v35[2];
      v14 = 4294950912LL;
      v15 = HIDWORD(v35[2]);
    }
    *(_QWORD *)(a1 + 152) = v14 & v13 | (v15 << 32);
  }
  NVMeRegisterAddress = (__int64 *)GetNVMeRegisterAddress(a1, a5);
  *(_QWORD *)(a1 + 160) = NVMeRegisterAddress;
  if ( !NVMeRegisterAddress )
  {
    *(_DWORD *)(a1 + 28) = 4;
    NVMeControllerStartFailureEventLog(a1);
    StorPortNotification(4109LL, a1, 0LL);
    return 3LL;
  }
  v17 = *NVMeRegisterAddress;
  v18 = *(_QWORD *)(a1 + 160);
  *(_QWORD *)(a1 + 176) = v17;
  LOBYTE(v17) = HIDWORD(*(_QWORD *)(a1 + 176)) & 0xF;
  *(_DWORD *)(a1 + 168) = *(_DWORD *)(v18 + 8);
  *(_DWORD *)(a1 + 184) = 4 << v17;
  if ( IsIntelChatham(a1) )
  {
    *(_BYTE *)(a1 + 179) = 1;
    v19 = 1;
  }
  else
  {
    v19 = *(_BYTE *)(a1 + 179);
  }
  *(_DWORD *)(a1 + 188) = 500 * v19;
  if ( !*(_BYTE *)(a1 + 16) && !v7 )
    GetRegistrySettings(a1);
  v20 = 3;
  if ( *(_DWORD *)(a5 + 20) != 1 )
    v20 = 1;
  *(_DWORD *)(a1 + 12) = v20;
  v21 = *(_DWORD *)(a1 + 36);
  *(_DWORD *)(a1 + 280) = 1048640;
  if ( *(_BYTE *)(a1 + 16) )
  {
    *(_WORD *)(a1 + 284) = 64;
    if ( !v21 || v21 > 0x40 )
      goto LABEL_34;
  }
  else
  {
    *(_WORD *)(a1 + 284) = 256;
    v22 = 1024;
    if ( v21 )
      v22 = v21;
    if ( v22 >= (unsigned __int64)(unsigned __int16)*(_DWORD *)(a1 + 176) + 1 )
      v22 = (unsigned __int16)*(_DWORD *)(a1 + 176) + 1;
    LOWORD(v21) = -1;
    if ( v22 < 0xFFFF )
      LOWORD(v21) = v22;
  }
  v10 = v21;
LABEL_34:
  *(_WORD *)(a1 + 286) = v10;
  *(_DWORD *)(a5 + 48) = 3;
  *(_BYTE *)(a5 + 81) = 1;
  *(_BYTE *)(a5 + 145) = 0;
  *(_DWORD *)(a5 + 148) = 1;
  if ( *(_DWORD *)(a5 + 20) == 1 )
  {
    *(_QWORD *)(a5 + 152) = NVMeHwMSIInterrupt;
    v23 = 2;
  }
  else
  {
    v23 = 1;
  }
  *(_DWORD *)(a5 + 160) = v23;
  v24 = *(_BYTE *)(a5 + 144) == 0x80;
  *(_DWORD *)(a5 + 216) = 0;
  if ( v24 )
    *(_BYTE *)(a5 + 144) = 2;
  v25 = *(_DWORD *)(a5 + 220) | 0x2A;
  *(_BYTE *)(a5 + 147) = 0;
  v26 = v25 | 1;
  *(_DWORD *)(a5 + 220) = v26;
  if ( (*(_DWORD *)(a1 + 56) & 2) == 0 )
    *(_DWORD *)(a5 + 220) = v26 | 4;
  if ( !v7 )
  {
    if ( !ControllerAllocateUncachedExtension(a1, a5) )
    {
LABEL_58:
      NVMeControllerStartFailureEventLog(a1);
      return 2LL;
    }
    if ( !*(_BYTE *)(a1 + 16) )
    {
      v27 = *(unsigned int *)(a1 + 112);
      if ( (_DWORD)v27 )
      {
        v28 = (void **)(a1 + 3872);
        if ( !(unsigned int)StorPortExtendedFunction(0LL, a1, v27, 1701672526LL) )
        {
          if ( *v28 )
            NVMeZeroMemory(*v28, *(_DWORD *)(a1 + 112));
        }
      }
    }
  }
  if ( !(unsigned __int8)ControllerReset(a1) || !(unsigned __int8)NVMeControllerInitPart1(a1) )
    goto LABEL_58;
  v29 = *(_BYTE *)(*(_QWORD *)(a1 + 1624) + 77LL);
  if ( v29 )
    v30 = (1 << v29) * (1 << ((*(_BYTE *)(a1 + 182) & 0xF) + 12));
  else
    v30 = -1;
  *(_DWORD *)(a1 + 192) = v30;
  *(_DWORD *)(a5 + 24) = GetControllerMaxTransferSize((_DWORD *)a1);
  *(_DWORD *)(a5 + 28) = 513;
  *(_BYTE *)(a5 + 72) = 1;
  *(_BYTE *)(a5 + 97) = 1;
  *(_BYTE *)(a5 + 146) = -1;
  *(_DWORD *)(a5 + 212) = 32;
  *(_DWORD *)(a5 + 204) = 32;
  *(_DWORD *)(a5 + 208) = 32;
  if ( !*(_BYTE *)(a1 + 16) )
  {
    v32 = *(_DWORD *)(v31 + 96);
    v34[0] = GUID_NVME_POWER_STATE_TRANSITION_LATENCY_TOLERANCE1;
    v34[1] = GUID_NVME_POWER_IDLE_TIMEOUT1;
    v34[2] = GUID_NVME_POWER_STATE_TRANSITION_LATENCY_TOLERANCE2;
    v34[3] = GUID_NVME_POWER_IDLE_TIMEOUT2;
    v33 = v32 & 2;
    if ( v33 )
      v34[4] = GUID_NVME_POWER_NOPPME;
    StorPortExtendedFunction(26LL, a1, (unsigned int)(v33 != 0) + 4, v34);
  }
  *(_DWORD *)(a1 + 24) &= ~2u;
  return 1LL;
}
