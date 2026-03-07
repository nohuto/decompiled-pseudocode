void __fastcall Microsoft::Bamo::BaseBamoConnection::ReleaseLock(Microsoft::Bamo::BaseBamoConnection *this)
{
  __int64 v1; // rax
  const char *v2; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = (*(__int64 (__fastcall **)(Microsoft::Bamo::BaseBamoConnection *))(*(_QWORD *)this + 56LL))(this);
  if ( *(_BYTE *)(v1 + 216) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x969,
      (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
      v2);
  LeaveCriticalSection((LPCRITICAL_SECTION)(v1 + 144));
}
