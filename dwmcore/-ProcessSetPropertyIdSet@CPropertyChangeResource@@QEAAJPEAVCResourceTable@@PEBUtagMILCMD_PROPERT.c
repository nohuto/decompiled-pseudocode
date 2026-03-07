__int64 __fastcall CPropertyChangeResource::ProcessSetPropertyIdSet(
        CPropertyChangeResource *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_PROPERTYCHANGERESOURCE_SETPROPERTYIDSET *a3)
{
  __int64 v3; // rax

  v3 = *(_QWORD *)this;
  *((_DWORD *)this + 18) = *((_DWORD *)a3 + 2);
  return (*(__int64 (**)(void))(v3 + 192))();
}
