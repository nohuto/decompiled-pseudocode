/*
 * XREFs of ?AppendVisuals@CVisualGroup@@QEAAJV?$span@PEAVCVisual@@$0?0@gsl@@@Z @ 0x180214BB4
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F0A8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 *     ?SetVisuals@CVisualGroup@@QEAAJV?$span@PEAVCVisual@@$0?0@gsl@@@Z @ 0x180214D68 (-SetVisuals@CVisualGroup@@QEAAJV-$span@PEAVCVisual@@$0-0@gsl@@@Z.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800BBC80 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?Create@CExcludeVisualReference@@SAJPEAVCVisual@@PEAPEAV1@@Z @ 0x18010A4B8 (-Create@CExcludeVisualReference@@SAJPEAVCVisual@@PEAPEAV1@@Z.c)
 *     ??_GCExcludeVisualReference@@QEAAPEAXI@Z @ 0x1801B148C (--_GCExcludeVisualReference@@QEAAPEAXI@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1801B44D0 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$emplace_back@V?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@std@@@?$vector@V?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@std@@V?$allocator@V?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@std@@@2@@std@@QEAA?A_T$$QEAV?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@1@@Z @ 0x180214A78 (--$emplace_back@V-$unique_ptr@VCExcludeVisualReference@@U-$default_delete@VCExcludeVisualReferen.c)
 */

__int64 __fastcall CVisualGroup::AppendVisuals(__int64 a1, _QWORD *a2)
{
  struct CVisual **v2; // rbx
  struct CVisual **v4; // rsi
  struct CVisual *v5; // rcx
  int v6; // eax
  CExcludeVisualReference *v7; // rcx
  struct CExcludeVisualReference *v9; // [rsp+28h] [rbp-20h] BYREF
  char v10; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  CExcludeVisualReference *v12; // [rsp+58h] [rbp+10h] BYREF

  v2 = (struct CVisual **)a2[1];
  v4 = &v2[*a2];
  while ( v2 != v4 )
  {
    v5 = *v2;
    if ( *v2 )
    {
      v12 = 0LL;
      v9 = 0LL;
      v10 = 1;
      v6 = CExcludeVisualReference::Create(v5, (struct CWeakResourceReference ***)&v9);
      if ( v6 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          27LL,
          (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\visualgroup.cpp",
          (const char *)(unsigned int)v6,
          (int)&v12);
      if ( v10 )
      {
        v7 = v12;
        v12 = v9;
        if ( v7 )
          CExcludeVisualReference::`scalar deleting destructor'(v7);
      }
      std::vector<std::unique_ptr<CExcludeVisualReference>>::emplace_back<std::unique_ptr<CExcludeVisualReference>>(
        (__int64 *)(a1 + 64),
        (__int64 *)&v12);
      if ( v12 )
        CExcludeVisualReference::`scalar deleting destructor'(v12);
    }
    ++v2;
  }
  CResource::NotifyOnChanged(a1, 0, 0LL);
  return 0LL;
}
