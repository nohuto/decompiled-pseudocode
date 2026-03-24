/*
 * XREFs of ?vUpdate_VisRect@DC@@QEAAXPEAVREGION@@@Z @ 0x1C002CBA0
 * Callers:
 *     ?bCompute@DC@@QEAAHXZ @ 0x1C003AB70 (-bCompute@DC@@QEAAHXZ.c)
 *     GreCreateDisplayDC @ 0x1C003B650 (GreCreateDisplayDC.c)
 *     ?hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z @ 0x1C00C9DD0 (-hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z.c)
 *     GreRestoreDCInternal @ 0x1C00CC090 (GreRestoreDCInternal.c)
 * Callees:
 *     ?GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z @ 0x1C002E990 (-GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z.c)
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x1C00302E8 (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 */

void __fastcall DC::vUpdate_VisRect(DC *this, __m128i *a2)
{
  int v4; // eax
  int v5; // r10d
  _DWORD *v6; // rcx
  int v7; // r9d
  __m128i v8; // xmm0
  int v9; // r8d
  struct _ENTRY *EntryFromObject; // rax
  __m128i *v11; // [rsp+40h] [rbp+18h] BYREF

  if ( (*((_BYTE *)GdiHandleManager::GetEntryFromObject(gpHandleManager, this) + 15) & 4) != 0 )
  {
    if ( !a2
      || (v11 = a2,
          *(_DWORD *)(*((_QWORD *)this + 122) + 116LL) = RGNOBJ::iComplexity((RGNOBJ *)&v11),
          (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)&v11) == 1) )
    {
      *(_OWORD *)(*((_QWORD *)this + 122) + 120LL) = xmmword_1C0212470;
    }
    else
    {
      v4 = *((_DWORD *)this + 259);
      v5 = *((_DWORD *)this + 258);
      v6 = (_DWORD *)*((_QWORD *)this + 122);
      v7 = _mm_cvtsi128_si32(_mm_srli_si128(a2[6], 4)) - v4;
      v8 = _mm_srli_si128(a2[6], 12);
      v9 = _mm_srli_si128(a2[6], 8).m128i_u32[0] - v5;
      v6[30] = *(_OWORD *)&a2[6] - v5;
      v6[31] = v7;
      v6[32] = v9;
      v6[33] = _mm_cvtsi128_si32(v8) - v4;
    }
    EntryFromObject = GdiHandleManager::GetEntryFromObject(gpHandleManager, this);
    *((_BYTE *)EntryFromObject + 15) &= ~4u;
  }
}
