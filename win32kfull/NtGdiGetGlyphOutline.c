/*
 * XREFs of NtGdiGetGlyphOutline @ 0x1C0124280
 * Callers:
 *     <none>
 * Callees:
 *     ??1EUDCCountRegion@@QEAA@XZ @ 0x1C0114AF8 (--1EUDCCountRegion@@QEAA@XZ.c)
 *     ??0EUDCCountRegion@@QEAA@AEAUSESSION_GLOBALS@Full@Gre@@@Z @ 0x1C0114B84 (--0EUDCCountRegion@@QEAA@AEAUSESSION_GLOBALS@Full@Gre@@@Z.c)
 *     ?GreGetGlyphOutlineInternal@@YAKPEAUHDC__@@GIPEAU_GLYPHMETRICS@@KPEAXPEAU_MAT2@@HW4EntryPoint@RFONTOBJ@@@Z @ 0x1C0123E18 (-GreGetGlyphOutlineInternal@@YAKPEAUHDC__@@GIPEAU_GLYPHMETRICS@@KPEAXPEAU_MAT2@@HW4EntryPoint@RF.c)
 *     memmove @ 0x1C0130B80 (memmove.c)
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
 */

__int64 __fastcall NtGdiGetGlyphOutline(
        HDC a1,
        unsigned __int16 a2,
        int a3,
        ULONG64 a4,
        size_t Size,
        char *a6,
        ULONG64 a7,
        int a8)
{
  unsigned int GlyphOutlineInternal; // r14d
  struct tagTTPOLYGONHEADER *v12; // rbx
  struct _MAT2 *v13; // rdx
  ULONG64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int128 v19; // [rsp+60h] [rbp-98h] BYREF
  int v20; // [rsp+70h] [rbp-88h]
  struct _MAT2 v21; // [rsp+78h] [rbp-80h] BYREF
  _BYTE v22[112]; // [rsp+88h] [rbp-70h] BYREF

  GlyphOutlineInternal = -1;
  v21 = 0LL;
  v19 = 0LL;
  v20 = 0;
  if ( (unsigned int)(Size - 1) <= 0x270FFFF )
    v12 = (struct tagTTPOLYGONHEADER *)AllocFreeTmpBuffer((unsigned int)Size);
  else
    v12 = 0LL;
  if ( v12 || !(_DWORD)Size )
  {
    v13 = (struct _MAT2 *)a7;
    v14 = MmUserProbeAddress;
    if ( a7 >= MmUserProbeAddress )
      v13 = (struct _MAT2 *)MmUserProbeAddress;
    v21 = *v13;
    if ( v12 )
      memset_0(v12, 0, (unsigned int)Size);
    v15 = SGDGetSessionState(v14);
    EUDCCountRegion::EUDCCountRegion((EUDCCountRegion *)v22, *(struct Gre::Full::SESSION_GLOBALS **)(v15 + 32));
    GlyphOutlineInternal = GreGetGlyphOutlineInternal(a1, a2, a3, (__int64)&v19, Size, v12, &v21, a8);
    if ( GlyphOutlineInternal != -1 )
    {
      if ( v12 )
      {
        if ( (unsigned __int64)&a6[(unsigned int)Size] > MmUserProbeAddress || &a6[(unsigned int)Size] <= a6 )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(a6, v12, (unsigned int)Size);
      }
      if ( a4 >= MmUserProbeAddress )
        a4 = MmUserProbeAddress;
      *(_OWORD *)a4 = v19;
      *(_DWORD *)(a4 + 16) = v20;
    }
    EUDCCountRegion::~EUDCCountRegion((EUDCCountRegion *)v22);
    if ( v12 )
      FreeTmpBuffer(v12, v16, v17);
  }
  return GlyphOutlineInternal;
}
