/*
 * XREFs of ?StartVSync@BLTQUEUE@@AEAAXHW4VsyncEvent@1@@Z @ 0x1C01CBAFC
 * Callers:
 *     ?EnableVSync@BLTQUEUE@@QEAAXXZ @ 0x1C01C73A4 (-EnableVSync@BLTQUEUE@@QEAAXXZ.c)
 *     ?UpdateDisplayModeInfoWorker@BLTQUEUE@@AEAAXXZ @ 0x1C01CAEC8 (-UpdateDisplayModeInfoWorker@BLTQUEUE@@AEAAXXZ.c)
 *     ?BltQueueWorker@BLTQUEUE@@QEAAXXZ @ 0x1C01CB020 (-BltQueueWorker@BLTQUEUE@@QEAAXXZ.c)
 *     ?DisableHwVSyncWorker@BLTQUEUE@@AEAAXXZ @ 0x1C03CCFEC (-DisableHwVSyncWorker@BLTQUEUE@@AEAAXXZ.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0006F40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007104 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C00095A8 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     _tlgKeywordOn @ 0x1C000AA90 (_tlgKeywordOn.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0qqq_EtwWriteTransfer @ 0x1C0053520 (McTemplateK0qqq_EtwWriteTransfer.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x1C006CB24 (--$Write@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBX1IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteAgg@@YAJ011I2@ZPEBX@@SAJPEBU_tlgProvider_t@@PEBX1AEBU?$_tlgWrapperByVal@$07@@2AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x1C006D00C (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 *     ?RecreateVsyncSource@BLTQUEUE@@AEAAX_NW4VsyncEvent@1@@Z @ 0x1C01C7040 (-RecreateVsyncSource@BLTQUEUE@@AEAAX_NW4VsyncEvent@1@@Z.c)
 *     ?IsVmConnectedToHost@DXGGLOBAL@@QEBAEXZ @ 0x1C01C7198 (-IsVmConnectedToHost@DXGGLOBAL@@QEBAEXZ.c)
 */

void __fastcall BLTQUEUE::StartVSync(__int64 a1, int a2, char a3)
{
  int v3; // eax
  struct _KTHREAD **v7; // rdx
  __int64 v8; // rcx
  int v9; // ebx
  __int64 v10; // r8
  DXGGLOBAL *Global; // rax
  unsigned int v12; // r9d
  __int64 v13; // r9
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rsi
  __int64 v18; // [rsp+50h] [rbp-30h] BYREF
  __int64 v19; // [rsp+58h] [rbp-28h] BYREF
  _BYTE v20[8]; // [rsp+60h] [rbp-20h] BYREF
  DXGPUSHLOCK *v21; // [rsp+68h] [rbp-18h]
  int v22; // [rsp+70h] [rbp-10h]
  int v23; // [rsp+A0h] [rbp+20h] BYREF
  int v24; // [rsp+B8h] [rbp+38h] BYREF

  v3 = *(_DWORD *)(a1 + 952);
  if ( (v3 & 8) != 0 && (v3 & 2) == 0 )
  {
    v7 = 0LL;
    if ( !a2 )
      v7 = (struct _KTHREAD **)(a1 + 408);
    DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v20, v7, 0);
    if ( !a2 )
    {
      DXGPUSHLOCK::AcquireExclusive(v21);
      v22 = 2;
    }
    if ( *(_DWORD *)(a1 + 136) == 2
      && *((_BYTE *)DXGGLOBAL::GetGlobal() + 304880)
      && (Global = DXGGLOBAL::GetGlobal(), DXGGLOBAL::IsVmConnectedToHost(Global)) )
    {
      BLTQUEUE::RecreateVsyncSource(a1, 0, 13);
      v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(a1 + 128) + 32LL))(
             *(_QWORD *)(a1 + 128),
             *(_QWORD *)(a1 + 368),
             *(unsigned int *)(a1 + 260));
      if ( (unsigned int)dword_1C013A8A8 > 5 )
      {
        if ( tlgKeywordOn((__int64)&dword_1C013A8A8, 0x400000080000LL) )
        {
          v23 = *(_DWORD *)(a1 + 136);
          v24 = v9;
          v18 = 33556480LL;
          v19 = 1LL;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
            v8,
            byte_1C00A1D9F,
            v10,
            (__int64)&v19,
            (__int64)&v18,
            (__int64)&v24,
            (__int64)&v23);
          v12 = dword_1C013A8A8;
        }
        if ( v12 > 5 && tlgKeywordOn((__int64)&dword_1C013A8A8, 0x80000LL) )
        {
          v23 = *(_DWORD *)(a1 + 136);
          v24 = v9;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
            v8,
            byte_1C00A1DFA,
            v10,
            v13,
            (__int64)&v24,
            (__int64)&v23);
        }
      }
    }
    else
    {
      v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(a1 + 128) + 32LL))(
             *(_QWORD *)(a1 + 128),
             *(_QWORD *)(a1 + 368),
             *(unsigned int *)(a1 + 260));
    }
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      McTemplateK0qqq_EtwWriteTransfer(v8, &EventBltQueueVsyncStart, v10, *(_DWORD *)(a1 + 136), v9, a3);
    if ( v9 >= 0 )
      goto LABEL_15;
    *(_DWORD *)(a1 + 136) = 2;
    BLTQUEUE::RecreateVsyncSource(a1, 1, 14);
    v14 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(a1 + 128) + 32LL))(
            *(_QWORD *)(a1 + 128),
            *(_QWORD *)(a1 + 368),
            *(unsigned int *)(a1 + 260));
    v17 = v14;
    if ( v14 < 0 )
    {
      WdLogSingleEntry2(1LL, a1, v14);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"BLTQUEUE 0x%I64x : Failed to start Vsync source after recreate Vsync source, Status = 0x%I64x",
        a1,
        v17,
        0LL,
        0LL,
        0LL);
    }
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0qqq_EtwWriteTransfer(v15, &EventBltQueueVsyncStart, v16, *(_DWORD *)(a1 + 136), v17, 14);
    }
    if ( (int)v17 >= 0 )
LABEL_15:
      *(_DWORD *)(a1 + 952) |= 2u;
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v20);
  }
}
