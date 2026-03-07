__int64 __fastcall BamoDataProviderRegistrarPrincipal::QueryInterface(
        BamoDataProviderRegistrarPrincipal *this,
        const struct _GUID *a2,
        void **a3)
{
  __int64 v3; // rax
  unsigned int v4; // ebx
  __int64 v5; // rax
  void *v6; // rdx

  v3 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
    v3 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
  v4 = 0;
  if ( !v3 )
    goto LABEL_8;
  v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_0ef893e5_aaa8_386b_5e2e_53afbd86cc26.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_0ef893e5_aaa8_386b_5e2e_53afbd86cc26.Data1 )
    v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_0ef893e5_aaa8_386b_5e2e_53afbd86cc26.Data4;
  if ( v5 )
  {
    *a3 = 0LL;
  }
  else
  {
LABEL_8:
    v6 = (void *)(((unsigned __int64)this + 8) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64));
    *a3 = v6;
    if ( v6 )
    {
      (**(void (__fastcall ***)(BamoDataProviderRegistrarPrincipal *))this)(this);
      return v4;
    }
  }
  return (unsigned int)-2147467262;
}
