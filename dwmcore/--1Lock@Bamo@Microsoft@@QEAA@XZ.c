void __fastcall Microsoft::Bamo::Lock::~Lock(Microsoft::Bamo::Lock *this, __int64 a2, __int64 a3, const char *a4)
{
  __int64 v5; // rdi
  int v6; // eax
  int v7; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v5 = *(_QWORD *)(*(_QWORD *)this + 32LL);
  --*(_DWORD *)(v5 + 188);
  if ( !*((_BYTE *)this + 8) )
  {
    if ( *((_BYTE *)this + 9) )
    {
      v6 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v5 + 56) + 104LL))(*(_QWORD *)(v5 + 56));
      if ( v6 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          2482LL,
          (__int64)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
          (const char *)(unsigned int)v6,
          v7);
    }
    Microsoft::BamoImpl::BaseBamoConnectionImpl::LeaveLock((Microsoft::BamoImpl::BaseBamoConnectionImpl *)v5);
  }
  if ( *(_QWORD *)this )
    Microsoft::BamoImpl::BamoImplObject::Release(*(Microsoft::BamoImpl::BamoImplObject **)this, a2, a3, a4);
}
