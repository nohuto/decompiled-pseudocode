/*
 * XREFs of ?Release@DXGDXGIKEYEDMUTEX@@QEAAJ_KPEAVDXGCONTEXT@@W4_OUTPUTDUPL_MUTEX_TYPE@@@Z @ 0x1C029CA38
 * Callers:
 *     ?ProcessUpdateHighLevel@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@@Z @ 0x1C02A24F4 (-ProcessUpdateHighLevel@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@@Z.c)
 *     ?ReleaseFrame@OUTPUTDUPL_CONTEXT@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_RELEASE_FRAME@@@Z @ 0x1C02A2F60 (-ReleaseFrame@OUTPUTDUPL_CONTEXT@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_RELEASE_FRAME@@@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00051D8 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPROCESS@@_N6@Z @ 0x1C0105B50 (-SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPRO.c)
 *     ?ReleaseSync@DXGKEYEDMUTEX@@QEAAJI_K0PEAXI_N@Z @ 0x1C0291E6C (-ReleaseSync@DXGKEYEDMUTEX@@QEAAJI_K0PEAXI_N@Z.c)
 */

__int64 __fastcall DXGDXGIKEYEDMUTEX::Release(__int64 a1, unsigned __int64 a2, __int64 a3, int a4)
{
  __int64 v4; // rsi
  __int64 v8; // rax
  _QWORD *v9; // rax
  unsigned __int64 v11; // r8
  unsigned int v12; // ecx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  int v16; // edi
  __int64 v17; // rax
  size_t v18; // [rsp+28h] [rbp-50h]
  unsigned int v19[4]; // [rsp+60h] [rbp-18h] BYREF
  unsigned int v20; // [rsp+90h] [rbp+18h] BYREF

  v4 = a4;
  if ( a3 )
  {
    if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL) + 16LL)) )
    {
      v8 = WdLogNewEntry5_WdAssertion(a1, a2);
      *(_QWORD *)(v8 + 24) = 726LL;
      WdLogEvent5_WdAssertion(v8);
    }
    if ( a3 != *(_QWORD *)(a1 + 120) )
    {
      v9 = (_QWORD *)WdLogNewEntry5_WdAssertion(a1, a2);
      v9[3] = a3;
      v9[4] = a1;
      v9[5] = *(_QWORD *)(a1 + 120);
LABEL_6:
      WdLogEvent5_WdAssertion(v9);
      return 3221225485LL;
    }
  }
  if ( !*(_DWORD *)(a1 + 128) )
  {
    v9 = (_QWORD *)WdLogNewEntry5_WdAssertion(a1, a2);
    v9[3] = a1;
    goto LABEL_6;
  }
  if ( a3 )
  {
    v11 = ++*(_QWORD *)(a1 + 112);
    v12 = *(_DWORD *)(*(_QWORD *)(a1 + 120) + 24LL);
    v19[0] = *(_DWORD *)(a1 + 96);
    v13 = *(_QWORD *)(a3 + 16);
    v20 = v12;
    v16 = SignalSynchronizationObjectInternal(
            1LL,
            v19,
            0,
            1u,
            &v20,
            0LL,
            v11,
            0LL,
            *(struct DXGPROCESS **)(v13 + 40),
            0,
            1);
    if ( v16 < 0 )
      goto LABEL_11;
  }
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_DWORD *)(a1 + 128) = 0;
  LODWORD(v18) = 0;
  v16 = DXGKEYEDMUTEX::ReleaseSync(
          *(void ***)(a1 + 24 * v4 + 24),
          *(_DWORD *)(a1 + 24 * v4 + 16),
          a2,
          *(_QWORD *)(a1 + 112),
          0LL,
          v18,
          0);
  if ( v16 >= 0 )
    return 0LL;
LABEL_11:
  v17 = WdLogNewEntry5_WdError(v15, v14);
  *(_QWORD *)(v17 + 24) = a1;
  WdLogEvent5_WdError(v17);
  return (unsigned int)v16;
}
