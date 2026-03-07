__int64 __fastcall CCompositionCubeMap::ProcessSetSurfaces(
        CCompositionCubeMap *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_COMPOSITIONCUBEMAP_SETSURFACES *a3,
        _DWORD *a4)
{
  unsigned int v4; // eax
  CResourceTable *v6; // r9
  unsigned int v8; // esi
  __int64 v9; // r13
  struct CResource *ResourceWithoutType; // rax
  struct CResource *v11; // rdx
  struct CResource *v12; // r12
  struct CResource *v13; // rbp
  __int64 v14; // rcx
  int v15; // eax
  int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // rsi
  __int64 v19; // r14
  __int64 v20; // rax
  __int64 v21; // rcx
  CResource *v22; // rax
  unsigned int v23; // ecx
  CResource *v25; // [rsp+30h] [rbp-58h] BYREF
  __int128 v26; // [rsp+38h] [rbp-50h]
  CResource *v27; // [rsp+90h] [rbp+8h] BYREF
  struct CResourceTable *v28; // [rsp+98h] [rbp+10h]
  const struct tagMILCMD_COMPOSITIONCUBEMAP_SETSURFACES *v29; // [rsp+A0h] [rbp+18h]

  v29 = a3;
  v28 = a2;
  v4 = *((_DWORD *)a3 + 2);
  v6 = a2;
  if ( v4 > *((_DWORD *)this + 28) )
  {
    v8 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, -2003303421, 0xA2u, 0LL);
    return v8;
  }
  v9 = 0LL;
  if ( !v4 )
  {
LABEL_19:
    *((_DWORD *)this + 30) = -1;
    v23 = 0;
    if ( *((_DWORD *)a3 + 2) )
    {
      while ( !*(_QWORD *)(32LL * v23 + *((_QWORD *)this + 11) + 8) )
      {
        if ( ++v23 >= *((_DWORD *)a3 + 2) )
          goto LABEL_24;
      }
      *((_DWORD *)this + 30) = v23;
    }
LABEL_24:
    *((_BYTE *)this + 152) = 1;
    return 0;
  }
  while ( 1 )
  {
    v27 = 0LL;
    v26 = 0uLL;
    ResourceWithoutType = CResourceTable::GetResourceWithoutType(v6, a4[5 * v9]);
    v11 = 0LL;
    v12 = 0LL;
    v13 = ResourceWithoutType;
    if ( !ResourceWithoutType )
      goto LABEL_12;
    if ( !(*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)ResourceWithoutType + 56LL))(
            ResourceWithoutType,
            42LL) )
      break;
    v15 = a4[5 * v9 + 1];
    if ( v15 < 0 )
      break;
    v14 = (unsigned int)a4[5 * v9 + 2];
    if ( (int)v14 < 0 || a4[5 * v9 + 3] <= v15 || a4[5 * v9 + 4] <= (int)v14 )
      break;
    CMILRefCountImpl::AddReference((struct CResource *)((char *)v13 + 8));
    v25 = 0LL;
    v27 = v13;
    Microsoft::WRL::ComPtr<CCompositionSurfaceBitmap>::InternalRelease(&v25);
    v26 = *(_OWORD *)&a4[5 * v9 + 1];
    v16 = CResource::RegisterNotifier(this, v13);
    v8 = v16;
    if ( v16 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0xC9u, 0LL);
      goto LABEL_18;
    }
    v11 = v13;
    v12 = v13;
LABEL_12:
    v18 = *((_QWORD *)this + 11);
    v19 = 32LL * (unsigned int)v9;
    if ( *(_QWORD *)(v18 + v19) )
    {
      CResource::UnRegisterNotifierInternal(this, *(struct CResource **)(v18 + 32LL * (unsigned int)v9));
      *(_QWORD *)(v18 + 32LL * (unsigned int)v9) = 0LL;
      v11 = v12;
    }
    v20 = *((_QWORD *)this + 11);
    v27 = 0LL;
    *(_QWORD *)(v19 + v20) = v13;
    v21 = *((_QWORD *)this + 11);
    v22 = *(CResource **)(v19 + v21 + 8);
    *(_QWORD *)(v19 + v21 + 8) = v11;
    v25 = v22;
    Microsoft::WRL::ComPtr<CCompositionSurfaceBitmap>::InternalRelease(&v25);
    *(_OWORD *)(v19 + *((_QWORD *)this + 11) + 16) = v26;
    Microsoft::WRL::ComPtr<CCompositionSurfaceBitmap>::InternalRelease(&v27);
    a3 = v29;
    v9 = (unsigned int)(v9 + 1);
    if ( (unsigned int)v9 >= *((_DWORD *)v29 + 2) )
      goto LABEL_19;
    v6 = v28;
  }
  v8 = -2003303421;
  MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, -2003303421, 0xC6u, 0LL);
LABEL_18:
  Microsoft::WRL::ComPtr<CCompositionSurfaceBitmap>::InternalRelease(&v27);
  return v8;
}
