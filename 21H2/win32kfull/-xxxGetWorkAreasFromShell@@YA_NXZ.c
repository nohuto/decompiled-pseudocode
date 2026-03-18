/*
 * XREFs of ?xxxGetWorkAreasFromShell@@YA_NXZ @ 0x1C015B57C
 * Callers:
 *     xxxDesktopsRecalcAndBroadcastDisplayChange @ 0x1C00F2300 (xxxDesktopsRecalcAndBroadcastDisplayChange.c)
 * Callees:
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C002393C (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     IntersectRect @ 0x1C004CD28 (IntersectRect.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C0077CC4 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C00788F8 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0079D94 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C007B728 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ddddddddddS @ 0x1C00997F4 (WPP_RECORDER_AND_TRACE_SF_ddddddddddS.c)
 *     ?xxxDisplayChangedHandler@CallShell@@YA_NPEAU_SYNC_DISPLAY_CHANGE_DATA@@@Z @ 0x1C00F49F8 (-xxxDisplayChangedHandler@CallShell@@YA_NPEAU_SYNC_DISPLAY_CHANGE_DATA@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_qdddddddddddd @ 0x1C011F02C (WPP_RECORDER_AND_TRACE_SF_qdddddddddddd.c)
 *     WPP_RECORDER_AND_TRACE_SF_qdd @ 0x1C0149F9C (WPP_RECORDER_AND_TRACE_SF_qdd.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     memset @ 0x1C0160540 (memset.c)
 *     WPP_RECORDER_AND_TRACE_SF_qdddddddd @ 0x1C01CCA28 (WPP_RECORDER_AND_TRACE_SF_qdddddddd.c)
 */

