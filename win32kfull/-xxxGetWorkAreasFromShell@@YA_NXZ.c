/*
 * XREFs of ?xxxGetWorkAreasFromShell@@YA_NXZ @ 0x1C00F7B94
 * Callers:
 *     xxxDesktopsRecalcAndBroadcastDisplayChange @ 0x1C00F7660 (xxxDesktopsRecalcAndBroadcastDisplayChange.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C00200C4 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C003E064 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C003E900 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     ?UpdateCurrent@CTopologyManager@@SAXXZ @ 0x1C00E2C28 (-UpdateCurrent@CTopologyManager@@SAXXZ.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C00E42C8 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ddddddddddS @ 0x1C00F79F0 (WPP_RECORDER_AND_TRACE_SF_ddddddddddS.c)
 *     ?xxxDisplayChangedHandler@CallShell@@YA_NPEAU_SYNC_DISPLAY_CHANGE_DATA@@@Z @ 0x1C00F7F74 (-xxxDisplayChangedHandler@CallShell@@YA_NPEAU_SYNC_DISPLAY_CHANGE_DATA@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_qdd @ 0x1C00FAEF8 (WPP_RECORDER_AND_TRACE_SF_qdd.c)
 *     IntersectRect @ 0x1C00FEBD4 (IntersectRect.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C010A9B4 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
 *     WPP_RECORDER_AND_TRACE_SF_qdddddddd @ 0x1C01A777C (WPP_RECORDER_AND_TRACE_SF_qdddddddd.c)
 *     WPP_RECORDER_AND_TRACE_SF_qdddddddddddd @ 0x1C01F6D80 (WPP_RECORDER_AND_TRACE_SF_qdddddddddddd.c)
 */

