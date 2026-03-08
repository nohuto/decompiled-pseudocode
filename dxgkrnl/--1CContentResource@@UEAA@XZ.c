/*
 * XREFs of ??1CContentResource@@UEAA@XZ @ 0x1C00874BC
 * Callers:
 *     ??_ECContentResource@@UEAAPEAXI@Z @ 0x1C0087510 (--_ECContentResource@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1CFlipResource@@MEAA@XZ @ 0x1C00848C0 (--1CFlipResource@@MEAA@XZ.c)
 *     ?ClearCompositionSurfaceBinding@CContentResource@@QEAAJPEAPEAVCDisableScanoutToken@@@Z @ 0x1C0087554 (-ClearCompositionSurfaceBinding@CContentResource@@QEAAJPEAPEAVCDisableScanoutToken@@@Z.c)
 *     ?SendToTokenManager@CDisableScanoutToken@@SAJAEAPEAV1@@Z @ 0x1C0088FA4 (-SendToTokenManager@CDisableScanoutToken@@SAJAEAPEAV1@@Z.c)
 */

void __fastcall CContentResource::~CContentResource(CContentResource *this)
{
  bool v1; // zf
  struct CDisableScanoutToken *v3; // [rsp+30h] [rbp+8h] BYREF

  v1 = *((_QWORD *)this + 6) == 0LL;
  *(_QWORD *)this = &CContentResource::`vftable';
  if ( !v1 )
  {
    v3 = 0LL;
    CContentResource::ClearCompositionSurfaceBinding(this, &v3);
    CDisableScanoutToken::SendToTokenManager(&v3);
  }
  CFlipResource::~CFlipResource((__int64)this);
}
