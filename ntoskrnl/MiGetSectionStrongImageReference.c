/*
 * XREFs of MiGetSectionStrongImageReference @ 0x140A40B24
 * Callers:
 *     MiWalkEntireImage @ 0x1402862C0 (MiWalkEntireImage.c)
 *     MiValidateInPage @ 0x140287570 (MiValidateInPage.c)
 *     MiValidateImagePfn @ 0x14069EF78 (MiValidateImagePfn.c)
 *     MiApplyDriverHotPatch @ 0x140A31BB8 (MiApplyDriverHotPatch.c)
 *     MiPromoteControlAreaToStrongCode @ 0x140A385E8 (MiPromoteControlAreaToStrongCode.c)
 *     MmGetSectionStrongImageReference @ 0x140A40B7C (MmGetSectionStrongImageReference.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall MiGetSectionStrongImageReference(__int64 a1)
{
  __int64 v2; // rbx
  unsigned __int64 v3; // rcx
  __int64 result; // rax
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0LL;
  v3 = *(_QWORD *)(a1 + 40) & 0xFFFFFFFFFFFFFFF8uLL;
  v5 = 0LL;
  if ( qword_140C37638 )
  {
    result = qword_140C37638(v3, &v5);
    if ( (int)result < 0 )
      return result;
    v2 = v5;
  }
  else
  {
    result = 0LL;
  }
  *(_QWORD *)(a1 + 56) = v2;
  return result;
}
