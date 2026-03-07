__int64 __fastcall CSharedSectionWrapper::ProcessSetSharedSection(
        CSharedSectionWrapper *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_SHAREDSECTIONWRAPPER_SETSHAREDSECTION *a3)
{
  unsigned int v5; // edi
  __int64 Resource; // rax
  __int64 v7; // rcx
  CResource *v8; // rcx
  CResource *v9; // rsi

  v5 = 0;
  Resource = CResourceTable::GetResource((__int64)a2, *((_DWORD *)a3 + 2), 0xA9u);
  if ( Resource )
  {
    v9 = (CResource *)*((_QWORD *)this + 8);
    *((_QWORD *)this + 8) = Resource;
    CMILRefCountImpl::AddReference((CMILRefCountImpl *)(Resource + 8));
    if ( v9 )
      CResource::InternalRelease(v9);
    *((_DWORD *)this + 18) = *((_DWORD *)a3 + 3);
    *((_DWORD *)this + 19) = *((_DWORD *)a3 + 4);
    (*(void (__fastcall **)(CSharedSectionWrapper *, _QWORD, _QWORD))(*(_QWORD *)this + 72LL))(this, 0LL, 0LL);
  }
  else
  {
    v5 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, -2003303421, 0x1Du, 0LL);
    v8 = (CResource *)*((_QWORD *)this + 8);
    *((_QWORD *)this + 8) = 0LL;
    if ( v8 )
      CResource::InternalRelease(v8);
  }
  return v5;
}
