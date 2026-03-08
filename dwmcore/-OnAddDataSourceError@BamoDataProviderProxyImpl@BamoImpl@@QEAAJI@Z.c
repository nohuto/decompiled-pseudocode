/*
 * XREFs of ?OnAddDataSourceError@BamoDataProviderProxyImpl@BamoImpl@@QEAAJI@Z @ 0x1801E129C
 * Callers:
 *     ?OnAddDataSourceError@BamoDataProviderProxy@@UEAAJI@Z @ 0x1801E1250 (-OnAddDataSourceError@BamoDataProviderProxy@@UEAAJI@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FBBE4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180195018 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x1801B89E0 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 *     ?IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ @ 0x1801DFDB0 (-IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ.c)
 *     ?PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x1801E0248 (-PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@.c)
 */

__int64 __fastcall BamoImpl::BamoDataProviderProxyImpl::OnAddDataSourceError(
        BamoImpl::BamoDataProviderProxyImpl *this,
        int a2,
        __int64 a3,
        const char *a4)
{
  __int64 v6; // r8
  int v8; // eax
  unsigned int v9; // edi
  struct IMessageCallSendHost *v10; // rcx
  char *v11; // rax
  __int64 v12; // [rsp+30h] [rbp-38h]
  _QWORD v13[5]; // [rsp+40h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  unsigned int v15; // [rsp+70h] [rbp+8h] BYREF
  unsigned int v16; // [rsp+80h] [rbp+18h] BYREF
  struct IMessageCallSendHost *v17; // [rsp+88h] [rbp+20h] BYREF

  if ( *(_DWORD *)(*((_QWORD *)this + 2) + 44LL) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      11095LL,
      (__int64)"onecoreuap\\windows\\DWM\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
      a4);
  if ( Microsoft::BamoImpl::BamoProxyImpl::IsDisconnected(this) )
  {
    if ( v6 )
      Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(
        *(struct Microsoft::BamoImpl::ConnectionIndirector ***)(*(_QWORD *)(v6 + 24) + 32LL),
        0x87B20814,
        0);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2B60,
      (int)"onecoreuap\\windows\\DWM\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
      (const char *)0x87B20814LL);
    return 2276591636LL;
  }
  else
  {
    v8 = Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteCall(this, &v17, &v15, &v16);
    v9 = v8;
    if ( v8 >= 0 )
    {
      v10 = v17;
      if ( *((_BYTE *)this + 31) )
      {
        v11 = (char *)v17 - 16;
        if ( !v17 )
          v11 = 0LL;
        v11[72] = 1;
      }
      v13[0] = v15;
      v13[1] = v16;
      LODWORD(v12) = a2;
      return CoreUICallSend(v10, v13, 2LL, 0LL, 3, &unk_180350DF5, v12);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2B67,
        (int)"onecoreuap\\windows\\DWM\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
        (const char *)(unsigned int)v8);
      return v9;
    }
  }
}
