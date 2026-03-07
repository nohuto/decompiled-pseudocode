void __fastcall Microsoft::Bamo::BamoProxy::AbandonOnDisconnect(Microsoft::Bamo::BamoProxy *this)
{
  void (__fastcall ***v2)(_QWORD); // rax
  int v3; // eax
  __int64 v4; // rax
  int v5; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (void (__fastcall ***)(_QWORD))(*(__int64 (__fastcall **)(Microsoft::Bamo::BamoProxy *))(*(_QWORD *)this + 56LL))(this);
  (**v2)(v2);
  v3 = (*(__int64 (__fastcall **)(Microsoft::Bamo::BamoProxy *))(*(_QWORD *)this + 72LL))(this);
  if ( v3 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      814LL,
      (__int64)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoProxy.inl",
      (const char *)(unsigned int)v3,
      v5);
  v4 = (*(__int64 (__fastcall **)(Microsoft::Bamo::BamoProxy *))(*(_QWORD *)this + 56LL))(this);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
}
