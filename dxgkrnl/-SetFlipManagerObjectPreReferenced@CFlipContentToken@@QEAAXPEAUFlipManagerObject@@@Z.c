/*
 * XREFs of ?SetFlipManagerObjectPreReferenced@CFlipContentToken@@QEAAXPEAUFlipManagerObject@@@Z @ 0x1C0089374
 * Callers:
 *     ?ConsumerDwmProcessUpdateTokens@CFlipManager@@QEAAJPEAVCFlipPresentUpdate@@PEAVCFlipManagerToken@@PEAU_LIST_ENTRY@@@Z @ 0x1C00826AC (-ConsumerDwmProcessUpdateTokens@CFlipManager@@QEAAJPEAVCFlipPresentUpdate@@PEAVCFlipManagerToken.c)
 *     ??1CFlipContentToken@@UEAA@XZ @ 0x1C00890C0 (--1CFlipContentToken@@UEAA@XZ.c)
 *     ?Discard@CFlipContentToken@@UEAAXXZ @ 0x1C0089260 (-Discard@CFlipContentToken@@UEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CFlipContentToken::SetFlipManagerObjectPreReferenced(
        CFlipContentToken *this,
        struct FlipManagerObject *a2)
{
  void *v4; // rcx

  v4 = (void *)*((_QWORD *)this + 11);
  if ( v4 )
    ObfDereferenceObject(v4);
  *((_QWORD *)this + 11) = a2;
}
