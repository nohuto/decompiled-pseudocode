/*
 * XREFs of _BtlPreAcquireSharedAccess_&CCD_BTL_ACTIVE_PATHS_COLLECTOR::_CollectActiveAdaptersCallback_1_0_ @ 0x1C01642B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0003960 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C0006764 (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0007B84 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0007BE0 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0007CC0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0007D7C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C0007DF0 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0009550 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ @ 0x1C0009D98 (-IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C000ADEC (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     DxgkIsMSBDDFallbackEnabled @ 0x1C0052924 (DxgkIsMSBDDFallbackEnabled.c)
 *     ?_ProcessVidPn@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDMMVIDPN@@_N@Z @ 0x1C013A244 (-_ProcessVidPn@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDMMVIDPN@@_N@Z.c)
 *     ?CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C014164C (-CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 */

__int64 __fastcall BtlPreAcquireSharedAccess__CCD_BTL_ACTIVE_PATHS_COLLECTOR::_CollectActiveAdaptersCallback_1_0_(
        DXGADAPTER *this,
        CCD_BTL_ACTIVE_PATHS_COLLECTOR *a2)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rdx
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // rdi
  struct VIDPN_MGR *v14; // rdi
  int ClientVidPnFromLastClientCommitedVidPn; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rdx
  _QWORD *v21; // rax
  _QWORD *v22; // rsi
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rax
  struct DMMVIDPN *v30; // [rsp+20h] [rbp-99h] BYREF
  __int64 v31; // [rsp+28h] [rbp-91h] BYREF
  __int64 v32; // [rsp+30h] [rbp-89h] BYREF
  __int64 v33; // [rsp+38h] [rbp-81h] BYREF
  _BYTE v34[8]; // [rsp+40h] [rbp-79h] BYREF
  DXGADAPTER *v35; // [rsp+48h] [rbp-71h]
  char v36; // [rsp+50h] [rbp-69h]
  _BYTE v37[144]; // [rsp+60h] [rbp-59h] BYREF

  v35 = this;
  v36 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v34);
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v34);
  v4 = *((_QWORD *)this + 337);
  if ( v4 && *(_DWORD *)(v4 + 80) && *((_DWORD *)this + 50) == 1 )
  {
    v5 = *(_QWORD *)(*((_QWORD *)this + 337) + 88LL);
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v33, v5);
    v6 = *(_QWORD *)(v5 + 88);
    if ( v6 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v6 + 32));
      v7 = *(_QWORD *)(v5 + 88);
      v32 = v7;
      if ( v7 && *(_QWORD *)(v7 + 136) )
      {
        auto_rc<DMMVIDPN const>::reset(&v32, 0LL);
        DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v33 + 40), v8);
        COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v37, this, 0LL);
        v9 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v37, 0LL);
        LODWORD(v12) = v9;
        if ( v9 < 0 )
        {
          if ( v9 != -1073741130 )
            goto LABEL_13;
          v21 = (_QWORD *)WdLogNewEntry5_WdTrace(v11, v10);
          v21[3] = this;
          v21[4] = *((int *)this + 80);
          v21[5] = *((unsigned int *)this + 79);
          v21[6] = a2;
        }
        else if ( !DXGADAPTER::IsBddFallbackDriver(this) || DxgkIsMSBDDFallbackEnabled() )
        {
          v13 = *((_QWORD *)this + 337);
          if ( v13 )
          {
            v14 = *(struct VIDPN_MGR **)(v13 + 88);
            EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v31, (__int64)v14);
            v30 = 0LL;
            ClientVidPnFromLastClientCommitedVidPn = VIDPN_MGR::CreateClientVidPnFromLastClientCommitedVidPn(
                                                       v14,
                                                       (__int64 *)&v30);
            v12 = ClientVidPnFromLastClientCommitedVidPn;
            if ( ClientVidPnFromLastClientCommitedVidPn < 0 )
            {
              v22 = (_QWORD *)WdLogNewEntry5_WdError(v17, v16);
              v22[3] = v12;
              v22[4] = v14;
              v23 = *(_QWORD *)a2;
              v24 = *(_QWORD *)(*(_QWORD *)a2 + 64LL);
              v22[5] = v24;
              v25 = *((_QWORD *)v14 + 1);
              if ( !v25 )
              {
                v26 = WdLogNewEntry5_WdAssertion(v23, v24);
                WdLogEvent5_WdAssertion(v26);
                v25 = *((_QWORD *)v14 + 1);
              }
              v27 = *(int *)(*(_QWORD *)(v25 + 16) + 320LL);
              v22[6] = v27;
              v28 = *((_QWORD *)v14 + 1);
              if ( !v28 )
              {
                v29 = WdLogNewEntry5_WdAssertion(v27, v24);
                WdLogEvent5_WdAssertion(v29);
                v28 = *((_QWORD *)v14 + 1);
              }
              v22[7] = *(unsigned int *)(*(_QWORD *)(v28 + 16) + 316LL);
              WdLogEvent5_WdError(v22);
            }
            else
            {
              LODWORD(v12) = CCD_BTL_ACTIVE_PATHS_COLLECTOR::_ProcessVidPn(a2, v30, 1);
            }
            auto_rc<DMMVIDPN>::reset((__int64 *)&v30, 0LL);
            DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v31 + 40), v18);
            goto LABEL_13;
          }
        }
        LODWORD(v12) = 0;
LABEL_13:
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v37, v10);
        goto LABEL_17;
      }
    }
    else
    {
      v32 = 0LL;
    }
    auto_rc<DMMVIDPN const>::reset(&v32, 0LL);
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v33 + 40), v19);
  }
  LODWORD(v12) = 0;
LABEL_17:
  if ( v36 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v34);
  return (unsigned int)v12;
}
