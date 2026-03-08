/*
 * XREFs of ?SetApplicationId@CChannelContext@@QEAAJPEBG@Z @ 0x1800AAAEC
 * Callers:
 *     ?Channel_SetApplicationId@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_CHANNEL_SETAPPLICATIONID@@PEBXI@Z @ 0x1800AAAC0 (-Channel_SetApplicationId@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMIL.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180034790 (--2@YAPEAX_K@Z.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x180042838 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800893D4 (--3@YAXPEAX@Z.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1800AABC8 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?StringCchLengthW@@YAJPEBG_KPEA_K@Z @ 0x1800AAC4C (-StringCchLengthW@@YAJPEBG_KPEA_K@Z.c)
 *     ??$lower_bound@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@PEAURecord@CProcessAttributionManager@@@std@@@std@@@std@@_KP6A_NPEBUProcessAttributionRecord@CProcessAttributionManager@@_J@Z@std@@YA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@PEAURecord@CProcessAttributionManager@@@std@@@std@@@0@V10@V10@AEB_KP6A_NPEBUProcessAttributionRecord@CProcessAttributionManager@@_J@Z@Z @ 0x1800AAE64 (--$lower_bound@V-$_Vector_iterator@V-$_Vector_val@U-$_Simple_types@PEAURecord@CProcessAttributio.c)
 */

__int64 __fastcall CChannelContext::SetApplicationId(void **this, const unsigned __int16 *a2)
{
  unsigned __int64 v4; // rsi
  unsigned __int64 v5; // rbx
  unsigned __int16 *v6; // rax
  char *v7; // r9
  _WORD *v8; // rbx
  unsigned __int64 v10; // [rsp+50h] [rbp+8h] BYREF

  operator delete(this[7]);
  v4 = -1LL;
  this[7] = 0LL;
  if ( a2 )
  {
    StringCchLengthW(a2, 0x97uLL, &v10);
    v5 = v10 + 1;
    v6 = (unsigned __int16 *)operator new(saturated_mul(v10 + 1, 2uLL));
    this[7] = v6;
    StringCchCopyW(v6, v5, a2);
  }
  v7 = (char *)this[6];
  if ( v7 )
  {
    v8 = this[7];
    if ( v8 )
    {
      std::lower_bound<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<CProcessAttributionManager::Record *>>>,unsigned __int64,bool (*)(CProcessAttributionManager::ProcessAttributionRecord const *,__int64)>(
        &v10,
        *(_QWORD *)qword_1803E2C88,
        *((_QWORD *)qword_1803E2C88 + 1),
        v7 + 16);
      do
        ++v4;
      while ( v8[v4] );
      std::wstring::assign((char *)(*(_QWORD *)v10 + 128LL), v8, v4);
    }
  }
  return 0LL;
}
