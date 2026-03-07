__int64 __fastcall CResource::ProcessSetReferenceProperty(
        CResource *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_RESOURCE_SETREFERENCEPROPERTY *a3)
{
  struct CResource *ResourceWithoutType; // r8
  __int64 v4; // r9
  __int64 v5; // r11
  void *retaddr; // [rsp+28h] [rbp+0h]

  ResourceWithoutType = CResourceTable::GetResourceWithoutType(a2, *((_DWORD *)a3 + 3));
  if ( !ResourceWithoutType && *(_DWORD *)(v4 + 12) )
    ModuleFailFastForHRESULT(2291663875LL, retaddr);
  return (*(__int64 (__fastcall **)(__int64, _QWORD, struct CResource *))(*(_QWORD *)v5 + 104LL))(
           v5,
           *(unsigned int *)(v4 + 8),
           ResourceWithoutType);
}
