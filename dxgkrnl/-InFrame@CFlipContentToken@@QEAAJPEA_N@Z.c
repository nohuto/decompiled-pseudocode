/*
 * XREFs of ?InFrame@CFlipContentToken@@QEAAJPEA_N@Z @ 0x1C0089284
 * Callers:
 *     ?ConsumerDwmProcessUpdateTokens@CFlipManager@@QEAAJPEAVCFlipPresentUpdate@@PEAVCFlipManagerToken@@PEAU_LIST_ENTRY@@@Z @ 0x1C00826AC (-ConsumerDwmProcessUpdateTokens@CFlipManager@@QEAAJPEAVCFlipPresentUpdate@@PEAVCFlipManagerToken.c)
 *     ?InFrame@CFlipContentToken@@UEAAJPEAVCCompositionFrame@@PEA_N@Z @ 0x1C00892E0 (-InFrame@CFlipContentToken@@UEAAJPEAVCCompositionFrame@@PEA_N@Z.c)
 * Callees:
 *     ?NotifyTokenInFrame@CompositionSurfaceObject@@QEAAJAEBVCToken@@PEA_N@Z @ 0x1C00793E8 (-NotifyTokenInFrame@CompositionSurfaceObject@@QEAAJAEBVCToken@@PEA_N@Z.c)
 */

__int64 __fastcall CFlipContentToken::InFrame(CFlipContentToken *this, bool *a2)
{
  CompositionSurfaceObject *v3; // rcx
  __int64 result; // rax
  bool v6; // [rsp+30h] [rbp+8h] BYREF

  *((_DWORD *)this + 6) = 3;
  v3 = (CompositionSurfaceObject *)*((_QWORD *)this + 4);
  v6 = 0;
  result = CompositionSurfaceObject::NotifyTokenInFrame(v3, this, &v6);
  if ( (int)result >= 0 )
  {
    *((_BYTE *)this + 212) ^= (*((_BYTE *)this + 212) ^ v6) & 1;
    *a2 = 1;
  }
  return result;
}
