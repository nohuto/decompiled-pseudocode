/*
 * XREFs of ?bDeleteColorSpace@@YAHPEAUHCOLORSPACE__@@W4_CLEANUPTYPE@@@Z @ 0x1C00DBD84
 * Callers:
 *     ?NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z @ 0x1C0017B90 (-NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z.c)
 *     ??$vGarbageCollectObject@VCOLORSPACEGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00DB9B4 (--$vGarbageCollectObject@VCOLORSPACEGC@@@@YAXPEAUHOBJ__@@@Z.c)
 *     NtGdiDeleteColorSpace @ 0x1C0179810 (NtGdiDeleteColorSpace.c)
 * Callees:
 *     ?HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z @ 0x1C001E9A4 (-HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z.c)
 *     HmgRemoveObject @ 0x1C001F4E0 (HmgRemoveObject.c)
 *     FreeObject @ 0x1C0027670 (FreeObject.c)
 *     EngSetLastError @ 0x1C008B610 (EngSetLastError.c)
 *     ?Feature_1827749177__private_IsEnabled@@YAHXZ @ 0x1C00D8C50 (-Feature_1827749177__private_IsEnabled@@YAHXZ.c)
 */

__int64 __fastcall bDeleteColorSpace(struct HOBJ__ *a1, int a2)
{
  unsigned int v2; // ebx
  struct _SLIST_ENTRY *v5; // rax

  v2 = 0;
  if ( a1 == (struct HOBJ__ *)ghStockColorSpace )
  {
    if ( (unsigned int)Feature_1827749177__private_IsEnabled() )
    {
      LOBYTE(v2) = a2 != 3;
      return v2;
    }
    return 1;
  }
  if ( (unsigned int)Feature_1827749177__private_IsEnabled() && a2 )
  {
    if ( a2 != 3 )
    {
LABEL_11:
      EngSetLastError(0x57u);
      return v2;
    }
    v5 = (struct _SLIST_ENTRY *)HmgRemoveObjectImpl(a1, 0, 1, 2, 9, 0LL);
  }
  else
  {
    v5 = (struct _SLIST_ENTRY *)HmgRemoveObject((__int64)a1, 0, 0, 1, 9, 0LL);
  }
  if ( !v5 )
    goto LABEL_11;
  FreeObject(v5, 9);
  return 1;
}
