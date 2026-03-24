/*
 * XREFs of ?bDeleteColorSpace@@YAHPEAUHCOLORSPACE__@@W4_CLEANUPTYPE@@@Z @ 0x1C00CB468
 * Callers:
 *     ?NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z @ 0x1C0073B1C (-NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z.c)
 *     ??$vGarbageCollectObject@VCOLORSPACEGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00CBC44 (--$vGarbageCollectObject@VCOLORSPACEGC@@@@YAXPEAUHOBJ__@@@Z.c)
 *     NtGdiDeleteColorSpace @ 0x1C0148D00 (NtGdiDeleteColorSpace.c)
 * Callees:
 *     FreeObject @ 0x1C002BC40 (FreeObject.c)
 *     ?HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z @ 0x1C002D7C0 (-HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z.c)
 *     HmgRemoveObject @ 0x1C0032640 (HmgRemoveObject.c)
 *     EngSetLastError @ 0x1C009F430 (EngSetLastError.c)
 */

__int64 __fastcall bDeleteColorSpace(struct HOBJ__ *a1, int a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rax

  v2 = 0;
  if ( a1 == (struct HOBJ__ *)ghStockColorSpace )
    return a2 != 3;
  if ( a2 )
  {
    if ( a2 != 3 )
    {
LABEL_8:
      EngSetLastError(0x57u);
      return v2;
    }
    v3 = HmgRemoveObjectImpl(a1, 0, 1, 2, 9, 0LL);
  }
  else
  {
    v3 = HmgRemoveObject((__int64)a1, 0, 0, 1, 9, 0LL);
  }
  if ( !v3 )
    goto LABEL_8;
  FreeObject(v3, 9);
  return 1;
}
