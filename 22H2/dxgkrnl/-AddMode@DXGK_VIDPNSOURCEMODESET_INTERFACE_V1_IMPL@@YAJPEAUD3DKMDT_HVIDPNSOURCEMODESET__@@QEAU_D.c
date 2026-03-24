/*
 * XREFs of ?AddMode@DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNSOURCEMODESET__@@QEAU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1C011A810
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0003524 (--3@YAXPEAX@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C00039E8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0003A2C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00071C8 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?ContainsByReference@?$DoublyLinkedList@VDMMVIDPNSOURCEMODE@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNSOURCEMODE@@@@@@QEAAEQEBVDMMVIDPNSOURCEMODE@@@Z @ 0x1C00178D4 (-ContainsByReference@-$DoublyLinkedList@VDMMVIDPNSOURCEMODE@@U-$DoubleLinkedListElementDeleter@V.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C0018EB8 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 *     ?AddMode@DMMVIDPNSOURCEMODESET@@QEAAJV?$auto_ptr@VDMMVIDPNSOURCEMODE@@@@@Z @ 0x1C011AA60 (-AddMode@DMMVIDPNSOURCEMODESET@@QEAAJV-$auto_ptr@VDMMVIDPNSOURCEMODE@@@@@Z.c)
 *     ?IsPathFromSourceConnectedToIndirectDisplay@DMMVIDPN@@QEBAEI@Z @ 0x1C02E9120 (-IsPathFromSourceConnectedToIndirectDisplay@DMMVIDPN@@QEBAEI@Z.c)
 */

