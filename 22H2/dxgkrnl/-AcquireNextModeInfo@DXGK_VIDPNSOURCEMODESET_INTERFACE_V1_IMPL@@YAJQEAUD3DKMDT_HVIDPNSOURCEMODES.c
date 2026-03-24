/*
 * XREFs of ?AcquireNextModeInfo@DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNSOURCEMODESET__@@QEBU_D3DKMDT_VIDPN_SOURCE_MODE@@PEAPEBU3@@Z @ 0x1C02E7B70
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C00039E8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00071C8 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNSOURCEMODESET@@PEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@@SAPEAVDMMVIDPNSOURCEMODESET@@PEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@Z @ 0x1C00098BC (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNSOURCEMODESET@@PEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@@S.c)
 *     ?ContainsByReference@?$DoublyLinkedList@VDMMVIDPNSOURCEMODE@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNSOURCEMODE@@@@@@QEAAEQEBVDMMVIDPNSOURCEMODE@@@Z @ 0x1C00178D4 (-ContainsByReference@-$DoublyLinkedList@VDMMVIDPNSOURCEMODE@@U-$DoubleLinkedListElementDeleter@V.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??$AcquireDdiEnumeratorCachedModeInfo@V?$binder2nd@V?$mem_fun1_t@PEAVDMMVIDPNSOURCEMODE@@VDMMVIDPNSOURCEMODESET@@PEBV1@@KM_STL@@@KM_STL@@@DMMVIDPNSOURCEMODESET@@QEAAJV?$binder2nd@V?$mem_fun1_t@PEAVDMMVIDPNSOURCEMODE@@VDMMVIDPNSOURCEMODESET@@PEBV1@@KM_STL@@@KM_STL@@PEAPEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1C013014C (--$AcquireDdiEnumeratorCachedModeInfo@V-$binder2nd@V-$mem_fun1_t@PEAVDMMVIDPNSOURCEMODE@@VDMMVID.c)
 */

