/*
 * XREFs of ?SetIconicBitmap@CWindowData@@QEAAXPEAVCBitmapSource@@@Z @ 0x180089CF8
 * Callers:
 *     ?ClearBitmap@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@@Z @ 0x1800146EC (-ClearBitmap@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?WindowCanHaveIconicBitmapChanged@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@@Z @ 0x180016008 (-WindowCanHaveIconicBitmapChanged@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?AcceptBitmap@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@PEAVCBitmapSource@@@Z @ 0x180089368 (-AcceptBitmap@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@PEAVCBitmapSource@@@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800173F4 (-Release@CBaseObject@@QEAAKXZ.c)
 */

void __fastcall CWindowData::SetIconicBitmap(CWindowData *this, struct CBitmapSource *a2)
{
  CBaseObject *v4; // rcx

  v4 = (CBaseObject *)*((_QWORD *)this + 47);
  if ( v4 )
    CBaseObject::Release(v4);
  *((_QWORD *)this + 47) = a2;
  if ( a2 )
    _InterlockedIncrement((volatile signed __int32 *)a2 + 2);
}
