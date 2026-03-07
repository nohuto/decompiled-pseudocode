__int64 __fastcall Microsoft::BamoImpl::BamoPrincipalImpl::GetItemId(Microsoft::BamoImpl::BamoPrincipalImpl *this)
{
  unsigned int *v1; // rbx
  __int64 v2; // rdx
  __int64 v3; // r11
  int v4; // eax
  int v6; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v1 = (unsigned int *)((char *)this + 24);
  if ( !*((_DWORD *)this + 6) && *((int *)this + 2) > 0 )
  {
    v2 = *(_QWORD *)(*((_QWORD *)this + 2) + 32LL);
    v3 = *(_QWORD *)(v2 + 64);
    if ( v3 )
    {
      v4 = (*(__int64 (__fastcall **)(__int64, _QWORD, Microsoft::BamoImpl::BamoPrincipalImpl *, unsigned int *))(*(_QWORD *)v3 + 24LL))(
             v3,
             *(unsigned int *)(v2 + 28),
             this,
             v1);
      if ( v4 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x423,
          (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
          (const char *)(unsigned int)v4,
          v6);
    }
  }
  return *v1;
}
