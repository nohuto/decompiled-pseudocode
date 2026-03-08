/*
 * XREFs of ?PullNewPerFrameData@CSynchronousSuperWetInk@@AEAAXIPEA_N@Z @ 0x180250A64
 * Callers:
 *     ?Draw@CSynchronousSuperWetInk@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1802501B4 (-Draw@CSynchronousSuperWetInk@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?LookupPerFrameData@CSynchronousSuperWetInk@@AEAAJIPEAV?$shared_ptr@$$BY0A@E@std@@@Z @ 0x180250494 (-LookupPerFrameData@CSynchronousSuperWetInk@@AEAAJIPEAV-$shared_ptr@$$BY0A@E@std@@@Z.c)
 * Callees:
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x1800254CC (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180034790 (--2@YAPEAX_K@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18012BB3A (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x1801AEDB0 (-terminate@details@gsl@@YAXXZ.c)
 *     McTemplateU0px_EventWriteTransfer @ 0x18022B6EC (McTemplateU0px_EventWriteTransfer.c)
 *     ??$_Try_emplace@AEB_K$$V@?$map@_KV?$shared_ptr@$$BY0A@E@std@@U?$less@_K@2@V?$allocator@U?$pair@$$CB_KV?$shared_ptr@$$BY0A@E@std@@@std@@@2@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CB_KV?$shared_ptr@$$BY0A@E@std@@@std@@PEAX@std@@_N@1@AEB_K@Z @ 0x18024F960 (--$_Try_emplace@AEB_K$$V@-$map@_KV-$shared_ptr@$$BY0A@E@std@@U-$less@_K@2@V-$allocator@U-$pair@$.c)
 *     ??4?$shared_ptr@$$BY0A@E@std@@QEAAAEAV01@AEBV01@@Z @ 0x18024FE0C (--4-$shared_ptr@$$BY0A@E@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?GetLatestLookupId@CSynchronousSuperWetInk@@AEBA_KXZ @ 0x180250384 (-GetLatestLookupId@CSynchronousSuperWetInk@@AEBA_KXZ.c)
 *     ?PopAll@CSharedCircularQueue@@QEAAXV?$span@E$0?0@gsl@@IPEAI1@Z @ 0x180250980 (-PopAll@CSharedCircularQueue@@QEAAXV-$span@E$0-0@gsl@@IPEAI1@Z.c)
 *     ?assign@?$vector@EV?$allocator@E@std@@@std@@QEAAX_KAEBE@Z @ 0x180250D6C (-assign@-$vector@EV-$allocator@E@std@@@std@@QEAAX_KAEBE@Z.c)
 *     ?clear@?$_Tree@V?$_Tmap_traits@_KV?$shared_ptr@$$BY0A@E@std@@U?$less@_K@2@V?$allocator@U?$pair@$$CB_KV?$shared_ptr@$$BY0A@E@std@@@std@@@2@$0A@@std@@@std@@QEAAXXZ @ 0x180250E08 (-clear@-$_Tree@V-$_Tmap_traits@_KV-$shared_ptr@$$BY0A@E@std@@U-$less@_K@2@V-$allocator@U-$pair@$.c)
 *     McTemplateU0pxttt_EventWriteTransfer @ 0x180250E48 (McTemplateU0pxttt_EventWriteTransfer.c)
 *     memcpy_s_1 @ 0x180250EFC (memcpy_s_1.c)
 */

