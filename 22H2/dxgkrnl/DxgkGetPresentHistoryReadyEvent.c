/*
 * XREFs of DxgkGetPresentHistoryReadyEvent @ 0x1C0156B30
 * Callers:
 *     ?Initialize@CAdapter@@IEAAJAEBUCSM_TOKEN_ADAPTER_INFO@@@Z @ 0x1C001367C (-Initialize@CAdapter@@IEAAJAEBUCSM_TOKEN_ADAPTER_INFO@@@Z.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0003894 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0004EC0 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0005230 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0008AF8 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x1C0008C9C (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     ??IDXGADAPTER_REFERENCE@@QEAAPEAPEAVDXGADAPTER@@XZ @ 0x1C000A318 (--IDXGADAPTER_REFERENCE@@QEAAPEAPEAVDXGADAPTER@@XZ.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0019574 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1C0101E70 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetPresentHistoryTokenQueue@ADAPTER_RENDER@@QEAAPEAVDXGPRESENTHISTORYTOKENQUEUE@@PEAVDXGAUTOPUSHLOCK@@H@Z @ 0x1C0156C64 (-GetPresentHistoryTokenQueue@ADAPTER_RENDER@@QEAAPEAVDXGPRESENTHISTORYTOKENQUEUE@@PEAVDXGAUTOPUS.c)
 */

__int64 __fastcall DxgkGetPresentHistoryReadyEvent(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rsi
  struct _KTHREAD **Current; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  struct DXGADAPTER *v12; // rbx
  struct DXGADAPTER **v13; // rax
  int PairingAdapters; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rsi
  struct _KTHREAD **v18; // rbx
  struct DXGPRESENTHISTORYTOKENQUEUE *PresentHistoryTokenQueue; // rax
  void *v20; // rcx
  unsigned int v21; // ebx
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  DXGADAPTER *v26; // [rsp+40h] [rbp-40h] BYREF
  unsigned __int64 v27; // [rsp+48h] [rbp-38h] BYREF
  DXGADAPTER *v28; // [rsp+50h] [rbp-30h] BYREF
  _BYTE v29[8]; // [rsp+60h] [rbp-20h] BYREF
  DXGPUSHLOCK *v30; // [rsp+68h] [rbp-18h]
  int v31; // [rsp+70h] [rbp-10h]
  struct DXGADAPTER *v32; // [rsp+A0h] [rbp+20h] BYREF

  v5 = (unsigned int)a1;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(a1, (__int64)a2, a3, a4);
  if ( Current )
  {
    v32 = 0LL;
    DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v28, (unsigned int)v5, Current, &v32, 1);
    v12 = v32;
    if ( v32 )
    {
      v26 = 0LL;
      v13 = (struct DXGADAPTER **)DXGADAPTER_REFERENCE::operator&(&v26, v9);
      PairingAdapters = DxgkpGetPairingAdapters(v12, 0LL, v13, &v27, 0LL, 0LL, 0);
      v17 = PairingAdapters;
      if ( PairingAdapters < 0 )
      {
        v25 = WdLogNewEntry5_WdError(v16, v15);
        *(_QWORD *)(v25 + 24) = v12;
        *(_QWORD *)(v25 + 32) = v17;
        WdLogEvent5_WdError(v25);
        v21 = v17;
      }
      else
      {
        v18 = (struct _KTHREAD **)*((_QWORD *)v26 + 338);
        DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v29, v18 + 105, 0);
        DXGPUSHLOCK::AcquireShared(v30);
        v31 = 1;
        PresentHistoryTokenQueue = ADAPTER_RENDER::GetPresentHistoryTokenQueue(
                                     (ADAPTER_RENDER *)v18,
                                     (struct DXGAUTOPUSHLOCK *)v29,
                                     1);
        if ( PresentHistoryTokenQueue )
        {
          v20 = (void *)*((_QWORD *)PresentHistoryTokenQueue + 9);
          *a2 = v20;
          ObfReferenceObject(v20);
          v21 = 0;
        }
        else
        {
          *a2 = 0LL;
          v21 = -1073741801;
        }
        DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v29);
      }
      DXGADAPTER_REFERENCE::Assign(&v26, 0LL);
    }
    else
    {
      v24 = WdLogNewEntry5_WdWarning(v10, v9, v11);
      v21 = -1073741811;
      *(_QWORD *)(v24 + 24) = v5;
      *(_QWORD *)(v24 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v24);
    }
    if ( v28 )
      DXGADAPTER::ReleaseReference(v28);
  }
  else
  {
    v23 = WdLogNewEntry5_WdError(v8, v7);
    v21 = -1073741811;
    *(_QWORD *)(v23 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v23);
  }
  return v21;
}
