/*
 * XREFs of ?Initialize@DXGPROTECTEDSESSION@@QEAAJPEAPEAVDXGSYNCOBJECT@@PEAPEAXI1I@Z @ 0x1C0344020
 * Callers:
 *     ?CreateProtectedSession@ADAPTER_DISPLAY@@QEAAJPEAPEAVDXGSYNCOBJECT@@PEAPEAXI1IPEAPEAVDXGPROTECTEDSESSION@@@Z @ 0x1C0343A9C (-CreateProtectedSession@ADAPTER_DISPLAY@@QEAAJPEAPEAVDXGSYNCOBJECT@@PEAPEAXI1IPEAPEAVDXGPROTECTE.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070C4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?AddReference@DXGPROTECTEDSESSION@@QEAAJ_N@Z @ 0x1C0053344 (-AddReference@DXGPROTECTEDSESSION@@QEAAJ_N@Z.c)
 *     ?DdiCreateProtectedSession@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_CREATEPROTECTEDSESSION@@@Z @ 0x1C02C0D20 (-DdiCreateProtectedSession@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_CREATEPROTECTEDSESSION@@@Z.c)
 */

__int64 __fastcall DXGPROTECTEDSESSION::Initialize(
        DXGPROTECTEDSESSION *this,
        struct DXGSYNCOBJECT **a2,
        void **a3,
        UINT a4,
        void **a5,
        unsigned int a6)
{
  _DWORD *v10; // rdi
  __int64 v11; // r8
  void *v12; // rax
  ADAPTER_DISPLAY *v13; // rcx
  __int64 v14; // rax
  int v15; // edi
  _DXGKARG_CREATEPROTECTEDSESSION v17; // [rsp+50h] [rbp-38h] BYREF

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    WdLogSingleEntry1(1LL, 993LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"GetAdapter()->IsCoreResourceSharedOwner()",
      993LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  *((_DWORD *)this + 6) = 1;
  *((_DWORD *)this + 37) = 0;
  v10 = *a2;
  if ( *((_DWORD *)*a2 + 50) != 5 )
  {
    WdLogSingleEntry1(1LL, 333LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"D3DDDI_MONITORED_FENCE == GetSyncObjectType()",
      333LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  *((_QWORD *)this + 16) = *((_QWORD *)v10 + 26);
  *((_QWORD *)this + 15) = *a2;
  *((_QWORD *)this + 11) = *a3;
  *((_DWORD *)this + 24) = a4;
  *((_QWORD *)this + 13) = *a5;
  *((_DWORD *)this + 28) = a6;
  *a2 = 0LL;
  *a3 = 0LL;
  *a5 = 0LL;
  DXGPROTECTEDSESSION::AddReference(this, 1);
  v12 = (void *)*((_QWORD *)this + 11);
  v13 = (ADAPTER_DISPLAY *)*((_QWORD *)this + 2);
  *(&v17.PrivateDriverDataSize + 1) = 0;
  v17.hProtectedSession = this;
  v17.pPrivateDriverData = v12;
  v17.PrivateDriverDataSize = a4;
  v14 = *((_QWORD *)v13 + 2);
  if ( *(_QWORD *)(v14 + 1232) && *(_QWORD *)(v14 + 1240) )
  {
    v15 = ADAPTER_DISPLAY::DdiCreateProtectedSession(v13, &v17, v11);
    if ( v15 >= 0 )
    {
      *((_QWORD *)this + 19) = v17.hProtectedSession;
      return (unsigned int)v15;
    }
  }
  else
  {
    v15 = -1073741637;
    WdLogSingleEntry1(3LL, -1073741637LL);
  }
  *((_DWORD *)this + 6) = 3;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)this + 20, 0xFFFFFFFF) != 1 )
  {
    WdLogSingleEntry1(1LL, 1061LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"c == 0", 1061LL, 0LL, 0LL, 0LL, 0LL);
  }
  return (unsigned int)v15;
}
