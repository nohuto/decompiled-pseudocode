/*
 * XREFs of ?DmmGetMultisamplingMethodSetFromClientVidPnSource@@YAJQEAXIIIW4_D3DDDIFORMAT@@_KPEAU_D3DDDI_MULTISAMPLINGMETHOD@@PEA_K@Z @ 0x1C02DD648
 * Callers:
 *     DxgkGetMultisampleMethodList @ 0x1C025F120 (DxgkGetMultisampleMethodList.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0003960 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00051D8 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?FindById@?$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C0009260 (-FindById@-$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0009550 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C000A974 (-reset@-$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C000ADEC (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?FindBestMatch@DMMVIDPNSOURCEMODESET@@QEAAPEBVDMMVIDPNSOURCEMODE@@IIW4_D3DDDIFORMAT@@W4_D3DKMDT_VIDPN_SOURCE_MODE_TYPE@@@Z @ 0x1C000DDE8 (-FindBestMatch@DMMVIDPNSOURCEMODESET@@QEAAPEBVDMMVIDPNSOURCEMODE@@IIW4_D3DDDIFORMAT@@W4_D3DKMDT_.c)
 *     memmove @ 0x1C0028D00 (memmove.c)
 *     memset @ 0x1C0028FC0 (memset.c)
 *     ?FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIVOT@@@Z @ 0x1C011C7C4 (-FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIV.c)
 *     ?PinMode@DMMVIDPNSOURCEMODESET@@QEAAJI@Z @ 0x1C012F420 (-PinMode@DMMVIDPNSOURCEMODESET@@QEAAJI@Z.c)
 *     ?CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C014164C (-CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 */

