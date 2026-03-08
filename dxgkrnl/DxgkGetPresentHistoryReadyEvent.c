/*
 * XREFs of DxgkGetPresentHistoryReadyEvent @ 0x1C01DFAA0
 * Callers:
 *     ?Initialize@CAdapter@@IEAAJAEBUCSM_TOKEN_ADAPTER_INFO@@@Z @ 0x1C001917C (-Initialize@CAdapter@@IEAAJAEBUCSM_TOKEN_ADAPTER_INFO@@@Z.c)
 * Callees:
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x1C0006DA4 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0006F40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006FA0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C00095A8 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C00097B8 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0009930 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ??IDXGADAPTER_REFERENCE@@QEAAPEAPEAVDXGADAPTER@@XZ @ 0x1C0009954 (--IDXGADAPTER_REFERENCE@@QEAAPEAPEAVDXGADAPTER@@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1C0190FF0 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01A3640 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetPresentHistoryTokenQueue@ADAPTER_RENDER@@QEAAPEAVDXGPRESENTHISTORYTOKENQUEUE@@PEAVDXGAUTOPUSHLOCK@@H@Z @ 0x1C01DFBDC (-GetPresentHistoryTokenQueue@ADAPTER_RENDER@@QEAAPEAVDXGPRESENTHISTORYTOKENQUEUE@@PEAVDXGAUTOPUS.c)
 */

__int64 __fastcall DxgkGetPresentHistoryReadyEvent(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rbx
  struct _KTHREAD **Current; // rax
  struct DXGADAPTER *v5; // rsi
  struct DXGADAPTER **v6; // rax
  int PairingAdapters; // eax
  __int64 v8; // r14
  struct _KTHREAD **v9; // rbx
  struct DXGPRESENTHISTORYTOKENQUEUE *PresentHistoryTokenQueue; // rax
  void *v11; // rcx
  unsigned int v12; // ebx
  __int64 v14; // rdx
  DXGADAPTER *v15; // [rsp+58h] [rbp+7h] BYREF
  unsigned __int64 v16; // [rsp+60h] [rbp+Fh] BYREF
  DXGADAPTER *v17; // [rsp+68h] [rbp+17h] BYREF
  _BYTE v18[8]; // [rsp+78h] [rbp+27h] BYREF
  DXGPUSHLOCK *v19; // [rsp+80h] [rbp+2Fh]
  int v20; // [rsp+88h] [rbp+37h]
  struct DXGADAPTER *v21; // [rsp+C8h] [rbp+77h] BYREF

  v3 = (unsigned int)a1;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(a1);
  if ( Current )
  {
    v21 = 0LL;
    DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v17, v3, Current, &v21, 1);
    v5 = v21;
    if ( v21 )
    {
      v15 = 0LL;
      v6 = (struct DXGADAPTER **)DXGADAPTER_REFERENCE::operator&(&v15);
      PairingAdapters = DxgkpGetPairingAdapters(v5, 0, v6, &v16, 0LL, 0LL, 0);
      v8 = PairingAdapters;
      if ( PairingAdapters < 0 )
      {
        WdLogSingleEntry2(2LL, v5, PairingAdapters);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Failed to get pairing adapters from adapter 0x%I64x for DxgkGetPresentHistoryReadyEvent (Status = 0x%I64x)!",
          (__int64)v5,
          v8,
          0LL,
          0LL,
          0LL);
        v12 = v8;
      }
      else
      {
        v9 = (struct _KTHREAD **)*((_QWORD *)v15 + 366);
        DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v18, v9 + 122, 0);
        DXGPUSHLOCK::AcquireShared(v19);
        v20 = 1;
        PresentHistoryTokenQueue = ADAPTER_RENDER::GetPresentHistoryTokenQueue(
                                     (ADAPTER_RENDER *)v9,
                                     (struct DXGAUTOPUSHLOCK *)v18,
                                     1);
        if ( PresentHistoryTokenQueue )
        {
          v11 = (void *)*((_QWORD *)PresentHistoryTokenQueue + 9);
          *a2 = v11;
          ObfReferenceObject(v11);
          v12 = 0;
        }
        else
        {
          *a2 = 0LL;
          v12 = -1073741801;
        }
        DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v18);
      }
      DXGADAPTER_REFERENCE::Assign(&v15, 0LL);
    }
    else
    {
      v14 = v3;
      v12 = -1073741811;
      WdLogSingleEntry2(3LL, v14, -1073741811LL);
    }
    if ( v17 )
      DXGADAPTER::ReleaseReference(v17);
  }
  else
  {
    v12 = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid process context, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  return v12;
}
