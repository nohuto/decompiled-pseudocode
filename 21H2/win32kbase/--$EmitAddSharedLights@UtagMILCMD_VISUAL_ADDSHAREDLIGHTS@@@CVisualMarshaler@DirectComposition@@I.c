/*
 * XREFs of ??$EmitAddSharedLights@UtagMILCMD_VISUAL_ADDSHAREDLIGHTS@@@CVisualMarshaler@DirectComposition@@IEAA_NAEBVCResourceMarshalerArray@1@W4MILCMD@@PEA_KPEAPEAVCBatch@1@@Z @ 0x1C0061F68
 * Callers:
 *     ?EmitUpdateCommands@CVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0061B40 (-EmitUpdateCommands@CVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z @ 0x1C005B9DC (-AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z.c)
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0062BD8 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

bool __fastcall DirectComposition::CVisualMarshaler::EmitAddSharedLights<tagMILCMD_VISUAL_ADDSHAREDLIGHTS>(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        unsigned __int64 *a4,
        struct DirectComposition::CBatch ***a5)
{
  unsigned __int64 v5; // rsi
  unsigned __int64 v7; // r8
  struct DirectComposition::CBatch ***v11; // r15
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rdi
  unsigned __int64 v14; // rax
  char *v15; // rdx
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // rcx
  __int64 v18; // r9
  unsigned __int64 v19; // [rsp+58h] [rbp+10h] BYREF
  void *v20; // [rsp+68h] [rbp+20h] BYREF

  v5 = a2[1];
  v7 = *a4;
  if ( *a4 < v5 )
  {
    v11 = a5;
    do
    {
      v12 = 4096LL - *((_QWORD *)(*v11)[17] + 5);
      v19 = v12;
      if ( v12 < 0x14 )
      {
        if ( !DirectComposition::CBatch::AllocateNewFragment(v11, &v19) )
          return *a4 == v5;
        v7 = *a4;
        v12 = v19;
      }
      v13 = v5 - v7;
      v14 = (v12 - 16) >> 2;
      if ( v5 - v7 >= v14 )
        v13 = v14;
      v20 = 0LL;
      if ( !DirectComposition::CBatch::EnsureBatchBuffer(
              (struct DirectComposition::CBatch **)v11,
              (unsigned int)(4 * v13 + 16),
              &v20) )
        break;
      v15 = (char *)v20;
      v16 = 0LL;
      *(_DWORD *)v20 = 4 * v13 + 16;
      *(_QWORD *)(v15 + 4) = 0LL;
      *((_DWORD *)v15 + 3) = 0;
      *((_DWORD *)v15 + 1) = 401;
      *((_DWORD *)v15 + 2) = *(_DWORD *)(a1 + 24);
      *((_DWORD *)v15 + 3) = v13;
      v17 = *a4;
      if ( v13 )
      {
        do
        {
          if ( v17 >= a2[1] )
          {
            v18 = 0LL;
          }
          else
          {
            _mm_lfence();
            v18 = *(_QWORD *)(*a2 + 8 * v17);
          }
          ++v17;
          *(_DWORD *)&v15[4 * v16++ + 16] = *(_DWORD *)(v18 + 24);
        }
        while ( v16 < v13 );
        v17 = *a4;
      }
      v7 = v13 + v17;
      *a4 = v13 + v17;
    }
    while ( v13 + v17 < v5 );
  }
  return *a4 == v5;
}
