/*
 * XREFs of ?bDeletePalette@XEPALOBJ@@QEAAHW4_CLEANUPTYPE@@@Z @ 0x1C00D2508
 * Callers:
 *     NtGdiDeleteObjectApp @ 0x1C0041980 (NtGdiDeleteObjectApp.c)
 *     GreDeleteObject @ 0x1C00472A0 (GreDeleteObject.c)
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C00483E0 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     bDeletePalette @ 0x1C008B2F0 (bDeletePalette.c)
 *     ?vUnrefPalette@XEPALOBJ@@QEAAXXZ @ 0x1C009D9C0 (-vUnrefPalette@XEPALOBJ@@QEAAXXZ.c)
 *     ?vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z @ 0x1C00C68C0 (-vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z.c)
 *     ?bGarbageCollect@XEPALOBJ2@@QEAAHXZ @ 0x1C00D26AC (-bGarbageCollect@XEPALOBJ2@@QEAAHXZ.c)
 * Callees:
 *     ?vMakeNoXlate@XEPALOBJ@@QEAAXXZ @ 0x1C000C5E0 (-vMakeNoXlate@XEPALOBJ@@QEAAXXZ.c)
 *     ?FreePaletteMemory@XEPALOBJ@@QEAAXXZ @ 0x1C00384D8 (-FreePaletteMemory@XEPALOBJ@@QEAAXXZ.c)
 *     Win32FreePool @ 0x1C0038570 (Win32FreePool.c)
 *     ?HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z @ 0x1C0044F10 (-HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z.c)
 *     HmgRemoveObject @ 0x1C0047F80 (HmgRemoveObject.c)
 *     GreGetObjectOwner @ 0x1C008A450 (GreGetObjectOwner.c)
 *     ?vUnrefPalette@XEPALOBJ@@QEAAXXZ @ 0x1C009D9C0 (-vUnrefPalette@XEPALOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall XEPALOBJ::bDeletePalette(XEPALOBJ *a1, int a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  unsigned int v6; // ebx
  __int64 v7; // rsi
  char *v9; // rcx
  __int64 *v10; // rcx
  __int64 *v11; // rcx
  struct OBJECT *v12; // [rsp+40h] [rbp+8h] BYREF

  v4 = SGDGetSessionState(a1);
  v5 = *(_QWORD *)a1;
  v6 = 0;
  v7 = *(_QWORD *)(v4 + 24);
  if ( (*(_QWORD *)a1 == *(_QWORD *)(v7 + 6000) || v5 == *(_QWORD *)(v7 + 6032)) && !*(_DWORD *)(v7 + 3192) )
    return 1LL;
  if ( (*(_DWORD *)(v5 + 24) & 0x100) != 0 )
  {
    if ( *(_DWORD *)(v5 + 56) )
      return 0LL;
    XEPALOBJ::vMakeNoXlate(a1);
  }
  if ( !a2 )
  {
    if ( !HmgRemoveObject(**(_QWORD **)a1, 0, 1, 0, 8, 0LL) )
    {
      if ( (unsigned int)GreGetObjectOwner(**(_QWORD **)a1, 8) )
        *(_WORD *)(*(_QWORD *)a1 + 14LL) |= 0x4000u;
      return v6;
    }
    goto LABEL_18;
  }
  if ( a2 == 1 && HmgRemoveObjectImpl(**(struct HOBJ__ ***)a1, 0, 1, 2, 8, 0LL) )
  {
LABEL_18:
    v9 = *(char **)(*(_QWORD *)a1 + 104LL);
    if ( v9 )
    {
      if ( v9 != *(char **)(v7 + 3936) )
        Win32FreePool(v9);
      *(_QWORD *)(*(_QWORD *)a1 + 104LL) = 0LL;
    }
    if ( !*(_DWORD *)(v7 + 3192) )
    {
      if ( (*(_DWORD *)(*(_QWORD *)a1 + 24LL) & 0x800) != 0 )
      {
        v10 = *(__int64 **)(*(_QWORD *)a1 + 48LL);
        if ( v10 )
        {
          v12 = *(struct OBJECT **)(*(_QWORD *)a1 + 48LL);
          if ( (unsigned int)GreGetObjectOwner(*v10, 8) != -2147483646 )
            XEPALOBJ::vUnrefPalette(&v12);
        }
      }
      v11 = *(__int64 **)(*(_QWORD *)a1 + 120LL);
      if ( *(__int64 **)a1 != v11 )
      {
        v12 = *(struct OBJECT **)(*(_QWORD *)a1 + 120LL);
        if ( (unsigned int)GreGetObjectOwner(*v11, 8) != -2147483646 )
          XEPALOBJ::vUnrefPalette(&v12);
      }
    }
    XEPALOBJ::FreePaletteMemory(a1);
    return 1;
  }
  return v6;
}
