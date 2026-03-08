/*
 * XREFs of NVMeHwFindAdapter @ 0x1C0007CD0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0003260 (__security_check_cookie.c)
 *     NVMeControllerCreateLocalCommandPool @ 0x1C0003408 (NVMeControllerCreateLocalCommandPool.c)
 *     NVMeControllerDeleteLocalCommandPool @ 0x1C0003484 (NVMeControllerDeleteLocalCommandPool.c)
 *     Feature_Servicing_Huawei22H2BluescreenAfterSleep__private_IsEnabledDeviceUsage @ 0x1C000361C (Feature_Servicing_Huawei22H2BluescreenAfterSleep__private_IsEnabledDeviceUsage.c)
 *     memset @ 0x1C0004580 (memset.c)
 *     ControllerAllocateUncachedExtension @ 0x1C00073D4 (ControllerAllocateUncachedExtension.c)
 *     FillControllerRuntimeLog @ 0x1C0007908 (FillControllerRuntimeLog.c)
 *     GetControllerMaxTransferSize @ 0x1C0007A5C (GetControllerMaxTransferSize.c)
 *     IsDumpMode @ 0x1C0007B84 (IsDumpMode.c)
 *     IsIntelChatham @ 0x1C0007B94 (IsIntelChatham.c)
 *     NVMeControllerStartFailureEventLog @ 0x1C0007C08 (NVMeControllerStartFailureEventLog.c)
 *     NVMeLogEtwControllerInfo @ 0x1C000880C (NVMeLogEtwControllerInfo.c)
 *     NVMeZeroMemory @ 0x1C0009218 (NVMeZeroMemory.c)
 *     ControllerReset @ 0x1C0009668 (ControllerReset.c)
 *     NVMeControllerInitPart1 @ 0x1C000D7A8 (NVMeControllerInitPart1.c)
 *     GetNVMeRegisterAddress @ 0x1C0025DF4 (GetNVMeRegisterAddress.c)
 *     GetRegistrySettings @ 0x1C0025E60 (GetRegistrySettings.c)
 */

