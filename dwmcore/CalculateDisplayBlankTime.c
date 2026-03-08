/*
 * XREFs of CalculateDisplayBlankTime @ 0x1801FF76C
 * Callers:
 *     ?Initialize@CComputeScribbleScheduler@@AEAAJPEAUIDXGIOutputDWM@@PEAUIDCompositionDirectInkCommunicationPartner@@@Z @ 0x1802000E0 (-Initialize@CComputeScribbleScheduler@@AEAAJPEAUIDXGIOutputDWM@@PEAUIDCompositionDirectInkCommun.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800E18AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@UDISPLAYCONFIG_MODE_INFO@@V?$allocator@UDISPLAYCONFIG_MODE_INFO@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x1801FF000 (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@UDISPLAYCONFIG_MODE_INFO@@V-$allocator@UDI.c)
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@UDISPLAYCONFIG_PATH_INFO@@V?$allocator@UDISPLAYCONFIG_PATH_INFO@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x1801FF0E0 (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@UDISPLAYCONFIG_PATH_INFO@@V-$allocator@UDI.c)
 *     ??$_Uninitialized_value_construct_n@V?$allocator@UDISPLAYCONFIG_MODE_INFO@@@std@@@std@@YAPEAUDISPLAYCONFIG_MODE_INFO@@PEAU1@_KAEAV?$allocator@UDISPLAYCONFIG_MODE_INFO@@@0@@Z @ 0x1801FF2B0 (--$_Uninitialized_value_construct_n@V-$allocator@UDISPLAYCONFIG_MODE_INFO@@@std@@@std@@YAPEAUDIS.c)
 *     ??$_Uninitialized_value_construct_n@V?$allocator@UDISPLAYCONFIG_PATH_INFO@@@std@@@std@@YAPEAUDISPLAYCONFIG_PATH_INFO@@PEAU1@_KAEAV?$allocator@UDISPLAYCONFIG_PATH_INFO@@@0@@Z @ 0x1801FF2F0 (--$_Uninitialized_value_construct_n@V-$allocator@UDISPLAYCONFIG_PATH_INFO@@@std@@@std@@YAPEAUDIS.c)
 *     ??1?$vector@UDISPLAYCONFIG_MODE_INFO@@V?$allocator@UDISPLAYCONFIG_MODE_INFO@@@std@@@std@@QEAA@XZ @ 0x1801FF488 (--1-$vector@UDISPLAYCONFIG_MODE_INFO@@V-$allocator@UDISPLAYCONFIG_MODE_INFO@@@std@@@std@@QEAA@XZ.c)
 *     ??1?$vector@UDISPLAYCONFIG_PATH_INFO@@V?$allocator@UDISPLAYCONFIG_PATH_INFO@@@std@@@std@@QEAA@XZ @ 0x1801FF4C4 (--1-$vector@UDISPLAYCONFIG_PATH_INFO@@V-$allocator@UDISPLAYCONFIG_PATH_INFO@@@std@@@std@@QEAA@XZ.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x1802009AC (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 */

