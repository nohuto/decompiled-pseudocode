/*
 * XREFs of ?Release@DXGDXGIKEYEDMUTEX@@QEAAJ_KPEAVDXGCONTEXT@@W4_OUTPUTDUPL_MUTEX_TYPE@@@Z @ 0x1C032A098
 * Callers:
 *     ?ProcessUpdateHighLevel@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@@Z @ 0x1C032EA6C (-ProcessUpdateHighLevel@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@@Z.c)
 *     ?ReleaseFrame@OUTPUTDUPL_CONTEXT@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_RELEASE_FRAME@@@Z @ 0x1C032F6F0 (-ReleaseFrame@OUTPUTDUPL_CONTEXT@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_RELEASE_FRAME@@@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070C4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPROCESS@@USIGNAL_SYNC_OBJ_FLAGS@@@Z @ 0x1C01944A0 (-SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPRO.c)
 *     ?ReleaseSync@DXGKEYEDMUTEX@@QEAAJI_K0PEAXI_N@Z @ 0x1C034C27C (-ReleaseSync@DXGKEYEDMUTEX@@QEAAJI_K0PEAXI_N@Z.c)
 */

__int64 __fastcall DXGDXGIKEYEDMUTEX::Release(__int64 a1, unsigned __int64 a2, __int64 a3, int a4)
{
  __int64 v4; // rbp
  __int64 v8; // r9
  __int64 v10; // rax
  unsigned __int64 v11; // rdx
  unsigned int v12; // ecx
  __int64 v13; // rax
  int v14; // esi
  const wchar_t *v15; // r9
  unsigned __int64 v16; // r9
  size_t Size; // [rsp+28h] [rbp-60h]
  unsigned int v18[4]; // [rsp+50h] [rbp-38h] BYREF
  unsigned int v19; // [rsp+A0h] [rbp+18h] BYREF

  v4 = a4;
  if ( a3 )
  {
    if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL) + 16LL)) )
    {
      WdLogSingleEntry1(1LL, 722LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"(pContext == NULL) || (m_pProducerDevice->GetRenderCore()->IsCoreResourceSharedOwner())",
        722LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v8 = *(_QWORD *)(a1 + 120);
    if ( a3 != v8 )
    {
      WdLogSingleEntry3(1LL, a3, a1, v8);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"Context 0x%I64x does not own DxgiKeyedMutex 0x%I64x, context 0x%I64x does",
        a3,
        a1,
        *(_QWORD *)(a1 + 120),
        0LL,
        0LL);
      return 3221225485LL;
    }
  }
  if ( !*(_DWORD *)(a1 + 128) )
  {
    WdLogSingleEntry1(1LL, a1);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"DxgiKeyedMutex 0x%I64x has not been acquired",
      a1,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  if ( a3 )
  {
    v10 = *(_QWORD *)(a1 + 120);
    v11 = *(_QWORD *)(a1 + 112) + 1LL;
    *(_QWORD *)(a1 + 112) = v11;
    v12 = *(_DWORD *)(v10 + 24);
    v18[0] = *(_DWORD *)(a1 + 96);
    v13 = *(_QWORD *)(a3 + 16);
    v19 = v12;
    v14 = SignalSynchronizationObjectInternal(
            1u,
            v18,
            0,
            1u,
            &v19,
            0LL,
            v11,
            0LL,
            *(struct DXGPROCESS **)(v13 + 40),
            2u);
    if ( v14 < 0 )
    {
      WdLogSingleEntry1(2LL, a1);
      v15 = L"Failed to submit GPU signal for DxgiKeyedMutex 0x%I64x";
LABEL_12:
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v15, a1, 0LL, 0LL, 0LL, 0LL);
      return (unsigned int)v14;
    }
  }
  v16 = *(_QWORD *)(a1 + 112);
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_DWORD *)(a1 + 128) = 0;
  LODWORD(Size) = 0;
  v14 = DXGKEYEDMUTEX::ReleaseSync(
          *(DXGKEYEDMUTEX **)(a1 + 24 * v4 + 24),
          *(_DWORD *)(a1 + 24 * v4 + 16),
          a2,
          v16,
          0LL,
          Size,
          0);
  if ( v14 < 0 )
  {
    WdLogSingleEntry1(2LL, a1);
    v15 = L"Failed to release DxgiKeyedMutex 0x%I64x";
    goto LABEL_12;
  }
  return 0LL;
}
