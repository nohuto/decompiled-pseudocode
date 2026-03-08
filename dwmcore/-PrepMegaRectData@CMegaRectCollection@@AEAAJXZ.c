/*
 * XREFs of ?PrepMegaRectData@CMegaRectCollection@@AEAAJXZ @ 0x180049F94
 * Callers:
 *     ?ReplaceMegaRectsWithClippedRects@CMegaRectCollection@@QEAAJXZ @ 0x18009010C (-ReplaceMegaRectsWithClippedRects@CMegaRectCollection@@QEAAJXZ.c)
 * Callees:
 *     ?PrepareData@CMegaRect@@QEAAJAEAV?$vector@EV?$allocator@E@std@@@std@@@Z @ 0x18004A01C (-PrepareData@CMegaRect@@QEAAJAEAV-$vector@EV-$allocator@E@std@@@std@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?_Tidy@?$vector@EV?$allocator@E@std@@@std@@AEAAXXZ @ 0x1800EF9A8 (-_Tidy@-$vector@EV-$allocator@E@std@@@std@@AEAAXXZ.c)
 */

__int64 __fastcall CMegaRectCollection::PrepMegaRectData(CMegaRectCollection *this)
{
  __int64 v1; // rbx
  unsigned int v2; // edi
  __int64 v4; // rbp
  int v5; // eax
  unsigned int v6; // ecx
  __int128 v8; // [rsp+30h] [rbp-28h] BYREF
  __int64 v9; // [rsp+40h] [rbp-18h]

  v1 = *((_QWORD *)this + 3);
  v2 = 0;
  v9 = 0LL;
  v4 = v1 + *((_QWORD *)this + 4);
  v8 = 0LL;
  while ( v1 != v4 )
  {
    v5 = CMegaRect::PrepareData(*(_QWORD *)(*((_QWORD *)this + 1) + 8 * (v1 & (*((_QWORD *)this + 2) - 1LL))), &v8);
    v2 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x1E6u, 0LL);
      break;
    }
    ++v1;
  }
  std::vector<unsigned char>::_Tidy(&v8);
  return v2;
}
