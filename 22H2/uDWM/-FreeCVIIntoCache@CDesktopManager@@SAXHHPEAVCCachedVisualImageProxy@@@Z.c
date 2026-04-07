/*
 * XREFs of ?FreeCVIIntoCache@CDesktopManager@@SAXHHPEAVCCachedVisualImageProxy@@@Z @ 0x18002AA14
 * Callers:
 *     ??1CWindowSnapshot@@MEAA@XZ @ 0x180029F88 (--1CWindowSnapshot@@MEAA@XZ.c)
 *     ??1CTransitionWindowSnapshot@@MEAA@XZ @ 0x180041C48 (--1CTransitionWindowSnapshot@@MEAA@XZ.c)
 * Callees:
 *     ?_IsSameAsTargetCachedCVI@CDesktopManager@@CA_NHH@Z @ 0x18000C318 (-_IsSameAsTargetCachedCVI@CDesktopManager@@CA_NHH@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800173F4 (-Release@CBaseObject@@QEAAKXZ.c)
 */

void __fastcall CDesktopManager::FreeCVIIntoCache(int a1, int a2, struct CCachedVisualImageProxy *a3)
{
  __int64 v3; // rdi
  _QWORD *v4; // rax

  if ( a3 )
  {
    v3 = 0LL;
    v4 = (_QWORD *)((char *)CDesktopManager::s_pDesktopManagerInstance + 736);
    do
    {
      if ( !*v4 )
        break;
      v3 = (unsigned int)(v3 + 1);
      ++v4;
    }
    while ( (unsigned int)v3 < 2 );
    if ( (unsigned int)v3 < 2 && CDesktopManager::_IsSameAsTargetCachedCVI(a1, a2) )
    {
      if ( _InterlockedIncrement((volatile signed __int32 *)a3 + 2) == 2 )
        *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + v3 + 92) = a3;
      else
        CBaseObject::Release(a3);
    }
  }
}
