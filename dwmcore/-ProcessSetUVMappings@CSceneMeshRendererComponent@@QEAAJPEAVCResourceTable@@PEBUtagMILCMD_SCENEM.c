__int64 __fastcall CSceneMeshRendererComponent::ProcessSetUVMappings(
        CSceneMeshRendererComponent *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_SCENEMESHRENDERERCOMPONENT_SETUVMAPPINGS *a3,
        const void *a4,
        unsigned int a5)
{
  unsigned int v5; // eax
  gsl::details *v9; // rcx
  __int64 v10; // r8
  int appended; // ebx
  __int64 v12; // rdx
  _QWORD v14[3]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v5 = *((_DWORD *)a3 + 3);
  if ( v5 != a5 || (a5 & 7) != 0 )
  {
    appended = -2003303421;
    v12 = 160LL;
  }
  else
  {
    gsl::details::extent_type<-1>::extent_type<-1>((gsl::details *)v14, (unsigned __int64)v5 >> 3);
    v14[1] = a4;
    if ( v14[0] == -1LL || !a4 && v14[0] )
    {
      gsl::details::terminate(v9);
      __debugbreak();
    }
    LOBYTE(v10) = *((_BYTE *)a3 + 8);
    appended = CSceneMeshRendererComponent::SetOrAppendUVMappings(this, v14, v10);
    if ( appended >= 0 )
      return 0LL;
    v12 = 165LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v12,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\scenemeshrenderercomponent.cpp",
    (const char *)(unsigned int)appended);
  return (unsigned int)appended;
}
