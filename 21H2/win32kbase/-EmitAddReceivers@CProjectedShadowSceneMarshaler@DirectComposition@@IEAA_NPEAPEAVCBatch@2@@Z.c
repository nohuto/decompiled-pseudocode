/*
 * XREFs of ?EmitAddReceivers@CProjectedShadowSceneMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00038F8
 * Callers:
 *     ?EmitUpdateCommands@CProjectedShadowSceneMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0003420 (-EmitUpdateCommands@CProjectedShadowSceneMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z @ 0x1C005B9DC (-AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z.c)
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0062BD8 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

bool __fastcall DirectComposition::CProjectedShadowSceneMarshaler::EmitAddReceivers(
        DirectComposition::CProjectedShadowSceneMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  void *v4; // r8
  unsigned __int64 v5; // rsi
  char *v6; // rcx
  _DWORD *v7; // r10
  unsigned int v8; // r8d
  __int64 v9; // r9
  __int64 v10; // rcx
  void *v12; // [rsp+30h] [rbp+8h] BYREF

  if ( *((_DWORD *)this + 25) < *((_DWORD *)this + 24) )
  {
    do
    {
      v4 = (void *)(4096LL - *(_QWORD *)(*((_QWORD *)*a2 + 17) + 40LL));
      v12 = v4;
      if ( (unsigned __int64)v4 < 0x14 )
      {
        if ( !DirectComposition::CBatch::AllocateNewFragment(a2, (unsigned __int64 *)&v12) )
          return *((_DWORD *)this + 25) == *((_DWORD *)this + 24);
        v4 = v12;
      }
      v5 = (unsigned int)(*((_DWORD *)this + 24) - *((_DWORD *)this + 25));
      if ( v5 >= ((unsigned __int64)v4 - 16) >> 2 )
        LODWORD(v5) = ((unsigned __int64)v4 - 16) >> 2;
      v12 = 0LL;
      DirectComposition::CBatch::EnsureBatchBuffer(a2, (unsigned int)(4 * v5 + 16), &v12);
      v6 = (char *)v12;
      *(_DWORD *)v12 = 4 * v5 + 16;
      v7 = v6 + 16;
      *(_QWORD *)(v6 + 4) = 0LL;
      *((_DWORD *)v6 + 3) = 0;
      *((_DWORD *)v6 + 1) = 315;
      *((_DWORD *)v6 + 2) = *((_DWORD *)this + 6);
      *((_DWORD *)v6 + 3) = v5;
      v8 = *((_DWORD *)this + 25);
      if ( (_DWORD)v5 )
      {
        v9 = (unsigned int)v5;
        do
        {
          v10 = v8++;
          *v7++ = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 11) + 8 * v10) + 24LL);
          --v9;
        }
        while ( v9 );
        v8 = *((_DWORD *)this + 25);
      }
      *((_DWORD *)this + 25) = v5 + v8;
    }
    while ( (unsigned int)v5 + v8 < *((_DWORD *)this + 24) );
  }
  return *((_DWORD *)this + 25) == *((_DWORD *)this + 24);
}