__int64 __fastcall DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL::AcquireNextModeInfo(
        DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNSOURCEMODESET__ *const a2,
        const struct _D3DKMDT_VIDPN_SOURCE_MODE *const a3,
        const struct _D3DKMDT_VIDPN_SOURCE_MODE **a4)
{
  struct D3DKMDT_HVIDPNSOURCEMODESET__ *v5; // rbx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rcx
  _QWORD *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  _QWORD *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rsi
  __int64 v19; // rax
  struct D3DKMDT_HVIDPNSOURCEMODESET__ *v20; // rcx
  _DWORD *v21; // rdi
  __int64 v22; // rbx
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rax
  int v27; // eax
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rcx
  bool v31; // zf
  __int64 v32; // rax
  _QWORD *v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rcx
  __int64 v37; // r8
  __int128 v39; // [rsp+20h] [rbp-50h]
  int v40; // [rsp+38h] [rbp-38h] BYREF
  __int64 v41; // [rsp+40h] [rbp-30h]
  char v42; // [rsp+48h] [rbp-28h]
  __int128 v43; // [rsp+50h] [rbp-20h] BYREF
  __int64 v44; // [rsp+60h] [rbp-10h]
  struct D3DKMDT_HVIDPNSOURCEMODESET__ *v45; // [rsp+90h] [rbp+20h] BYREF

  v5 = a2;
  _InterlockedIncrement((volatile signed __int32 *)DXGGLOBAL::GetGlobal((__int64)this, (__int64)a2) + 13);
  v40 = -1;
  v41 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v42 = 1;
    v40 = 7002;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v7, &EventProfilerEnter, v8, 7002);
  }
  else
  {
    v42 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v40, 7002LL);
  v11 = (_QWORD *)WdLogNewEntry5_WdTrace(v10, v9);
  v11[3] = v5;
  v11[4] = this;
  v11[5] = a3;
  if ( a3 )
  {
    *(_QWORD *)&a3->Id = 0LL;
    v18 = ExposedViaHandle<DMMVIDPNSOURCEMODESET,D3DKMDT_HVIDPNSOURCEMODESET__ *>::GetFromHandle((__int64)this);
    if ( v18 )
    {
      v20 = v5 - 4;
      v21 = (_DWORD *)((unsigned __int64)(v5 - 4) & -(__int64)(v5 != 0LL));
      if ( v21 && *v21 == 305419896 )
      {
        v22 = *(_QWORD *)(((unsigned __int64)(v5 - 4) & -(__int64)(v5 != 0LL)) + 8);
        if ( !v22 )
        {
          v23 = WdLogNewEntry5_WdAssertion(v20, v16);
          WdLogEvent5_WdAssertion(v23);
        }
        if ( DoublyLinkedList<DMMVIDPNSOURCEMODE,DoubleLinkedListElementDeleter<DMMVIDPNSOURCEMODE>>::ContainsByReference(
               v18 + 32,
               v22) )
        {
          DWORD2(v39) = 0;
          v45 = 0LL;
          *(_QWORD *)&v39 = DMMVIDPNSOURCEMODESET::GetNextMode;
          v43 = v39;
          v44 = v22;
          v27 = DMMVIDPNSOURCEMODESET::AcquireDdiEnumeratorCachedModeInfo<KM_STL::binder2nd<KM_STL::mem_fun1_t<DMMVIDPNSOURCEMODE *,DMMVIDPNSOURCEMODESET,DMMVIDPNSOURCEMODE const *>>>(
                  v18,
                  (__int64)&v43,
                  &v45);
          v5 = (struct D3DKMDT_HVIDPNSOURCEMODESET__ *)v27;
          if ( v27 == -1071774902 )
          {
            v29 = WdLogNewEntry5_WdTrace(v28, v15);
            v31 = v45 == 0LL;
            *(_QWORD *)(v29 + 24) = v18;
            if ( !v31 )
            {
              v32 = WdLogNewEntry5_WdAssertion(v30, v15);
              WdLogEvent5_WdAssertion(v32);
            }
            LODWORD(v5) = 1075708748;
          }
          else if ( v27 >= 0 )
          {
            v5 = v45;
            if ( !v45 )
            {
              v34 = WdLogNewEntry5_WdAssertion(v28, v15);
              WdLogEvent5_WdAssertion(v34);
            }
            *(_QWORD *)&a3->Id = v5;
            LODWORD(v5) = 0;
          }
          else
          {
            v33 = (_QWORD *)WdLogNewEntry5_WdError(v28, v15);
            v33[3] = v21;
            v33[4] = v18;
            v33[5] = v5;
            WdLogEvent5_WdError(v33);
          }
        }
        else
        {
          v26 = WdLogNewEntry5_WdError(v25, v24);
          *(_QWORD *)(v26 + 24) = v21;
          *(_QWORD *)(v26 + 32) = v18;
          WdLogEvent5_WdError(v26);
          LODWORD(v5) = -1071774928;
        }
      }
      else
      {
        v35 = WdLogNewEntry5_WdError(v20, v16);
        *(_QWORD *)(v35 + 24) = v5;
        WdLogEvent5_WdError(v35);
        LODWORD(v5) = -1071774960;
      }
    }
    else
    {
      v19 = WdLogNewEntry5_WdError(v17, v16);
      *(_QWORD *)(v19 + 24) = this;
      WdLogEvent5_WdError(v19);
      LODWORD(v5) = -1071774968;
    }
  }
  else
  {
    v14 = (_QWORD *)WdLogNewEntry5_WdError(v13, v12);
    v14[3] = 0LL;
    v14[4] = v5;
    v14[5] = this;
    WdLogEvent5_WdError(v14);
    LODWORD(v5) = -1073741811;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v40, v15);
  if ( v42 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v36, &EventProfilerExit, v37, v40);
  return (unsigned int)v5;
}
