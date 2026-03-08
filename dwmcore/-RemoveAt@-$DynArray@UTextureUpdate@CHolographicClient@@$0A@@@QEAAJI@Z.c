/*
 * XREFs of ?RemoveAt@?$DynArray@UTextureUpdate@CHolographicClient@@$0A@@@QEAAJI@Z @ 0x1802AAE68
 * Callers:
 *     ?DoTextureUpdates@CHolographicClient@@AEAAXXZ @ 0x1802A93D0 (-DoTextureUpdates@CHolographicClient@@AEAAXXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall DynArray<CHolographicClient::TextureUpdate,0>::RemoveAt(__int64 a1)
{
  int v1; // edx
  unsigned int v2; // r8d
  unsigned int v4; // ebx
  __int64 v5; // r10
  __int64 v6; // rax
  __int64 v7; // rcx
  __int128 v8; // xmm1

  v1 = *(_DWORD *)(a1 + 24);
  v2 = 0;
  v4 = 0;
  if ( v1 )
  {
    v5 = *(_QWORD *)a1;
    if ( v1 != 1 )
    {
      do
      {
        v6 = 32LL * v2++;
        v7 = 32LL * v2;
        v8 = *(_OWORD *)(v7 + v5 + 16);
        *(_OWORD *)(v6 + v5) = *(_OWORD *)(v7 + v5);
        *(_OWORD *)(v6 + v5 + 16) = v8;
        v1 = *(_DWORD *)(a1 + 24);
      }
      while ( v2 < v1 - 1 );
    }
    *(_DWORD *)(a1 + 24) = v1 - 1;
  }
  else
  {
    v4 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0, -2147024809, 0x19Cu, 0LL);
  }
  return v4;
}
