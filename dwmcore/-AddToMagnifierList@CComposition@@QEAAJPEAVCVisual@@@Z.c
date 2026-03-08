/*
 * XREFs of ?AddToMagnifierList@CComposition@@QEAAJPEAVCVisual@@@Z @ 0x1801B1614
 * Callers:
 *     ?Partition_SetMagnifier@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_PARTITION_SETMAGNIFIER@@@Z @ 0x1801B1D0C (-Partition_SetMagnifier@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCM.c)
 * Callees:
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180038C50 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??4?$com_ptr_t@VCVisualGroup@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCVisualGroup@@@Z @ 0x1801B1304 (--4-$com_ptr_t@VCVisualGroup@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCVisualGroup@@@Z.c)
 *     ?AddVisual@CVisualGroup@@IEAAJPEAVCVisual@@@Z @ 0x180214AB4 (-AddVisual@CVisualGroup@@IEAAJPEAVCVisual@@@Z.c)
 */

__int64 __fastcall CComposition::AddToMagnifierList(CComposition *this, struct CVisual *a2)
{
  CResource **v2; // rbx
  CVisualGroup *v4; // rcx
  _DWORD *v6; // rax
  unsigned int v7; // ebx
  int v8; // eax
  __int64 v9; // rcx

  v2 = (CResource **)((char *)this + 1000);
  v4 = (CVisualGroup *)*((_QWORD *)this + 125);
  if ( v4 )
    goto LABEL_6;
  v6 = DefaultHeap::AllocClear(0x58uLL);
  if ( v6 )
  {
    v6[2] = 0;
    *((_QWORD *)v6 + 2) = this;
    *((_QWORD *)v6 + 3) = 0LL;
    *((_QWORD *)v6 + 5) = 0LL;
    v6[8] = 0;
    *(_QWORD *)v6 = &CVisualGroup::`vftable';
    *((_QWORD *)v6 + 8) = 0LL;
    *((_QWORD *)v6 + 9) = 0LL;
    *((_QWORD *)v6 + 10) = 0LL;
  }
  wil::com_ptr_t<CVisualGroup,wil::err_returncode_policy>::operator=(v2, (__int64)v6);
  v4 = *v2;
  if ( *v2 )
  {
LABEL_6:
    v8 = CVisualGroup::AddVisual(v4, a2);
    v7 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0xAD2u, 0LL);
  }
  else
  {
    v7 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0LL, 0LL, 0, -2147024882, 0xACFu, 0LL);
  }
  return v7;
}
