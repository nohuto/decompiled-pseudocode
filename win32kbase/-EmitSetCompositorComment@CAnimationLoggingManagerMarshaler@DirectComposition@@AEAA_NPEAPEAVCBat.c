/*
 * XREFs of ?EmitSetCompositorComment@CAnimationLoggingManagerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C005C074
 * Callers:
 *     ?EmitUpdateCommands@CAnimationLoggingManagerMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C005C1A0 (-EmitUpdateCommands@CAnimationLoggingManagerMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@.c)
 * Callees:
 *     ?StringCchLengthW@@YAJPEBG_KPEA_K@Z @ 0x1C005D4C8 (-StringCchLengthW@@YAJPEBG_KPEA_K@Z.c)
 *     ?AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z @ 0x1C005EE20 (-AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z.c)
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0064740 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     memmove @ 0x1C00E1EC0 (memmove.c)
 */

char __fastcall DirectComposition::CAnimationLoggingManagerMarshaler::EmitSetCompositorComment(
        DirectComposition::CAnimationLoggingManagerMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v2; // bl
  const unsigned __int16 *v5; // rcx
  char *v6; // rdi
  int v7; // ecx
  int v8; // r15d
  unsigned __int64 v9; // rbp
  char *v10; // rcx
  void *v12; // [rsp+40h] [rbp+8h] BYREF

  v2 = 1;
  if ( (*((_BYTE *)this + 256) & 1) != 0 )
  {
    v5 = (const unsigned __int16 *)*((_QWORD *)this + 31);
    v6 = 0LL;
    v12 = 0LL;
    if ( v5 )
    {
      StringCchLengthW(v5, 0x3E8uLL, (unsigned __int64 *)&v12);
      v6 = (char *)v12 + 1;
    }
    v7 = 2 * (_DWORD)v6;
    if ( ((2 * (_BYTE)v6) & 3) != 0 )
      v7 += 4 - ((2 * (_BYTE)v6) & 3);
    v8 = v7 + 16;
    v9 = (unsigned int)(v7 + 16);
    v12 = (void *)(4096LL - *(_QWORD *)(*((_QWORD *)*a2 + 17) + 40LL));
    if ( (unsigned __int64)v12 >= v9
      || DirectComposition::CBatch::AllocateNewFragment(a2, (unsigned __int64 *)&v12) && (unsigned __int64)v12 >= v9 )
    {
      v12 = 0LL;
      DirectComposition::CBatch::EnsureBatchBuffer(a2, v9, &v12);
      v10 = (char *)v12;
      *(_DWORD *)v12 = v8;
      *(_QWORD *)(v10 + 4) = 0LL;
      *((_DWORD *)v10 + 3) = 0;
      *((_DWORD *)v10 + 1) = 15;
      *((_DWORD *)v10 + 2) = *((_DWORD *)this + 8);
      *((_DWORD *)v10 + 3) = (_DWORD)v6;
      memmove(v10 + 16, *((const void **)this + 31), 2LL * (_QWORD)v6);
      *((_BYTE *)this + 256) &= ~1u;
    }
    else
    {
      return 0;
    }
  }
  return v2;
}
