/*
 * XREFs of ?ProcessSetSurfaces@CCompositionCubeMap@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPOSITIONCUBEMAP_SETSURFACES@@PEBXI@Z @ 0x1801B932C
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800A36DC (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800450D0 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x18009D9B0 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x1800A1010 (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x1800C07A0 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 *     ?InternalRelease@?$ComPtr@VCCompositionSurfaceBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x1801B9180 (-InternalRelease@-$ComPtr@VCCompositionSurfaceBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall CCompositionCubeMap::ProcessSetSurfaces(
        CCompositionCubeMap *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_COMPOSITIONCUBEMAP_SETSURFACES *a3,
        _DWORD *a4,
        unsigned int a5)
{
  CResourceTable *v7; // r8
  unsigned int v9; // eax
  unsigned int v10; // esi
  __int64 v11; // rcx
  __int64 v12; // r14
  __int64 v13; // rsi
  unsigned int v14; // edx
  struct CResource *ResourceWithoutType; // rax
  CMILCOMBase *v16; // r12
  __int64 v17; // rcx
  int v18; // eax
  int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // rsi
  __int64 v22; // r14
  struct CResource *v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rcx
  unsigned int v26; // ecx
  CRenderTargetBitmap *v28; // [rsp+30h] [rbp-20h] BYREF
  __int128 v29; // [rsp+38h] [rbp-18h]
  CRenderTargetBitmap *v30; // [rsp+90h] [rbp+40h] BYREF
  struct CResourceTable *v31; // [rsp+98h] [rbp+48h]
  CMILCOMBase *v32; // [rsp+A0h] [rbp+50h]

  v31 = a2;
  v7 = a2;
  v9 = *((_DWORD *)a3 + 2);
  if ( v9 > *((_DWORD *)this + 26) )
  {
    v10 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, -2003303421, 0xA2u, 0LL);
    return v10;
  }
  v11 = 0LL;
  a5 = 0;
  if ( !v9 )
  {
LABEL_18:
    *((_DWORD *)this + 28) = -1;
    v26 = 0;
    if ( *((_DWORD *)a3 + 2) )
    {
      while ( !*(_QWORD *)(32LL * v26 + *((_QWORD *)this + 10) + 8) )
      {
        if ( ++v26 >= *((_DWORD *)a3 + 2) )
          goto LABEL_23;
      }
      *((_DWORD *)this + 28) = v26;
    }
LABEL_23:
    *((_BYTE *)this + 144) = 1;
    return 0;
  }
  while ( 1 )
  {
    v12 = (unsigned int)v11;
    v29 = 0uLL;
    v13 = 5 * v11;
    v14 = a4[5 * v11];
    v32 = 0LL;
    v30 = 0LL;
    ResourceWithoutType = CResourceTable::GetResourceWithoutType(v7, v14);
    v16 = ResourceWithoutType;
    if ( !ResourceWithoutType )
      goto LABEL_11;
    if ( !(*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)ResourceWithoutType + 56LL))(
            ResourceWithoutType,
            40LL) )
      break;
    v18 = a4[v13 + 1];
    if ( v18 < 0 )
      break;
    v17 = (unsigned int)a4[v13 + 2];
    if ( (int)v17 < 0 || a4[v13 + 3] <= v18 || a4[v13 + 4] <= (int)v17 )
      break;
    CMILCOMBase::InternalAddRef(v16);
    v28 = 0LL;
    v32 = v16;
    v30 = v16;
    Microsoft::WRL::ComPtr<CCompositionSurfaceBitmap>::InternalRelease(&v28);
    v29 = *(_OWORD *)&a4[v13 + 1];
    v19 = CResource::RegisterNotifier(this, v16);
    v10 = v19;
    if ( v19 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v19, 0xC9u, 0LL);
      goto LABEL_17;
    }
LABEL_11:
    v21 = *((_QWORD *)this + 10);
    v22 = 32 * v12;
    v23 = *(struct CResource **)(v22 + v21);
    if ( v23 )
    {
      CResource::UnRegisterNotifierInternal(this, v23);
      *(_QWORD *)(v22 + v21) = 0LL;
    }
    v24 = *((_QWORD *)this + 10);
    v30 = 0LL;
    *(_QWORD *)(v22 + v24) = v16;
    v25 = *((_QWORD *)this + 10);
    v28 = *(CRenderTargetBitmap **)(v22 + v25 + 8);
    *(_QWORD *)(v22 + v25 + 8) = v32;
    Microsoft::WRL::ComPtr<CCompositionSurfaceBitmap>::InternalRelease(&v28);
    *(_OWORD *)(v22 + *((_QWORD *)this + 10) + 16) = v29;
    Microsoft::WRL::ComPtr<CCompositionSurfaceBitmap>::InternalRelease(&v30);
    v11 = a5 + 1;
    a5 = v11;
    if ( (unsigned int)v11 >= *((_DWORD *)a3 + 2) )
      goto LABEL_18;
    v7 = v31;
  }
  v10 = -2003303421;
  MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, -2003303421, 0xC6u, 0LL);
LABEL_17:
  Microsoft::WRL::ComPtr<CCompositionSurfaceBitmap>::InternalRelease(&v30);
  return v10;
}