__int64 __fastcall DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL::AddMode(
        DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNSOURCEMODESET__ *a2,
        struct _D3DKMDT_VIDPN_SOURCE_MODE *const a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *v10; // r15
  struct D3DKMDT_HVIDPNSOURCEMODESET__ *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  struct D3DKMDT_HVIDPNSOURCEMODESET__ *v16; // rsi
  struct D3DKMDT_HVIDPNSOURCEMODESET__ *v17; // rbx
  int v18; // eax
  struct D3DKMDT_HVIDPNSOURCEMODESET__ *v19; // rdi
  __int64 v20; // rcx
  __int64 v21; // rcx
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rbx
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rbx
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rbx
  __int64 v43; // rcx
  unsigned int v44; // edi
  __int64 v45; // rax
  DMMVIDPN *Container; // rax
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // rax
  __int64 v50; // rax
  _QWORD *v51; // rax
  __int64 v52; // rax
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rax
  _QWORD *v59; // rax
  _QWORD *v60; // rax
  __int64 v61; // rax
  _QWORD *v62; // rax
  _QWORD *v63; // rax
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // rax
  int v67; // [rsp+20h] [rbp-38h] BYREF
  __int64 v68; // [rsp+28h] [rbp-30h]
  char v69; // [rsp+30h] [rbp-28h]
  struct D3DKMDT_HVIDPNSOURCEMODESET__ *v70; // [rsp+60h] [rbp+8h] BYREF

  v67 = -1;
  v68 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v69 = 1;
    v67 = 7006;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, (__int64)a3, 7006);
  }
  else
  {
    v69 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v67, 7006LL);
  v7 = WdLogNewEntry5_WdTrace(v6, v5);
  *(_QWORD *)(v7 + 24) = a2;
  *(_QWORD *)(v7 + 32) = this;
  if ( !a2 )
  {
    v30 = WdLogNewEntry5_WdError(v9, v8);
    *(_QWORD *)(v30 + 24) = 0LL;
    *(_QWORD *)(v30 + 32) = this;
LABEL_52:
    WdLogEvent5_WdError(v30);
    goto LABEL_53;
  }
  if ( this && *((_DWORD *)this + 32) == 1833173004 )
    v10 = this;
  else
    v10 = 0LL;
  if ( !v10 )
  {
    v31 = WdLogNewEntry5_WdError(v9, v8);
    *(_QWORD *)(v31 + 24) = this;
    WdLogEvent5_WdError(v31);
    LODWORD(v19) = -1071774968;
    goto LABEL_33;
  }
  if ( (unsigned int)(*((_DWORD *)a2 + 1) - 3) <= 1 )
  {
    v32 = *((_QWORD *)v10 + 14);
    v33 = *(_QWORD *)(v32 + 40);
    if ( !v33 )
    {
      v34 = WdLogNewEntry5_WdAssertion(0LL, v8);
      WdLogEvent5_WdAssertion(v34);
      v33 = *(_QWORD *)(v32 + 40);
    }
    v37 = *(_QWORD *)(ContainedBy<DMMVIDPN>::GetContainer(v33 + 64, v8) + 48);
    v38 = *(_QWORD *)(v37 + 8);
    if ( !v38 )
    {
      v39 = WdLogNewEntry5_WdAssertion(v36, v35);
      WdLogEvent5_WdAssertion(v39);
      v38 = *(_QWORD *)(v37 + 8);
    }
    v40 = *(_QWORD *)(v38 + 16);
    if ( *(int *)(v40 + 2596) < 1200 && *(_BYTE *)(v40 + 2608) )
    {
      v41 = WdLogNewEntry5_WdAssertion(v36, v35);
      WdLogEvent5_WdAssertion(v41);
LABEL_53:
      LODWORD(v19) = -1071774960;
      goto LABEL_33;
    }
    v42 = *((_QWORD *)v10 + 14);
    v43 = *(_QWORD *)(v42 + 40);
    v44 = *(_DWORD *)(v42 + 24);
    if ( !v43 )
    {
      v45 = WdLogNewEntry5_WdAssertion(0LL, v35);
      WdLogEvent5_WdAssertion(v45);
      v43 = *(_QWORD *)(v42 + 40);
    }
    Container = (DMMVIDPN *)ContainedBy<DMMVIDPN>::GetContainer(v43 + 64, v35);
    if ( DMMVIDPN::IsPathFromSourceConnectedToIndirectDisplay(Container, v44) )
    {
      v30 = WdLogNewEntry5_WdError(v48, v47);
      goto LABEL_52;
    }
  }
  v11 = (struct D3DKMDT_HVIDPNSOURCEMODESET__ *)operator new[](0x70uLL, 0x4E506456u, PagedPool);
  v16 = v11;
  if ( v11 )
  {
    v13 = *(_DWORD *)a2;
    *((_QWORD *)v11 + 1) = 0LL;
    *((_QWORD *)v11 + 2) = 0LL;
    *(_QWORD *)v11 = &SetElement::`vftable';
    *((_DWORD *)v11 + 6) = v13;
    if ( (_DWORD)v13 == -1 )
    {
      v49 = WdLogNewEntry5_WdAssertion(v13, v12);
      *(_QWORD *)(v49 + 24) = 240LL;
      WdLogEvent5_WdAssertion(v49);
    }
    *((_QWORD *)v16 + 5) = 0LL;
    *((_DWORD *)v16 + 18) = 0;
    *(_QWORD *)v16 = &DMMVIDPNTARGETMODE::`vftable'{for `IndexedSetElement<unsigned int>'};
    *((_QWORD *)v16 + 4) = &DMMVIDPNSOURCEMODE::`vftable'{for `ContainedBy<DMMVIDPNSOURCEMODESET>'};
    *((_QWORD *)v16 + 6) = &DMMVIDPNTARGETMODE::`vftable'{for `SignedWithClassSignature<DMMVIDPNTARGETMODE>'};
    *((_QWORD *)v16 + 8) = &DMMVIDPNSOURCEMODE::`vftable'{for `NonReferenceCounted'};
    *((_DWORD *)v16 + 14) = 1833173006;
    *(_OWORD *)(v16 + 19) = 0LL;
    *(_OWORD *)(v16 + 23) = 0LL;
  }
  else
  {
    v16 = 0LL;
  }
  v17 = v16;
  if ( !v16 )
  {
    v50 = WdLogNewEntry5_WdLowResource(v13, v12, v14, v15);
    *(_QWORD *)(v50 + 24) = this;
    WdLogEvent5_WdLowResource(v50);
    LODWORD(v19) = -1073741801;
    goto LABEL_31;
  }
  v18 = *((_DWORD *)a2 + 1);
  if ( v18 != 1 )
  {
    if ( v18 == 2 )
    {
      *((_DWORD *)v16 + 18) = 2;
      v16[19] = a2[2];
      goto LABEL_27;
    }
    if ( v18 <= 2 || v18 > 4 )
    {
      v51 = (_QWORD *)WdLogNewEntry5_WdError(v13, v12);
      v51[3] = v16;
      v51[4] = this;
      v51[5] = *((int *)a2 + 1);
      WdLogEvent5_WdError(v51);
      LODWORD(v19) = -1071774960;
      goto LABEL_31;
    }
  }
  v19 = a2 + 2;
  if ( *((_DWORD *)a2 + 2) < 0x64u || *((_DWORD *)a2 + 3) < 0x64u )
  {
    v60 = (_QWORD *)WdLogNewEntry5_WdError(v13, v12);
    v60[3] = *(_DWORD *)v19;
    v60[4] = *((unsigned int *)a2 + 3);
    v60[5] = v19;
    WdLogEvent5_WdError(v60);
    LODWORD(v19) = -1071774918;
  }
  else if ( *((_DWORD *)a2 + 4) < 0x64u || *((_DWORD *)a2 + 5) < 0x64u )
  {
    v59 = (_QWORD *)WdLogNewEntry5_WdError(v13, v12);
    v59[3] = *((unsigned int *)a2 + 4);
    v59[4] = *((unsigned int *)a2 + 5);
    v59[5] = v19;
    WdLogEvent5_WdError(v59);
    LODWORD(v19) = -1071774917;
  }
  else if ( *((_DWORD *)a2 + 6) )
  {
    if ( *((_DWORD *)a2 + 7) )
    {
      v20 = *((unsigned int *)a2 + 8);
      if ( (_DWORD)v20 && (int)v20 <= 5 )
      {
        v21 = *((unsigned int *)a2 + 9);
        if ( (_DWORD)v21 && (int)v21 <= 3 )
        {
          *((_DWORD *)v16 + 18) = v18;
          *(_OWORD *)(v16 + 19) = *(_OWORD *)v19;
          LODWORD(v19) = 0;
          *(_OWORD *)(v16 + 23) = *(_OWORD *)(a2 + 6);
          goto LABEL_26;
        }
        v57 = WdLogNewEntry5_WdError(v21, v12);
        *(_QWORD *)(v57 + 24) = *((int *)a2 + 9);
        *(_QWORD *)(v57 + 32) = v19;
        WdLogEvent5_WdError(v57);
        LODWORD(v19) = -1071774913;
      }
      else
      {
        v58 = WdLogNewEntry5_WdError(v20, v12);
        *(_QWORD *)(v58 + 24) = *((int *)a2 + 8);
        *(_QWORD *)(v58 + 32) = v19;
        WdLogEvent5_WdError(v58);
        LODWORD(v19) = -1071774914;
      }
    }
    else
    {
      v56 = WdLogNewEntry5_WdError(v13, v12);
      *(_QWORD *)(v56 + 24) = *((int *)a2 + 7);
      *(_QWORD *)(v56 + 32) = v19;
      WdLogEvent5_WdError(v56);
      LODWORD(v19) = -1071774915;
    }
  }
  else
  {
    v52 = WdLogNewEntry5_WdError(v13, v12);
    *(_QWORD *)(v52 + 24) = *((unsigned int *)a2 + 6);
    *(_QWORD *)(v52 + 32) = v19;
    WdLogEvent5_WdError(v52);
    LODWORD(v19) = -1071774916;
  }
  v61 = WdLogNewEntry5_WdWarning(v54, v53, v55);
  WdLogEvent5_WdWarning(v61);
