/*
 * XREFs of ?SetIndependentFlipConfirmInfo@CFlipContentToken@@QEAAXPEAUFlipManagerTokenIFlipInfo@@@Z @ 0x1C00854D0
 * Callers:
 *     ?ConsumerDwmProcessUpdateTokens@CFlipManager@@QEAAJPEAVCFlipPresentUpdate@@PEAVCFlipManagerToken@@PEAU_LIST_ENTRY@@@Z @ 0x1C008339C (-ConsumerDwmProcessUpdateTokens@CFlipManager@@QEAAJPEAVCFlipPresentUpdate@@PEAVCFlipManagerToken.c)
 * Callees:
 *     <none>
 */

void __fastcall CFlipContentToken::SetIndependentFlipConfirmInfo(
        CFlipContentToken *this,
        struct FlipManagerTokenIFlipInfo *a2)
{
  *((_BYTE *)this + 288) = *((_BYTE *)a2 + 24);
  *((_BYTE *)this + 291) = *((_BYTE *)a2 + 77);
  *((_BYTE *)this + 289) = *((_BYTE *)a2 + 78);
  *((_BYTE *)this + 290) = *((_BYTE *)a2 + 76);
  *((_QWORD *)this + 37) = *((_QWORD *)a2 + 8);
  *((_DWORD *)this + 76) = *((_DWORD *)a2 + 14);
  *((_DWORD *)this + 77) = *((_DWORD *)a2 + 18);
  *((_QWORD *)this + 39) = *((_QWORD *)a2 + 6);
}
