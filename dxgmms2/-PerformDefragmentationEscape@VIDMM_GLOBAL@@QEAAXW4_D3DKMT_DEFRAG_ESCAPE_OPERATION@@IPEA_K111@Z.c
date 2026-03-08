/*
 * XREFs of ?PerformDefragmentationEscape@VIDMM_GLOBAL@@QEAAXW4_D3DKMT_DEFRAG_ESCAPE_OPERATION@@IPEA_K111@Z @ 0x1C00E6660
 * Callers:
 *     ?Escape@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_D3DKMT_VIDMM_ESCAPE@@H@Z @ 0x1C00E2184 (-Escape@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_D3DKMT_VIDMM_ESCAPE@@H@Z.c)
 * Callees:
 *     memset @ 0x1C001AC80 (memset.c)
 *     ?QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1C0087E80 (-QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
 */

void __fastcall VIDMM_GLOBAL::PerformDefragmentationEscape(
        VIDMM_GLOBAL *this,
        enum _D3DKMT_DEFRAG_ESCAPE_OPERATION a2,
        __int64 a3,
        unsigned __int64 *a4)
{
  unsigned int i; // esi
  __int64 v7; // rdx
  unsigned int v8; // r14d
  __int64 v9; // rax
  unsigned int v10; // esi
  unsigned int v11; // edx
  __int64 v12; // rcx
  _QWORD v13[12]; // [rsp+20h] [rbp-60h] BYREF

  if ( a2 == D3DKMT_DEFRAG_ESCAPE_DEFRAG_UPWARD || a2 == D3DKMT_DEFRAG_ESCAPE_DEFRAG_DOWNWARD )
  {
    v8 = 0;
    if ( !*((_DWORD *)this + 1754) )
      return;
    while ( 1 )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 3) + 2808LL) + 344LL * v8 + 16) & 4) == 0 )
        goto LABEL_23;
      v9 = *((_QWORD *)this + 5028) + 1616LL * v8;
      v10 = *(_DWORD *)(v9 + 28);
      v11 = v10 + *(_DWORD *)(v9 + 32);
      if ( v10 >= v11 )
        goto LABEL_23;
      while ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 464) + 8LL * v10) + 80LL) & 0x1001) != 0 )
      {
        if ( ++v10 >= v11 )
          goto LABEL_23;
      }
      if ( v10 == -1 )
        goto LABEL_23;
      memset(v13, 0, 0x58uLL);
      LODWORD(v13[5]) = 0;
      LODWORD(v13[0]) = 126;
      HIDWORD(v13[0]) = v8;
      HIDWORD(v13[5]) = v10;
      v13[8] = 0LL;
      LODWORD(v13[10]) = a2 != D3DKMT_DEFRAG_ESCAPE_DEFRAG_UPWARD;
      v12 = *(_QWORD *)(*((_QWORD *)this + 464) + 8LL * v10);
      if ( (*(_BYTE *)(v12 + 82) & 1) != 0 )
      {
        v13[9] = 0LL;
        LODWORD(v13[7]) = 1;
        if ( VIDMM_GLOBAL::QueueSystemCommandAndWait(this, (struct _VIDMM_SYSTEM_COMMAND *)v13, 1) < 0 )
          goto LABEL_23;
        LODWORD(v13[7]) = 2;
        if ( VIDMM_GLOBAL::QueueSystemCommandAndWait(this, (struct _VIDMM_SYSTEM_COMMAND *)v13, 1) < 0 )
          goto LABEL_23;
        LODWORD(v13[7]) = 3;
      }
      else
      {
        v13[9] = *(_QWORD *)(v12 + 48);
      }
      VIDMM_GLOBAL::QueueSystemCommandAndWait(this, (struct _VIDMM_SYSTEM_COMMAND *)v13, 1);
LABEL_23:
      if ( ++v8 >= *((_DWORD *)this + 1754) )
        return;
    }
  }
  if ( (unsigned int)(a2 - 3) <= 1 )
  {
    for ( i = 0; i < *((_DWORD *)this + 1754); ++i )
    {
      v7 = *((_QWORD *)this + 3);
      if ( (*(_DWORD *)(344LL * i + *(_QWORD *)(v7 + 2808) + 16) & 4) != 0 && (*(_DWORD *)(v7 + 2276) & 8) != 0 )
      {
        memset(v13, 0, 0x58uLL);
        LODWORD(v13[0]) = 126;
        HIDWORD(v13[0]) = i;
        LODWORD(v13[5]) = (a2 != D3DKMT_DEFRAG_ESCAPE_DEFRAG_PASS) + 3;
        VIDMM_GLOBAL::QueueSystemCommandAndWait(this, (struct _VIDMM_SYSTEM_COMMAND *)v13, 1);
      }
    }
  }
}
