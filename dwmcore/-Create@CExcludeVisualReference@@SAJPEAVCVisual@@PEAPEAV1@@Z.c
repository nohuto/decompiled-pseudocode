/*
 * XREFs of ?Create@CExcludeVisualReference@@SAJPEAVCVisual@@PEAPEAV1@@Z @ 0x18010A4B8
 * Callers:
 *     ?AddCursorVisual@CComposition@@QEAAJPEAVCVisual@@@Z @ 0x18010A3F0 (-AddCursorVisual@CComposition@@QEAAJPEAVCVisual@@@Z.c)
 *     ?AddVisual@CVisualGroup@@IEAAJPEAVCVisual@@@Z @ 0x180214AB4 (-AddVisual@CVisualGroup@@IEAAJPEAVCVisual@@@Z.c)
 *     ?AppendVisuals@CVisualGroup@@QEAAJV?$span@PEAVCVisual@@$0?0@gsl@@@Z @ 0x180214BB4 (-AppendVisuals@CVisualGroup@@QEAAJV-$span@PEAVCVisual@@$0-0@gsl@@@Z.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180044B4C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Create@?$CWeakReference@VCVisual@@@@SAJPEAVCVisual@@PEAPEAV1@@Z @ 0x1800E8034 (-Create@-$CWeakReference@VCVisual@@@@SAJPEAVCVisual@@PEAPEAV1@@Z.c)
 *     ?reset@?$com_ptr_t@V?$CWeakReference@VCVisual@@@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800F33F8 (-reset@-$com_ptr_t@V-$CWeakReference@VCVisual@@@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??_GCExcludeVisualReference@@QEAAPEAXI@Z @ 0x1801B148C (--_GCExcludeVisualReference@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall CExcludeVisualReference::Create(struct CVisual *a1, struct CWeakResourceReference ***a2)
{
  char *v4; // rax
  __int64 v5; // rcx
  struct CWeakResourceReference **v6; // rbx
  int v7; // eax
  __int64 v8; // rcx
  unsigned int v9; // edi
  unsigned int v11; // edx

  *a2 = 0LL;
  v4 = (char *)DefaultHeap::Alloc(0x18uLL);
  v6 = (struct CWeakResourceReference **)v4;
  if ( v4 )
  {
    *(_WORD *)(v4 + 21) = 0;
    v4[23] = 0;
    *(_QWORD *)v4 = &CExcludeVisualReference::`vftable';
    *((_QWORD *)v4 + 1) = 0LL;
    *((_DWORD *)v4 + 4) = 0;
    v4[20] = 0;
    wil::com_ptr_t<CWeakReference<CVisual>,wil::err_returncode_policy>::reset((__int64 *)v4 + 1);
    v7 = CWeakReference<CVisual>::Create(a1, v6 + 1);
    v9 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x17u, 0LL);
      CExcludeVisualReference::`scalar deleting destructor'((CExcludeVisualReference *)v6, v11);
    }
    else
    {
      *a2 = v6;
    }
  }
  else
  {
    v9 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, -2147024882, 0x15u, 0LL);
  }
  return v9;
}
