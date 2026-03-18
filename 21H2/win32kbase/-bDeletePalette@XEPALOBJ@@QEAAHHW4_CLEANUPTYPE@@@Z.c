/*
 * XREFs of ?bDeletePalette@XEPALOBJ@@QEAAHHW4_CLEANUPTYPE@@@Z @ 0x1C016B4F4
 * Callers:
 *     ?vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z @ 0x1C0074810 (-vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z.c)
 *     bDeletePalette @ 0x1C0093780 (bDeletePalette.c)
 *     ??$vGarbageCollectObject@VXEPALOBJ2@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00DBBCC (--$vGarbageCollectObject@VXEPALOBJ2@@@@YAXPEAUHOBJ__@@@Z.c)
 * Callees:
 *     ?vUnrefPalette@XEPALOBJ@@QEAAXXZ @ 0x1C001DB70 (-vUnrefPalette@XEPALOBJ@@QEAAXXZ.c)
 *     ?HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z @ 0x1C001E9A4 (-HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z.c)
 *     HmgRemoveObject @ 0x1C001F4E0 (HmgRemoveObject.c)
 *     Win32FreePool @ 0x1C0026670 (Win32FreePool.c)
 *     HmgFree @ 0x1C0087080 (HmgFree.c)
 *     ?vMakeNoXlate@XEPALOBJ@@QEAAXXZ @ 0x1C00B42E0 (-vMakeNoXlate@XEPALOBJ@@QEAAXXZ.c)
 *     ?FreePaletteMemory@XEPALOBJ@@QEAAXXZ @ 0x1C016B444 (-FreePaletteMemory@XEPALOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall XEPALOBJ::bDeletePalette(XEPALOBJ *a1, int a2, int a3)
{
  struct PALETTE *v3; // r9
  unsigned int v7; // edi
  char *v8; // rcx
  struct HOBJ__ *v9; // rcx
  __int64 v11; // rdx
  __int64 v12; // r8
  struct PALETTE *v13; // rcx
  struct PALETTE *v14; // rcx
  __int64 v15; // [rsp+40h] [rbp+8h] BYREF

  v3 = *(struct PALETTE **)a1;
  v7 = 1;
  if ( *(struct PALETTE **)a1 == ppalDefault || !v3 || v3 == ppalMono )
    return v7;
  v8 = (char *)*((_QWORD *)v3 + 13);
  if ( v8 )
  {
    if ( v8 != gpRGBXlate )
    {
      Win32FreePool(v8);
      v3 = *(struct PALETTE **)a1;
    }
    *((_QWORD *)v3 + 13) = 0LL;
    v3 = *(struct PALETTE **)a1;
  }
  if ( (*((_DWORD *)v3 + 6) & 0x100) != 0 )
  {
    if ( *((_DWORD *)v3 + 14) )
      return 0LL;
    XEPALOBJ::vMakeNoXlate(a1);
  }
  if ( !a2 && (*(_DWORD *)(*(_QWORD *)a1 + 24LL) & 0x1000000) != 0 )
    return 0LL;
  v9 = **(struct HOBJ__ ***)a1;
  if ( a3 == 3 )
  {
    if ( !HmgRemoveObjectImpl(v9, 0, 1, 2, 8, 0LL) )
      return 0LL;
  }
  else
  {
    if ( !HmgRemoveObject((__int64)v9, 0, 1, 0, 8, 0LL) )
    {
      if ( a3 == 2 || !_bittest16((const signed __int16 *)(*(_QWORD *)a1 + 14LL), 0xEu) )
      {
        if ( a2 )
        {
          if ( a3 != 2 )
          {
            v14 = *(struct PALETTE **)a1;
            if ( (*(_DWORD *)(*(_QWORD *)a1 + 24LL) & 0x800) != 0 && *((_QWORD *)v14 + 6) )
            {
              v15 = *((_QWORD *)v14 + 6);
              XEPALOBJ::vUnrefPalette((XEPALOBJ *)&v15);
              v14 = *(struct PALETTE **)a1;
            }
            if ( v14 != *((struct PALETTE **)v14 + 15) )
            {
              v15 = *((_QWORD *)v14 + 15);
              XEPALOBJ::vUnrefPalette((XEPALOBJ *)&v15);
            }
          }
          HmgFree(**(_QWORD **)a1, v11, v12);
          *(_QWORD *)a1 = 0LL;
        }
        else
        {
          return 0;
        }
      }
      return v7;
    }
    if ( a3 == 2 )
      goto LABEL_23;
  }
  v13 = *(struct PALETTE **)a1;
  if ( (*(_DWORD *)(*(_QWORD *)a1 + 24LL) & 0x800) != 0 && *((_QWORD *)v13 + 6) )
  {
    v15 = *((_QWORD *)v13 + 6);
    XEPALOBJ::vUnrefPalette((XEPALOBJ *)&v15);
    v13 = *(struct PALETTE **)a1;
  }
  if ( v13 != *((struct PALETTE **)v13 + 15) )
  {
    v15 = *((_QWORD *)v13 + 15);
    XEPALOBJ::vUnrefPalette((XEPALOBJ *)&v15);
  }
LABEL_23:
  XEPALOBJ::FreePaletteMemory((struct _SLIST_ENTRY **)a1);
  return v7;
}
