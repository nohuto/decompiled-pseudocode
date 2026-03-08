/*
 * XREFs of DpiGdoDispatchInternalIoctl @ 0x1C01A7070
 * Callers:
 *     <none>
 * Callees:
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x1C000A240 (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     memset @ 0x1C0027640 (memset.c)
 *     ?DmmGetCurrentIntegerVSyncFromClientVidPnSource@@YAJPEAXIPEAIPEAW4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@@Z @ 0x1C01785EC (-DmmGetCurrentIntegerVSyncFromClientVidPnSource@@YAJPEAXIPEAIPEAW4_D3DDDI_VIDEO_SIGNAL_SCANLINE_.c)
 *     DxgkUseAdapterViewInCurrentSession @ 0x1C017D64C (DxgkUseAdapterViewInCurrentSession.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C0180684 (DpiReleaseCoreSyncAccessSafe.c)
 *     DxgkReleaseAdapterCoreSync @ 0x1C0180708 (DxgkReleaseAdapterCoreSync.c)
 *     DpiEnableD3Requests @ 0x1C0180A2C (DpiEnableD3Requests.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C0180B30 (DpiAcquireCoreSyncAccessSafe.c)
 *     ?DmmIsPresentPathInClientVidPnTopology@@YAJQEAXIIPEAE@Z @ 0x1C0184774 (-DmmIsPresentPathInClientVidPnTopology@@YAJQEAXIIPEAE@Z.c)
 *     DxgkGetAllMonitorDevicesFromSessionView @ 0x1C01A6DD8 (DxgkGetAllMonitorDevicesFromSessionView.c)
 *     DxgkAcquireSessionModeChangeLock @ 0x1C01AF914 (DxgkAcquireSessionModeChangeLock.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C01AFADC (DxgkReleaseSessionModeChangeLock.c)
 *     ?DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z @ 0x1C01B0684 (-DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z.c)
 *     ?DmmCanAddPresentPathToClientVidPn@@YAJQEAXIIPEAE@Z @ 0x1C01DB59C (-DmmCanAddPresentPathToClientVidPn@@YAJQEAXIIPEAE@Z.c)
 *     DxgkPowerOnOffMonitor @ 0x1C01E1214 (DxgkPowerOnOffMonitor.c)
 */

