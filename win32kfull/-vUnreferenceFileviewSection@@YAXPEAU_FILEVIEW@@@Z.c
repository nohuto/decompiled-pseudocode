/*
 * XREFs of ?vUnreferenceFileviewSection@@YAXPEAU_FILEVIEW@@@Z @ 0x1C011CC6C
 * Callers:
 *     FreeFileView @ 0x1C00B7620 (FreeFileView.c)
 *     vUnmapFile @ 0x1C00B81B4 (vUnmapFile.c)
 *     ?bMapFileRetainHandle@@YAHPEBGPEAU_FILEVIEW@@HPEAH@Z @ 0x1C00BACFC (-bMapFileRetainHandle@@YAHPEBGPEAU_FILEVIEW@@HPEAH@Z.c)
 *     ?UmfdEscEngMapFontFileFD@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C00BB9C0 (-UmfdEscEngMapFontFileFD@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     ?vUnmapFileFD@@YAXPEAU_FILEVIEW@@E@Z @ 0x1C00BC6DC (-vUnmapFileFD@@YAXPEAU_FILEVIEW@@E@Z.c)
 *     EngMapFontFileFDInternal @ 0x1C0115154 (EngMapFontFileFDInternal.c)
 *     ?bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@HH@Z @ 0x1C0119A20 (-bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@HH.c)
 *     EngUnmapFile @ 0x1C028DF10 (EngUnmapFile.c)
 *     bMapFile @ 0x1C028E338 (bMapFile.c)
 *     GreMakeFontDir @ 0x1C02D77CC (GreMakeFontDir.c)
 * Callees:
 *     ZwWin32CreateSection @ 0x1C00BC3EC (ZwWin32CreateSection.c)
 *     ?bCopySection@@YAHPEAX0_K@Z @ 0x1C028D690 (-bCopySection@@YAHPEAX0_K@Z.c)
 *     ?bUnreferenceNetworkedFontFileNode@@YA_NPEAU_NETWORKED_FONT_FONT_FILE_NODE@@@Z @ 0x1C028DC54 (-bUnreferenceNetworkedFontFileNode@@YA_NPEAU_NETWORKED_FONT_FONT_FILE_NODE@@@Z.c)
 */

void __fastcall vUnreferenceFileviewSection(struct _FILEVIEW *a1)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx
  int v5; // edx
  void *v6; // rcx
  __int64 v7; // rax
  int v8; // [rsp+28h] [rbp-58h]
  void *v9; // [rsp+38h] [rbp-48h]
  int v10[2]; // [rsp+50h] [rbp-30h] BYREF
  __int64 v11; // [rsp+58h] [rbp-28h]
  __int64 v12; // [rsp+60h] [rbp-20h]
  int v13; // [rsp+68h] [rbp-18h]
  int v14; // [rsp+6Ch] [rbp-14h]
  __int128 v15; // [rsp+70h] [rbp-10h]
  PVOID Object; // [rsp+90h] [rbp+10h] BYREF
  __int64 v17; // [rsp+98h] [rbp+18h] BYREF

  if ( (*((_DWORD *)a1 + 10) & 2) != 0 )
  {
    v4 = (void *)*((_QWORD *)a1 + 7);
    if ( v4 )
    {
      if ( bUnreferenceNetworkedFontFileNode(v4) )
      {
        v6 = (void *)*((_QWORD *)a1 + 6);
        if ( v6 )
        {
          if ( (*((_DWORD *)a1 + 10) & 4) != 0 )
          {
            v7 = *((unsigned int *)a1 + 6);
            Object = 0LL;
            v10[1] = 0;
            v14 = 0;
            v11 = 0LL;
            v12 = 0LL;
            v15 = 0LL;
            v17 = v7;
            v10[0] = 48;
            v13 = 576;
            if ( (int)ZwWin32CreateSection((int)&Object, v5, (int)v10, (int)&v17, 4u, v8, v6, v9) >= 0 )
            {
              bCopySection(Object, *((void **)a1 + 4), *((unsigned int *)a1 + 6));
              ObfDereferenceObject(Object);
            }
          }
        }
      }
    }
  }
  v2 = (void *)*((_QWORD *)a1 + 4);
  if ( v2 )
  {
    ObfDereferenceObject(v2);
    *((_QWORD *)a1 + 4) = 0LL;
  }
  v3 = (void *)*((_QWORD *)a1 + 6);
  if ( v3 )
  {
    ZwClose(v3);
    *((_QWORD *)a1 + 6) = 0LL;
  }
}
