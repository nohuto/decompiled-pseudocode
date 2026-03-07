__int64 __fastcall BamoImpl::dataprovider_AutoBamos::BamoConnectionImpl::InitializeDefaultPlaceholderPeer(
        BamoImpl::dataprovider_AutoBamos::BamoConnectionImpl *this,
        struct Microsoft::Bamo::BaseBamoPeer **a2)
{
  struct Microsoft::Bamo::BaseBamoPeer *v4; // rax
  const char *v5; // r9
  struct Microsoft::Bamo::BaseBamoPeer *v6; // rdi
  Microsoft::BamoImpl::BamoImplObject **v7; // rax
  Microsoft::BamoImpl::BamoImplObject **v8; // rbx
  __int64 result; // rax
  unsigned int v10; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v4 = (struct Microsoft::Bamo::BaseBamoPeer *)operator new(0x68uLL);
  v6 = v4;
  if ( !v4 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      15608LL,
      (__int64)"onecoreuap\\windows\\DWM\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
      v5);
  *(_QWORD *)v4 = &dataprovider_AutoBamos::BamoPeer::`vftable';
  *((_DWORD *)v4 + 4) = 1;
  *((_QWORD *)v4 + 4) = 0LL;
  *((_QWORD *)v4 + 3) = v4;
  *((_QWORD *)v4 + 5) = 0LL;
  *((_QWORD *)v4 + 6) = 0LL;
  *((_WORD *)v4 + 28) = 0;
  *((_QWORD *)v4 + 8) = 0LL;
  *((_QWORD *)v4 + 9) = 0LL;
  *((_QWORD *)v4 + 10) = 0LL;
  *((_QWORD *)v4 + 11) = 0LL;
  *((_QWORD *)v4 + 12) = 0LL;
  *((_QWORD *)v4 + 1) = &BamoImpl::dataprovider_AutoBamos::BamoPeerImpl::`vftable';
  v7 = (Microsoft::BamoImpl::BamoImplObject **)(*(__int64 (__fastcall **)(struct Microsoft::Bamo::BaseBamoPeer *))(*(_QWORD *)v4 + 8LL))(v4);
  v10 = *((_DWORD *)this + 9);
  v8 = v7;
  *((_DWORD *)this + 9) = v10 + 1;
  Microsoft::BamoImpl::BaseBamoPeerImpl::Initialize(v7, (volatile signed __int32 **)this, 0, v10, v10);
  result = 0LL;
  *((_BYTE *)v8 + 48) = 1;
  *a2 = v6;
  return result;
}