__int64 __fastcall DpiGdoDispatchInternalIoctl(__int64 a1, IRP *a2)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r8
  __int64 v4; // r15
  __int64 v5; // rbx
  _DWORD *UserBuffer; // r12
  __int64 v7; // rdi
  __int64 Length; // r9
  __m128i *Parameters; // rsi
  __int64 v10; // r14
  __int64 v11; // rcx
  char *v12; // rsi
  int v13; // eax
  int AllMonitorDevicesFromSessionView; // eax
  char v15; // r13
  unsigned int v16; // edi
  char *Pool2; // rax
  unsigned int v18; // edx
  unsigned int v19; // r13d
  __int64 v20; // r8
  __int64 *v21; // rdi
  char *v22; // r13
  char v23; // r12
  int v24; // esi
  void *v25; // rcx
  bool v26; // al
  unsigned int v27; // r8d
  int v28; // edx
  DXGADAPTER *v29; // rcx
  int v30; // eax
  __int64 v31; // rdi
  PIRP v32; // rcx
  bool v34; // zf
  int CurrentProcessSessionId; // r12d
  int v36; // eax
  int v37; // eax
  unsigned int v38; // edx
  void *v39; // rcx
  int v40; // eax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __m128i v43; // xmm0
  __int64 v44; // rcx
  int v45; // eax
  __int64 v46; // rdx
  __int64 v47; // rdx
  __int64 v48; // rcx
  unsigned int v49; // [rsp+30h] [rbp-38h] BYREF
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v50; // [rsp+34h] [rbp-34h] BYREF
  size_t Size; // [rsp+38h] [rbp-30h]
  _DWORD *v52; // [rsp+40h] [rbp-28h]
  int v53[4]; // [rsp+48h] [rbp-20h] BYREF
  __int64 v54; // [rsp+B0h] [rbp+48h] BYREF
  PIRP Irp; // [rsp+B8h] [rbp+50h]
  enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING v56; // [rsp+C0h] [rbp+58h] BYREF
  unsigned int v57; // [rsp+C8h] [rbp+60h] BYREF

  Irp = a2;
  v54 = a1;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v4 = *(_QWORD *)(a1 + 64);
  v5 = 0LL;
  UserBuffer = a2->UserBuffer;
  LODWORD(v7) = -1073741637;
  v52 = UserBuffer;
  Length = CurrentStackLocation->Parameters.Read.Length;
  Parameters = (__m128i *)CurrentStackLocation->Parameters.CreatePipe.Parameters;
  v10 = *(_QWORD *)(*(_QWORD *)(v4 + 32) + 64LL);
  if ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart == 2301967 )
  {
    v43 = *Parameters;
    v44 = *(_QWORD *)(v10 + 24);
    LODWORD(v54) = -1;
    *(__m128i *)v53 = v43;
    v45 = DxgkPowerOnOffMonitor(
            v44,
            1,
            (int)&v54,
            (int)v53,
            1,
            (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)_mm_srli_si128(v43, 8).m128i_i64[0]);
    v7 = v45;
    if ( v45 >= 0 )
      goto LABEL_26;
    goto LABEL_76;
  }
  v11 = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart - 2301979;
  if ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart != 2301979 )
  {
    if ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart == 2301983 )
    {
      *(_QWORD *)(v4 + 184) = Parameters->m128i_i64[0];
      Parameters[1].m128i_i32[0] = *(unsigned __int8 *)(v10 + 1157);
      Parameters[1].m128i_i64[1] = *(_QWORD *)(v10 + 152);
      Parameters[2].m128i_i32[0] = 0;
      if ( !*(_DWORD *)(v4 + 156) )
      {
        v40 = 0;
        if ( *(_BYTE *)(v10 + 1152) == 1 )
          v40 = 0x20000000;
        Parameters[2].m128i_i32[0] = v40;
      }
      LODWORD(v7) = 0;
      v5 = 40LL;
      goto LABEL_26;
    }
    if ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart != 2301995 )
    {
      if ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart == 2302003 )
      {
        if ( (unsigned int)Length >= 0x20 && UserBuffer )
        {
          LODWORD(v7) = 0;
          v5 = 32LL;
          *UserBuffer = *(_DWORD *)(*(_QWORD *)(v4 + 40) + 24LL);
          UserBuffer[1] = *(_DWORD *)(v4 + 156);
          *((_QWORD *)UserBuffer + 1) = *(_QWORD *)(v10 + 3912);
          *((_QWORD *)UserBuffer + 2) = *(_QWORD *)(*(_QWORD *)(v10 + 3912) + 404LL);
          *((_QWORD *)UserBuffer + 3) = *(_QWORD *)(*(_QWORD *)(v10 + 3912) + 4636LL);
          goto LABEL_26;
        }
      }
      else
      {
        if ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart != 2302019 )
          goto LABEL_26;
        if ( (unsigned int)Length >= 8 && UserBuffer )
        {
          LODWORD(v54) = 0;
          v56 = D3DDDI_VSSLO_UNINITIALIZED;
          LODWORD(v7) = DpiAcquireCoreSyncAccessSafe(a1, 1);
          if ( (int)v7 < 0 )
            goto LABEL_26;
          LODWORD(v7) = DmmGetCurrentIntegerVSyncFromClientVidPnSource(
                          *(DXGADAPTER **)(v10 + 3912),
                          *(_DWORD *)(v4 + 156),
                          (unsigned int *)&v54,
                          &v56);
          DpiReleaseCoreSyncAccessSafe(a1, 1);
          if ( (int)v7 >= 0 )
          {
            v34 = v56 == D3DDDI_VSSLO_PROGRESSIVE;
            *UserBuffer = v54;
            *((_BYTE *)UserBuffer + 4) = v34;
            goto LABEL_26;
          }
          v41 = *(unsigned int *)(v4 + 156);
          v42 = 3LL;
LABEL_61:
          WdLogSingleEntry1(v42, v41);
          goto LABEL_26;
        }
      }
