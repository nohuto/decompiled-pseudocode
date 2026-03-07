void __fastcall Microsoft::BamoImpl::BaseBamoPeerImpl::OnDisconnected(Microsoft::BamoImpl::BaseBamoPeerImpl *this)
{
  _QWORD *i; // rsi
  __int64 v3; // r8
  const char *v4; // r9
  __int128 v5; // [rsp+30h] [rbp-28h] BYREF
  __int64 v6; // [rsp+40h] [rbp-18h]
  struct Microsoft::BamoImpl::BamoStubImpl *v7; // [rsp+60h] [rbp+8h] BYREF
  __int64 v8; // [rsp+68h] [rbp+10h] BYREF

  v5 = 0LL;
  v6 = 0LL;
  Microsoft::BamoImpl::BaseBamoPeerImpl::OnDisconnected(
    (_DWORD)this,
    0,
    (unsigned int)&v5,
    (unsigned int)&v7,
    (__int64)&v8);
  for ( i = (_QWORD *)v5; i != *((_QWORD **)&v5 + 1); ++i )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*i + 8LL))(*i);
  Microsoft::BamoImpl::BamoStubImpl::ReleaseStubsFromPeerList(v7);
  Microsoft::BamoImpl::BamoAsyncOperationCoordinator::InvalidateAllRequests(
    (Microsoft::BamoImpl::BaseBamoPeerImpl *)((char *)this + 72),
    this,
    v3,
    v4);
  if ( (_QWORD)v5 )
    std::_Deallocate<16,0>((void *)v5, (v6 - v5) & 0xFFFFFFFFFFFFFFF8uLL);
}