LABEL_26:
  if ( (int)v19 < 0 )
  {
    v62 = (_QWORD *)WdLogNewEntry5_WdTrace(v21, v12);
    v62[3] = v16;
    v62[4] = this;
    v62[5] = (int)v19;
    goto LABEL_31;
  }
LABEL_27:
  v70 = v16;
  v17 = 0LL;
  v22 = DMMVIDPNSOURCEMODESET::AddMode(v10, &v70);
  v19 = (struct D3DKMDT_HVIDPNSOURCEMODESET__ *)v22;
  if ( v22 >= 0 )
  {
    v19 = a2 - 4;
    if ( *((_DWORD *)a2 - 4) == 305419896 )
    {
      v25 = *((_QWORD *)v19 + 1);
      if ( v25
        && !DoublyLinkedList<DMMVIDPNSOURCEMODE,DoubleLinkedListElementDeleter<DMMVIDPNSOURCEMODE>>::ContainsByReference(
              (__int64)v10 + 32,
              v25) )
      {
        v66 = WdLogNewEntry5_WdError(v65, v64);
        *(_QWORD *)(v66 + 24) = v19;
        *(_QWORD *)(v66 + 32) = v10;
        WdLogEvent5_WdError(v66);
        LODWORD(v19) = -1071774928;
        goto LABEL_33;
      }
      operator delete(a2 - 4);
      LODWORD(v19) = 0;
      goto LABEL_31;
    }
    v30 = WdLogNewEntry5_WdError(v24, v23);
    *(_QWORD *)(v30 + 24) = v19;
    goto LABEL_52;
  }
  v63 = (_QWORD *)WdLogNewEntry5_WdTrace(v24, v23);
  v63[3] = a2;
  v63[4] = this;
  v63[5] = v19;
LABEL_31:
  if ( v17 )
    (**(void (__fastcall ***)(struct D3DKMDT_HVIDPNSOURCEMODESET__ *, __int64))v17)(v17, 1LL);
LABEL_33:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v67, v26);
  if ( v69 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v27, &EventProfilerExit, v28, v67);
  return (unsigned int)v19;
}