__int64 __fastcall NVMeHwFindAdapter(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  char v6; // r13
  __int64 v7; // r15
  int v8; // r12d
  unsigned int v9; // esi
  int v10; // r12d
  char v11; // cl
  __int16 v12; // r14
  int v13; // eax
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 *NVMeRegisterAddress; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rcx
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  unsigned int v24; // r8d
  __int64 v25; // r9
  __int16 v26; // ax
  int v27; // eax
  int v28; // ecx
  int v29; // ecx
  __int64 v30; // r8
  _QWORD *v31; // r14
  _QWORD *v32; // r14
  char v33; // r9
  int v34; // edx
  __int64 v35; // r8
  int v36; // eax
  int v37; // eax
  _DWORD v39[24]; // [rsp+78h] [rbp-90h] BYREF
  _OWORD v40[5]; // [rsp+D8h] [rbp-30h] BYREF
  _DWORD v41[2]; // [rsp+128h] [rbp+20h] BYREF
  __int16 v42; // [rsp+130h] [rbp+28h]

  v6 = 0;
  v7 = *(_QWORD *)(a5 + 64);
  memset(v39, 0, 0x58uLL);
  v8 = *(_DWORD *)(a1 + 32);
  v9 = 2;
  v41[0] = 16843008;
  v41[1] = 16843009;
  v42 = 257;
  StorPortExtendedFunction(103LL, a1, 10LL, v41);
  v10 = v8 & 2;
  if ( !v10 )
  {
    v11 = g_ControllerExtensionIndex;
    g_ControllerExtension[(unsigned __int8)g_ControllerExtensionIndex] = a1;
    g_ControllerExtensionIndex = (v11 + 1) & 0xF;
  }
  *(_BYTE *)(a1 + 20) = *(_BYTE *)(a5 + 197);
  v12 = 64;
  if ( IsDumpMode(a1) )
  {
    if ( !v7 )
    {
      *(_DWORD *)(a1 + 36) = 2;
      goto LABEL_66;
    }
    StorPortExtendedFunction(45LL, a1, v7, 152LL);
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
    v13 = *(_DWORD *)(v7 + 148);
    *(_DWORD *)(a1 + 64) |= 4u;
    *(_DWORD *)(a1 + 224) = v13;
  }
  else
  {
    memset(v40, 0, 0x40uLL);
    if ( (unsigned int)StorPortGetBusData(a1, 4LL, *(unsigned int *)(a5 + 4), *(unsigned int *)(a5 + 100), v40, 64) != 64 )
    {
      *(_DWORD *)(a1 + 36) = 3;
      goto LABEL_64;
    }
    *(_DWORD *)(a1 + 4) = v40[0];
    *(_BYTE *)(a1 + 8) = BYTE8(v40[0]);
    if ( IsIntelChatham(a1) )
    {
      v14 = *((_QWORD *)&v40[1] + 1);
      v15 = 4294963200LL;
      v16 = HIDWORD(v40[1]);
    }
    else
    {
      v14 = *(_QWORD *)&v40[1];
      v15 = 4294950912LL;
      v16 = DWORD1(v40[1]);
    }
    *(_QWORD *)(a1 + 176) = v15 & v14 | (v16 << 32);
  }
  NVMeRegisterAddress = (__int64 *)GetNVMeRegisterAddress(a1, a5);
  *(_QWORD *)(a1 + 184) = NVMeRegisterAddress;
  if ( !NVMeRegisterAddress )
  {
    *(_DWORD *)(a1 + 36) = 4;
LABEL_64:
    v9 = 3;
    goto LABEL_65;
  }
  v18 = *NVMeRegisterAddress;
  v19 = *(_QWORD *)(a1 + 184);
  *(_QWORD *)(a1 + 200) = v18;
  LOBYTE(v18) = HIDWORD(*(_QWORD *)(a1 + 200)) & 0xF;
  *(_DWORD *)(a1 + 192) = *(_DWORD *)(v19 + 8);
  *(_DWORD *)(a1 + 208) = 4 << v18;
  if ( IsIntelChatham(a1) )
    *(_BYTE *)(a1 + 203) = 1;
  *(_DWORD *)(a1 + 212) = 500 * *(unsigned __int8 *)(a1 + 203);
  if ( !IsDumpMode(a1) && !v10 )
    GetRegistrySettings(v20);
  v21 = 3;
  if ( *(_DWORD *)(a5 + 20) != 1 )
    v21 = 1;
  *(_DWORD *)(a1 + 16) = v21;
  *(_DWORD *)(a1 + 328) = 1048640;
  if ( IsDumpMode(a1) )
  {
    *(_WORD *)(a1 + 332) = 64;
    if ( v24 && v24 <= 0x40 )
      v12 = v24;
  }
  else
  {
    *(_WORD *)(a1 + 332) = 256;
    v22 = 1024LL;
    if ( v24 )
      v22 = v24;
    if ( (unsigned int)v22 >= v25 + (unsigned __int64)(unsigned __int16)*(_DWORD *)(a1 + 200) )
      v22 = (unsigned int)v25 + (unsigned __int16)*(_DWORD *)(a1 + 200);
    v26 = -1;
    v23 = a1;
    if ( (unsigned int)v22 < 0xFFFF )
      v26 = v22;
    v12 = v26;
  }
  *(_WORD *)(v23 + 334) = v12;
  *(_DWORD *)(a5 + 48) = 3;
  *(_BYTE *)(a5 + 81) = v25;
  *(_BYTE *)(a5 + 145) = 0;
  *(_DWORD *)(a5 + 148) = v25;
  if ( *(_DWORD *)(a5 + 20) == (_DWORD)v25 )
  {
    *(_QWORD *)(a5 + 152) = NVMeHwMSIInterrupt;
    v27 = 2;
  }
  else
  {
    v27 = v25;
  }
  *(_DWORD *)(a5 + 160) = v27;
  *(_DWORD *)(a5 + 216) = 0;
  if ( *(_BYTE *)(a5 + 144) == 0x80 )
    *(_BYTE *)(a5 + 144) = 2;
  v28 = *(_DWORD *)(a5 + 220) | 2;
  *(_BYTE *)(a5 + 147) = 0;
  v29 = v25 | v28 | 0x28;
  *(_DWORD *)(a5 + 220) = v29;
  if ( (*(_DWORD *)(a1 + 64) & 2) == 0 )
    *(_DWORD *)(a5 + 220) = v29 | 4;
  if ( !v10 )
  {
    if ( !(unsigned __int8)ControllerAllocateUncachedExtension(a1, a5) )
    {
LABEL_65:
      v6 = 1;
      goto LABEL_66;
    }
    Feature_Servicing_Huawei22H2BluescreenAfterSleep__private_IsEnabledDeviceUsage();
    if ( !IsDumpMode(a1) )
    {
      v30 = *(unsigned int *)(a1 + 120);
      if ( (_DWORD)v22 )
      {
        if ( (_DWORD)v30 )
        {
          v31 = (_QWORD *)(a1 + 4088);
          if ( !(unsigned int)StorPortExtendedFunction(0LL, a1, v30, 1701672526LL) )
          {
            if ( *v31 )
              NVMeZeroMemory(*v31, *(unsigned int *)(a1 + 120));
          }
        }
        NVMeControllerCreateLocalCommandPool(a1);
      }
      else if ( (_DWORD)v30 )
      {
        v32 = (_QWORD *)(a1 + 4088);
        if ( !(unsigned int)StorPortExtendedFunction(0LL, a1, v30, 1701672526LL) )
        {
          if ( *v32 )
            NVMeZeroMemory(*v32, *(unsigned int *)(a1 + 120));
        }
      }
    }
  }
  LOBYTE(v22) = 1;
  if ( (unsigned int)ControllerReset(a1, v22) || (unsigned int)NVMeControllerInitPart1(a1) )
  {
LABEL_66:
    if ( !IsDumpMode(a1) )
    {
      if ( (unsigned int)Feature_Servicing_Huawei22H2BluescreenAfterSleep__private_IsEnabledDeviceUsage() )
        NVMeControllerDeleteLocalCommandPool(a1);
      NVMeControllerStartFailureEventLog(a1);
      NVMeLogEtwControllerInfo(a1);
      if ( v6 )
      {
        FillControllerRuntimeLog(a1, v39);
        StorPortNotification(4109LL, a1, 0LL);
      }
    }
    return v9;
  }
  v33 = *(_BYTE *)(*(_QWORD *)(a1 + 1840) + 77LL);
  if ( v33 )
    v34 = (1 << v33) * (1 << ((*(_BYTE *)(a1 + 206) & 0xF) + 12));
  else
    v34 = -1;
  *(_DWORD *)(a1 + 216) = v34;
  *(_DWORD *)(a5 + 24) = GetControllerMaxTransferSize((_DWORD *)a1);
  *(_DWORD *)(a5 + 28) = 513;
  *(_DWORD *)(a5 + 212) = 32;
  *(_DWORD *)(a5 + 204) = 32;
  *(_DWORD *)(a5 + 208) = 32;
  *(_BYTE *)(a5 + 72) = 1;
  *(_BYTE *)(a5 + 97) = 1;
  *(_BYTE *)(a5 + 146) = -1;
  if ( !IsDumpMode(a1) )
  {
    v36 = *(_DWORD *)(v35 + 96);
    v40[0] = GUID_NVME_POWER_STATE_TRANSITION_LATENCY_TOLERANCE1;
    v40[1] = GUID_NVME_POWER_IDLE_TIMEOUT1;
    v40[2] = GUID_NVME_POWER_STATE_TRANSITION_LATENCY_TOLERANCE2;
    v40[3] = GUID_NVME_POWER_IDLE_TIMEOUT2;
    v37 = v36 & 2;
    if ( v37 )
      v40[4] = GUID_NVME_POWER_NOPPME;
    StorPortExtendedFunction(26LL, a1, (unsigned int)(v37 != 0) + 4, v40);
  }
  *(_DWORD *)(a1 + 32) &= ~2u;
  return 1;
}
