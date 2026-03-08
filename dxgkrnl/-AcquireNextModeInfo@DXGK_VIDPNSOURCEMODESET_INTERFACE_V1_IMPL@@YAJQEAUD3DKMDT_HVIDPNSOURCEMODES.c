/*
 * XREFs of ?AcquireNextModeInfo@DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNSOURCEMODESET__@@QEBU_D3DKMDT_VIDPN_SOURCE_MODE@@PEAPEBU3@@Z @ 0x1C03B2E10
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNSOURCEMODESET@@PEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@@SAPEAVDMMVIDPNSOURCEMODESET@@PEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@Z @ 0x1C0002498 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNSOURCEMODESET@@PEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@@S.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0007FCC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0008010 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?ContainsByReference@?$DoublyLinkedList@VDMMVIDPNSOURCEMODE@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNSOURCEMODE@@@@@@QEAAEQEBVDMMVIDPNSOURCEMODE@@@Z @ 0x1C0011050 (-ContainsByReference@-$DoublyLinkedList@VDMMVIDPNSOURCEMODE@@U-$DoubleLinkedListElementDeleter@V.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002463C (McTemplateK0q_EtwWriteTransfer.c)
 *     ??$AcquireDdiEnumeratorCachedModeInfo@V?$binder2nd@V?$mem_fun1_t@PEAVDMMVIDPNSOURCEMODE@@VDMMVIDPNSOURCEMODESET@@PEBV1@@KM_STL@@@KM_STL@@@DMMVIDPNSOURCEMODESET@@QEAAJV?$binder2nd@V?$mem_fun1_t@PEAVDMMVIDPNSOURCEMODE@@VDMMVIDPNSOURCEMODESET@@PEBV1@@KM_STL@@@KM_STL@@PEAPEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1C020086C (--$AcquireDdiEnumeratorCachedModeInfo@V-$binder2nd@V-$mem_fun1_t@PEAVDMMVIDPNSOURCEMODE@@VDMMVID.c)
 */

__int64 __fastcall DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL::AcquireNextModeInfo(
        DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNSOURCEMODESET__ *const a2,
        const struct _D3DKMDT_VIDPN_SOURCE_MODE *const a3,
        const struct _D3DKMDT_VIDPN_SOURCE_MODE **a4)
{
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  _QWORD *v13; // rax
  unsigned int v14; // ebx
  __int64 v15; // rsi
  _DWORD *v16; // rdi
  __int64 v17; // rbx
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rax
  bool v24; // zf
  __int64 v25; // rbx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int128 v29; // [rsp+20h] [rbp-50h]
  int v30; // [rsp+38h] [rbp-38h] BYREF
  __int64 v31; // [rsp+40h] [rbp-30h]
  char v32; // [rsp+48h] [rbp-28h]
  __int128 v33; // [rsp+50h] [rbp-20h] BYREF
  __int64 v34; // [rsp+60h] [rbp-10h]
  __int64 v35; // [rsp+90h] [rbp+20h] BYREF

  _InterlockedIncrement((volatile signed __int32 *)DXGGLOBAL::GetGlobal() + 27);
  v30 = -1;
  v31 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v32 = 1;
    v30 = 7002;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v7, &EventProfilerEnter, v8, 7002);
  }
  else
  {
    v32 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v30, 7002);
  v13 = (_QWORD *)WdLogNewEntry5_WdTrace(v10, v9, v11, v12);
  v13[3] = a2;
  v13[4] = this;
  v13[5] = a3;
  if ( a3 )
  {
    *(_QWORD *)&a3->Id = 0LL;
    v15 = ExposedViaHandle<DMMVIDPNSOURCEMODESET,D3DKMDT_HVIDPNSOURCEMODESET__ *>::GetFromHandle((__int64)this);
    if ( v15 )
    {
      v16 = (_DWORD *)((unsigned __int64)(a2 - 4) & -(__int64)(a2 != 0LL));
      if ( v16 && *v16 == 305419896 )
      {
        v17 = *(_QWORD *)(((unsigned __int64)(a2 - 4) & -(__int64)(a2 != 0LL)) + 8);
        if ( !v17 )
          WdLogSingleEntry0(1LL);
        if ( DoublyLinkedList<DMMVIDPNSOURCEMODE,DoubleLinkedListElementDeleter<DMMVIDPNSOURCEMODE>>::ContainsByReference(
               v15 + 32,
               v17) )
        {
          DWORD2(v29) = 0;
          v35 = 0LL;
          *(_QWORD *)&v29 = DMMVIDPNSOURCEMODESET::GetNextMode;
          v33 = v29;
          v34 = v17;
          v18 = DMMVIDPNSOURCEMODESET::AcquireDdiEnumeratorCachedModeInfo<KM_STL::binder2nd<KM_STL::mem_fun1_t<DMMVIDPNSOURCEMODE *,DMMVIDPNSOURCEMODESET,DMMVIDPNSOURCEMODE const *>>>(
                  v15,
                  (__int64)&v33,
                  &v35);
          v14 = v18;
          if ( v18 == -1071774902 )
          {
            v23 = WdLogNewEntry5_WdTrace(v20, v19, v21, v22);
            v24 = v35 == 0;
            *(_QWORD *)(v23 + 24) = v15;
            if ( !v24 )
              WdLogSingleEntry0(1LL);
            v14 = 1075708748;
          }
          else if ( v18 >= 0 )
          {
            v25 = v35;
            if ( !v35 )
              WdLogSingleEntry0(1LL);
            *(_QWORD *)&a3->Id = v25;
            v14 = 0;
          }
          else
          {
            WdLogSingleEntry3(2LL, v16, v15, v18);
          }
        }
        else
        {
          WdLogSingleEntry2(2LL, v16, v15);
          v14 = -1071774928;
        }
      }
      else
      {
        WdLogSingleEntry1(2LL, a2);
        v14 = -1071774960;
      }
    }
    else
    {
      WdLogSingleEntry1(2LL, this);
      v14 = -1071774968;
    }
  }
  else
  {
    WdLogSingleEntry3(2LL, 0LL, a2, this);
    v14 = -1073741811;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v30);
  if ( v32 )
  {
    LOBYTE(v26) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v26, &EventProfilerExit, v27, v30);
  }
  return v14;
}
