__int64 Microsoft::Bamo::BaseBamoConnection::CreateServer<DataProviderRegistrarConnection>(
        __int64 *a1,
        __int64 a2,
        __int128 *a3,
        ...)
{
  _QWORD *v3; // rsi
  _QWORD *v7; // rdi
  __int128 v8; // xmm0
  int v9; // eax
  unsigned int v10; // ebx
  int v12; // [rsp+20h] [rbp-38h]
  __int128 v13; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  _QWORD *v15; // [rsp+78h] [rbp+20h] BYREF
  va_list va; // [rsp+78h] [rbp+20h]
  _QWORD *v17; // [rsp+80h] [rbp+28h]
  va_list va1; // [rsp+88h] [rbp+30h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v15 = va_arg(va1, _QWORD *);
  v17 = va_arg(va1, _QWORD *);
  v3 = v17;
  *v17 = 0LL;
  v7 = DefaultHeap::AllocClear(0x100uLL);
  if ( !v7 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  *v7 = &dataprovider_AutoBamos::BamoConnection::`vftable';
  Microsoft::BamoImpl::BaseBamoConnectionImpl::BaseBamoConnectionImpl(
    (Microsoft::BamoImpl::BaseBamoConnectionImpl *)(v7 + 1),
    (struct Microsoft::Bamo::BaseBamoConnection *)v7);
  v8 = *a3;
  v7[1] = &BamoImpl::dataprovider_AutoBamos::BamoConnectionImpl::`vftable';
  v7[31] = 0LL;
  *v7 = &DataProviderRegistrarConnection::`vftable';
  v15 = v7;
  v13 = v8;
  v9 = Microsoft::Bamo::BaseBamoConnection::JoinConversationAsServer(
         (__int64)v7,
         a1,
         a2,
         &v13,
         L"System\\CompositionEngineDataProvider");
  v10 = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xAE1,
      (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
      (const char *)(unsigned int)v9,
      v12);
    wil::com_ptr_t<Microsoft::Bamo::BaseBamoConnection,wil::err_returncode_policy>::~com_ptr_t<Microsoft::Bamo::BaseBamoConnection,wil::err_returncode_policy>((_QWORD **)va);
    return v10;
  }
  else
  {
    *v3 = v7;
    return 0LL;
  }
}
