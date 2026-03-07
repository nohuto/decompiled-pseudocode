void __fastcall Microsoft::Bamo::Lib::BamoImpl::dataprovider_AutoBamos::CreateList_uint_Proxy(
        Microsoft::Bamo::Lib::BamoImpl::dataprovider_AutoBamos *this,
        struct Microsoft::BamoImpl::BaseBamoConnectionImpl *a2,
        struct dataprovider_AutoBamos::BamoPeer *a3,
        struct Microsoft::Bamo::BamoProxy **a4)
{
  __int64 v5; // rcx
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // r8
  const char *v9; // r9
  unsigned int v10; // ebx
  struct Microsoft::BamoImpl::BaseBamoConnectionImpl *v11; // rbx
  const char *v12; // r9
  int v13[10]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct Microsoft::BamoImpl::BaseBamoConnectionImpl *v15; // [rsp+58h] [rbp+10h] BYREF

  v15 = a2;
  *(_QWORD *)a3 = 0LL;
  Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
    (__int64)v13,
    this,
    (__int64)a3,
    (const char *)a4);
  v6 = CreateProxy_List(v5, &v15);
  v10 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1BFE,
      (int)"onecoreuap\\windows\\DWM\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
      (const char *)(unsigned int)v6);
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      10006LL,
      (__int64)"onecoreuap\\windows\\DWM\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
      (const char *)v10,
      v13[0]);
  }
  v11 = v15;
  Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::~CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
    (__int64)v13,
    v7,
    v8,
    v9);
  *(_QWORD *)a3 = v11;
  if ( !v11 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      10011LL,
      (__int64)"onecoreuap\\windows\\DWM\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
      v12);
}
