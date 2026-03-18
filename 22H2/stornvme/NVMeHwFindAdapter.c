/*
 * XREFs of NVMeHwFindAdapter @ 0x1C0007E10
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0003750 (__security_check_cookie.c)
 *     Feature_Servicing_UniqueTagging__private_IsEnabledDeviceUsage @ 0x1C00037E8 (Feature_Servicing_UniqueTagging__private_IsEnabledDeviceUsage.c)
 *     NVMeControllerCreateLocalCommandPool @ 0x1C00042BC (NVMeControllerCreateLocalCommandPool.c)
 *     NVMeControllerDeleteLocalCommandPool @ 0x1C0004338 (NVMeControllerDeleteLocalCommandPool.c)
 *     memset @ 0x1C0004B80 (memset.c)
 *     ControllerAllocateUncachedExtension @ 0x1C0007528 (ControllerAllocateUncachedExtension.c)
 *     FillControllerRuntimeLog @ 0x1C0007A5C (FillControllerRuntimeLog.c)
 *     GetControllerMaxTransferSize @ 0x1C0007BB0 (GetControllerMaxTransferSize.c)
 *     IsIntelChatham @ 0x1C0007CD8 (IsIntelChatham.c)
 *     NVMeControllerStartFailureEventLog @ 0x1C0007D4C (NVMeControllerStartFailureEventLog.c)
 *     NVMeLogEtwControllerInfo @ 0x1C00088CC (NVMeLogEtwControllerInfo.c)
 *     NVMeZeroMemory @ 0x1C00092D8 (NVMeZeroMemory.c)
 *     ControllerReset @ 0x1C0009728 (ControllerReset.c)
 *     NVMeControllerInitPart1 @ 0x1C000D858 (NVMeControllerInitPart1.c)
 *     GetNVMeRegisterAddress @ 0x1C0025D98 (GetNVMeRegisterAddress.c)
 *     GetRegistrySettings @ 0x1C0025E04 (GetRegistrySettings.c)
 */

