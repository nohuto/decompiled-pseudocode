/*
 * XREFs of ?AcquireNextModeInfo@DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@QEBU_D3DKMDT_VIDPN_TARGET_MODE@@PEAPEBU3@@Z @ 0x1C011DDF0
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C00039E8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ContainsByReference@?$DoublyLinkedList@VDMMVIDEOPRESENTTARGET@@U?$DoubleLinkedListElementDeleter@VDMMVIDEOPRESENTTARGET@@@@@@QEAAEQEBVDMMVIDEOPRESENTTARGET@@@Z @ 0x1C0006D70 (-ContainsByReference@-$DoublyLinkedList@VDMMVIDEOPRESENTTARGET@@U-$DoubleLinkedListElementDelete.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00071C8 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@@SAPEAVDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@Z @ 0x1C00074A4 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@@S.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??$AcquireDdiEnumeratorCachedModeInfo@V?$binder2nd@V?$mem_fun1_t@PEAVDMMVIDPNTARGETMODE@@VDMMVIDPNTARGETMODESET@@PEBV1@@KM_STL@@@KM_STL@@@DMMVIDPNTARGETMODESET@@QEAAJV?$binder2nd@V?$mem_fun1_t@PEAVDMMVIDPNTARGETMODE@@VDMMVIDPNTARGETMODESET@@PEBV1@@KM_STL@@@KM_STL@@PEAPEBU_D3DKMDT_VIDPN_TARGET_MODE@@@Z @ 0x1C011DF6C (--$AcquireDdiEnumeratorCachedModeInfo@V-$binder2nd@V-$mem_fun1_t@PEAVDMMVIDPNTARGETMODE@@VDMMVID.c)
 */

__int64 __fastcall DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL::AcquireNextModeInfo(
        DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTARGETMODESET__ *const a2,
        const struct _D3DKMDT_VIDPN_TARGET_MODE *const a3,
        const struct _D3DKMDT_VIDPN_TARGET_MODE **a4)
{
  __int64 v5; // rbx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rcx
  _QWORD *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rsi
  __int64 v17; // rax
  __int64 v18; // rbx
  _DWORD *v19; // rdi
  __int64 v20; // rbx
  __int64 v21; // rdx
  __int64 v22; // rcx
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v29; // rax
  __int64 v30; // rcx
  bool v31; // zf
  _QWORD *v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  _QWORD *v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  __int128 v40; // [rsp+20h] [rbp-50h]
  int v41; // [rsp+38h] [rbp-38h] BYREF
  __int64 v42; // [rsp+40h] [rbp-30h]
  char v43; // [rsp+48h] [rbp-28h]
  __int128 v44; // [rsp+50h] [rbp-20h] BYREF
  __int64 v45; // [rsp+60h] [rbp-10h]
  __int64 v46; // [rsp+90h] [rbp+20h] BYREF

  v5 = (__int64)a2;
  _InterlockedIncrement((volatile signed __int32 *)DXGGLOBAL::GetGlobal((__int64)this, (__int64)a2) + 17);
  v41 = -1;
  v42 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v43 = 1;
    v41 = 7010;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v7, &EventProfilerEnter, v8, 7010);
  }
  else
  {
    v43 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v41, 7010LL);
  v11 = (_QWORD *)WdLogNewEntry5_WdTrace(v10, v9);
  v11[3] = v5;
  v11[4] = this;
  v11[5] = a3;
  if ( a3 )
  {
    *(_QWORD *)&a3->Id = 0LL;
    v16 = ExposedViaHandle<DMMVIDPNTARGETMODESET,D3DKMDT_HVIDPNTARGETMODESET__ *>::GetFromHandle((__int64)this);
    if ( v16 )
    {
      v17 = v5 - 16;
      v18 = -v5;
      v19 = (_DWORD *)(v17 & -(__int64)(v18 != 0));
      if ( v19 && *v19 == 305419896 )
      {
        v20 = *(_QWORD *)((v17 & -(__int64)(v18 != 0)) + 8);
        if ( !v20 )
        {
          v34 = WdLogNewEntry5_WdAssertion(v15, v14);
          WdLogEvent5_WdAssertion(v34);
        }
        if ( DoublyLinkedList<DMMVIDEOPRESENTTARGET,DoubleLinkedListElementDeleter<DMMVIDEOPRESENTTARGET>>::ContainsByReference(
               v16 + 32,
               v20) )
        {
          DWORD2(v40) = 0;
          v46 = 0LL;
          *(_QWORD *)&v40 = DMMVIDPNSOURCEMODESET::GetNextMode;
          v44 = v40;
          v45 = v20;
          v23 = DMMVIDPNTARGETMODESET::AcquireDdiEnumeratorCachedModeInfo<KM_STL::binder2nd<KM_STL::mem_fun1_t<DMMVIDPNTARGETMODE *,DMMVIDPNTARGETMODESET,DMMVIDPNTARGETMODE const *>>>(
                  v16,
                  &v44,
                  &v46);
          v5 = v23;
          if ( v23 == -1071774902 )
          {
            v29 = WdLogNewEntry5_WdTrace(v25, v24);
            v31 = v46 == 0;
            *(_QWORD *)(v29 + 24) = v16;
            if ( !v31 )
            {
              v36 = WdLogNewEntry5_WdAssertion(v30, v24);
              WdLogEvent5_WdAssertion(v36);
            }
            LODWORD(v5) = 1075708748;
          }
          else if ( v23 < 0 )
          {
            v37 = (_QWORD *)WdLogNewEntry5_WdError(v25, v24);
            v37[3] = v19;
            v37[4] = v16;
            v37[5] = v5;
            WdLogEvent5_WdError(v37);
          }
          else
          {
            v5 = v46;
            if ( !v46 )
            {
              v38 = WdLogNewEntry5_WdAssertion(v25, v24);
              WdLogEvent5_WdAssertion(v38);
            }
            *(_QWORD *)&a3->Id = v5;
            LODWORD(v5) = 0;
          }
        }
        else
        {
          v35 = WdLogNewEntry5_WdError(v22, v21);
          *(_QWORD *)(v35 + 24) = v19;
          *(_QWORD *)(v35 + 32) = v16;
          WdLogEvent5_WdError(v35);
          LODWORD(v5) = -1071774928;
        }
      }
      else
      {
        v39 = WdLogNewEntry5_WdError(v15, v14);
        *(_QWORD *)(v39 + 24) = v19;
        WdLogEvent5_WdError(v39);
        LODWORD(v5) = -1071774959;
      }
    }
    else
    {
      v33 = WdLogNewEntry5_WdError(v15, v14);
      *(_QWORD *)(v33 + 24) = this;
      WdLogEvent5_WdError(v33);
      LODWORD(v5) = -1071774967;
    }
  }
  else
  {
    v32 = (_QWORD *)WdLogNewEntry5_WdError(v13, v12);
    v32[3] = 0LL;
    v32[4] = v5;
    v32[5] = this;
    WdLogEvent5_WdError(v32);
    LODWORD(v5) = -1073741811;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v41, v24);
  if ( v43 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v26, &EventProfilerExit, v27, v41);
  return (unsigned int)v5;
}
