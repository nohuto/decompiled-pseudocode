/*
 * XREFs of NtGdiGetEmbedFonts @ 0x1C02C56A0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetEmbedFonts@PUBLIC_PFTOBJ@@QEAAKXZ @ 0x1C026D2B0 (-GetEmbedFonts@PUBLIC_PFTOBJ@@QEAAKXZ.c)
 */

__int64 __fastcall NtGdiGetEmbedFonts(Gre::Base *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF

  v1 = *((_QWORD *)Gre::Base::Globals(a1) + 796);
  result = 0LL;
  v3[0] = v1;
  if ( v1 )
  {
    if ( *(_DWORD *)(v1 + 28) )
      return PUBLIC_PFTOBJ::GetEmbedFonts((PUBLIC_PFTOBJ *)v3);
  }
  return result;
}
