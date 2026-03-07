__int64 __fastcall CMagnifierRenderTarget::EnsureSharedRenderTargets(CMagnifierRenderTarget *this)
{
  int v1; // eax
  unsigned int v2; // ebx
  int v3; // edi
  unsigned int v5; // r14d
  int v6; // eax
  __int64 v7; // rcx
  unsigned int v8; // eax
  unsigned int v9; // r8d
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rcx
  unsigned int v14; // [rsp+50h] [rbp+20h] BYREF
  struct IRenderTargetBitmap *v15; // [rsp+58h] [rbp+28h] BYREF

  v1 = *((_DWORD *)this + 466);
  v2 = 0;
  v15 = 0LL;
  v3 = 0;
  v14 = 0;
  if ( v1 )
  {
    v5 = 0;
    while ( 1 )
    {
      v6 = CMagnifierRenderTarget::OpenSharedSurfaceRenderTarget(
             this,
             *((void **)this + 4 * v5 + 235),
             *(struct _LUID *)((char *)this + 32 * v5 + 1888),
             *((HMONITOR *)this + 4 * v5 + 237),
             &v15);
      v14 = v6;
      v2 = v6;
      if ( v6 < 0 )
        break;
      v8 = *((_DWORD *)this + 446);
      v9 = v8 + 1;
      if ( v8 + 1 < v8 )
      {
        v3 = -2147024362;
        MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, -2147024362, 0xB5u, 0LL);
        v2 = -2147024362;
        goto LABEL_12;
      }
      v3 = 0;
      if ( v9 > *((_DWORD *)this + 445) )
      {
        v10 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 1760, 8, 1, &v15);
        v3 = v10;
        v2 = v10;
        if ( v10 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0xC0u, 0LL);
LABEL_12:
          v14 = v2;
          MilInstrumentationCheckHR_MaybeFailFast(v12, &dword_180383C70, 2u, v3, 0x16Fu, 0LL);
          goto LABEL_14;
        }
      }
      else
      {
        *(_QWORD *)(*((_QWORD *)this + 220) + 8LL * v8) = v15;
        *((_DWORD *)this + 446) = v9;
      }
      v2 = v3;
      v14 = v3;
      v15 = 0LL;
      if ( ++v5 >= *((_DWORD *)this + 466) )
        goto LABEL_14;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v7, &dword_180383C70, 2u, v6, 0x16Cu, 0LL);
    v3 = v2;
  }
LABEL_14:
  ReleaseInterfaceNoNULL<IRenderTargetBitmap>((__int64)v15);
  if ( v3 < 0 )
  {
    TranslateDXGIorD3DErrorInContext(v2, 7, &v14);
    return v14;
  }
  return v2;
}
