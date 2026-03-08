/*
 * XREFs of ?CheckPrimitives@CRenderData@@AEAAJXZ @ 0x1800BB048
 * Callers:
 *     ?ProcessUpdate@CRenderData@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_RENDERDATA@@PEBXI@Z @ 0x1800BBB00 (-ProcessUpdate@CRenderData@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_RENDERDATA@@PEBXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180004700 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$com_ptr_t@VCVisualTree@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCVisualTree@@@Z @ 0x18003A420 (--0-$com_ptr_t@VCVisualTree@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCVisualTree@@@Z.c)
 *     ?GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N@Z @ 0x18003A504 (-GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N@Z.c)
 *     ?GetNextItemSafe@CDataBlockReader@@QEAAJPEAIPEAPEAX0@Z @ 0x1800BB4AC (-GetNextItemSafe@CDataBlockReader@@QEAAJPEAIPEAPEAX0@Z.c)
 *     ?FlushData@CDataStreamWriter@@QEAAPEAU_LIST_ENTRY@@XZ @ 0x1800BB644 (-FlushData@CDataStreamWriter@@QEAAPEAU_LIST_ENTRY@@XZ.c)
 *     ?GetFirstItemSafe@CDataBlockReader@@QEAAJPEAIPEAPEAX0@Z @ 0x1800BB678 (-GetFirstItemSafe@CDataBlockReader@@QEAAJPEAIPEAPEAX0@Z.c)
 *     ??$_Emplace_reallocate@AEAV?$com_ptr_t@VCVisualTree@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@VCVisualTree@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCVisualTree@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@VCVisualTree@@Uerr_returncode_policy@wil@@@wil@@QEAV23@AEAV23@@Z @ 0x1800F2970 (--$_Emplace_reallocate@AEAV-$com_ptr_t@VCVisualTree@@Uerr_returncode_policy@wil@@@wil@@@-$vector.c)
 *     ?reset@?$com_ptr_t@VCVisualTree@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800F5598 (-reset@-$com_ptr_t@VCVisualTree@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FBBE4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18026C718 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CRenderData::CheckPrimitives(CRenderData *this)
{
  unsigned int v2; // ebx
  int i; // eax
  CVisual *v5; // rbx
  int VisualTree; // eax
  unsigned int v7; // ebx
  _QWORD v8[6]; // [rsp+20h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  unsigned int v10; // [rsp+70h] [rbp+20h] BYREF
  unsigned int v11; // [rsp+78h] [rbp+28h] BYREF
  struct CVisualTree *v12; // [rsp+80h] [rbp+30h] BYREF
  void *v13; // [rsp+88h] [rbp+38h] BYREF

  v2 = 0;
  v8[1] = 0LL;
  v8[0] = CDataStreamWriter::FlushData((CRenderData *)((char *)this + 72));
  for ( i = CDataBlockReader::GetFirstItemSafe((CDataBlockReader *)v8, &v10, &v13, &v11);
        ;
        i = CDataBlockReader::GetNextItemSafe((CDataBlockReader *)v8, &v10, &v13, &v11) )
  {
    if ( i )
    {
      *((_BYTE *)this + 297) = v2 <= 1;
      return 0LL;
    }
    if ( v10 <= 0x1C1 )
    {
      if ( v10 == 449 || v10 == 443 || v10 == 444 || v10 == 446 )
        goto LABEL_5;
      if ( v10 != 447 )
      {
        if ( v10 != 448 )
LABEL_24:
          ModuleFailFastForHRESULT(2291663875LL, retaddr);
LABEL_5:
        ++v2;
        continue;
      }
      goto LABEL_22;
    }
    if ( v10 == 450 )
      goto LABEL_5;
    if ( v10 == 451 )
      break;
    if ( v10 - 452 >= 2 )
      goto LABEL_24;
LABEL_6:
    ;
  }
  v12 = 0LL;
  v5 = *(CVisual **)(*((_QWORD *)this + 17) + 8LL * *((unsigned int *)v13 + 1));
  wil::com_ptr_t<CVisualTree,wil::err_returncode_policy>::reset(&v12);
  VisualTree = CVisual::GetVisualTree(v5, &v12);
  v7 = VisualTree;
  if ( VisualTree >= 0 )
  {
    if ( *((_QWORD *)this + 22) == *((_QWORD *)this + 23) )
    {
      std::vector<wil::com_ptr_t<CVisualTree,wil::err_returncode_policy>>::_Emplace_reallocate<wil::com_ptr_t<CVisualTree,wil::err_returncode_policy> &>(
        (char *)this + 168,
        *((_QWORD *)this + 22),
        &v12);
    }
    else
    {
      wil::com_ptr_t<CVisualTree,wil::err_returncode_policy>::com_ptr_t<CVisualTree,wil::err_returncode_policy>(
        *((_QWORD **)this + 22),
        (__int64)v12);
      *((_QWORD *)this + 22) += 8LL;
    }
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v12);
LABEL_22:
    v2 = 2;
    goto LABEL_6;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x190,
    (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\global\\renderdata.cpp",
    (const char *)(unsigned int)VisualTree,
    v8[0]);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v12);
  return v7;
}
