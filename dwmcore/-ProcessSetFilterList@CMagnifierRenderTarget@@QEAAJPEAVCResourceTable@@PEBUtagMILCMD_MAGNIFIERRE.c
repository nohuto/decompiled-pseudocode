__int64 __fastcall CMagnifierRenderTarget::ProcessSetFilterList(
        struct CResource **this,
        struct CResourceTable *a2,
        const struct tagMILCMD_MAGNIFIERRENDERTARGET_SETFILTERLIST *a3)
{
  struct CResource *v3; // rbx
  unsigned int v5; // edx
  unsigned int v6; // esi
  __int64 Resource; // rax
  int v9; // eax
  __int64 v10; // rcx
  CResource *v11; // rcx
  CResource *v12; // rcx
  struct CResource *v13; // rax
  CResource *v15; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0LL;
  v5 = *((_DWORD *)a3 + 2);
  v6 = 0;
  v15 = 0LL;
  if ( v5 )
  {
    Resource = CResourceTable::GetResource((__int64)a2, v5, 0xC7u);
    wil::com_ptr_t<CVisualGroup,wil::err_returncode_policy>::operator=(&v15, Resource);
    v3 = v15;
  }
  if ( v3 != this[264] )
  {
    v9 = CResource::RegisterNotifier((CResource *)this, v3);
    v6 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x13Du, 0LL);
    }
    else
    {
      CResource::UnRegisterNotifierInternal((CResource *)this, this[264]);
      v11 = this[264];
      this[264] = 0LL;
      if ( v11 )
        CResource::InternalRelease(v11);
      v12 = this[264];
      v13 = v3;
      v3 = 0LL;
      this[264] = v13;
      if ( v12 )
        CResource::InternalRelease(v12);
    }
  }
  if ( v3 )
    CResource::InternalRelease(v3);
  return v6;
}
