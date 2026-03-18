/*
 * XREFs of ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C00D9014
 * Callers:
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C002E3D4 (--1DCOBJ@@QEAA@XZ.c)
 *     hbmSelectBitmap @ 0x1C009A990 (hbmSelectBitmap.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C016B168 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 * Callees:
 *     HmgDecrementExclusiveReferenceCountEx @ 0x1C0021550 (HmgDecrementExclusiveReferenceCountEx.c)
 *     ?GetUserAttr@XDCOBJ@@AEAAPEAU_DC_ATTR@@XZ @ 0x1C0021E20 (-GetUserAttr@XDCOBJ@@AEAAPEAU_DC_ATTR@@XZ.c)
 *     ?RestoreAttributes@DC@@QEAAXPEAU_DC_ATTR@@@Z @ 0x1C00231C0 (-RestoreAttributes@DC@@QEAAXPEAU_DC_ATTR@@@Z.c)
 *     bDeleteDCInternalEx @ 0x1C002DFD0 (bDeleteDCInternalEx.c)
 */

void __fastcall XDCOBJ::vUnlockFast(XDCOBJ *this)
{
  struct _DC_ATTR *UserAttr; // rax
  int *v3; // rcx
  int v4; // edx
  HDC v5; // rdi
  int v6; // [rsp+30h] [rbp+8h] BYREF

  if ( *((_DWORD *)this + 2) && (*(_DWORD *)(*(_QWORD *)this + 44LL) & 2) != 0 )
  {
    if ( !*((_DWORD *)this + 3) )
    {
      UserAttr = XDCOBJ::GetUserAttr(this);
      if ( UserAttr )
        DC::RestoreAttributes(*(DC **)this, UserAttr);
    }
    *(_DWORD *)(*(_QWORD *)this + 44LL) &= ~2u;
    *((_DWORD *)this + 2) = 0;
  }
  v3 = *(int **)this;
  v4 = *((_DWORD *)this + 3);
  v6 = 0;
  v5 = *(HDC *)v3;
  HmgDecrementExclusiveReferenceCountEx(v3, v4, &v6);
  if ( v6 )
    bDeleteDCInternalEx(v5, 0LL);
}
