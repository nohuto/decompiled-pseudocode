/*
 * XREFs of ?Insert@?$CQueue@PEAVCResource@@@@AEAAJ_NPEAVCResource@@@Z @ 0x180033588
 * Callers:
 *     ?OnInteractionUpdate@CManipulationManager@@IEAAXXZ @ 0x18003263C (-OnInteractionUpdate@CManipulationManager@@IEAAXXZ.c)
 *     ?RevalidationCleanup@CManipulationContext@@CAXHPEAUMCCollections@@PEAV?$CQueue@PEAVCResource@@@@@Z @ 0x1801A31C4 (-RevalidationCleanup@CManipulationContext@@CAXHPEAUMCCollections@@PEAV-$CQueue@PEAVCResource@@@@.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180034790 (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CQueue<CResource *>::Insert(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v5; // edi
  unsigned int v6; // ecx
  _QWORD *v7; // rax
  unsigned int v8; // ecx
  _QWORD *v9; // rcx

  v5 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 24));
  if ( *(_BYTE *)(a1 + 20) )
  {
    v5 = -2147023781;
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, -2147023781, 0x97u, 0LL);
  }
  else
  {
    v7 = operator new(0x18uLL);
    if ( v7 )
    {
      *(_OWORD *)v7 = 0LL;
      v7[2] = a3;
      v9 = *(_QWORD **)(a1 + 8);
      if ( *v9 != a1 )
        __fastfail(3u);
      *v7 = a1;
      v7[1] = v9;
      *v9 = v7;
      *(_QWORD *)(a1 + 8) = v7;
      ++*(_DWORD *)(a1 + 16);
    }
    else
    {
      v5 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, -2147024882, 0x9Cu, 0LL);
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 24));
  return v5;
}
