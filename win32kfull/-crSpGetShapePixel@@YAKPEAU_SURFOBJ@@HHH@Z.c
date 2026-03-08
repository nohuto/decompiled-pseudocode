/*
 * XREFs of ?crSpGetShapePixel@@YAKPEAU_SURFOBJ@@HHH@Z @ 0x1C0269520
 * Callers:
 *     GrePtInSprite @ 0x1C00A307C (GrePtInSprite.c)
 * Callees:
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall crSpGetShapePixel(struct _SURFOBJ *a1, int a2, int a3, int a4)
{
  unsigned int v8; // ebx
  HDEV hdev; // rcx
  __m128i si128; // xmm0
  unsigned int *v11; // r14
  unsigned int (__fastcall *v12)(__int64, struct _SURFOBJ *, _QWORD, _QWORD, __m128i *, _DWORD *); // rax
  __int64 v13; // rcx
  int v14; // r8d
  _DWORD v16[2]; // [rsp+40h] [rbp-58h] BYREF
  _QWORD v17[2]; // [rsp+48h] [rbp-50h] BYREF
  __m128i v18; // [rsp+58h] [rbp-40h] BYREF

  Gre::Base::Globals((Gre::Base *)a1);
  v8 = 0;
  v17[0] = 0LL;
  SURFREFVIEW::bMap((SURFREFVIEW *)v17, a1);
  if ( v17[0] )
  {
    if ( (HIDWORD(a1[1].hsurf) & 1) != 0 )
    {
      hdev = a1->hdev;
      if ( hdev )
      {
        si128 = _mm_load_si128((const __m128i *)&_xmm);
        v11 = *(unsigned int **)(*((_QWORD *)hdev + 138) + 56LL);
        v12 = (unsigned int (__fastcall *)(__int64, struct _SURFOBJ *, _QWORD, _QWORD, __m128i *, _DWORD *))*((_QWORD *)hdev + 352);
        *v11 = 0;
        v13 = *((_QWORD *)hdev + 138);
        v18 = si128;
        v16[0] = a2;
        v16[1] = a3;
        if ( v12(v13, a1, 0LL, 0LL, &v18, v16) )
          v8 = *v11;
      }
    }
    else if ( a4 )
    {
      v14 = *(_DWORD *)((char *)a1->pvScan0 + 4 * a2 + (__int64)(a1->lDelta * a3));
      v8 = v14 & 0xFF00 | ((unsigned __int8)v14 << 16) | BYTE2(v14);
    }
    else
    {
      v8 = *(_DWORD *)((char *)a1->pvScan0 + 4 * a2 + (__int64)(a1->lDelta * a3));
    }
  }
  SURFREFVIEW::bUnMap((SURFREFVIEW *)v17);
  return v8;
}
