void __fastcall CBatchCommand::Destroy(CBatchCommand *this)
{
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( *(_DWORD *)this )
  {
    if ( *(_DWORD *)this != 1 )
    {
      switch ( *(_DWORD *)this )
      {
        case 2:
          wil::com_ptr_t<ClipPlaneInfoRef,wil::err_returncode_policy>::~com_ptr_t<ClipPlaneInfoRef,wil::err_returncode_policy>((char *)this + 8);
          return;
        case 3:
          wil::com_ptr_t<CExternalEffectGraph,wil::err_returncode_policy>::~com_ptr_t<CExternalEffectGraph,wil::err_returncode_policy>((char *)this + 8);
          return;
        case 4:
          if ( *((_QWORD *)this + 12) )
            std::default_delete<CDrawListPrimitive>::operator()();
          break;
        case 5:
          break;
        default:
          ModuleFailFastForHRESULT(2147549183LL, retaddr);
      }
    }
    wil::com_ptr_t<ClipPlaneInfoRef,wil::err_returncode_policy>::~com_ptr_t<ClipPlaneInfoRef,wil::err_returncode_policy>((char *)this + 8);
  }
}
