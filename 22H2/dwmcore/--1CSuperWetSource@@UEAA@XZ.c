/*
 * XREFs of ??1CSuperWetSource@@UEAA@XZ @ 0x1801C3644
 * Callers:
 *     ??1CGenericInk@@UEAA@XZ @ 0x1801C212C (--1CGenericInk@@UEAA@XZ.c)
 *     ??_ECSuperWetSource@@UEAAPEAXI@Z @ 0x1801C36A0 (--_ECSuperWetSource@@UEAAPEAXI@Z.c)
 *     ??1CSynchronousSuperWetInk@@UEAA@XZ @ 0x1801EF30C (--1CSynchronousSuperWetInk@@UEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1800426C0 (--3@YAXPEAX_K@Z.c)
 *     ?Release@CRenderTargetBitmap@@UEAAKXZ @ 0x180060070 (-Release@CRenderTargetBitmap@@UEAAKXZ.c)
 *     ??3@YAXPEAX@Z @ 0x180094C0C (--3@YAXPEAX@Z.c)
 */

void __fastcall CSuperWetSource::~CSuperWetSource(CSuperWetSource *this)
{
  void *v2; // rcx
  void *v3; // rcx
  CRenderTargetBitmap *v4; // rcx

  *(_QWORD *)this = &CSuperWetSource::`vftable';
  v2 = (void *)*((_QWORD *)this + 4);
  if ( v2 )
    operator delete(v2);
  v3 = (void *)*((_QWORD *)this + 3);
  if ( v3 )
    operator delete(v3);
  v4 = (CRenderTargetBitmap *)*((_QWORD *)this + 2);
  if ( v4 )
  {
    *((_QWORD *)this + 2) = 0LL;
    CRenderTargetBitmap::Release(v4);
  }
  Microsoft::WRL::ComPtr<CGenericInkTipPointSource>::InternalRelease((CDrawListEntry **)this + 1);
}