char xxxGetWorkAreasFromShell(void)
{
  unsigned int v0; // r14d
  int v1; // edx
  __int64 v2; // r8
  char v3; // bl
  void *v4; // r9
  struct _SYNC_DISPLAY_CHANGE_DATA *v5; // rdx
  __int64 i; // rdi
  __int64 v7; // rsi
  __int64 v8; // rcx
  int v9; // edx
  char v10; // dl
  int v11; // edx
  int v12; // r8d
  int v13; // r9d
  bool v15; // r10
  int v16; // edx
  char v17; // r13
  unsigned int v18; // r12d
  __int64 v19; // r15
  _DWORD *v20; // rsi
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r14
  PDEVICE_OBJECT v25; // rcx
  int v26; // r9d
  char v27; // dl
  struct tagRECT *v28; // rdi
  __int64 v29; // rcx
  __int16 v30; // ax
  struct _UNICODE_STRING v31; // xmm0
  __int64 v32; // rcx
  LONG top; // eax
  int v34; // [rsp+28h] [rbp-110h]
  int v35; // [rsp+30h] [rbp-108h]
  int v36; // [rsp+38h] [rbp-100h]
  int v37; // [rsp+40h] [rbp-F8h]
  __int64 v38; // [rsp+50h] [rbp-E8h]
  __int64 v39; // [rsp+58h] [rbp-E0h]
  struct _UNICODE_STRING DestinationString; // [rsp+B8h] [rbp-80h] BYREF
  _OWORD v41[76]; // [rsp+C8h] [rbp-70h] BYREF
  _DWORD v42[212]; // [rsp+588h] [rbp+450h] BYREF
  WCHAR SourceString[32]; // [rsp+8D8h] [rbp+7A0h] BYREF

  v0 = *(_DWORD *)*gpDispInfo;
  if ( v0 > 4 )
    v0 = 4;
  memset(v41, 0, 0x4B4uLL);
  v3 = 1;
  LOBYTE(v1) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && _bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0x16u)
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  v4 = &WPP_c7e965b19b733746190bb823e4964b27_Traceguids;
  LOBYTE(v2) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( (_BYTE)v1 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v1,
      v2,
      (unsigned int)&WPP_c7e965b19b733746190bb823e4964b27_Traceguids,
      4,
      23,
      14,
      (__int64)&WPP_c7e965b19b733746190bb823e4964b27_Traceguids);
  v5 = 0LL;
  LODWORD(v41[0]) = 0;
  for ( i = *(_QWORD *)(gpDispInfo + 104LL); i; i = *(_QWORD *)(i + 56) )
  {
    if ( (*(_DWORD *)(*(_QWORD *)(i + 40) + 24LL) & 1) != 0 )
    {
      if ( (unsigned int)v5 >= v0 )
      {
        v15 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
           && _bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0x16u)
           && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
        LOBYTE(v2) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v15 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v16 = 15;
          LOBYTE(v16) = v15;
          WPP_RECORDER_AND_TRACE_SF_D(
            WPP_GLOBAL_Control->AttachedDevice,
            v16,
            v2,
            WPP_MAIN_CB.Queue.ListEntry.Flink,
            2,
            23,
            15,
            (__int64)&WPP_c7e965b19b733746190bb823e4964b27_Traceguids,
            *(_DWORD *)*gpDispInfo);
        }
        break;
      }
      v7 = 300LL * (unsigned int)v5;
      *(_DWORD *)((char *)&v41[17] + v7 + 12) = *(_DWORD *)i;
      *(_DWORD *)((char *)&v41[17] + v7 + 8) = i == *(_QWORD *)(gpDispInfo + 96LL);
      *(_DWORD *)((char *)&v41[1] + v7 + 4) = *(unsigned __int16 *)(*(_QWORD *)(i + 40) + 60LL);
      *(_OWORD *)((char *)v41 + v7 + 4) = *(_OWORD *)(*(_QWORD *)(i + 40) + 28LL);
      *(_OWORD *)((char *)&v41[18] + v7) = *(_OWORD *)(*(_QWORD *)(i + 40) + 44LL);
      memset(&v42[1], 0, 0x344uLL);
      v8 = *(_QWORD *)(i + 80);
      v42[0] = 840;
      DestinationString = 0LL;
      if ( !(unsigned int)DrvGetHdevName(v8, SourceString)
        || (RtlInitUnicodeString(&DestinationString, SourceString),
            (int)DrvEnumDisplayDevices(&DestinationString, 0LL, 0LL, v42, 1, 0) < 0)
        || (int)RtlStringCchCopyW((char *)&v41[1] + v7 + 8, 128LL, (char *)&v42[82]) < 0 )
      {
        LOBYTE(v9) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                  && _bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0x16u)
                  && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
        if ( (_BYTE)v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v2) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_q(
            WPP_GLOBAL_Control->AttachedDevice,
            v9,
            v2,
            16,
            2,
            23,
            16,
            (__int64)&WPP_c7e965b19b733746190bb823e4964b27_Traceguids,
            *(_QWORD *)(i + 80));
        }
      }
      v10 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
         && _bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0x16u)
         && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
      LOBYTE(v2) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_AND_TRACE_SF_ddddddddddS(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          v10,
          v2,
          (__int64)v4,
          v34,
          v35,
          v36,
          v37,
          v41[0],
          *(_DWORD *)((char *)v41 + v7 + 4),
          *(_DWORD *)((char *)v41 + v7 + 8),
          *(_DWORD *)((char *)v41 + v7 + 12),
          *(_DWORD *)((char *)&v41[1] + v7),
          *(_DWORD *)((char *)&v41[18] + v7),
          *(_DWORD *)((char *)&v41[18] + v7 + 4),
          *(_DWORD *)((char *)&v41[18] + v7 + 8),
          *(_DWORD *)((char *)&v41[18] + v7 + 12),
          *(_DWORD *)((char *)&v41[1] + v7 + 4),
          (const char *)&v41[1] + v7 + 8);
      v5 = (struct _SYNC_DISPLAY_CHANGE_DATA *)(unsigned int)++LODWORD(v41[0]);
    }
  }
  if ( CallShell::xxxDisplayChangedHandler((CallShell *)v41, v5, v2, (int)v4) )
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
        19,
        (__int64)&WPP_c7e965b19b733746190bb823e4964b27_Traceguids);
    }
    v17 = 0;
    v18 = 0;
    if ( !LODWORD(v41[0]) )
      return v17;
    while ( 1 )
    {
      v19 = 300LL * v18;
      v20 = (_DWORD *)((char *)v41 + v19 + 4);
      v21 = ValidateHmonitorNoRip(*(unsigned int *)((char *)&v41[17] + v19 + 12));
      v24 = v21;
      if ( !v21 )
      {
        v25 = WPP_GLOBAL_Control;
        LOBYTE(v22) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                   && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) != 0
                   && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
        LOBYTE(v23) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( (_BYTE)v22 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_AND_TRACE_SF_q(
            WPP_GLOBAL_Control->AttachedDevice,
            v22,
            v23,
            20,
            3,
            23,
            20,
            (__int64)&WPP_c7e965b19b733746190bb823e4964b27_Traceguids,
            v20[70]);
        goto LABEL_70;
      }
      v25 = *(PDEVICE_OBJECT *)(v21 + 40);
      v26 = WORD2(v25->Vpb);
      if ( v26 != v20[4] )
      {
        v25 = WPP_GLOBAL_Control;
        LOBYTE(v22) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                   && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) != 0
                   && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
        LOBYTE(v23) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( (_BYTE)v22 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v39) = v26;
          LODWORD(v38) = v20[4];
          WPP_RECORDER_AND_TRACE_SF_qdd(
            (__int64)WPP_GLOBAL_Control->AttachedDevice,
            v22,
            v23,
            (__int64)WPP_MAIN_CB.Queue.ListEntry.Flink,
            3u,
            0x17u,
            0x15u,
            (__int64)&WPP_c7e965b19b733746190bb823e4964b27_Traceguids,
            (unsigned int)v20[70],
            v38,
            v39);
        }
        goto LABEL_70;
      }
      if ( *(struct _DEVICE_OBJECT **)v20 != *(struct _DEVICE_OBJECT **)((char *)&v25->AttachedDevice + 4)
        || (struct _IRP *)*((_QWORD *)v20 + 1) != *(struct _IRP **)((char *)&v25->CurrentIrp + 4) )
      {
        LOBYTE(v22) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                   && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) != 0
                   && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
        LOBYTE(v23) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( (_BYTE)v22 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_AND_TRACE_SF_qdddddddd(
            WPP_GLOBAL_Control->AttachedDevice,
            v22,
            v23,
            WPP_MAIN_CB.Queue.ListEntry.Flink,
            3,
            23,
            22,
            (__int64)&WPP_c7e965b19b733746190bb823e4964b27_Traceguids,
            v20[70],
            *v20,
            v20[1],
            v20[2],
            v20[3],
            HIDWORD(v25->AttachedDevice),
            (char)v25->CurrentIrp,
            HIDWORD(v25->CurrentIrp),
            (char)v25->Timer);
        goto LABEL_70;
      }
      v27 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
         && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) != 0
         && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
      if ( v27 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v28 = (struct tagRECT *)(v20 + 71);
        WPP_RECORDER_AND_TRACE_SF_qdddddddddddd(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          v27,
          WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
          (__int64)WPP_MAIN_CB.Queue.ListEntry.Flink,
          v34,
          v35,
          v36,
          v37);
      }
      else
      {
        v28 = (struct tagRECT *)((char *)&v41[18] + v19);
      }
      DestinationString = 0LL;
      if ( IsRectEmptyInl(v28)
        || !(unsigned int)IntersectRect(&DestinationString, (int *)((char *)v41 + v19 + 4), &v28->left)
        || *(_QWORD *)&DestinationString.Length != *(_QWORD *)&v28->left
        || DestinationString.Buffer != *(PWSTR *)&v28->right )
      {
        v25 = WPP_GLOBAL_Control;
        LOBYTE(v22) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                   && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) != 0
                   && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
        LOBYTE(v23) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( (_BYTE)v22 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_AND_TRACE_SF_(
            WPP_GLOBAL_Control->AttachedDevice,
            v22,
            v23,
            (unsigned int)&WPP_c7e965b19b733746190bb823e4964b27_Traceguids,
            2,
            23,
            24,
            (__int64)&WPP_c7e965b19b733746190bb823e4964b27_Traceguids);
        goto LABEL_70;
      }
      v29 = *(_QWORD *)(v24 + 40);
      if ( *(_QWORD *)(v29 + 44) == *(_QWORD *)&v28->left && *(_QWORD *)(v29 + 52) == *(_QWORD *)&v28->right )
      {
        v25 = WPP_GLOBAL_Control;
        LOBYTE(v22) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                   && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) != 0
                   && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
        LOBYTE(v23) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( !(_BYTE)v22 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_70;
        v30 = 25;
      }
      else
      {
        v31 = *(struct _UNICODE_STRING *)(v29 + 44);
        v17 = 1;
        *(_DWORD *)(v29 + 44) = v28->left;
        v32 = *(_QWORD *)(v24 + 40);
        top = v28->top;
        DestinationString = v31;
        *(_DWORD *)(v32 + 48) = top;
        *(_DWORD *)(*(_QWORD *)(v24 + 40) + 52LL) = v28->right;
        *(_DWORD *)(*(_QWORD *)(v24 + 40) + 56LL) = v28->bottom;
        v25 = WPP_GLOBAL_Control;
        LOBYTE(v22) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                   && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) != 0
                   && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
        LOBYTE(v23) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( !(_BYTE)v22 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_70;
        v30 = 26;
      }
      WPP_RECORDER_AND_TRACE_SF_(
        v25->AttachedDevice,
        v22,
        v23,
        (unsigned int)&WPP_c7e965b19b733746190bb823e4964b27_Traceguids,
        4,
        23,
        v30,
        (__int64)&WPP_c7e965b19b733746190bb823e4964b27_Traceguids);
LABEL_70:
      if ( ++v18 >= LODWORD(v41[0]) )
      {
        if ( v17 )
          CTopologyManager::UpdateCurrent(v25, v22, v23);
        return v17;
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
      18,
      (__int64)&WPP_c7e965b19b733746190bb823e4964b27_Traceguids);
  }
  return 0;
}
