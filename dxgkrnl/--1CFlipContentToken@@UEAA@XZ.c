/*
 * XREFs of ??1CFlipContentToken@@UEAA@XZ @ 0x1C00890C0
 * Callers:
 *     ??_GCFlipContentToken@@UEAAPEAXI@Z @ 0x1C0089100 (--_GCFlipContentToken@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1CToken@@UEAA@XZ @ 0x1C0077C6C (--1CToken@@UEAA@XZ.c)
 *     ?SetFlipManagerObjectPreReferenced@CFlipContentToken@@QEAAXPEAUFlipManagerObject@@@Z @ 0x1C0089374 (-SetFlipManagerObjectPreReferenced@CFlipContentToken@@QEAAXPEAUFlipManagerObject@@@Z.c)
 */

void __fastcall CFlipContentToken::~CFlipContentToken(CFlipContentToken *this)
{
  bool v1; // zf

  v1 = *((_DWORD *)this + 6) == 6;
  *(_QWORD *)this = &CFlipContentToken::`vftable';
  if ( !v1 )
  {
    CFlipContentToken::SetFlipManagerObjectPreReferenced(this, 0LL);
    *((_DWORD *)this + 6) = 6;
  }
  CToken::~CToken(this);
}
