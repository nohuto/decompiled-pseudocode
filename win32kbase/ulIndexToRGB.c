/*
 * XREFs of ulIndexToRGB @ 0x1C0008B00
 * Callers:
 *     GreGetNearestColor @ 0x1C001A710 (GreGetNearestColor.c)
 *     ulColorRefToRGB @ 0x1C0199E30 (ulColorRefToRGB.c)
 * Callees:
 *     ?ulIndexToRGB@XEPALOBJ@@QEAAKK@Z @ 0x1C0008B50 (-ulIndexToRGB@XEPALOBJ@@QEAAKK@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00219D4 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     EngAcquireSemaphore @ 0x1C004B690 (EngAcquireSemaphore.c)
 */

unsigned int __fastcall ulIndexToRGB(HSEMAPHORE a1, __int64 a2, unsigned int a3)
{
  int v3; // esi
  __int64 v4; // rdi
  __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned int v9; // edx
  _BYTE *v10; // rcx
  unsigned int v11; // eax
  HSEMAPHORE v12; // [rsp+30h] [rbp+8h] BYREF

  v12 = a1;
  v3 = 0;
  v4 = a3;
  if ( a1 )
    return XEPALOBJ::ulIndexToRGB((XEPALOBJ *)&v12, a3);
  v7 = *(_QWORD *)(SGDGetSessionState() + 24);
  if ( (unsigned int)v4 < 0xA )
    return *(_DWORD *)(v7 + 4 * v4 + 3856);
  if ( (unsigned int)v4 >= 0xF6 )
    return *(_DWORD *)(v7 + 4LL * (unsigned int)(v4 - 236) + 3856);
  v12 = *(HSEMAPHORE *)(v7 + 40);
  EngAcquireSemaphore(v12);
  v8 = *(_QWORD *)(a2 + 72);
  if ( v8 )
  {
    v9 = *(_DWORD *)(a2 + 28);
    v10 = (_BYTE *)(v8 + 4);
    v11 = 0;
    if ( v9 )
    {
      while ( *v10 != (_BYTE)v4 )
      {
        ++v11;
        ++v10;
        if ( v11 >= v9 )
          goto LABEL_13;
      }
      v3 = *(_DWORD *)(*(_QWORD *)(a2 + 112) + 4LL * v11);
    }
  }
LABEL_13:
  SEMOBJ::vUnlock((SEMOBJ *)&v12);
  return v3;
}
