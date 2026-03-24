/*
 * XREFs of ?InFrame@CFlipContentToken@@UEAAJPEAVCCompositionFrame@@PEA_N@Z @ 0x1C006FE00
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyTokenInFrame@CompositionSurfaceObject@@QEAAJAEBVCToken@@PEA_N@Z @ 0x1C001C9E4 (-NotifyTokenInFrame@CompositionSurfaceObject@@QEAAJAEBVCToken@@PEA_N@Z.c)
 */

__int64 __fastcall CFlipContentToken::InFrame(CFlipContentToken *this, struct CCompositionFrame *a2, bool *a3)
{
  __int64 result; // rax
  bool v6; // [rsp+30h] [rbp+8h] BYREF

  *((_DWORD *)this + 6) = 3;
  v6 = 0;
  result = CompositionSurfaceObject::NotifyTokenInFrame(*((CompositionSurfaceObject **)this + 4), this, &v6);
  if ( (int)result >= 0 )
  {
    *((_BYTE *)this + 224) ^= (*((_BYTE *)this + 224) ^ (8 * v6)) & 8;
    *a3 = 1;
  }
  return result;
}
