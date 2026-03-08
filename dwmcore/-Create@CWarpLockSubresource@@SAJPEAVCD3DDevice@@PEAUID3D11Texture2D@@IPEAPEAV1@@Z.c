/*
 * XREFs of ?Create@CWarpLockSubresource@@SAJPEAVCD3DDevice@@PEAUID3D11Texture2D@@IPEAPEAV1@@Z @ 0x1800A840C
 * Callers:
 *     ?CopyTexture2D@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@IAEBUPixelFormatInfo@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAVIBitmapDest@@HH@Z @ 0x1800A5320 (-CopyTexture2D@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@IAEBUPixelFormatInfo@@AEBV-$TMilRect@IUMilR.c)
 *     ?TryFastWarpLock@CD2DBitmap@@IEBA_NPEAPEAEPEAI1PEAPEAUIUnknown@@@Z @ 0x1800A82B8 (-TryFastWarpLock@CD2DBitmap@@IEBA_NPEAPEAEPEAI1PEAPEAUIUnknown@@@Z.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180044B4C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007B984 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UIUnknown@@@@IEAAKXZ @ 0x18008F164 (-InternalRelease@-$CMILRefCountBaseT@UIUnknown@@@@IEAAKXZ.c)
 *     ??0CWarpLockSubresource@@IEAA@PEAVIWarpPrivateAPI@@@Z @ 0x1800A84B4 (--0CWarpLockSubresource@@IEAA@PEAVIWarpPrivateAPI@@@Z.c)
 *     ?Initialize@CWarpLockSubresource@@IEAAJPEAUID3D11Texture2D@@I@Z @ 0x1800A85D0 (-Initialize@CWarpLockSubresource@@IEAAJPEAUID3D11Texture2D@@I@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CWarpLockSubresource::Create(
        struct CD3DDevice *a1,
        struct ID3D11Texture2D *a2,
        unsigned int a3,
        struct CWarpLockSubresource **a4)
{
  struct IWarpPrivateAPI *v5; // rbx
  CWarpLockSubresource *v8; // rax
  unsigned int v9; // ecx
  CWarpLockSubresource *v10; // rax
  CWarpLockSubresource *v11; // rdi
  int v12; // eax
  unsigned int v13; // ecx
  unsigned int v14; // ebx

  *a4 = 0LL;
  v5 = (struct IWarpPrivateAPI *)*((_QWORD *)a1 + 71);
  if ( v5 )
  {
    v8 = (CWarpLockSubresource *)DefaultHeap::Alloc(0x38uLL);
    if ( v8 && (v10 = CWarpLockSubresource::CWarpLockSubresource(v8, v5), (v11 = v10) != 0LL) )
    {
      CMILRefCountImpl::AddReference((CWarpLockSubresource *)((char *)v10 + 8));
      v12 = CWarpLockSubresource::Initialize(v11, a2, a3);
      v14 = v12;
      if ( v12 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x1Cu, 0LL);
        CMILRefCountBaseT<IUnknown>::InternalRelease((volatile signed __int32 *)v11);
      }
      else
      {
        *a4 = v11;
      }
    }
    else
    {
      v14 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, -2147024882, 0x1Au, 0LL);
    }
  }
  else
  {
    v14 = -2003292287;
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)a1, 0LL, 0, -2003292287, 0x22u, 0LL);
  }
  return v14;
}
