bool __fastcall xxxGetArrangeRectFromShell(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  int v7; // edx
  int v8; // r8d
  int v9; // r9d
  int v10; // r8d
  int v11; // ecx
  int v12; // ecx
  char v13; // dl
  char v14; // dl
  __int64 v15; // rbx
  __int64 v16; // rdx
  int v17; // r8d
  int v18; // r9d
  int FrameBoundsOverlapInfo; // eax
  int v20; // r10d
  int v21; // r12d
  PDEVICE_OBJECT v22; // rcx
  __int16 v23; // ax
  int v24; // edx
  int v25; // r12d
  const char *v26; // r10
  int v27; // esi
  const char *v28; // r9
  int v29; // r8d
  int v31; // [rsp+20h] [rbp-138h]
  int v32; // [rsp+30h] [rbp-128h]
  int v33; // [rsp+38h] [rbp-120h]
  __int128 v35; // [rsp+90h] [rbp-C8h] BYREF
  _BYTE v36[16]; // [rsp+A0h] [rbp-B8h] BYREF
  _BYTE v37[16]; // [rsp+B0h] [rbp-A8h] BYREF
  _DWORD v38[20]; // [rsp+C0h] [rbp-98h]

  memset_0(v36, 0, 0x68uLL);
  if ( !(unsigned __int8)CallShell::xxxArrangementInfoHandler(a1, a3, v36) )
  {
    LOBYTE(v7) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( (_BYTE)v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v8) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v7,
        v8,
        v9,
        4,
        1,
        21,
        (__int64)&WPP_8669ad7b9fbd3d4a6830eab88360ed60_Traceguids);
    }
    goto LABEL_64;
  }
  v10 = v38[0];
  v11 = v38[0];
  *(_OWORD *)a4 = *(_OWORD *)&v38[1];
  if ( !v11 )
  {
LABEL_54:
    MOVESIZEDATA::SHData_StoreShellArrangeInfo((MOVESIZEDATA *)a1, (const struct _WINDOW_ARRANGEMENT_INFO *)v37);
    return v38[0] == 1;
  }
  v12 = v11 - 1;
  if ( v12 )
  {
    if ( v12 != 1 )
    {
      v13 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
         && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
         && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
      if ( v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_AND_TRACE_SF_D(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          v13,
          WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
          (__int64)gFullLog,
          3u,
          1u,
          0x1Au,
          (__int64)&WPP_8669ad7b9fbd3d4a6830eab88360ed60_Traceguids,
          v10);
      goto LABEL_64;
    }
    goto LABEL_54;
  }
  v14 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
     && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
     && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( v14 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_dddddd(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v14,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      (__int64)gFullLog,
      4u,
      1u,
      0x16u,
      (__int64)&WPP_8669ad7b9fbd3d4a6830eab88360ed60_Traceguids);
  v35 = 0LL;
  v15 = *(_QWORD *)(a2 + 40);
  if ( !(unsigned int)IntersectRect(&v35, (int *)a4, (int *)(v15 + 44)) )
    goto LABEL_55;
  v16 = v35 - *(_QWORD *)a4;
  if ( (_QWORD)v35 == *(_QWORD *)a4 )
    v16 = *((_QWORD *)&v35 + 1) - *(_QWORD *)(a4 + 8);
  if ( v16 )
  {
LABEL_55:
    v22 = WPP_GLOBAL_Control;
    LOBYTE(v16) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
    LOBYTE(v17) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !(_BYTE)v16 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_64;
    v23 = 23;
  }
  else
  {
    FrameBoundsOverlapInfo = GetFrameBoundsOverlapInfo((_DWORD *)(v15 + 44), (_DWORD *)a4, 1);
    v21 = ArrangementStyleFromOverlap(FrameBoundsOverlapInfo);
    if ( v21 )
    {
      v31 = v20;
      TransformShellProvidedRectangle(*(_QWORD *)(a1 + 16), (int *)(a1 + 112), (int *)(a1 + 104), a2);
      v25 = *(_DWORD *)(a1 + 200) ^ (*(_DWORD *)(a1 + 200) ^ (v21 << 8)) & 0x300;
      *(_DWORD *)(a1 + 200) = v25;
      LOBYTE(v24) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                 && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
      if ( (_BYTE)v24 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v26 = "right";
        v27 = *(_DWORD *)(a4 + 4);
        v28 = "left";
        if ( (v25 & 0x200) == 0 )
          v26 = " ";
        if ( (v25 & 0x100) == 0 )
          v28 = " ";
        v29 = *(_DWORD *)(a4 + 12) - v27;
        LOBYTE(v29) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_ddddddss(
          WPP_GLOBAL_Control->AttachedDevice,
          v24,
          v29,
          (_DWORD)v28,
          v31,
          a4,
          v32,
          v33,
          *(_DWORD *)a4,
          v27,
          *(_DWORD *)(a4 + 8),
          *(_DWORD *)(a4 + 12),
          *(_DWORD *)(a4 + 8) - *(_DWORD *)a4,
          *(_BYTE *)(a4 + 12) - v27,
          (__int64)v28,
          (__int64)v26);
      }
      goto LABEL_54;
    }
    v22 = WPP_GLOBAL_Control;
    LOBYTE(v16) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
    LOBYTE(v17) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !(_BYTE)v16 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_64;
    v23 = 24;
  }
  WPP_RECORDER_AND_TRACE_SF_(
    v22->AttachedDevice,
    v16,
    v17,
    v18,
    3,
    1,
    v23,
    (__int64)&WPP_8669ad7b9fbd3d4a6830eab88360ed60_Traceguids);
LABEL_64:
  DWM_ARRANGEMENT_DATA::SetShrinkWidth((DWM_ARRANGEMENT_DATA *)(a1 + 344), 0, (const struct MOVESIZEDATA *)a1);
  DWM_ARRANGEMENT_DATA::SendShrinkWidthToDwm((DWM_ARRANGEMENT_DATA *)(a1 + 344), (const struct MOVESIZEDATA *)a1);
  DWM_ARRANGEMENT_DATA::SetPreviewInsertAfter((DWM_ARRANGEMENT_DATA *)(a1 + 344), 0LL, (const struct MOVESIZEDATA *)a1);
  return 0;
}