__int64 __fastcall NVMeHwFindAdapter(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  char v6; // r12
  __int64 v7; // r15
  int v8; // r13d
  unsigned int v9; // esi
  int v10; // r13d
  char v11; // cl
  char v12; // al
  __int16 v13; // r14
  int v14; // eax
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 *NVMeRegisterAddress; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  int v21; // eax
  unsigned int v22; // eax
  unsigned int v23; // edx
  int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // r8
  _QWORD *v27; // r14
  char v28; // r9
  int v29; // edx
  __int64 v30; // r8
  int v31; // eax
  int v32; // eax
  _DWORD v34[24]; // [rsp+78h] [rbp-90h] BYREF
  _OWORD v35[5]; // [rsp+D8h] [rbp-30h] BYREF
  int v36; // [rsp+128h] [rbp+20h]
  int v37; // [rsp+12Ch] [rbp+24h]
  __int16 v38; // [rsp+130h] [rbp+28h]

  v6 = 0;
  v7 = *(_QWORD *)(a5 + 64);
  memset(v34, 0, 0x58uLL);
  v8 = *(_DWORD *)(a1 + 32);
  v9 = 2;
  v36 = 16843008;
  v37 = 16843009;
  v38 = 257;
  StorPortExtendedFunction(103LL, a1, 10LL);
  v10 = v8 & 2;
  if ( !v10 )
  {
    v11 = g_ControllerExtensionIndex;
    g_ControllerExtension[(unsigned __int8)g_ControllerExtensionIndex] = a1;
    g_ControllerExtensionIndex = (v11 + 1) & 0xF;
  }
  v12 = *(_BYTE *)(a5 + 197);
  v13 = 64;
  *(_BYTE *)(a1 + 20) = v12;
  if ( v12 )
  {
    if ( !v7 )
    {
      *(_DWORD *)(a1 + 36) = 2;
      goto LABEL_63;
    }
    StorPortExtendedFunction(45LL, a1, v7);
    *(_WORD *)(a1 + 4) = *(_WORD *)v7;
    *(_WORD *)(a1 + 6) = *(_WORD *)(v7 + 2);
    *(_BYTE *)(a1 + 8) = *(_BYTE *)(v7 + 4);
    *(_QWORD *)(a1 + 176) = *(_QWORD *)(v7 + 8);
    *(_OWORD *)(a1 + 40) = *(_OWORD *)(v7 + 16);
    *(_OWORD *)(a1 + 56) = *(_OWORD *)(v7 + 32);
    *(_OWORD *)(a1 + 72) = *(_OWORD *)(v7 + 48);
    *(_OWORD *)(a1 + 88) = *(_OWORD *)(v7 + 64);
    *(_OWORD *)(a1 + 104) = *(_OWORD *)(v7 + 80);
    *(_OWORD *)(a1 + 120) = *(_OWORD *)(v7 + 96);
    *(_OWORD *)(a1 + 136) = *(_OWORD *)(v7 + 112);
    *(_OWORD *)(a1 + 152) = *(_OWORD *)(v7 + 128);
    *(_DWORD *)(a1 + 168) = *(_DWORD *)(v7 + 144);
    v14 = *(_DWORD *)(v7 + 148);
    *(_DWORD *)(a1 + 64) |= 4u;
    *(_DWORD *)(a1 + 224) = v14;
  }
  else
  {
    memset(v35, 0, 0x40uLL);
    if ( (unsigned int)StorPortGetBusData(a1, 4LL, *(unsigned int *)(a5 + 4), *(unsigned int *)(a5 + 100), v35, 64) != 64 )
    {
      *(_DWORD *)(a1 + 36) = 3;
      goto LABEL_62;
    }
    *(_DWORD *)(a1 + 4) = v35[0];
    *(_BYTE *)(a1 + 8) = BYTE8(v35[0]);
    if ( IsIntelChatham(a1) )
    {
      v15 = *((_QWORD *)&v35[1] + 1);
      v16 = 4294963200LL;
      v17 = HIDWORD(v35[1]);
    }
    else
    {
      v15 = *(_QWORD *)&v35[1];
      v16 = 4294950912LL;
      v17 = DWORD1(v35[1]);
    }
    *(_QWORD *)(a1 + 176) = v16 & v15 | (v17 << 32);
  }
  NVMeRegisterAddress = (__int64 *)GetNVMeRegisterAddress(a1, a5);
  *(_QWORD *)(a1 + 184) = NVMeRegisterAddress;
  if ( !NVMeRegisterAddress )
  {
    *(_DWORD *)(a1 + 36) = 4;
LABEL_62:
    v6 = 1;
    v9 = 3;
    goto LABEL_63;
  }
  v19 = *NVMeRegisterAddress;
  v20 = *(_QWORD *)(a1 + 184);
  *(_QWORD *)(a1 + 200) = v19;
  LOBYTE(v19) = HIDWORD(*(_QWORD *)(a1 + 200)) & 0xF;
  *(_DWORD *)(a1 + 192) = *(_DWORD *)(v20 + 8);
  *(_DWORD *)(a1 + 208) = 4 << v19;
  if ( IsIntelChatham(a1) )
    *(_BYTE *)(a1 + 203) = 1;
  *(_DWORD *)(a1 + 212) = 500 * *(unsigned __int8 *)(a1 + 203);
  if ( !*(_BYTE *)(a1 + 20) && !v10 )
    GetRegistrySettings(a1);
  v21 = 3;
  if ( *(_DWORD *)(a5 + 20) != 1 )
    v21 = 1;
  *(_DWORD *)(a1 + 16) = v21;
  v22 = *(_DWORD *)(a1 + 44);
  *(_DWORD *)(a1 + 328) = 1048640;
  if ( *(_BYTE *)(a1 + 20) )
  {
    *(_WORD *)(a1 + 332) = 64;
    if ( !v22 || v22 > 0x40 )
      goto LABEL_33;
  }
  else
  {
    *(_WORD *)(a1 + 332) = 256;
    v23 = 1024;
    if ( v22 )
      v23 = v22;
    if ( v23 >= (unsigned __int64)(unsigned __int16)*(_DWORD *)(a1 + 200) + 1 )
      v23 = (unsigned __int16)*(_DWORD *)(a1 + 200) + 1;
    LOWORD(v22) = -1;
    if ( v23 < 0xFFFF )
      LOWORD(v22) = v23;
  }
  v13 = v22;
LABEL_33:
  *(_WORD *)(a1 + 334) = v13;
  *(_BYTE *)(a5 + 81) = 1;
  *(_DWORD *)(a5 + 148) = 1;
  *(_DWORD *)(a5 + 48) = 3;
  *(_BYTE *)(a5 + 145) = 0;
  if ( *(_DWORD *)(a5 + 20) == 1 )
  {
    *(_QWORD *)(a5 + 152) = NVMeHwMSIInterrupt;
    v24 = 2;
  }
  else
  {
    v24 = 1;
  }
  *(_DWORD *)(a5 + 160) = v24;
  *(_DWORD *)(a5 + 216) = 0;
  if ( *(_BYTE *)(a5 + 144) == 0x80 )
    *(_BYTE *)(a5 + 144) = 2;
  *(_DWORD *)(a5 + 220) |= 0x2Bu;
  *(_BYTE *)(a5 + 147) = 0;
  if ( (unsigned int)Feature_Servicing_UniqueTagging__private_IsEnabledDeviceUsage() )
    *(_DWORD *)(a5 + 220) |= 0x80u;
  if ( (*(_DWORD *)(a1 + 64) & 2) == 0 )
    *(_DWORD *)(a5 + 220) |= 4u;
  if ( !v10 )
  {
    if ( !(unsigned __int8)ControllerAllocateUncachedExtension(a1, a5) )
    {
      v6 = 1;
      goto LABEL_63;
    }
    if ( !*(_BYTE *)(a1 + 20) )
    {
      v26 = *(unsigned int *)(a1 + 120);
      if ( (_DWORD)v26 )
      {
        v27 = (_QWORD *)(a1 + 4088);
        if ( !(unsigned int)StorPortExtendedFunction(0LL, a1, v26) )
        {
          if ( *v27 )
            NVMeZeroMemory(*v27, *(unsigned int *)(a1 + 120));
        }
      }
      NVMeControllerCreateLocalCommandPool(a1);
    }
  }
  LOBYTE(v25) = 1;
  if ( (unsigned int)ControllerReset(a1, v25) || (unsigned int)NVMeControllerInitPart1(a1) )
  {
LABEL_63:
    if ( !*(_BYTE *)(a1 + 20) )
    {
      NVMeControllerDeleteLocalCommandPool(a1);
      NVMeControllerStartFailureEventLog(a1);
      NVMeLogEtwControllerInfo(a1);
      if ( v6 )
      {
        FillControllerRuntimeLog(a1, v34);
        StorPortNotification(4109LL, a1, 0LL);
      }
    }
    return v9;
  }
  v28 = *(_BYTE *)(*(_QWORD *)(a1 + 1840) + 77LL);
  if ( v28 )
    v29 = (1 << v28) * (1 << ((*(_BYTE *)(a1 + 206) & 0xF) + 12));
  else
    v29 = -1;
  *(_DWORD *)(a1 + 216) = v29;
  *(_DWORD *)(a5 + 24) = GetControllerMaxTransferSize((_DWORD *)a1);
  *(_DWORD *)(a5 + 212) = 32;
  *(_DWORD *)(a5 + 204) = 32;
  *(_DWORD *)(a5 + 208) = 32;
  *(_DWORD *)(a5 + 28) = 513;
  *(_BYTE *)(a5 + 72) = 1;
  *(_BYTE *)(a5 + 97) = 1;
  *(_BYTE *)(a5 + 146) = -1;
  if ( !*(_BYTE *)(a1 + 20) )
  {
    v31 = *(_DWORD *)(v30 + 96);
    v35[0] = GUID_NVME_POWER_STATE_TRANSITION_LATENCY_TOLERANCE1;
    v35[1] = GUID_NVME_POWER_IDLE_TIMEOUT1;
    v35[2] = GUID_NVME_POWER_STATE_TRANSITION_LATENCY_TOLERANCE2;
    v35[3] = GUID_NVME_POWER_IDLE_TIMEOUT2;
    v32 = v31 & 2;
    if ( v32 )
      v35[4] = GUID_NVME_POWER_NOPPME;
    StorPortExtendedFunction(26LL, a1, (unsigned int)(v32 != 0) + 4);
  }
  *(_DWORD *)(a1 + 32) &= ~2u;
  return 1;
}
