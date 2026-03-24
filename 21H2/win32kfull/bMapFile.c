/*
 * XREFs of bMapFile @ 0x1C028A75C
 * Callers:
 *     ?EngMapFontFileInternal@@YAH_KPEAPEAKPEAK@Z @ 0x1C02892F0 (-EngMapFontFileInternal@@YAH_KPEAPEAKPEAK@Z.c)
 *     ?LoadModuleWorkHorse@@YAPEAXPEAGH@Z @ 0x1C02895DC (-LoadModuleWorkHorse@@YAPEAXPEAGH@Z.c)
 *     EngMapFile @ 0x1C028A230 (EngMapFile.c)
 * Callees:
 *     ?bCreateSection@@YAHPEBGPEAU_FILEVIEW@@HPEAHE@Z @ 0x1C00A8558 (-bCreateSection@@YAHPEBGPEAU_FILEVIEW@@HPEAHE@Z.c)
 *     ?vUnreferenceFileviewSection@@YAXPEAU_FILEVIEW@@@Z @ 0x1C00A8CFC (-vUnreferenceFileviewSection@@YAXPEAU_FILEVIEW@@@Z.c)
 *     memset @ 0x1C016E780 (memset.c)
 */

__int64 __fastcall bMapFile(PCWSTR SourceString, _OWORD *a2, int a3, int *a4)
{
  unsigned int v8; // r14d
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  ULONG_PTR ViewSize[2]; // [rsp+38h] [rbp-19h] BYREF
  PVOID MappedBase[10]; // [rsp+48h] [rbp-9h] BYREF

  memset(MappedBase, 0, sizeof(MappedBase));
  v8 = 0;
  if ( (unsigned int)bCreateSection(SourceString, (struct _FILEVIEW *)MappedBase, a3, a4, 0) )
  {
    ViewSize[0] = 0LL;
    if ( MmMapViewInSessionSpace(MappedBase[4], &MappedBase[1], ViewSize) < 0 )
    {
      vUnreferenceFileviewSection((struct _FILEVIEW *)MappedBase);
    }
    else
    {
      v8 = 1;
      v9 = *(_OWORD *)&MappedBase[2];
      *a2 = *(_OWORD *)MappedBase;
      v10 = *(_OWORD *)&MappedBase[4];
      a2[1] = v9;
      v11 = *(_OWORD *)&MappedBase[6];
      a2[2] = v10;
      v12 = *(_OWORD *)&MappedBase[8];
      a2[3] = v11;
      a2[4] = v12;
    }
  }
  return v8;
}
