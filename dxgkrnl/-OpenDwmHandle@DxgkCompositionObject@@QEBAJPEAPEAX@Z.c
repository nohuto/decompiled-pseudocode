/*
 * XREFs of ?OpenDwmHandle@DxgkCompositionObject@@QEBAJPEAPEAX@Z @ 0x1C000DE9C
 * Callers:
 *     ?DxgkOpenDwmHandleForCompositionObjectReference@@YAJPEAXPEAPEAX@Z @ 0x1C000DBA0 (-DxgkOpenDwmHandleForCompositionObjectReference@@YAJPEAXPEAPEAX@Z.c)
 *     ?DxgkQuerySwapChainBindingStatus@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C000DC0C (-DxgkQuerySwapChainBindingStatus@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     ?NotifyPendingFlipPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C0079CE0 (-NotifyPendingFlipPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     ?QuerySwapChainBindingStatus@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@QEAAJIPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C02DE710 (-QuerySwapChainBindingStatus@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@QEAAJIPEAU_D3DKMT_PRESENTHISTORY.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x1C0042014 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 */

__int64 __fastcall DxgkCompositionObject::OpenDwmHandle(PVOID Object, PHANDLE Handle)
{
  char v4; // si
  struct _KPROCESS *v5; // rax
  struct _KPROCESS *v6; // rdi
  unsigned int v7; // ebx
  int v9; // edx
  int v10; // ecx
  int v11; // r8d
  int v12; // edx
  int v13; // ecx
  int v14; // r8d
  int v15; // edx
  int v16; // ecx
  int v17; // r8d
  int v18; // edx
  int v19; // ecx
  int v20; // r8d
  int v21; // edx
  int v22; // ecx
  int v23; // r8d
  int v24; // edx
  int v25; // ecx
  int v26; // r8d
  _KAPC_STATE ApcState; // [rsp+60h] [rbp-68h] BYREF

  *Handle = (void *)-1LL;
  v4 = 0;
  if ( !*(_QWORD *)&DXGGLOBAL::m_pGlobal )
  {
    WdLogSingleEntry1(1LL, 2406LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v10,
          v9,
          v11,
          0,
          2,
          -1,
          (__int64)L"m_pGlobal != NULL",
          2406LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  if ( !(*(unsigned int (**)(void))(*(_QWORD *)(*(_QWORD *)&DXGGLOBAL::m_pGlobal + 304552LL) + 496LL))() )
  {
    if ( !*(_QWORD *)&DXGGLOBAL::m_pGlobal )
    {
      WdLogSingleEntry1(1LL, 2406LL);
      if ( bTracingEnabled )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
          McTemplateK0zqqzxxxxx_EtwWriteTransfer(
            v13,
            v12,
            v14,
            0,
            2,
            -1,
            (__int64)L"m_pGlobal != NULL",
            2406LL,
            0LL,
            0LL,
            0LL,
            0LL);
      }
    }
    if ( !(*(unsigned int (**)(void))(*(_QWORD *)(*(_QWORD *)&DXGGLOBAL::m_pGlobal + 304552LL) + 400LL))() )
    {
      if ( !*(_QWORD *)&DXGGLOBAL::m_pGlobal )
      {
        WdLogSingleEntry1(1LL, 2406LL);
        if ( bTracingEnabled )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
            McTemplateK0zqqzxxxxx_EtwWriteTransfer(
              v16,
              v15,
              v17,
              0,
              2,
              -1,
              (__int64)L"m_pGlobal != NULL",
              2406LL,
              0LL,
              0LL,
              0LL,
              0LL);
        }
      }
      (*(void (**)(void))(*(_QWORD *)(*(_QWORD *)&DXGGLOBAL::m_pGlobal + 304552LL) + 408LL))();
      v4 = 1;
    }
  }
  if ( !*(_QWORD *)&DXGGLOBAL::m_pGlobal )
  {
    WdLogSingleEntry1(1LL, 2406LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v19,
          v18,
          v20,
          0,
          2,
          -1,
          (__int64)L"m_pGlobal != NULL",
          2406LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  v5 = (struct _KPROCESS *)(*(__int64 (**)(void))(*(_QWORD *)(*(_QWORD *)&DXGGLOBAL::m_pGlobal + 304552LL) + 536LL))();
  v6 = v5;
  if ( v5 )
  {
    memset(&ApcState, 0, sizeof(ApcState));
    KeStackAttachProcess(v5, &ApcState);
    v7 = ObOpenObjectByPointer(Object, 0x40u, 0LL, 3u, g_pDxgkCompositionObjectType, 0, Handle);
    KeUnstackDetachProcess(&ApcState);
    if ( !*(_QWORD *)&DXGGLOBAL::m_pGlobal )
    {
      WdLogSingleEntry1(1LL, 2406LL);
      if ( bTracingEnabled )
      {
        LOBYTE(v22) = BYTE3(Microsoft_Windows_DxgKrnlEnableBits);
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
          McTemplateK0zqqzxxxxx_EtwWriteTransfer(
            v22,
            v21,
            v23,
            0,
            2,
            -1,
            (__int64)L"m_pGlobal != NULL",
            2406LL,
            0LL,
            0LL,
            0LL,
            0LL);
      }
    }
    (*(void (__fastcall **)(struct _KPROCESS *))(*(_QWORD *)(*(_QWORD *)&DXGGLOBAL::m_pGlobal + 304552LL) + 464LL))(v6);
  }
  else
  {
    v7 = -1073741823;
  }
  if ( v4 )
  {
    if ( !*(_QWORD *)&DXGGLOBAL::m_pGlobal )
    {
      WdLogSingleEntry1(1LL, 2406LL);
      if ( bTracingEnabled )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
          McTemplateK0zqqzxxxxx_EtwWriteTransfer(
            v25,
            v24,
            v26,
            0,
            2,
            -1,
            (__int64)L"m_pGlobal != NULL",
            2406LL,
            0LL,
            0LL,
            0LL,
            0LL);
      }
    }
    (*(void (**)(void))(*(_QWORD *)(*(_QWORD *)&DXGGLOBAL::m_pGlobal + 304552LL) + 448LL))();
  }
  return v7;
}
