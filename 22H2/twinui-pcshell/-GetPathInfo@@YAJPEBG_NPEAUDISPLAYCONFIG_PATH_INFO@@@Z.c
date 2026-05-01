/*
 * XREFs of ?GetPathInfo@@YAJPEBG_NPEAUDISPLAYCONFIG_PATH_INFO@@@Z @ 0x18035712C
 * Callers:
 *     ?GetTargetDeviceName@WindowingEnvironmentConfig@@AEAAJPEAUHMONITOR__@@PEAUDISPLAYCONFIG_TARGET_DEVICE_NAME@@@Z @ 0x1803573B8 (-GetTargetDeviceName@WindowingEnvironmentConfig@@AEAAJPEAUHMONITOR__@@PEAUDISPLAYCONFIG_TARGET_D.c)
 * Callees:
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180090184 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x180090958 (memset_0.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180090EF4 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall GetPathInfo(
        const unsigned __int16 *a1,
        const struct std::nothrow_t *a2,
        struct DISPLAYCONFIG_PATH_INFO *a3)
{
  DISPLAYCONFIG_PATH_INFO *v3; // rbx
  DISPLAYCONFIG_MODE_INFO *v4; // rdi
  int DisplayConfigBufferSizes; // eax
  bool v6; // sf
  size_t v7; // rax
  size_t v8; // rax
  DISPLAYCONFIG_MODE_INFO *modeInfoArray; // rax
  int v10; // r15d
  UINT32 v11; // r14d
  const unsigned __int16 *v12; // r12
  LONG DeviceInfo; // eax
  signed int v14; // esi
  unsigned __int16 *v15; // rax
  int v16; // ecx
  DISPLAYCONFIG_VIDEO_OUTPUT_TECHNOLOGY outputTechnology; // eax
  struct DISPLAYCONFIG_PATH_INFO *v18; // r12
  UINT32 numPathArrayElements; // [rsp+38h] [rbp-59h] BYREF
  UINT32 numModeInfoArrayElements; // [rsp+3Ch] [rbp-55h] BYREF
  const unsigned __int16 *v22; // [rsp+40h] [rbp-51h]
  struct DISPLAYCONFIG_PATH_INFO *v23; // [rsp+48h] [rbp-49h]
  DISPLAYCONFIG_DEVICE_INFO_HEADER requestPacket; // [rsp+58h] [rbp-39h] BYREF
  _BYTE v25[76]; // [rsp+6Ch] [rbp-25h] BYREF

  v23 = a3;
  numPathArrayElements = 0;
  v3 = 0LL;
  numModeInfoArrayElements = 0;
  v4 = 0LL;
  v22 = a1;
  do
  {
    if ( v3 )
      operator delete(v3, a2);
    v3 = 0LL;
    if ( v4 )
      operator delete(v4, a2);
    v4 = 0LL;
    DisplayConfigBufferSizes = GetDisplayConfigBufferSizes(2u, &numPathArrayElements, &numModeInfoArrayElements);
    v6 = DisplayConfigBufferSizes < 0;
    if ( DisplayConfigBufferSizes > 0 )
    {
      DisplayConfigBufferSizes = (unsigned __int16)DisplayConfigBufferSizes | 0x80070000;
      v6 = DisplayConfigBufferSizes < 0;
    }
    if ( v6 )
      break;
    v7 = 72LL * numPathArrayElements;
    if ( !is_mul_ok(numPathArrayElements, 0x48uLL) )
      v7 = -1LL;
    v3 = (DISPLAYCONFIG_PATH_INFO *)operator new[](v7, (const struct std::nothrow_t *)&std::nothrow);
    if ( !v3 )
      goto LABEL_38;
    v8 = (unsigned __int64)numModeInfoArrayElements << 6;
    if ( !is_mul_ok(numModeInfoArrayElements, 0x40uLL) )
      v8 = -1LL;
    modeInfoArray = (DISPLAYCONFIG_MODE_INFO *)operator new[](v8, (const struct std::nothrow_t *)&std::nothrow);
    v4 = modeInfoArray;
    if ( !modeInfoArray )
    {
      DisplayConfigBufferSizes = -2147024882;
      break;
    }
    DisplayConfigBufferSizes = QueryDisplayConfig(
                                 2u,
                                 &numPathArrayElements,
                                 v3,
                                 &numModeInfoArrayElements,
                                 modeInfoArray,
                                 0LL);
    if ( DisplayConfigBufferSizes > 0 )
      DisplayConfigBufferSizes = (unsigned __int16)DisplayConfigBufferSizes | 0x80070000;
  }
  while ( DisplayConfigBufferSizes == -2147024774 );
  v10 = -1;
  if ( DisplayConfigBufferSizes >= 0 )
  {
    v11 = 0;
    if ( numPathArrayElements )
    {
      v12 = v22;
      do
      {
        memset_0(&requestPacket, 0, 0x54uLL);
        requestPacket.type = DISPLAYCONFIG_DEVICE_INFO_GET_SOURCE_NAME;
        requestPacket.size = 84;
        requestPacket.adapterId = v3[v11].sourceInfo.adapterId;
        requestPacket.id = v3[v11].sourceInfo.id;
        DeviceInfo = DisplayConfigGetDeviceInfo(&requestPacket);
        v14 = DeviceInfo;
        if ( DeviceInfo > 0 )
          v14 = (unsigned __int16)DeviceInfo | 0x80070000;
        if ( v14 >= 0 )
        {
          v15 = (unsigned __int16 *)v12;
          do
          {
            a2 = (const struct std::nothrow_t *)*(unsigned __int16 *)((char *)v15 + v25 - (_BYTE *)v12);
            v16 = *v15 - (_DWORD)a2;
            if ( v16 )
              break;
            ++v15;
          }
          while ( (_DWORD)a2 );
          if ( !v16 )
          {
            if ( v10 == -1
              || (outputTechnology = v3[v11].targetInfo.outputTechnology, outputTechnology == 0x80000000)
              || outputTechnology == DISPLAYCONFIG_OUTPUT_TECHNOLOGY_DISPLAYPORT_EMBEDDED
              || outputTechnology == DISPLAYCONFIG_OUTPUT_TECHNOLOGY_UDI_EMBEDDED )
            {
              v10 = v11;
            }
          }
        }
        ++v11;
      }
      while ( v11 < numPathArrayElements );
      v18 = v23;
      if ( v10 != -1 )
      {
        *(_OWORD *)&v23->sourceInfo.adapterId.LowPart = *(_OWORD *)&v3[v10].sourceInfo.adapterId.LowPart;
        *(_OWORD *)&v18->sourceInfo.statusFlags = *(_OWORD *)&v3[v10].sourceInfo.statusFlags;
        *(_OWORD *)&v18->targetInfo.modeInfoIdx = *(_OWORD *)&v3[v10].targetInfo.modeInfoIdx;
        *(_OWORD *)&v18->targetInfo.refreshRate.Numerator = *(_OWORD *)&v3[v10].targetInfo.refreshRate.Numerator;
        *(_QWORD *)&v18->targetInfo.statusFlags = *(_QWORD *)&v3[v10].targetInfo.statusFlags;
        goto LABEL_39;
      }
    }
  }
LABEL_38:
  v14 = -2147024809;
LABEL_39:
  if ( v3 )
    operator delete(v3, a2);
  if ( v4 )
    operator delete(v4, a2);
  return (unsigned int)v14;
}