__int64 __fastcall DmmGetMultisamplingMethodSetFromClientVidPnSource(
        DXGADAPTER *this,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        _D3DDDIFORMAT a5,
        unsigned __int64 a6,
        struct _D3DDDI_MULTISAMPLINGMETHOD *a7,
        unsigned __int64 *a8)
{
  __int64 v8; // r12
  unsigned __int64 *v10; // r15
  __int64 v11; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rax
  struct VIDPN_MGR *v17; // r13
  __int64 v18; // rax
  int ClientVidPnFromLastClientCommitedVidPn; // eax
  __int64 v20; // rcx
  __int64 v21; // rdi
  __int64 v22; // rax
  unsigned __int64 v23; // rbx
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r14
  __int64 v28; // rax
  __int64 v29; // rax
  DMMVIDPNSOURCEMODESET *v30; // rdi
  __int64 v31; // rax
  __int64 v32; // rax
  const struct DMMVIDPNSOURCEMODE *BestMatch; // rax
  __int64 v34; // rcx
  _QWORD *v35; // rax
  int v36; // eax
  __int64 v37; // rdx
  __int64 v38; // rcx
  _QWORD *v39; // rax
  int v40; // eax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r13
  _QWORD *v45; // rax
  _QWORD *v46; // rax
  unsigned __int64 v47; // rbx
  size_t v48; // r8
  unsigned __int64 v49; // rdi
  __int64 v50; // rax
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // rax
  __int64 v54; // rdx
  DMMVIDPNSOURCEMODESET *v55; // [rsp+30h] [rbp-10h] BYREF
  __int64 v56; // [rsp+38h] [rbp-8h] BYREF
  DXGK_ENUM_PIVOT v57; // [rsp+80h] [rbp+40h] BYREF
  unsigned int v58; // [rsp+90h] [rbp+50h]
  unsigned int v59; // [rsp+98h] [rbp+58h]

  v59 = a4;
  v58 = a3;
  v8 = (unsigned int)a2;
  if ( a7 )
    memset(a7, 0, 8 * a6);
  v10 = a8;
  if ( a8 )
    *a8 = 0LL;
  if ( !this )
  {
    v11 = WdLogNewEntry5_WdError(this, a2);
    *(_QWORD *)(v11 + 24) = 0LL;
LABEL_7:
    WdLogEvent5_WdError(v11);
    return 3223191554LL;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this) )
  {
    v15 = WdLogNewEntry5_WdAssertion(v14, v13);
    WdLogEvent5_WdAssertion(v15);
  }
  v16 = *((_QWORD *)this + 337);
  if ( !v16 )
  {
    v11 = WdLogNewEntry5_WdError(v14, v13);
    *(_QWORD *)(v11 + 24) = this;
    goto LABEL_7;
  }
  v17 = *(struct VIDPN_MGR **)(v16 + 88);
  if ( v17 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v56, *(_QWORD *)(v16 + 88));
    a8 = 0LL;
    ClientVidPnFromLastClientCommitedVidPn = VIDPN_MGR::CreateClientVidPnFromLastClientCommitedVidPn(
                                               v17,
                                               (__int64 *)&a8);
    v21 = ClientVidPnFromLastClientCommitedVidPn;
    if ( ClientVidPnFromLastClientCommitedVidPn >= 0 )
    {
      v23 = (unsigned __int64)a8;
      v24 = IndexedSet<DMMVIDEOPRESENTTARGET>::FindById(a8[38], v8);
      v27 = v24;
      if ( v24 )
      {
        v29 = *(_QWORD *)(v24 + 104);
        if ( v29 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v29 + 96));
          v30 = *(DMMVIDPNSOURCEMODESET **)(v27 + 104);
          v23 = (unsigned __int64)a8;
        }
        else
        {
          v30 = 0LL;
        }
        v31 = *((_QWORD *)v30 + 18);
        v55 = v30;
        if ( v31 )
        {
          BestMatch = DMMVIDPNSOURCEMODESET::FindBestMatch(
                        v30,
                        v58,
                        v59,
                        a5,
                        (enum _D3DKMDT_VIDPN_SOURCE_MODE_TYPE)*(_DWORD *)(v31 + 72));
          if ( BestMatch )
          {
            v36 = DMMVIDPNSOURCEMODESET::PinMode(v30, *((_DWORD *)BestMatch + 6));
            v21 = v36;
            if ( v36 >= 0 )
            {
              v57.VidPnTargetId = -1;
              v57.VidPnSourceId = v8;
              v40 = VIDPN_MGR::FormalizeVidPnChange(
                      (__int64)v17,
                      (D3DKMDT_HVIDPN)(v23 & -(__int64)(v23 != -88LL)),
                      3LL,
                      1,
                      &v57);
              v44 = v40;
              if ( v40 >= 0 )
              {
                v47 = *(_QWORD *)(v27 + 168) >> 3;
                v48 = 8 * v47;
                if ( v10 )
                  *v10 = v48;
                v49 = a6;
                if ( a6 >= v47 )
                {
                  if ( a7 )
                    memmove(a7, *(const void **)(v27 + 160), v48);
                  LODWORD(v21) = 0;
                }
                else
                {
                  v50 = WdLogNewEntry5_WdDmmEvent(v42);
                  *(_QWORD *)(v50 + 24) = v49;
                  *(_QWORD *)(v50 + 32) = v47;
                  WdLogEvent5_WdDmmEvent(v50);
                  if ( !v10 )
                  {
                    v53 = WdLogNewEntry5_WdAssertion(v52, v51);
                    WdLogEvent5_WdAssertion(v53);
                  }
                  LODWORD(v21) = -1073741789;
                }
              }
              else
              {
                if ( v40 == -1071774970 )
                {
                  v45 = (_QWORD *)WdLogNewEntry5_WdWarning(v42, v41, v43);
                  v45[3] = v23;
                  v45[4] = v8;
                  v45[5] = this;
                  WdLogEvent5_WdWarning(v45);
                }
                else
                {
                  v46 = (_QWORD *)WdLogNewEntry5_WdError(v42, v41);
                  v46[3] = v58;
                  v46[4] = v59;
                  v46[5] = a5;
                  v46[6] = v8;
                  v46[7] = v44;
                  WdLogEvent5_WdError(v46);
                }
                LODWORD(v21) = v44;
              }
            }
            else
            {
              v39 = (_QWORD *)WdLogNewEntry5_WdError(v38, v37);
              v39[4] = v58;
              v39[5] = v59;
              v39[6] = a5;
              v39[3] = v8;
              v39[7] = v21;
              WdLogEvent5_WdError(v39);
            }
          }
          else
          {
            v35 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v34);
            v35[3] = v58;
            v35[4] = v59;
            v35[5] = a5;
            v35[6] = v8;
            v35[7] = this;
            WdLogEvent5_WdDmmEvent(v35);
            LODWORD(v21) = -1071774970;
          }
        }
        else
        {
          v32 = WdLogNewEntry5_WdError(v26, v25);
          *(_QWORD *)(v32 + 24) = v27;
          WdLogEvent5_WdError(v32);
          LODWORD(v21) = 1075708679;
        }
        auto_rc<DMMVIDPNSOURCEMODESET>::reset((__int64 *)&v55, 0LL);
      }
      else
      {
        v28 = WdLogNewEntry5_WdError(v26, v25);
        *(_QWORD *)(v28 + 24) = v8;
        WdLogEvent5_WdError(v28);
        LODWORD(v21) = -1071774972;
      }
    }
    else
    {
      v22 = WdLogNewEntry5_WdDmmEvent(v20);
      *(_QWORD *)(v22 + 24) = v21;
      WdLogEvent5_WdDmmEvent(v22);
    }
    auto_rc<DMMVIDPN>::reset((__int64 *)&a8, 0LL);
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v56 + 40), v54);
    return (unsigned int)v21;
  }
  else
  {
    v18 = WdLogNewEntry5_WdError(v14, v13);
    *(_QWORD *)(v18 + 24) = this;
    WdLogEvent5_WdError(v18);
    return 3223192373LL;
  }
}