LABEL_64:
      LODWORD(v7) = -1073741789;
      goto LABEL_26;
    }
    if ( CurrentStackLocation->Parameters.Create.Options < 8 || !Parameters )
      goto LABEL_64;
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(
                                CurrentStackLocation->Parameters.Read.ByteOffset.LowPart - 2301995,
                                a2,
                                CurrentStackLocation,
                                Length);
    if ( Parameters->m128i_i32[0] == 1 )
    {
      v36 = *(_DWORD *)(v4 + 192);
      if ( v36 != -1 && v36 != CurrentProcessSessionId )
      {
        v46 = -1073741637LL;
LABEL_68:
        WdLogSingleEntry1(3LL, v46);
        goto LABEL_69;
      }
      if ( (int)DxgkUseAdapterViewInCurrentSession((struct _LUID *)(v10 + 2672), *(_DWORD *)(v4 + 156), 1) < 0 )
      {
LABEL_69:
        Parameters->m128i_i32[1] = 0;
        goto LABEL_45;
      }
      *(_DWORD *)(v4 + 192) = CurrentProcessSessionId;
    }
    else
    {
      v37 = DxgkUseAdapterViewInCurrentSession((struct _LUID *)(v10 + 2672), *(_DWORD *)(v4 + 156), 0);
      if ( *(_DWORD *)(v4 + 192) != CurrentProcessSessionId )
      {
        v46 = v37;
        goto LABEL_68;
      }
      *(_DWORD *)(v4 + 192) = -1;
    }
    Parameters->m128i_i32[1] = 1;
