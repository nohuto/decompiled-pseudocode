__int64 __fastcall BlackScreenDiagnostics::GetVidPnOwnership(_DWORD *a1)
{
  int DisplayConfigBufferSizes; // ebx
  size_t v3; // rbx
  DISPLAYCONFIG_PATH_INFO *v4; // rdi
  __int64 v5; // rcx
  __int64 v6; // rdi
  NTSTATUS v7; // eax
  UINT32 numPathArrayElements; // [rsp+38h] [rbp-9h] BYREF
  UINT32 numModeInfoArrayElements; // [rsp+3Ch] [rbp-5h] BYREF
  __int64 v11; // [rsp+40h] [rbp-1h] BYREF
  DISPLAYCONFIG_PATH_INFO *pathArray[2]; // [rsp+48h] [rbp+7h] BYREF
  __int64 v13; // [rsp+58h] [rbp+17h]
  DISPLAYCONFIG_MODE_INFO *modeInfoArray[2]; // [rsp+60h] [rbp+1Fh] BYREF
  __int64 v15; // [rsp+70h] [rbp+2Fh]
  LUID adapterId; // [rsp+78h] [rbp+37h] BYREF
  int v17; // [rsp+80h] [rbp+3Fh]

  numPathArrayElements = 0;
  numModeInfoArrayElements = 0;
  DisplayConfigBufferSizes = GetDisplayConfigBufferSizes(2u, &numPathArrayElements, &numModeInfoArrayElements);
  if ( DisplayConfigBufferSizes >= 0 )
  {
    if ( !numPathArrayElements )
    {
      *a1 = 4;
      return (unsigned int)DisplayConfigBufferSizes;
    }
    v13 = 0LL;
    v3 = numPathArrayElements;
    *(_OWORD *)pathArray = 0LL;
    std::vector<DISPLAYCONFIG_PATH_INFO>::_Buy_nonzero(pathArray, numPathArrayElements);
    v4 = pathArray[0];
    v3 *= 72LL;
    memset_0(pathArray[0], 0, v3);
    v11 = 0LL;
    pathArray[1] = (DISPLAYCONFIG_PATH_INFO *)((char *)v4 + v3);
    std::_Tidy_guard<std::vector<DISPLAYCONFIG_PATH_INFO>>::~_Tidy_guard<std::vector<DISPLAYCONFIG_PATH_INFO>>(&v11);
    v15 = 0LL;
    *(_OWORD *)modeInfoArray = 0LL;
    std::vector<DISPLAYCONFIG_MODE_INFO>::_Construct_n<>((void **)modeInfoArray, numModeInfoArrayElements);
    DisplayConfigBufferSizes = QueryDisplayConfig(
                                 2u,
                                 &numPathArrayElements,
                                 pathArray[0],
                                 &numModeInfoArrayElements,
                                 modeInfoArray[0],
                                 0LL);
    if ( DisplayConfigBufferSizes < 0 )
    {
      *a1 = 5;
      goto LABEL_22;
    }
    v5 = 0LL;
    if ( numPathArrayElements )
    {
      while ( 1 )
      {
        v6 = v5;
        if ( !*(_QWORD *)&modeInfoArray[0][(unsigned __int64)pathArray[0][v5].sourceInfo.modeInfoIdx].desktopImageInfo.DesktopImageRegion.top )
          break;
        v5 = (unsigned int)(v5 + 1);
        if ( (unsigned int)v5 >= numPathArrayElements )
          goto LABEL_22;
      }
      v17 = 0;
      adapterId = pathArray[0][v5].sourceInfo.adapterId;
      v7 = D3DKMTOpenAdapterFromLuid(&adapterId, numPathArrayElements, pathArray[0], modeInfoArray[0]);
      if ( v7 < 0 )
      {
        *a1 = 6;
        goto LABEL_20;
      }
      LODWORD(v11) = v17;
      HIDWORD(v11) = pathArray[0][v6].sourceInfo.id;
      v7 = D3DKMTCheckVidPnExclusiveOwnership(&v11);
      if ( v7 == -1071775738 )
      {
        *a1 = 2;
      }
      else if ( v7 == -1071775732 )
      {
        *a1 = 3;
      }
      else
      {
        if ( v7 )
        {
          *a1 = 7;
LABEL_20:
          DisplayConfigBufferSizes = RtlNtStatusToDosError(v7);
          goto LABEL_22;
        }
        *a1 = 1;
      }
      DisplayConfigBufferSizes = 0;
    }
LABEL_22:
    std::vector<DISPLAYCONFIG_MODE_INFO>::_Tidy(modeInfoArray);
    std::vector<DISPLAYCONFIG_PATH_INFO>::_Tidy(pathArray);
  }
  return (unsigned int)DisplayConfigBufferSizes;
}
