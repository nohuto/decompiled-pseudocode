__int64 __fastcall CaptureBitsResponse::SendResponse(CaptureBitsResponse *this, int a2, __int64 a3)
{
  _QWORD *v3; // rdi
  int v6; // eax
  __int64 v7; // rcx
  unsigned int v8; // esi
  CLegacySurfaceManager *v9; // rcx
  int v11; // [rsp+30h] [rbp-28h] BYREF
  __int128 v12; // [rsp+34h] [rbp-24h]
  __int64 v13; // [rsp+44h] [rbp-14h]

  v11 = 2;
  v3 = (_QWORD *)((char *)this + 1656);
  v12 = 0LL;
  v13 = 0LL;
  LODWORD(v13) = *((_DWORD *)this + 411);
  HIDWORD(v13) = a2;
  if ( a2 >= 0 )
  {
    *(_QWORD *)((char *)&v12 + 4) = *v3;
    HIDWORD(v12) = *((_DWORD *)this + 418);
  }
  v6 = CChannelContext::PostMessageToChannel(*((CChannelContext **)this + 5), (const struct MIL_MESSAGE *)&v11, a3);
  v8 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x77u, 0LL);
  }
  else if ( a2 >= 0 )
  {
    *v3 = 0LL;
  }
  v9 = (CLegacySurfaceManager *)(*((_QWORD *)this + 3) + 152LL);
  *((_BYTE *)this + 33) = 1;
  CLegacySurfaceManager::ReleaseCaptureBitsResponse(v9);
  return v8;
}
