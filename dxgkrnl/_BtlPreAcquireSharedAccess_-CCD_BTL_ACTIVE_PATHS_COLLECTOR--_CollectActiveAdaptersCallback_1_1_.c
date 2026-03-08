/*
 * XREFs of _BtlPreAcquireSharedAccess_&CCD_BTL_ACTIVE_PATHS_COLLECTOR::_CollectActiveAdaptersCallback_1_1_ @ 0x1C01B2F70
 * Callers:
 *     <none>
 * Callees:
 *     ?IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ @ 0x1C0003484 (-IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C00034C8 (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0007840 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C00090C8 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ?AcquireLastClientCommittedVidPnRef@VIDPN_MGR@@QEBAPEBVDMMVIDPN@@XZ @ 0x1C000949C (-AcquireLastClientCommittedVidPnRef@VIDPN_MGR@@QEBAPEBVDMMVIDPN@@XZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00094C0 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ??0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z @ 0x1C0009580 (--0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00096F0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0009754 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0009800 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C000999C (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     ??1?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@XZ @ 0x1C0025E48 (--1-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@XZ.c)
 *     DxgkIsMSBDDFallbackEnabled @ 0x1C005E4AC (DxgkIsMSBDDFallbackEnabled.c)
 *     ?_ProcessVidPn@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDMMVIDPN@@_N@Z @ 0x1C0180394 (-_ProcessVidPn@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDMMVIDPN@@_N@Z.c)
 *     ?CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C01B3BC0 (-CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 */

__int64 __fastcall BtlPreAcquireSharedAccess__CCD_BTL_ACTIVE_PATHS_COLLECTOR::_CollectActiveAdaptersCallback_1_1_(
        struct DXGADAPTER *a1,
        CCD_BTL_ACTIVE_PATHS_COLLECTOR *this)
{
  __int64 v4; // rax
  VIDPN_MGR *v5; // rbx
  const struct DMMVIDPN *ClientCommittedVidPnRef; // rax
  struct DXGADAPTER *const v7; // rdx
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rbx
  __int64 v14; // rdi
  VIDPN_MGR *v15; // rdi
  int ClientVidPnFromLastClientCommitedVidPn; // eax
  _QWORD *v18; // rax
  __int64 v19; // rcx
  __int64 v20; // r14
  struct DMMVIDPN *v21; // [rsp+30h] [rbp-89h] BYREF
  __int64 v22; // [rsp+38h] [rbp-81h] BYREF
  __int64 v23; // [rsp+40h] [rbp-79h] BYREF
  _BYTE v24[8]; // [rsp+48h] [rbp-71h] BYREF
  struct DXGADAPTER *v25; // [rsp+50h] [rbp-69h]
  char v26; // [rsp+58h] [rbp-61h]
  _BYTE v27[8]; // [rsp+60h] [rbp-59h] BYREF
  _BYTE v28[64]; // [rsp+68h] [rbp-51h] BYREF
  _BYTE v29[72]; // [rsp+A8h] [rbp-11h] BYREF

  v25 = a1;
  v26 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v24);
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v24);
  v4 = *((_QWORD *)a1 + 365);
  if ( v4 && *(_DWORD *)(v4 + 96) && *((_DWORD *)a1 + 50) == 1 )
  {
    v5 = *(VIDPN_MGR **)(*((_QWORD *)a1 + 365) + 104LL);
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v23, (__int64)v5);
    ClientCommittedVidPnRef = VIDPN_MGR::AcquireLastClientCommittedVidPnRef(v5);
    v21 = ClientCommittedVidPnRef;
    if ( ClientCommittedVidPnRef && *((_QWORD *)ClientCommittedVidPnRef + 17) )
    {
      auto_rc<DMMVIDPN const>::reset((__int64 *)&v21, 0LL);
      DXGFASTMUTEX::Release((struct _KTHREAD **)(v23 + 40));
      v27[1] = 0;
      COREACCESS::COREACCESS((COREACCESS *)v28, a1);
      COREACCESS::COREACCESS((COREACCESS *)v29, v7);
      v8 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v27, 0LL);
      LODWORD(v13) = v8;
      if ( v8 < 0 )
      {
        if ( v8 != -1073741130 )
          goto LABEL_13;
        v18 = (_QWORD *)WdLogNewEntry5_WdTrace(v10, v9, v11, v12);
        v18[3] = a1;
        v18[4] = *((int *)a1 + 102);
        v18[5] = *((unsigned int *)a1 + 101);
        v18[6] = this;
      }
      else if ( !*((_BYTE *)a1 + 2833) && (!DXGADAPTER::IsBddFallbackDriver(a1) || DxgkIsMSBDDFallbackEnabled()) )
      {
        v14 = *((_QWORD *)a1 + 365);
        if ( v14 )
        {
          v15 = *(VIDPN_MGR **)(v14 + 104);
          EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v22, (__int64)v15);
          v21 = 0LL;
          ClientVidPnFromLastClientCommitedVidPn = VIDPN_MGR::CreateClientVidPnFromLastClientCommitedVidPn(v15);
          v13 = ClientVidPnFromLastClientCommitedVidPn;
          if ( ClientVidPnFromLastClientCommitedVidPn < 0 )
          {
            if ( !*((_QWORD *)v15 + 1) )
              WdLogSingleEntry0(1LL);
            v19 = *((_QWORD *)v15 + 1);
            v20 = *(unsigned int *)(*(_QWORD *)(v19 + 16) + 404LL);
            if ( !v19 )
              WdLogSingleEntry0(1LL);
            WdLogSingleEntry5(
              2LL,
              v13,
              v15,
              *(_QWORD *)(*(_QWORD *)this + 64LL),
              *(int *)(*(_QWORD *)(*((_QWORD *)v15 + 1) + 16LL) + 408LL),
              v20);
          }
          else
          {
            LODWORD(v13) = CCD_BTL_ACTIVE_PATHS_COLLECTOR::_ProcessVidPn(this, v21, 1);
            if ( (int)v13 >= 0 )
            {
              auto_rc<DMMVIDPN>::reset((__int64 *)&v21, 0LL);
              DXGFASTMUTEX::Release((struct _KTHREAD **)(v22 + 40));
LABEL_13:
              COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v27);
              goto LABEL_14;
            }
          }
          auto_rc<DMMVIDPN>::reset((__int64 *)&v21, 0LL);
          EXCLUSIVEACCESS<VIDPN_MGR>::~EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v22);
          goto LABEL_13;
        }
      }
      LODWORD(v13) = 0;
      goto LABEL_13;
    }
    auto_rc<DMMVIDPN const>::reset((__int64 *)&v21, 0LL);
    DXGFASTMUTEX::Release((struct _KTHREAD **)(v23 + 40));
  }
  LODWORD(v13) = 0;
LABEL_14:
  if ( v26 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v24);
  return (unsigned int)v13;
}
