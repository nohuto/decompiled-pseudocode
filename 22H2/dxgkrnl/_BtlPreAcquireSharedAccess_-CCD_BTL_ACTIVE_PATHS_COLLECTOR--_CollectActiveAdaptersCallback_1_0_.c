/*
 * XREFs of _BtlPreAcquireSharedAccess_&CCD_BTL_ACTIVE_PATHS_COLLECTOR::_CollectActiveAdaptersCallback_1_0_ @ 0x1C01E1F10
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0002DEC (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ @ 0x1C0004F9C (-IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C0005DCC (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C00070E4 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?AcquireLastClientCommittedVidPnRef@VIDPN_MGR@@QEBAPEBVDMMVIDPN@@XZ @ 0x1C0007298 (-AcquireLastClientCommittedVidPnRef@VIDPN_MGR@@QEBAPEBVDMMVIDPN@@XZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00072BC (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C00074F0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000763C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00076E8 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C0008770 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000AFB0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0023E40 (__security_check_cookie.c)
 *     ??1?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@XZ @ 0x1C0025AC8 (--1-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@XZ.c)
 *     DxgkIsMSBDDFallbackEnabled @ 0x1C005F0CC (DxgkIsMSBDDFallbackEnabled.c)
 *     ?CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C019B54C (-CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?_ProcessVidPn@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDMMVIDPN@@_N@Z @ 0x1C01E20E4 (-_ProcessVidPn@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDMMVIDPN@@_N@Z.c)
 */

__int64 __fastcall BtlPreAcquireSharedAccess__CCD_BTL_ACTIVE_PATHS_COLLECTOR::_CollectActiveAdaptersCallback_1_0_(
        DXGADAPTER *this,
        CCD_BTL_ACTIVE_PATHS_COLLECTOR *a2)
{
  __int64 v4; // rax
  VIDPN_MGR *v5; // rbx
  const struct DMMVIDPN *ClientCommittedVidPnRef; // rax
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rbx
  __int64 v13; // rdi
  VIDPN_MGR *v14; // rdi
  int ClientVidPnFromLastClientCommitedVidPn; // eax
  _QWORD *v17; // rax
  __int64 v18; // rcx
  __int64 v19; // r14
  struct DMMVIDPN *v20; // [rsp+30h] [rbp-89h] BYREF
  __int64 v21; // [rsp+38h] [rbp-81h] BYREF
  __int64 v22; // [rsp+40h] [rbp-79h] BYREF
  _BYTE v23[8]; // [rsp+48h] [rbp-71h] BYREF
  DXGADAPTER *v24; // [rsp+50h] [rbp-69h]
  char v25; // [rsp+58h] [rbp-61h]
  _BYTE v26[144]; // [rsp+60h] [rbp-59h] BYREF

  v24 = this;
  v25 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v23);
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v23);
  v4 = *((_QWORD *)this + 365);
  if ( v4 && *(_DWORD *)(v4 + 96) && *((_DWORD *)this + 50) == 1 )
  {
    v5 = *(VIDPN_MGR **)(*((_QWORD *)this + 365) + 104LL);
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v22, (__int64)v5);
    ClientCommittedVidPnRef = VIDPN_MGR::AcquireLastClientCommittedVidPnRef(v5);
    v20 = ClientCommittedVidPnRef;
    if ( ClientCommittedVidPnRef && *((_QWORD *)ClientCommittedVidPnRef + 17) )
    {
      auto_rc<DMMVIDPN const>::reset((__int64 *)&v20, 0LL);
      DXGFASTMUTEX::Release((struct _KTHREAD **)(v22 + 40));
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v26, this, 0LL);
      v7 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v26, 0LL);
      LODWORD(v12) = v7;
      if ( v7 < 0 )
      {
        if ( v7 != -1073741130 )
          goto LABEL_12;
        v17 = (_QWORD *)WdLogNewEntry5_WdTrace(v9, v8, v10, v11);
        v17[3] = this;
        v17[4] = *((int *)this + 102);
        v17[5] = *((unsigned int *)this + 101);
        v17[6] = a2;
      }
      else if ( !DXGADAPTER::IsBddFallbackDriver(this) || DxgkIsMSBDDFallbackEnabled() )
      {
        v13 = *((_QWORD *)this + 365);
        if ( v13 )
        {
          v14 = *(VIDPN_MGR **)(v13 + 104);
          EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v21, (__int64)v14);
          v20 = 0LL;
          ClientVidPnFromLastClientCommitedVidPn = VIDPN_MGR::CreateClientVidPnFromLastClientCommitedVidPn(
                                                     v14,
                                                     (__int64 *)&v20);
          v12 = ClientVidPnFromLastClientCommitedVidPn;
          if ( ClientVidPnFromLastClientCommitedVidPn < 0 )
          {
            if ( !*((_QWORD *)v14 + 1) )
              WdLogSingleEntry0(1LL);
            v18 = *((_QWORD *)v14 + 1);
            v19 = *(unsigned int *)(*(_QWORD *)(v18 + 16) + 404LL);
            if ( !v18 )
              WdLogSingleEntry0(1LL);
            WdLogSingleEntry5(
              2LL,
              v12,
              v14,
              *(_QWORD *)(*(_QWORD *)a2 + 64LL),
              *(int *)(*(_QWORD *)(*((_QWORD *)v14 + 1) + 16LL) + 408LL),
              v19);
          }
          else
          {
            LODWORD(v12) = CCD_BTL_ACTIVE_PATHS_COLLECTOR::_ProcessVidPn(a2, v20, 1);
            if ( (int)v12 >= 0 )
            {
              auto_rc<DMMVIDPN>::reset((__int64 *)&v20, 0LL);
              DXGFASTMUTEX::Release((struct _KTHREAD **)(v21 + 40));
LABEL_12:
              COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v26);
              goto LABEL_13;
            }
          }
          auto_rc<DMMVIDPN>::reset((__int64 *)&v20, 0LL);
          EXCLUSIVEACCESS<VIDPN_MGR>::~EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v21);
          goto LABEL_12;
        }
      }
      LODWORD(v12) = 0;
      goto LABEL_12;
    }
    auto_rc<DMMVIDPN const>::reset((__int64 *)&v20, 0LL);
    DXGFASTMUTEX::Release((struct _KTHREAD **)(v22 + 40));
  }
  LODWORD(v12) = 0;
LABEL_13:
  if ( v25 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v23);
  return (unsigned int)v12;
}
