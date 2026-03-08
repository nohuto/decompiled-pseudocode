/*
 * XREFs of GreSetFontEnumeration @ 0x1C010C224
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x1C01032D0 (xxxSystemParametersInfoWorker.c)
 *     xxxUpdatePerUserSystemParameters @ 0x1C010AFDC (xxxUpdatePerUserSystemParameters.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GreSetFontEnumeration(Gre::Base *a1)
{
  char v1; // bl
  struct Gre::Base::SESSION_GLOBALS *v2; // rcx
  __int64 result; // rax
  int v4; // edx
  int v5; // ebx

  v1 = (char)a1;
  v2 = Gre::Base::Globals(a1);
  result = *((unsigned int *)v2 + 41);
  if ( (v1 & 4) != 0 )
  {
    v4 = *((_DWORD *)v2 + 41) & 0x11;
    v5 = v1 & 2;
  }
  else if ( (v1 & 0x20) != 0 )
  {
    v4 = *((_DWORD *)v2 + 41) & 3;
    v5 = v1 & 0x10;
  }
  else
  {
    v4 = *((_DWORD *)v2 + 41) & 0x12;
    v5 = v1 & 1;
  }
  *((_DWORD *)v2 + 41) = v5 | v4;
  return result;
}
