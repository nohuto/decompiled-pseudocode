__int64 __fastcall Microsoft::Bamo::BaseBamoConnection::JoinConversationAsServer(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        _OWORD *a4,
        unsigned __int16 *a5)
{
  __int64 v8; // rax
  char v10[24]; // [rsp+30h] [rbp-18h] BYREF

  v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 56LL))(a1);
  *(_OWORD *)v10 = *a4;
  return Microsoft::BamoImpl::BaseBamoConnectionImpl::Join(v8, a2, a3, v10, a5);
}
