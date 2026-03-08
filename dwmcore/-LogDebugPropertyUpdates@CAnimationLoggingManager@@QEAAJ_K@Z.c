/*
 * XREFs of ?LogDebugPropertyUpdates@CAnimationLoggingManager@@QEAAJ_K@Z @ 0x1800C13A4
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18009EF00 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x180049354 (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800D4A28 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?InternalRelease@?$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ @ 0x1800E0830 (-InternalRelease@-$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     memset_0 @ 0x18010F5A8 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?LogDebugPropertyUpdate@CAnimationLoggingManager@@QEAAXPEAVCResource@@W4PropertyChangeSource@@_KW4MIL_RESOURCE_TYPE@@IIPEAVSubchannelMaskInfo@@PEBVCExpressionValue@@@Z @ 0x180212430 (-LogDebugPropertyUpdate@CAnimationLoggingManager@@QEAAXPEAVCResource@@W4PropertyChangeSource@@_K.c)
 */

__int64 __fastcall CAnimationLoggingManager::LogDebugPropertyUpdates(CAnimationLoggingManager *this, __int64 a2)
{
  _QWORD *v4; // rdi
  __int64 v5; // rbp
  unsigned int v6; // esi
  struct CResource *ResourceWithoutType; // rax
  __int64 v9; // r9
  struct CResource *v10; // r15
  int v11; // eax
  __int64 v12; // rcx
  _BYTE v13[64]; // [rsp+50h] [rbp-88h] BYREF
  __int64 v14; // [rsp+90h] [rbp-48h] BYREF
  int v15; // [rsp+98h] [rbp-40h]
  char i; // [rsp+9Ch] [rbp-3Ch]

  memset_0(v13, 0, sizeof(v13));
  v14 = 0LL;
  v4 = (_QWORD *)((char *)this + 64);
  v5 = 0LL;
  v15 = 18;
  for ( i = 0; (unsigned int)v5 < *((_DWORD *)this + 22); v5 = (unsigned int)(v5 + 1) )
  {
    ResourceWithoutType = CResourceTable::GetResourceWithoutType(
                            *(CResourceTable **)(*((_QWORD *)this + 6) + 32LL),
                            *(_DWORD *)(*v4 + 12 * v5));
    v10 = ResourceWithoutType;
    if ( ResourceWithoutType )
    {
      v11 = (*(__int64 (__fastcall **)(struct CResource *, _QWORD, _BYTE *))(*(_QWORD *)ResourceWithoutType + 136LL))(
              ResourceWithoutType,
              *(unsigned int *)(v9 + 12 * v5 + 4),
              v13);
      v6 = v11;
      if ( v11 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x1A6u, 0LL);
        goto LABEL_3;
      }
      CAnimationLoggingManager::LogDebugPropertyUpdate(
        this,
        v10,
        1LL,
        a2,
        *(_DWORD *)(*v4 + 12 * v5 + 8),
        *(_DWORD *)(*v4 + 12 * v5),
        *(_DWORD *)(*v4 + 12 * v5 + 4),
        0LL,
        v13);
    }
  }
  *((_DWORD *)this + 22) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 64, 12LL);
  v6 = 0;
LABEL_3:
  Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v14);
  return v6;
}
