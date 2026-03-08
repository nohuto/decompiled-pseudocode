/*
 * XREFs of EngUnmapFontFile @ 0x1C028DF90
 * Callers:
 *     <none>
 * Callees:
 *     vUnmapFile @ 0x1C00B81B4 (vUnmapFile.c)
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
 */

void __stdcall EngUnmapFontFile(ULONG_PTR iFile)
{
  Gre::Base *v2; // rcx
  struct Gre::Base::SESSION_GLOBALS *v3; // rdi
  int v4; // ecx
  int v5; // ecx
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  bool v10; // zf
  _OWORD v11[5]; // [rsp+20h] [rbp-58h] BYREF

  memset_0(v11, 0, sizeof(v11));
  v3 = Gre::Base::Globals(v2);
  GreAcquireFastMutex(*((_QWORD *)v3 + 18));
  v4 = *(_DWORD *)(iFile + 96);
  if ( v4 )
  {
    v5 = v4 - 1;
    *(_DWORD *)(iFile + 96) = v5;
    if ( !v5 )
    {
      if ( *(_QWORD *)(iFile + 80) )
      {
        v6 = *(_OWORD *)(iFile + 16);
        v11[0] = *(_OWORD *)iFile;
        v7 = *(_OWORD *)(iFile + 32);
        v11[1] = v6;
        v8 = *(_OWORD *)(iFile + 48);
        v11[2] = v7;
        v9 = *(_OWORD *)(iFile + 64);
        *(_QWORD *)(iFile + 8) = 0LL;
        v10 = *(_QWORD *)(iFile + 16) == 0LL;
        v11[4] = v9;
        v11[3] = v8;
        if ( v10 )
          *(_QWORD *)(iFile + 32) = 0LL;
      }
    }
  }
  GreReleaseFastMutex(*((_QWORD *)v3 + 18));
  if ( *((_QWORD *)&v11[0] + 1) )
    vUnmapFile((PVOID *)v11);
}