void __fastcall CSynchronousSuperWetInk::PullNewPerFrameData(CSynchronousSuperWetInk *this, int a2, bool *a3)
{
  __int64 v3; // r9
  std::_Ref_count_base **v4; // r13
  unsigned int v6; // r12d
  __int64 v7; // rdx
  std::_Ref_count_base *v8; // rbx
  _DWORD *v9; // rsi
  unsigned int v10; // r15d
  gsl::details *v11; // rcx
  int v12; // edx
  unsigned int v13; // r15d
  _DWORD *v14; // rbx
  unsigned __int8 v15; // si
  unsigned __int64 LatestLookupId; // rax
  bool v17; // cf
  char v18; // cl
  bool v19; // r13
  void *v20; // r12
  std::_Ref_count_base *v21; // rax
  std::_Ref_count_base *v22; // rdi
  __int64 *v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rcx
  void *v26; // [rsp+40h] [rbp-28h] BYREF
  std::_Ref_count_base *v27; // [rsp+48h] [rbp-20h]
  char v28[24]; // [rsp+50h] [rbp-18h] BYREF
  unsigned int v29; // [rsp+B0h] [rbp+48h] BYREF
  int v30; // [rsp+B8h] [rbp+50h]
  bool *v31; // [rsp+C0h] [rbp+58h]
  rsize_t SourceSize; // [rsp+C8h] [rbp+60h]

  v31 = a3;
  v30 = a2;
  v3 = *((_QWORD *)this + 27);
  v4 = (std::_Ref_count_base **)((char *)this + 264);
  *a3 = 0;
  LOBYTE(v29) = 0;
  v6 = *(_DWORD *)(v3 + 8);
  v7 = *(_DWORD *)(v3 + 12) * v6;
  LODWORD(SourceSize) = v6;
  std::vector<unsigned char>::assign((char *)this + 264, v7, &v29);
  v8 = *v4;
  v9 = (_DWORD *)*((_QWORD *)this + 27);
  v10 = *((_DWORD *)this + 60);
  gsl::details::extent_type<-1>::extent_type<-1>((gsl::details *)&v26, *((_QWORD *)this + 34) - (_QWORD)*v4);
  if ( v26 == (void *)-1LL || !v8 && v26 )
  {
    gsl::details::terminate(v11);
    JUMPOUT(0x180250C9CLL);
  }
  v27 = v8;
  CSharedCircularQueue::PopAll(v9, (__int64)&v26, v10, &v29, (unsigned int *)this + 60);
  v13 = v29;
  while ( (--v13 & 0x80000000) == 0 )
  {
    v14 = (_DWORD *)((char *)*v4 + v6 * v13);
    if ( v14[4] > v6 - 24 )
    {
      v18 = 0;
      v15 = 0;
LABEL_26:
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x100000) != 0 )
        McTemplateU0pxttt_EventWriteTransfer(v15, v12, (_DWORD)this, *(_QWORD *)v14, 0, v15, v18);
      goto LABEL_28;
    }
    v15 = 0;
    if ( !*(_QWORD *)v14 )
    {
      v15 = 1;
      *((_BYTE *)this + 96) = 1;
    }
    LatestLookupId = CSynchronousSuperWetInk::GetLatestLookupId(this);
    v17 = *(_QWORD *)v14 < LatestLookupId;
    if ( *(_QWORD *)v14 < LatestLookupId )
    {
      v18 = 1;
      if ( !v15 )
        goto LABEL_26;
      v17 = *(_QWORD *)v14 < LatestLookupId;
    }
    v19 = !v17;
    v20 = operator new(v6);
    v21 = (std::_Ref_count_base *)operator new(0x18uLL);
    v22 = v21;
    if ( v21 )
    {
      *((_DWORD *)v21 + 2) = 1;
      *((_DWORD *)v21 + 3) = 1;
      *(_QWORD *)v21 = &std::_Ref_count_resource<unsigned char *,std::default_delete<unsigned char [0]>>::`vftable';
      *((_QWORD *)v21 + 2) = v20;
    }
    else
    {
      v22 = 0LL;
    }
    v26 = v20;
    v27 = v22;
    memcpy_s_1(v20, (unsigned int)SourceSize, v14, (unsigned int)SourceSize);
    v23 = (__int64 *)((char *)this + 224);
    if ( v15 )
    {
      std::_Tree<std::_Tmap_traits<unsigned __int64,std::shared_ptr<unsigned char [0]>,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,std::shared_ptr<unsigned char [0]>>>,0>>::clear(v23);
    }
    else
    {
      v24 = std::map<unsigned __int64,std::shared_ptr<unsigned char [0]>>::_Try_emplace<unsigned __int64 const &,>(
              v23,
              (__int64)v28,
              (unsigned __int64 *)v14);
      std::shared_ptr<unsigned char [0]>::operator=((_QWORD *)(*(_QWORD *)v24 + 40LL), &v26);
      if ( *(_QWORD *)v14 != v30 )
        goto LABEL_18;
    }
    std::shared_ptr<unsigned char [0]>::operator=((_QWORD *)this + 31, &v26);
LABEL_18:
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x100000) != 0 )
      McTemplateU0px_EventWriteTransfer(
        v25,
        &EVTDESC_SYNCHRONOUSSUPERWETINK_LOOKUPPERFRAMEDATA_NEW_FROM_GUEST,
        this,
        *(_QWORD *)v14);
    *v31 = 1;
    if ( v22 )
      std::_Ref_count_base::_Decref(v22);
    if ( !v19 )
    {
      v18 = 1;
      if ( !v15 )
        goto LABEL_26;
    }
LABEL_28:
    v6 = SourceSize;
    v4 = (std::_Ref_count_base **)((char *)this + 264);
  }
}
