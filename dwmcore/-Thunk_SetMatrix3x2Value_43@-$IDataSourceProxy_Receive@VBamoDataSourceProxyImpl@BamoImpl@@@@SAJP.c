__int64 __fastcall IDataSourceProxy_Receive<BamoImpl::BamoDataSourceProxyImpl>::Thunk_SetMatrix3x2Value_43(
        Microsoft::BamoImpl::BamoProxyImpl *this,
        unsigned int **a2,
        __int64 a3,
        const char *a4)
{
  int *v5; // rdi
  unsigned int v6; // ebx
  unsigned int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // r8
  const char *v10; // r9
  __int64 v11; // rdx
  __int64 v12; // r8
  _BYTE v14[40]; // [rsp+20h] [rbp-28h] BYREF

  v5 = (int *)a2[1];
  v6 = **a2;
  Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
    (__int64)v14,
    *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 32LL),
    a3,
    a4);
  v7 = (*(__int64 (__fastcall **)(char *, _QWORD, int *))(*((_QWORD *)this - 2) + 176LL))((char *)this - 16, v6, v5);
  Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::~CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
    (__int64)v14,
    v8,
    v9,
    v10);
  Microsoft::BamoImpl::BamoProxyImpl::AckReference(this, v11, v12);
  return v7;
}
