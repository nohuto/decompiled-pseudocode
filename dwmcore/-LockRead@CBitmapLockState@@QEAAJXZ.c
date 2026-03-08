/*
 * XREFs of ?LockRead@CBitmapLockState@@QEAAJXZ @ 0x1800A6A84
 * Callers:
 *     ?HrLock@CBitmap@@IEAAJIIAEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@_NPEAUIUnknown@@@Z @ 0x1800A7510 (-HrLock@CBitmap@@IEAAJIIAEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@_NP.c)
 *     ?HrLockUnaligned@CBitmap@@IEAAJIIAEBUPixelFormatInfo@@IIIIPEAXW4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z @ 0x18027E444 (-HrLockUnaligned@CBitmap@@IEAAJIIAEBUPixelFormatInfo@@IIIIPEAXW4WICBitmapLockFlags@@PEAPEAVIBitm.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CBitmapLockState::LockRead(CBitmapLockState *this)
{
  unsigned int v1; // ebx
  signed __int32 v2; // eax

  v1 = 0;
  while ( 1 )
  {
    v2 = *(_DWORD *)this & 0x7FFFFFFF;
    if ( v2 + 1 < 0 )
      break;
    if ( v2 == _InterlockedCompareExchange((volatile signed __int32 *)this, v2 + 1, v2) )
      return v1;
  }
  v1 = -2003292403;
  MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, -2003292403, 0x3Au, 0LL);
  return v1;
}
