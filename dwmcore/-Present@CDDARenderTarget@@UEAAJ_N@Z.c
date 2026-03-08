/*
 * XREFs of ?Present@CDDARenderTarget@@UEAAJ_N@Z @ 0x1801F63E0
 * Callers:
 *     ?Present@CDDARenderTarget@@$4PPPPPPPM@A@EAAJ_N@Z @ 0x180119830 (-Present@CDDARenderTarget@@$4PPPPPPPM@A@EAAJ_N@Z.c)
 * Callees:
 *     ?GetRectangles@CRegion@@QEBAIPEAV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@@Z @ 0x180042478 (-GetRectangles@CRegion@@QEBAIPEAV-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800E18AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?ScheduleCompositionPass@@YAXKW4CompositionReason@@@Z @ 0x1800F1BF8 (-ScheduleCompositionPass@@YAXKW4CompositionReason@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CDDARenderTarget::Present(CDDARenderTarget *this)
{
  unsigned int v1; // ebx
  char v3; // bl
  int v4; // eax
  __int64 v5; // rcx
  void *v6; // rcx
  __int128 v8; // [rsp+30h] [rbp-28h] BYREF
  __int64 v9; // [rsp+40h] [rbp-18h]

  v1 = 0;
  if ( *((_QWORD *)this - 247) && *(int *)(*((_QWORD *)this - 265) + 1104LL) < 6 && *((_BYTE *)this - 56) )
  {
    v3 = *((_BYTE *)this - 55);
    v8 = 0LL;
    v9 = 0LL;
    CRegion::GetRectangles((FastRegion::Internal::CRgnData **)this - 16, &v8);
    v4 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, __int128 *))(**((_QWORD **)this - 247) + 48LL))(
           *((_QWORD *)this - 247),
           1LL,
           v3 != 0 ? 0x80 : 0,
           &v8);
    v1 = v4;
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0x116u, 0LL);
      if ( (_QWORD)v8 )
        std::_Deallocate<16,0>((void *)v8, (v9 - v8) & 0xFFFFFFFFFFFFFFF0uLL);
    }
    else
    {
      v6 = (void *)v8;
      *((_BYTE *)this - 56) = 0;
      if ( v6 )
        std::_Deallocate<16,0>(v6, (v9 - (_QWORD)v6) & 0xFFFFFFFFFFFFFFF0uLL);
      if ( v1 == 142213130 )
      {
        ScheduleCompositionPass(0, 0x2000u);
        **((_DWORD **)this - 16) = 0;
        v1 = 0;
        *((_BYTE *)this - 56) = 1;
      }
    }
  }
  return v1;
}
