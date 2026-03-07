__int64 __fastcall BamoImpl::BamoDataProviderRegistrarStubImpl::OnDisconnectedThunk(
        BamoImpl::BamoDataProviderRegistrarStubImpl *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  __int64 v4; // rax
  unsigned int v5; // ebx
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // r8
  const char *v10; // r9
  _BYTE v12[40]; // [rsp+20h] [rbp-28h] BYREF

  v4 = *((_QWORD *)this + 3);
  v5 = 0;
  if ( *(int *)(v4 + 8) > 0 )
  {
    v7 = v4 - 16;
    Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
      (__int64)v12,
      *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 4) + 24LL) + 32LL),
      a3,
      a4);
    v5 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v7 + 64LL))(v7, (char *)this - 16);
    Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::~CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
      (__int64)v12,
      v8,
      v9,
      v10);
  }
  return v5;
}
