/*
 * XREFs of ?EnsureD2DBitmap@CDxHandleBitmapRealization@@MEAAJXZ @ 0x18003BAD0
 * Callers:
 *     ?EnsureD2DBitmap@CDxHandleAdvancedDirectFlipBitmapRealization@@MEAAJXZ @ 0x1802AE790 (-EnsureD2DBitmap@CDxHandleAdvancedDirectFlipBitmapRealization@@MEAAJXZ.c)
 *     ?EnsureD2DBitmap@CDxHandleStereoBitmapRealization@@MEAAJXZ @ 0x1802AFB90 (-EnsureD2DBitmap@CDxHandleStereoBitmapRealization@@MEAAJXZ.c)
 * Callees:
 *     ?InitializeCache@CD2DBitmapCache@@QEAAXPEAVID2DBitmapCacheSource@@@Z @ 0x180034308 (-InitializeCache@CD2DBitmapCache@@QEAAXPEAVID2DBitmapCacheSource@@@Z.c)
 *     ?Release@CD3DDevice@@UEAAKXZ @ 0x180034A40 (-Release@CD3DDevice@@UEAAKXZ.c)
 *     ?CreateD2DBitmap@CD3DDevice@@QEAAJPEAX_NW4DXGI_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@MMPEAPEAVCD2DBitmap@@@Z @ 0x18003B50C (-CreateD2DBitmap@CD3DDevice@@QEAAJPEAX_NW4DXGI_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@.c)
 *     ?GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z @ 0x18003D644 (-GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CDxHandleBitmapRealization::EnsureD2DBitmap(CDxHandleBitmapRealization *this)
{
  unsigned int v1; // edi
  unsigned __int64 *v2; // r14
  struct _LUID v5; // rdx
  int Device; // eax
  unsigned int v7; // ecx
  struct D3D11_SUBRESOURCE_DATA *v8; // r8
  __int64 v9; // rcx
  int v10; // r9d
  int D2DBitmap; // eax
  unsigned int v12; // ecx
  __int64 v13; // rcx
  CD3DDevice *v14; // rcx
  CD3DDevice *v15; // [rsp+60h] [rbp+8h] BYREF

  v1 = 0;
  v2 = (unsigned __int64 *)((char *)this + 376);
  if ( *((_QWORD *)this + 47) )
    return v1;
  v5 = (struct _LUID)*((_QWORD *)this + 32);
  v15 = 0LL;
  Device = CDeviceManager::GetDevice((CDeviceManager *)&g_DeviceManager, v5, &v15);
  v1 = Device;
  if ( Device < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, Device, 0x15Du, 0LL);
    v14 = v15;
    if ( !v15 )
      return v1;
    goto LABEL_12;
  }
  v9 = *v2;
  *v2 = 0LL;
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  v10 = 3;
  if ( *((_DWORD *)this + 24) )
    v10 = *((_DWORD *)this + 24);
  LOBYTE(v8) = *((_BYTE *)this + 392);
  D2DBitmap = CD3DDevice::CreateD2DBitmap(
                (__int64)v15,
                *((void **)this + 31),
                v8,
                v10,
                *((_DWORD *)this + 36),
                *((_DWORD *)this + 70),
                SLODWORD(FLOAT_96_0),
                SLODWORD(FLOAT_96_0),
                v2);
  v1 = D2DBitmap;
  if ( D2DBitmap < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, D2DBitmap, 0x166u, 0LL);
  }
  else
  {
    v13 = *v2 + 16 + *(int *)(*(_QWORD *)(*v2 + 16) + 8LL);
    (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v13 + 40LL))(
      v13,
      (char *)this + *(int *)(*((_QWORD *)this + 2) + 4LL) + 16);
    CD2DBitmapCache::InitializeCache(
      this,
      (struct ID2DBitmapCacheSource *)((*v2 + 96) & ((unsigned __int128)-(__int128)*v2 >> 64)));
  }
  if ( v15 )
  {
    v14 = v15;
LABEL_12:
    CD3DDevice::Release(v14);
  }
  return v1;
}
