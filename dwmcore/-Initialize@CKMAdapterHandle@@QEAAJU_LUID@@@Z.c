/*
 * XREFs of ?Initialize@CKMAdapterHandle@@QEAAJU_LUID@@@Z @ 0x1800CF1D4
 * Callers:
 *     ?GetMaxFeatureLevel@CD3DDevice@@KAJPEAUIDXGIAdapter@@PEAW4D3D_FEATURE_LEVEL@@PEAW4_QAI_DRIVERVERSION@@PEAT_LARGE_INTEGER@@@Z @ 0x1800CF044 (-GetMaxFeatureLevel@CD3DDevice@@KAJPEAUIDXGIAdapter@@PEAW4D3D_FEATURE_LEVEL@@PEAW4_QAI_DRIVERVER.c)
 *     ?Initialize@CKMAdapterHandle@@QEAAJPEAUIDXGIAdapter@@@Z @ 0x180282CC4 (-Initialize@CKMAdapterHandle@@QEAAJPEAUIDXGIAdapter@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 */

__int64 __fastcall CKMAdapterHandle::Initialize(CKMAdapterHandle *this, struct _LUID a2)
{
  unsigned int v3; // ebx
  int v4; // eax
  __int64 v5; // rcx
  struct _LUID v7; // [rsp+30h] [rbp-28h] BYREF
  int v8; // [rsp+38h] [rbp-20h]

  v7 = a2;
  v3 = 0;
  v8 = 0;
  v4 = D3DKMTOpenAdapterFromLuid(&v7);
  if ( v4 < 0 )
  {
    v3 = v4 | 0x10000000;
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4 | 0x10000000, 0x33u, 0LL);
  }
  else
  {
    *(_DWORD *)this = v8;
  }
  return v3;
}