__int64 __fastcall CalculateDisplayBlankTime(__int64 a1, int a2, double *a3)
{
  __int64 v3; // rdi
  char *v4; // r12
  __int64 v5; // rsi
  DISPLAYCONFIG_PATH_INFO *v6; // r15
  char *v8; // r14
  DISPLAYCONFIG_MODE_INFO *v9; // rbx
  unsigned int DisplayConfigBufferSizes; // eax
  unsigned int v11; // r8d
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rax
  __int64 v14; // rdx
  unsigned int v15; // r8d
  unsigned __int64 v16; // rdx
  __int64 v18; // rcx
  double v19; // xmm1_8
  double v20; // xmm0_8
  __int64 v21; // rax
  unsigned int v22; // ebx
  unsigned int modeInfoArray; // [rsp+20h] [rbp-50h]
  UINT32 numPathArrayElements; // [rsp+30h] [rbp-40h] BYREF
  DISPLAYCONFIG_MODE_INFO *v25[2]; // [rsp+38h] [rbp-38h] BYREF
  __int64 v26; // [rsp+48h] [rbp-28h]
  DISPLAYCONFIG_PATH_INFO *pathArray[2]; // [rsp+50h] [rbp-20h] BYREF
  __int64 v28; // [rsp+60h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+38h]
  UINT32 numModeInfoArrayElements; // [rsp+C8h] [rbp+58h] BYREF

  v3 = 0LL;
  *(_OWORD *)pathArray = 0LL;
  v4 = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  *(_OWORD *)v25 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  v26 = 0LL;
  v28 = 0LL;
  do
  {
    DisplayConfigBufferSizes = GetDisplayConfigBufferSizes(0x42u, &numPathArrayElements, &numModeInfoArrayElements);
    if ( DisplayConfigBufferSizes )
    {
      v14 = 37LL;
LABEL_35:
      v22 = wil::details::in1diag3::Return_Win32(
              retaddr,
              (void *)v14,
              v11,
              (const char *)DisplayConfigBufferSizes,
              modeInfoArray);
LABEL_36:
      std::vector<DISPLAYCONFIG_MODE_INFO>::~vector<DISPLAYCONFIG_MODE_INFO>((__int64)v25);
      std::vector<DISPLAYCONFIG_PATH_INFO>::~vector<DISPLAYCONFIG_PATH_INFO>((__int64)pathArray);
      return v22;
    }
    v12 = 0x8E38E38E38E38E39uLL * ((v4 - (char *)v6) >> 3);
    if ( numPathArrayElements >= v12 )
    {
      if ( numPathArrayElements > v12 )
      {
        if ( numPathArrayElements <= 0x8E38E38E38E38E39uLL * ((v3 - (__int64)v6) >> 3) )
        {
          v4 = std::_Uninitialized_value_construct_n<std::allocator<DISPLAYCONFIG_PATH_INFO>>(
                 v4,
                 numPathArrayElements - v12);
          pathArray[1] = (DISPLAYCONFIG_PATH_INFO *)v4;
        }
        else
        {
          std::vector<DISPLAYCONFIG_PATH_INFO>::_Resize_reallocate<std::_Value_init_tag>(
            (__int64)pathArray,
            numPathArrayElements);
          v4 = (char *)pathArray[1];
        }
        v6 = pathArray[0];
        v3 = v28;
      }
    }
    else
    {
      v4 = (char *)&v6[numPathArrayElements];
      pathArray[1] = (DISPLAYCONFIG_PATH_INFO *)v4;
    }
    v13 = (v8 - (char *)v9) >> 6;
    if ( numModeInfoArrayElements >= v13 )
    {
      if ( numModeInfoArrayElements > v13 )
      {
        if ( numModeInfoArrayElements <= (unsigned __int64)((v5 - (__int64)v9) >> 6) )
        {
          v8 = std::_Uninitialized_value_construct_n<std::allocator<DISPLAYCONFIG_MODE_INFO>>(
                 v8,
                 numModeInfoArrayElements - v13);
          v25[1] = (DISPLAYCONFIG_MODE_INFO *)v8;
        }
        else
        {
          std::vector<DISPLAYCONFIG_MODE_INFO>::_Resize_reallocate<std::_Value_init_tag>(
            (__int64)v25,
            numModeInfoArrayElements);
          v8 = (char *)v25[1];
        }
        v9 = v25[0];
        v5 = v26;
      }
    }
    else
    {
      v8 = (char *)&v9[(unsigned __int64)numModeInfoArrayElements];
      v25[1] = (DISPLAYCONFIG_MODE_INFO *)v8;
    }
    DisplayConfigBufferSizes = QueryDisplayConfig(0x42u, &numPathArrayElements, v6, &numModeInfoArrayElements, v9, 0LL);
  }
  while ( DisplayConfigBufferSizes == 122 );
  if ( DisplayConfigBufferSizes )
  {
    v14 = 50LL;
    goto LABEL_35;
  }
  v15 = 0;
  if ( numModeInfoArrayElements )
  {
    while ( 1 )
    {
      v16 = (unsigned __int64)v15 << 6;
      if ( *(DISPLAYCONFIG_MODE_INFO_TYPE *)((char *)&v9->infoType + v16) == DISPLAYCONFIG_MODE_INFO_TYPE_TARGET
        && (*(unsigned int *)((char *)&v9->adapterId.LowPart + v16) | (unsigned __int64)((__int64)(int)HIDWORD(*(unsigned __int64 *)((char *)&v9->adapterId + v16)) << 32)) == a1
        && *(UINT32 *)((char *)&v9->id + v16) == a2 )
      {
        break;
      }
      if ( ++v15 >= numModeInfoArrayElements )
        goto LABEL_25;
    }
    v18 = *(UINT64 *)((char *)&v9->targetMode.targetVideoSignalInfo.pixelRate + v16);
    v19 = (double)(*(UINT32 *)((char *)&v9->targetMode.targetVideoSignalInfo.totalSize.cx + v16)
                 * (*(UINT32 *)((char *)&v9->targetMode.targetVideoSignalInfo.totalSize.cy + v16)
                  - *(UINT32 *)((char *)&v9->targetMode.targetVideoSignalInfo.activeSize.cy + v16)));
    if ( v18 < 0 )
    {
      v21 = *(UINT64 *)((_BYTE *)&v9->targetMode.targetVideoSignalInfo.pixelRate + v16) & 1 | (*(UINT64 *)((char *)&v9->targetMode.targetVideoSignalInfo.pixelRate + v16) >> 1);
      v20 = (double)(int)v21 + (double)(int)v21;
    }
    else
    {
      v20 = (double)(int)v18;
    }
    v22 = 0;
    *a3 = v19 / v20;
    goto LABEL_36;
  }
LABEL_25:
  *a3 = 0.001000000047497451;
  if ( v9 )
    std::_Deallocate<16,0>(v9, (v5 - (_QWORD)v9) & 0xFFFFFFFFFFFFFFC0uLL);
  if ( v6 )
    std::_Deallocate<16,0>(v6, 8 * ((v3 - (__int64)v6) >> 3));
  return 0LL;
}
