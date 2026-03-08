/*
 * XREFs of bMapFile @ 0x1C028E338
 * Callers:
 *     ?EngMapFontFileInternal@@YAH_KPEAPEAKPEAK@Z @ 0x1C028CE58 (-EngMapFontFileInternal@@YAH_KPEAPEAKPEAK@Z.c)
 *     ?LoadModuleWorkHorse@@YAPEAXPEAGH@Z @ 0x1C028D170 (-LoadModuleWorkHorse@@YAPEAXPEAGH@Z.c)
 *     EngMapFile @ 0x1C028DE10 (EngMapFile.c)
 * Callees:
 *     ?bCreateSection@@YAHPEBGPEAU_FILEVIEW@@HPEAHE@Z @ 0x1C00BBDF0 (-bCreateSection@@YAHPEBGPEAU_FILEVIEW@@HPEAHE@Z.c)
 *     ?vUnreferenceFileviewSection@@YAXPEAU_FILEVIEW@@@Z @ 0x1C011CC6C (-vUnreferenceFileviewSection@@YAXPEAU_FILEVIEW@@@Z.c)
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
 */

__int64 __fastcall bMapFile(PCWSTR SourceString, _OWORD *a2, int a3, int *a4)
{
  Gre::Base *v8; // rcx
  unsigned int v9; // r14d
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  ULONG_PTR ViewSize[2]; // [rsp+38h] [rbp-19h] BYREF
  PVOID MappedBase[2]; // [rsp+48h] [rbp-9h] BYREF
  __int128 v17; // [rsp+58h] [rbp+7h]
  PVOID Section[2]; // [rsp+68h] [rbp+17h]
  __int128 v19; // [rsp+78h] [rbp+27h]
  __int128 v20; // [rsp+88h] [rbp+37h]

  memset_0(MappedBase, 0, 0x50uLL);
  Gre::Base::Globals(v8);
  v9 = 0;
  if ( (unsigned int)bCreateSection(SourceString, (struct _FILEVIEW *)MappedBase, a3, a4, 0) )
  {
    ViewSize[0] = 0LL;
    if ( MmMapViewInSessionSpace(Section[0], &MappedBase[1], ViewSize) < 0 )
    {
      vUnreferenceFileviewSection((struct _FILEVIEW *)MappedBase);
    }
    else
    {
      v9 = 1;
      v10 = v17;
      *a2 = *(_OWORD *)MappedBase;
      v11 = *(_OWORD *)Section;
      a2[1] = v10;
      v12 = v19;
      a2[2] = v11;
      v13 = v20;
      a2[3] = v12;
      a2[4] = v13;
    }
  }
  return v9;
}
