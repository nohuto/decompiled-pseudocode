/*
 * XREFs of ??$EmitAddTargets@UtagMILCMD_COMPOSITIONLIGHT_ADDEXCLUSIONS@@@CCompositionLightMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@1@PEAPEAVCResourceMarshaler@1@PEAI2W4MILCMD@@@Z @ 0x1C0097240
 * Callers:
 *     ?EmitAddTargets@CCompositionLightMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@W4Enum@CompositionLightProperty@@@Z @ 0x1C00970D4 (-EmitAddTargets@CCompositionLightMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@W4Enum@Compo.c)
 * Callees:
 *     ?AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z @ 0x1C005B9DC (-AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z.c)
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0062BD8 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

bool __fastcall DirectComposition::CCompositionLightMarshaler::EmitAddTargets<tagMILCMD_COMPOSITIONLIGHT_ADDEXCLUSIONS>(
        __int64 a1,
        struct DirectComposition::CBatch ***a2,
        __int64 a3,
        _DWORD *a4,
        void *a5)
{
  unsigned int *v5; // rdi
  void *v11; // rdx
  unsigned __int64 v12; // rbp
  char *v13; // rcx
  _DWORD *v14; // r8
  unsigned int v15; // edx
  __int64 v16; // r9
  __int64 v17; // rax

  v5 = (unsigned int *)a5;
  if ( *(_DWORD *)a5 < *a4 )
  {
    do
    {
      v11 = (void *)(4096LL - *((_QWORD *)(*a2)[17] + 5));
      a5 = v11;
      if ( (unsigned __int64)v11 < 0x14 )
      {
        if ( !DirectComposition::CBatch::AllocateNewFragment(a2, (unsigned __int64 *)&a5) )
          return *v5 == *a4;
        v11 = a5;
      }
      v12 = *a4 - *v5;
      if ( v12 >= ((unsigned __int64)v11 - 16) >> 2 )
        LODWORD(v12) = ((unsigned __int64)v11 - 16) >> 2;
      a5 = 0LL;
      DirectComposition::CBatch::EnsureBatchBuffer(a2, (unsigned int)(4 * v12 + 16), &a5);
      v13 = (char *)a5;
      *(_DWORD *)a5 = 4 * v12 + 16;
      v14 = v13 + 16;
      *(_QWORD *)(v13 + 4) = 0LL;
      *((_DWORD *)v13 + 3) = 0;
      *((_DWORD *)v13 + 1) = 82;
      *((_DWORD *)v13 + 2) = *(_DWORD *)(a1 + 24);
      *((_DWORD *)v13 + 3) = v12;
      v15 = *v5;
      if ( (_DWORD)v12 )
      {
        v16 = (unsigned int)v12;
        do
        {
          v17 = v15++;
          *v14++ = *(_DWORD *)(*(_QWORD *)(a3 + 8 * v17) + 24LL);
          --v16;
        }
        while ( v16 );
        v15 = *v5;
      }
      *v5 = v15 + v12;
    }
    while ( v15 + (unsigned int)v12 < *a4 );
  }
  return *v5 == *a4;
}
