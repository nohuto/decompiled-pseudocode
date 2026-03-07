__int64 __fastcall ADAPTER_RENDER::FlushScheduler(__int64 a1, unsigned int a2, unsigned int a3, int a4)
{
  __int64 v5; // rbp
  __int64 v6; // r9
  __int64 v7; // rbx
  __int64 v9; // rcx
  __int64 v10; // r8
  unsigned __int8 IsDxgmms2; // r15
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned int v15; // r14d
  __int64 v16; // rdx
  int v18; // ebx
  int v19; // ebx
  int v20; // ebx
  int v21; // ebx
  int v22; // eax
  unsigned int v23; // ebx
  _DWORD *v24; // rax
  _DWORD *v25; // rax

  v5 = a3;
  v6 = *(_QWORD *)(a1 + 16);
  v7 = (int)a2;
  if ( *(_BYTE *)(v6 + 209) )
    return DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendFlushAdapter(v6 + 4472, a2, a3);
  IsDxgmms2 = DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(a1 + 16));
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    McTemplateK0pqq_EtwWriteTransfer(v9, &Dxgk_FlushScheduler, v10);
  WdLogSingleEntry2(4LL, v7, v5);
  v15 = 1;
  if ( (int)v7 > 6 )
  {
    if ( (_DWORD)v7 == 7 )
      goto LABEL_23;
    if ( (_DWORD)v7 == 8 )
    {
      if ( !a4 && !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(a1 + 16)) )
      {
        WdLogSingleEntry1(1LL, 2883LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"ExclusiveAccessHeld || IsCoreResourceExclusiveOwner()",
          2883LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      if ( !IsDxgmms2 )
      {
        LODWORD(v25) = DXGADAPTER::GetAdapterType(*(DXGADAPTER **)(a1 + 16));
        if ( (*v25 & 0x10) != 0 )
          return 0LL;
      }
      v16 = 1LL;
      LOBYTE(v14) = a4 != 0;
      goto LABEL_13;
    }
    if ( (_DWORD)v7 != 9 )
    {
      if ( (_DWORD)v7 == 10 )
      {
LABEL_23:
        if ( !a4 && !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(a1 + 16)) )
        {
          WdLogSingleEntry1(1LL, 2878LL);
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"ExclusiveAccessHeld || IsCoreResourceExclusiveOwner()",
            2878LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        LOBYTE(v12) = a4 != 0;
        ADAPTER_RENDER::ResumeScheduler((ADAPTER_RENDER *)a1, v12, (_DWORD)v7 == 10);
        return 0LL;
      }
      goto LABEL_41;
    }
LABEL_15:
    if ( !a4 && !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(a1 + 16)) )
    {
      WdLogSingleEntry1(1LL, 2837LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"ExclusiveAccessHeld || IsCoreResourceExclusiveOwner()",
        2837LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( IsDxgmms2 )
    {
      if ( (_DWORD)v5 == -1 )
      {
LABEL_20:
        LOBYTE(v13) = (_DWORD)v7 == 9;
        ADAPTER_RENDER::SuspendScheduler((ADAPTER_RENDER *)a1, a4 != 0, v13);
        return 0LL;
      }
    }
    else
    {
      LODWORD(v24) = DXGADAPTER::GetAdapterType(*(DXGADAPTER **)(a1 + 16));
      if ( (*v24 & 0x10) != 0 )
        goto LABEL_20;
    }
    LOBYTE(v14) = a4 != 0;
    (*(void (__fastcall **)(_QWORD, __int64, _QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(a1 + 736) + 8LL) + 776LL))(
      *(_QWORD *)(a1 + 744),
      1LL,
      (unsigned int)v5,
      v14);
    goto LABEL_20;
  }
  if ( (_DWORD)v7 == 6 )
    goto LABEL_15;
  v18 = v7 - 1;
  if ( !v18 )
  {
    if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(a1 + 16)) )
    {
      WdLogSingleEntry1(1LL, 2819LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"IsCoreResourceExclusiveOwner()",
        2819LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    LOBYTE(v14) = a4 != 0;
    v16 = 0LL;
LABEL_13:
    (*(void (__fastcall **)(_QWORD, __int64, _QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(a1 + 736) + 8LL) + 776LL))(
      *(_QWORD *)(a1 + 744),
      v16,
      (unsigned int)v5,
      v14);
    return 0LL;
  }
  v19 = v18 - 1;
  if ( !v19 )
    goto LABEL_42;
  v20 = v19 - 1;
  if ( !v20 )
  {
    v15 = 8;
    goto LABEL_42;
  }
  v21 = v20 - 1;
  if ( !v21 )
  {
    v15 = 9;
    goto LABEL_42;
  }
  if ( v21 == 1 )
  {
    v15 = 17;
    goto LABEL_42;
  }
LABEL_41:
  WdLogSingleEntry1(1LL, 2909LL);
  DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"Invalid flush reason!", 2909LL, 0LL, 0LL, 0LL, 0LL);
LABEL_42:
  if ( DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(a1 + 16))
    && *(_DWORD *)(*(_QWORD *)(a1 + 16) + 176LL) != 2 )
  {
    WdLogSingleEntry1(1LL, 2925LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"GetAdapter()->m_ExclusiveAccessReason == DXGADAPTER_EXCLUSIVEACCESS_FLUSHSCHEDULER",
      2925LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v22 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(a1 + 736) + 8LL) + 40LL))(
          *(_QWORD *)(a1 + 744),
          v15);
  v23 = v22;
  if ( v15 >= 8 && v22 < 0 )
  {
    WdLogSingleEntry1(1LL, 2932LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"NT_SUCCESS(Status)", 2932LL, 0LL, 0LL, 0LL, 0LL);
  }
  return v23;
}
