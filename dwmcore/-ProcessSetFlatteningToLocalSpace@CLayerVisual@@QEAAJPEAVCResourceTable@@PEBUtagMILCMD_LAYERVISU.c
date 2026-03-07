__int64 __fastcall CLayerVisual::ProcessSetFlatteningToLocalSpace(
        CLayerVisual *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_LAYERVISUAL_SETFLATTENINGTOLOCALSPACE *a3)
{
  int v3; // r9d
  struct CVisualTree **v4; // rbx
  int VisualTree; // eax
  unsigned int v7; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = *((_DWORD *)a3 + 2);
  v4 = (struct CVisualTree **)((char *)this + 720);
  *((_BYTE *)this + 729) = v3 != 0;
  if ( v3 )
  {
    if ( !*v4 )
    {
      wil::com_ptr_t<CVisualTree,wil::err_returncode_policy>::reset((__int64 *)this + 90);
      VisualTree = CVisual::GetVisualTree(this, v4);
      v7 = VisualTree;
      if ( VisualTree < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x8E,
          (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\layervisual.cpp",
          (const char *)(unsigned int)VisualTree);
        return v7;
      }
    }
  }
  else
  {
    wil::com_ptr_t<CVisualTree,wil::err_returncode_policy>::reset((__int64 *)this + 90);
  }
  return 0LL;
}
