/*
 * XREFs of NtGdiGetGlyphOutline @ 0x1C0018940
 * Callers:
 *     <none>
 * Callees:
 *     GreGetGlyphOutlineInternal @ 0x1C00196F4 (GreGetGlyphOutlineInternal.c)
 *     memmove @ 0x1C0160280 (memmove.c)
 *     memset @ 0x1C0160540 (memset.c)
 */

__int64 __fastcall NtGdiGetGlyphOutline(
        HDC a1,
        __int64 a2,
        __int64 a3,
        ULONG64 a4,
        size_t Size,
        char *a6,
        ULONG64 a7,
        int a8)
{
  unsigned int GlyphOutlineInternal; // edi
  void *v10; // rbx
  __int128 *v11; // rdx
  __int128 v13; // [rsp+50h] [rbp-68h] BYREF
  __int128 v14; // [rsp+60h] [rbp-58h]
  int v15; // [rsp+70h] [rbp-48h]

  GlyphOutlineInternal = -1;
  v13 = 0LL;
  v14 = 0LL;
  v15 = 0;
  if ( (unsigned int)(Size - 1) <= 0x270FFFF )
    v10 = (void *)AllocFreeTmpBuffer((unsigned int)Size);
  else
    v10 = 0LL;
  if ( v10 || !(_DWORD)Size )
  {
    v11 = (__int128 *)a7;
    if ( a7 >= MmUserProbeAddress )
      v11 = (__int128 *)MmUserProbeAddress;
    v13 = *v11;
    if ( v10 )
      memset(v10, 0, (unsigned int)Size);
    GlyphOutlineInternal = GreGetGlyphOutlineInternal(a1, Size, (__int64)v10, (__int64)&v13, a8);
    if ( GlyphOutlineInternal != -1 )
    {
      if ( v10 )
      {
        if ( (unsigned __int64)&a6[(unsigned int)Size] > MmUserProbeAddress || &a6[(unsigned int)Size] <= a6 )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(a6, v10, (unsigned int)Size);
      }
      if ( a4 >= MmUserProbeAddress )
        a4 = MmUserProbeAddress;
      *(_OWORD *)a4 = v14;
      *(_DWORD *)(a4 + 16) = v15;
    }
    if ( v10 )
      FreeTmpBuffer(v10);
  }
  return GlyphOutlineInternal;
}