char xxxGetWorkAreasFromShell(void)
{
  unsigned int v0; // r14d
  int v1; // edx
  int v2; // r8d
  char v3; // bl
  struct _SYNC_DISPLAY_CHANGE_DATA *v4; // rdx
  __int64 i; // rdi
  unsigned __int64 v6; // rsi
  __int64 v7; // rcx
  __int64 v8; // r9
  char v9; // dl
  char v10; // dl
  int v11; // edx
  int v12; // r8d
  int v13; // r9d
  char v15; // r10
  char v16; // r13
  unsigned int v17; // r12d
  unsigned __int64 v18; // r15
  _DWORD *v19; // rsi
  __int64 v20; // rax
  int v21; // r8d
  __int64 v22; // r14
  char v23; // dl
  __int64 v24; // rdx
  int v25; // r10d
  int v26; // r9d
  __int64 v27; // rcx
  bool v28; // r10
  unsigned __int16 *v29; // rdi
  int v30; // eax
  int v31; // edx
  int v32; // r8d
  __int64 v33; // rax
  char *v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // rcx
  PDEVICE_OBJECT v37; // rcx
  __int16 v38; // ax
  struct _UNICODE_STRING v39; // xmm0
  __int64 v40; // rcx
  int v41; // eax
  bool v42; // r10
  int v43; // eax
  int v44; // [rsp+28h] [rbp-110h]
  int v45; // [rsp+30h] [rbp-108h]
  int v46; // [rsp+38h] [rbp-100h]
  int v47; // [rsp+40h] [rbp-F8h]
  int v48; // [rsp+78h] [rbp-C0h]
  int v49; // [rsp+78h] [rbp-C0h]
  int v50; // [rsp+80h] [rbp-B8h]
  int v51; // [rsp+80h] [rbp-B8h]
  int v52; // [rsp+88h] [rbp-B0h]
  int v53; // [rsp+88h] [rbp-B0h]
  struct _UNICODE_STRING DestinationString; // [rsp+B8h] [rbp-80h] BYREF
  _DWORD v55[6]; // [rsp+C8h] [rbp-70h] BYREF
  unsigned __int16 v56[596]; // [rsp+E0h] [rbp-58h] BYREF
  int v57; // [rsp+588h] [rbp+450h] BYREF
  _BYTE v58[324]; // [rsp+58Ch] [rbp+454h] BYREF
  unsigned __int16 v59[260]; // [rsp+6D0h] [rbp+598h] BYREF
  WCHAR SourceString[32]; // [rsp+8D8h] [rbp+7A0h] BYREF

  v0 = *(_DWORD *)*gpDispInfo;
  if ( v0 > 4 )
    v0 = 4;
  memset_0(v55, 0, 0x4B4uLL);
  v3 = 1;
  LOBYTE(v1) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && _bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0x16u)
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)v1 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v2) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v1,
      v2,
      23,
      4,
      23,
      15,
      (__int64)&WPP_cd3fe56ee1413630481d590c05906531_Traceguids);
  }
  v4 = 0LL;
  v55[0] = 0;
  for ( i = *(_QWORD *)(gpDispInfo + 104LL); i; i = *(_QWORD *)(i + 56) )
  {
    if ( (*(_DWORD *)(*(_QWORD *)(i + 40) + 24LL) & 1) != 0 )
    {
      if ( (unsigned int)v4 >= v0 )
      {
        v15 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
           && _bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0x16u)
           && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
        if ( v15 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_AND_TRACE_SF_d(
            (__int64)WPP_GLOBAL_Control->AttachedDevice,
            v15,
            WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
            (__int64)gFullLog,
            2u,
            0x17u,
            0x10u,
            (__int64)&WPP_cd3fe56ee1413630481d590c05906531_Traceguids);
        break;
      }
      v6 = 300LL * (unsigned int)v4;
      *(_DWORD *)&v56[v6 / 2 + 130] = *(_DWORD *)i;
      *(_DWORD *)&v56[v6 / 2 + 128] = i == *(_QWORD *)(gpDispInfo + 96LL);
      v55[v6 / 4 + 5] = *(unsigned __int16 *)(*(_QWORD *)(i + 40) + 60LL);
      *(_OWORD *)&v55[v6 / 4 + 1] = *(_OWORD *)(*(_QWORD *)(i + 40) + 28LL);
      *(_OWORD *)&v56[v6 / 2 + 132] = *(_OWORD *)(*(_QWORD *)(i + 40) + 44LL);
      memset_0(v58, 0, 0x344uLL);
      v7 = *(_QWORD *)(i + 80);
      v57 = 840;
      DestinationString = 0LL;
      if ( !(unsigned int)DrvGetHdevName(v7, SourceString)
        || (RtlInitUnicodeString(&DestinationString, SourceString),
            (int)DrvEnumDisplayDevices(&DestinationString, 0LL, 0LL, &v57, 1, 0) < 0)
        || RtlStringCchCopyW(&v56[v6 / 2], 0x80uLL, v59) < 0 )
      {
        v9 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          && _bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0x16u)
          && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
        if ( v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_AND_TRACE_SF_q(
            (__int64)WPP_GLOBAL_Control->AttachedDevice,
            v9,
            WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
            17LL,
            2u,
            0x17u,
            0x11u,
            (__int64)&WPP_cd3fe56ee1413630481d590c05906531_Traceguids);
      }
      v10 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
         && _bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0x16u)
         && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
      if ( v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_AND_TRACE_SF_ddddddddddS(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          v10,
          WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
          v8,
          v44,
          v45,
          v46,
          v47,
          v55[0],
          v55[v6 / 4 + 1],
          v55[v6 / 4 + 2],
          v55[v6 / 4 + 3],
          v55[v6 / 4 + 4],
          *(_DWORD *)&v56[v6 / 2 + 132],
          *(_DWORD *)&v56[v6 / 2 + 134],
          *(_DWORD *)&v56[v6 / 2 + 136],
          *(_DWORD *)&v56[v6 / 2 + 138],
          v55[v6 / 4 + 5],
          (const char *)&v56[v6 / 2]);
      v4 = (struct _SYNC_DISPLAY_CHANGE_DATA *)(unsigned int)++v55[0];
    }
  }
  if ( CallShell::xxxDisplayChangedHandler((CallShell *)v55, v4) )
  {
    LOBYTE(v11) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && _bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0x16u)
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( (_BYTE)v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v12) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v11,
        v12,
        v13,
        4,
        23,
        20,
        (__int64)&WPP_cd3fe56ee1413630481d590c05906531_Traceguids);
    }
    v16 = 0;
    v17 = 0;
    if ( !v55[0] )
      return v16;
    while ( 1 )
    {
      v18 = 300LL * v17;
      v19 = &v55[v18 / 4 + 1];
      v20 = ValidateHmonitorNoRip((unsigned int)v55[v18 / 4 + 71]);
      v22 = v20;
      if ( !v20 )
      {
        v23 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
           && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) != 0
           && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
        if ( v23 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_AND_TRACE_SF_q(
            (__int64)WPP_GLOBAL_Control->AttachedDevice,
            v23,
            WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
            21LL,
            3u,
            0x17u,
            0x15u,
            (__int64)&WPP_cd3fe56ee1413630481d590c05906531_Traceguids);
        goto LABEL_72;
      }
      v24 = *(_QWORD *)(v20 + 40);
      v25 = v19[4];
      v26 = *(unsigned __int16 *)(v24 + 60);
      if ( v26 != v25 )
      {
        LOBYTE(v24) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                   && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) != 0
                   && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
        if ( (_BYTE)v24 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v21) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_qdd(
            WPP_GLOBAL_Control->AttachedDevice,
            v24,
            v21,
            (_DWORD)gFullLog,
            3,
            23,
            22,
            (__int64)&WPP_cd3fe56ee1413630481d590c05906531_Traceguids,
            v19[70],
            v25,
            v26);
        }
        goto LABEL_72;
      }
      v27 = *(_QWORD *)v19 - *(_QWORD *)(v24 + 28);
      if ( *(_QWORD *)v19 == *(_QWORD *)(v24 + 28) )
        v27 = *((_QWORD *)v19 + 1) - *(_QWORD *)(v24 + 36);
      if ( v27 )
      {
        v42 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
           && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) != 0
           && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
        if ( v42 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v53 = *(_DWORD *)(v24 + 40);
          v51 = *(_DWORD *)(v24 + 36);
          v49 = *(_DWORD *)(v24 + 32);
          v43 = *(_DWORD *)(v24 + 28);
          LOBYTE(v24) = v42;
          LOBYTE(v21) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_qdddddddd(
            WPP_GLOBAL_Control->AttachedDevice,
            v24,
            v21,
            (_DWORD)gFullLog,
            3,
            23,
            23,
            (__int64)&WPP_cd3fe56ee1413630481d590c05906531_Traceguids,
            v19[70],
            *v19,
            v19[1],
            v19[2],
            v19[3],
            v43,
            v49,
            v51,
            v53);
        }
        goto LABEL_72;
      }
      v28 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
         && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) != 0
         && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
      if ( v28 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v29 = (unsigned __int16 *)(v19 + 71);
        v52 = *(_DWORD *)(v24 + 56);
        v50 = *(_DWORD *)(v24 + 52);
        v48 = *(_DWORD *)(v24 + 48);
        v30 = *(_DWORD *)(v24 + 44);
        LOBYTE(v24) = v28;
        LOBYTE(v21) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_qdddddddddddd(
          WPP_GLOBAL_Control->AttachedDevice,
          v24,
          v21,
          (_DWORD)gFullLog,
          v44,
          v45,
          v46,
          v47,
          v22,
          *v19,
          v55[75 * v17 + 2],
          v55[75 * v17 + 3],
          v55[75 * v17 + 4],
          v30,
          v48,
          v50,
          v52,
          v19[71],
          v19[72],
          v19[73],
          v19[74]);
      }
      else
      {
        v29 = &v56[v18 / 2 + 132];
      }
      DestinationString = 0LL;
      if ( IsRectEmptyInl((const struct tagRECT *)v29)
        || !(unsigned int)IntersectRect(&DestinationString, &v55[v18 / 4 + 1], v29) )
      {
        goto LABEL_126;
      }
      v33 = *(_QWORD *)v29;
      v34 = (char *)(*(_QWORD *)&DestinationString.Length - *(_QWORD *)v29);
      if ( *(_QWORD *)&DestinationString.Length == *(_QWORD *)v29 )
        v34 = (char *)DestinationString.Buffer - *((_QWORD *)v29 + 1);
      if ( v34 )
      {
LABEL_126:
        LOBYTE(v31) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                   && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) != 0
                   && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
        if ( (_BYTE)v31 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v32) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_(
            WPP_GLOBAL_Control->AttachedDevice,
            v31,
            v32,
            (unsigned int)&WPP_cd3fe56ee1413630481d590c05906531_Traceguids,
            2,
            23,
            25,
            (__int64)&WPP_cd3fe56ee1413630481d590c05906531_Traceguids);
        }
        goto LABEL_72;
      }
      v35 = *(_QWORD *)(v22 + 40);
      v36 = *(_QWORD *)(v35 + 44) - v33;
      if ( !v36 )
        v36 = *(_QWORD *)(v35 + 52) - *((_QWORD *)v29 + 1);
      if ( v36 )
      {
        v39 = *(struct _UNICODE_STRING *)(v35 + 44);
        *(_DWORD *)(v35 + 44) = v33;
        v16 = 1;
        v40 = *(_QWORD *)(v22 + 40);
        v41 = *((_DWORD *)v29 + 1);
        DestinationString = v39;
        *(_DWORD *)(v40 + 48) = v41;
        *(_DWORD *)(*(_QWORD *)(v22 + 40) + 52LL) = *((_DWORD *)v29 + 2);
        *(_DWORD *)(*(_QWORD *)(v22 + 40) + 56LL) = *((_DWORD *)v29 + 3);
        v37 = WPP_GLOBAL_Control;
        LOBYTE(v35) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                   && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) != 0
                   && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
        LOBYTE(v32) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( !(_BYTE)v35 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_72;
        v38 = 27;
      }
      else
      {
        v37 = WPP_GLOBAL_Control;
        LOBYTE(v35) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                   && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) != 0
                   && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
        LOBYTE(v32) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( !(_BYTE)v35 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_72;
        v38 = 26;
      }
      WPP_RECORDER_AND_TRACE_SF_(
        v37->AttachedDevice,
        v35,
        v32,
        (unsigned int)&WPP_cd3fe56ee1413630481d590c05906531_Traceguids,
        4,
        23,
        v38,
        (__int64)&WPP_cd3fe56ee1413630481d590c05906531_Traceguids);
LABEL_72:
      if ( ++v17 >= v55[0] )
      {
        if ( v16 )
          CTopologyManager::UpdateCurrent();
        return v16;
      }
    }
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0x16u)
    || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
  {
    v3 = 0;
  }
  if ( v3 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v11) = v3;
    LOBYTE(v12) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v11,
      v12,
      v13,
      4,
      23,
      19,
      (__int64)&WPP_cd3fe56ee1413630481d590c05906531_Traceguids);
  }
  return 0;
}
