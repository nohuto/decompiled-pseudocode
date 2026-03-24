/*
 * XREFs of ulIndexToRGB @ 0x1C0067820
 * Callers:
 *     GreGetNearestColor @ 0x1C0021710 (GreGetNearestColor.c)
 *     ulColorRefToRGB @ 0x1C00C0FC0 (ulColorRefToRGB.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C0039FC4 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     EngAcquireSemaphore @ 0x1C003A230 (EngAcquireSemaphore.c)
 *     ?ulIndexToRGB@XEPALOBJ@@QEAAKK@Z @ 0x1C0067870 (-ulIndexToRGB@XEPALOBJ@@QEAAKK@Z.c)
 */

unsigned int __fastcall ulIndexToRGB(struct _ERESOURCE *a1, __int64 a2, unsigned int a3)
{
  int v3; // esi
  char v4; // di
  __int64 v7; // rcx
  unsigned int v8; // edx
  _BYTE *v9; // rcx
  unsigned int v10; // eax
  HSEMAPHORE v11; // [rsp+30h] [rbp+8h] BYREF

  v11 = (HSEMAPHORE)a1;
  v3 = 0;
  v4 = a3;
  if ( a1 )
    return XEPALOBJ::ulIndexToRGB((XEPALOBJ *)&v11, a3);
  if ( a3 < 0xA )
    return *((_DWORD *)&logDefaultPal + a3 + 1);
  if ( a3 >= 0xF6 )
    return *((_DWORD *)&logDefaultPal + a3 - 235);
  v11 = ghsemPalette;
  EngAcquireSemaphore(ghsemPalette);
  v7 = *(_QWORD *)(a2 + 72);
  if ( v7 )
  {
    v8 = *(_DWORD *)(a2 + 28);
    v9 = (_BYTE *)(v7 + 4);
    v10 = 0;
    if ( v8 )
    {
      while ( *v9 != v4 )
      {
        ++v10;
        ++v9;
        if ( v10 >= v8 )
          goto LABEL_13;
      }
      v3 = *(_DWORD *)(*(_QWORD *)(a2 + 112) + 4LL * v10);
    }
  }
LABEL_13:
  SEMOBJ::vUnlock((PERESOURCE *)&v11);
  return v3;
}