LABEL_45:
    LODWORD(v7) = 0;
    goto LABEL_26;
  }
  v57 = 0;
  v12 = 0LL;
  LOBYTE(v56) = 0;
  v13 = DxgkAcquireSessionModeChangeLock(v11);
  v7 = v13;
  if ( v13 < 0 )
  {
LABEL_76:
    v42 = 2LL;
    v41 = v7;
    goto LABEL_61;
  }
  AllMonitorDevicesFromSessionView = DxgkGetAllMonitorDevicesFromSessionView(
                                       (struct _LUID *)(v10 + 2672),
                                       *(_DWORD *)(v4 + 156),
                                       (__int64)&v56,
                                       &v57,
                                       0LL);
  LODWORD(v7) = AllMonitorDevicesFromSessionView;
  if ( (int)(AllMonitorDevicesFromSessionView + 0x80000000) >= 0 && AllMonitorDevicesFromSessionView != -2147483643 )
  {
    v47 = AllMonitorDevicesFromSessionView;
    v48 = 2LL;
LABEL_71:
    WdLogSingleEntry1(v48, v47);
LABEL_74:
    DxgkReleaseSessionModeChangeLock();
    goto LABEL_26;
  }
  v15 = v56;
  v16 = ((_BYTE)v56 != D3DDDI_VSSLO_UNINITIALIZED ? v57 : 0) + *(_DWORD *)(v10 + 3680);
  if ( !v16 )
    goto LABEL_25;
  v50 = D3DKMDT_VOT_HD15;
  LOBYTE(v57) = 0;
  Size = 20 * (v16 + 1);
  Pool2 = (char *)ExAllocatePool2(256LL, Size, 1953656900LL);
  *(_QWORD *)v53 = Pool2;
  v12 = Pool2;
  if ( !Pool2 )
  {
    v47 = -1073741801LL;
    LODWORD(v7) = -1073741801;
    v48 = 6LL;
    goto LABEL_71;
  }
  memset(Pool2, 0, (unsigned int)Size);
  if ( v15 )
  {
    v18 = *(_DWORD *)(v4 + 156);
    v49 = v16;
    LODWORD(v7) = DxgkGetAllMonitorDevicesFromSessionView(
                    (struct _LUID *)(v10 + 2672),
                    v18,
                    (__int64)&v56,
                    &v49,
                    (__int64)v12);
    if ( (int)v7 < 0 )
    {
LABEL_73:
      ExFreePoolWithTag(v12, 0);
      goto LABEL_74;
    }
    v19 = v49;
  }
  else
  {
    v19 = 0;
  }
  KeEnterCriticalRegion();
  Size = v10 + 3320;
  ExAcquireResourceSharedLite((PERESOURCE)(v10 + 3320), 1u);
  LODWORD(v7) = DpiAcquireCoreSyncAccessSafe(v54, 0);
  if ( (int)v7 < 0 )
  {
    ExReleaseResourceLite((PERESOURCE)Size);
    KeLeaveCriticalRegion();
    goto LABEL_73;
  }
  v21 = *(__int64 **)(v10 + 3664);
  v22 = &v12[20 * v19];
  if ( !*(_DWORD *)(v10 + 3680) )
    goto LABEL_22;
  v23 = v56;
  v24 = 0;
  while ( *v21 != *(_QWORD *)(v10 + 3664) )
  {
    if ( *((_DWORD *)v21 + 124) != 1 || *((_BYTE *)v21 + 510) != 1 )
      goto LABEL_20;
    v25 = *(void **)(v10 + 3912);
    v49 = *((_DWORD *)v21 + 126);
    DmmGetVideoOutputTechnology(v25, v49, &v50, 0LL);
    v26 = IsInternalVideoOutput(v50);
    v27 = v49;
    v22[16] = v26;
    v28 = *(_DWORD *)(v4 + 156);
    v29 = *(DXGADAPTER **)(v10 + 3912);
    LOBYTE(v57) = 0;
    DmmIsPresentPathInClientVidPnTopology(v29, v28, v27, (bool *)&v57);
    if ( !(_BYTE)v57 )
    {
      if ( !*((_BYTE *)v21 + 944) )
        goto LABEL_20;
      v38 = *(_DWORD *)(v4 + 156);
      v39 = *(void **)(v10 + 3912);
      LOBYTE(v56) = 0;
      if ( DmmCanAddPresentPathToClientVidPn(v39, v38, v49, (unsigned __int8 *)&v56) < 0 || !(_BYTE)v56 )
        goto LABEL_20;
      v30 = 0;
      goto LABEL_19;
    }
    if ( v23 )
    {
      v30 = 1;
LABEL_19:
      *(_DWORD *)v22 = v30 | 0x20000000;
      *((_DWORD *)v22 + 1) = v49;
      *((_QWORD *)v22 + 1) = *(_QWORD *)(v10 + 2672);
      v22 += 20;
    }
LABEL_20:
    v21 = (__int64 *)*v21;
    if ( (unsigned int)++v24 >= *(_DWORD *)(v10 + 3680) )
      break;
  }
  UserBuffer = v52;
  v12 = *(char **)v53;
LABEL_22:
  v31 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v54 + 64) + 32LL) + 64LL);
  if ( *(_BYTE *)(v31 + 482) )
    DpiEnableD3Requests(*(_QWORD *)(v31 + 24));
  DxgkReleaseAdapterCoreSync(*(_QWORD *)(v31 + 3912), 1u, v20);
  ExReleaseResourceLite((PERESOURCE)(v31 + 3808));
  KeLeaveCriticalRegion();
  ExReleaseResourceLite((PERESOURCE)Size);
  KeLeaveCriticalRegion();
LABEL_25:
  DxgkReleaseSessionModeChangeLock();
  LODWORD(v7) = 0;
  *(_QWORD *)UserBuffer = v12;
  v5 = 8LL;
LABEL_26:
  v32 = Irp;
  Irp->IoStatus.Status = v7;
  v32->IoStatus.Information = v5;
  IofCompleteRequest(v32, 1);
  return (unsigned int)v7;
}
