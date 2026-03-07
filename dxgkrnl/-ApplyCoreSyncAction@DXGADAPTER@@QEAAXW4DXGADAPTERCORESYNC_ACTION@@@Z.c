void __fastcall DXGADAPTER::ApplyCoreSyncAction(__int64 a1, int a2)
{
  __int64 v2; // rsi
  struct DXGGLOBAL *Global; // rax
  __int64 v5; // rcx
  PERESOURCE **v6; // rcx
  ADAPTER_RENDER *v7; // rcx
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // rcx
  int v11; // ecx
  __int64 v12; // [rsp+50h] [rbp-48h] BYREF
  __int128 v13; // [rsp+58h] [rbp-40h]
  __int64 v14; // [rsp+68h] [rbp-30h]
  struct _TDR_RECOVERY_CONTEXT *v15; // [rsp+70h] [rbp-28h]

  v2 = a2;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)a1) )
  {
    WdLogSingleEntry1(1LL, 3712LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsCoreResourceExclusiveOwner()", 3712LL, 0LL, 0LL, 0LL, 0LL);
  }
  Global = DXGGLOBAL::GetGlobal();
  WdLogSingleEntry3(9LL, a1, v2, *((unsigned __int8 *)Global + 304400));
  if ( (_DWORD)v2 == 1 || (_DWORD)v2 == 2 || (_DWORD)v2 == 3 )
  {
LABEL_6:
    v5 = *(_QWORD *)(a1 + 2928);
    if ( v5 )
      ADAPTER_RENDER::FlushScheduler(v5, 8u, 0xFFFFFFFF, 0);
    v6 = *(PERESOURCE ***)(a1 + 2920);
    if ( v6 )
      ADAPTER_DISPLAY::ReleaseAllVidPnSourceOwners(v6, *(PERESOURCE ***)(a1 + 2928));
    v7 = *(ADAPTER_RENDER **)(a1 + 2928);
    if ( v7 )
    {
      ADAPTER_RENDER::DisablePinnedHardware(v7);
      if ( (_DWORD)v2 == 3 )
      {
        v8 = 32;
        if ( *(_DWORD *)(a1 + 160) != 1 )
          v8 = 4;
      }
      else
      {
        v8 = 2;
        if ( (_DWORD)v2 != 2 )
        {
          v11 = 0;
          if ( (_DWORD)v2 == 5 )
            v11 = 32;
          v8 = v11;
        }
      }
      v9 = v8 | (*(_BYTE *)(a1 + 207) != 0 ? 65 : 1);
      if ( *(_BYTE *)(a1 + 4784) )
      {
        v9 |= 0x80u;
        *(_BYTE *)(a1 + 4784) = 0;
      }
      ADAPTER_RENDER::FlushScheduler(*(_QWORD *)(a1 + 2928), 9u, 0xFFFFFFFF, 0);
      WdLogSingleEntry2(9LL, a1, *(unsigned __int8 *)(a1 + 2870));
      ADAPTER_RENDER::PurgeSegments(*(_QWORD *)(a1 + 2928), v9, 0LL);
      WdLogSingleEntry3(9LL, a1, *(unsigned __int8 *)(a1 + 2870), 3804LL);
      if ( DXGADAPTER::IsDxgmms2((DXGADAPTER *)a1) )
      {
        if ( *(_BYTE *)(a1 + 2870) )
        {
          v15 = g_TdrRecoveryInProgress;
          v13 = 0LL;
          v12 = 0LL;
          v14 = 0LL;
          *((_QWORD *)g_TdrRecoveryInProgress + 363) = KeGetCurrentThread();
          TdrResetFromTimeoutWorkItem(&v12);
          WdLogSingleEntry1(9LL, a1);
          ADAPTER_RENDER::PurgeSegments(*(_QWORD *)(a1 + 2928), v9, 0LL);
          WdLogSingleEntry3(9LL, a1, *(unsigned __int8 *)(a1 + 2870), 3829LL);
          if ( *(_BYTE *)(a1 + 2870) )
          {
            WdLogSingleEntry1(1LL, 3830LL);
            DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"!IsTdrPending()", 3830LL, 0LL, 0LL, 0LL, 0LL);
          }
        }
      }
    }
    if ( (((_DWORD)v2 - 2) & 0xFFFFFFFC) == 0 )
      DXGADAPTER::StopDeadlockTrackers((DXGADAPTER *)a1);
    return;
  }
  if ( (_DWORD)v2 != 4 )
  {
    if ( (_DWORD)v2 != 5 )
    {
      WdLogSingleEntry1(2LL, v2);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Invalid synchronization action level 0x%I64x",
        v2,
        0LL,
        0LL,
        0LL,
        0LL);
      return;
    }
    goto LABEL_6;
  }
  v10 = *(_QWORD *)(a1 + 2928);
  if ( v10 )
    ADAPTER_RENDER::FlushScheduler(v10, 6u, 0xFFFFFFFF, 0);
}
