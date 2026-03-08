/*
 * XREFs of ?SetVisuals@CVisualGroup@@QEAAJV?$span@PEAVCVisual@@$0?0@gsl@@@Z @ 0x180214D68
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F0A8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FBBE4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@std@@@std@@@std@@YAXPEAV?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@0@QEAV10@AEAV?$allocator@V?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@std@@@0@@Z @ 0x1801B06FC (--$_Destroy_range@V-$allocator@V-$unique_ptr@VCExcludeVisualReference@@U-$default_delete@VCExclu.c)
 *     ?AppendVisuals@CVisualGroup@@QEAAJV?$span@PEAVCVisual@@$0?0@gsl@@@Z @ 0x180214BB4 (-AppendVisuals@CVisualGroup@@QEAAJV-$span@PEAVCVisual@@$0-0@gsl@@@Z.c)
 */

__int64 __fastcall CVisualGroup::SetVisuals(__int64 a1, __int128 *a2)
{
  __int128 v4; // xmm0
  int appended; // eax
  unsigned int v6; // ebx
  int v8[4]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  std::_Destroy_range<std::allocator<std::unique_ptr<CExcludeVisualReference>>>(
    *(CExcludeVisualReference ***)(a1 + 64),
    *(CExcludeVisualReference ***)(a1 + 72));
  v4 = *a2;
  *(_QWORD *)(a1 + 72) = *(_QWORD *)(a1 + 64);
  *(_OWORD *)v8 = v4;
  appended = CVisualGroup::AppendVisuals(a1, v8);
  v6 = appended;
  if ( appended >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xC,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\visualgroup.cpp",
    (const char *)(unsigned int)appended);
  return v6;
}
