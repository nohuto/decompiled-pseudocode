/*
 * XREFs of ?_ParseScreenRect@RetailDemoExperienceManager@@CA?AUtagRECT@@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x18025D744
 * Callers:
 *     ?_ParseExperienceArguments@RetailDemoExperienceManager@@AEAAXAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x18025D36C (-_ParseExperienceArguments@RetailDemoExperienceManager@@AEAAXAEBV-$basic_string@GU-$char_traits@.c)
 * Callees:
 *     ?_Tidy@?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@AEAAXXZ @ 0x18008F4AC (-_Tidy@-$vector@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$allocator@V-$ba.c)
 *     ?_ParseScreenInt@RetailDemoExperienceManager@@CAHAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@_N1@Z @ 0x18025D624 (-_ParseScreenInt@RetailDemoExperienceManager@@CAHAEBV-$basic_string@GU-$char_traits@G@std@@V-$al.c)
 *     ?_SplitString@RetailDemoExperienceManager@@CA?AV?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@3@G@Z @ 0x18025DBB8 (-_SplitString@RetailDemoExperienceManager@@CA-AV-$vector@V-$basic_string@GU-$char_traits@G@std@@.c)
 */

_OWORD *__fastcall RetailDemoExperienceManager::_ParseScreenRect(_OWORD *a1, __int64 a2)
{
  __int128 v4; // xmm6
  const wchar_t *v5; // rcx
  char v6; // bl
  unsigned int v7; // esi
  unsigned int v8; // r14d
  const wchar_t *v9; // rcx
  __int128 v11; // [rsp+20h] [rbp-40h]
  _QWORD v12[4]; // [rsp+30h] [rbp-30h] BYREF
  DWORD pdwDefaultLayout; // [rsp+80h] [rbp+20h] BYREF

  pdwDefaultLayout = 0;
  GetProcessDefaultLayout(&pdwDefaultLayout);
  v4 = 0LL;
  RetailDemoExperienceManager::_SplitString(v12, a2, 44LL);
  v5 = (const wchar_t *)v12[0];
  if ( ((v12[1] - v12[0]) & 0xFFFFFFFFFFFFFFE0uLL) == 0x80 )
  {
    if ( pdwDefaultLayout == 1 )
    {
      v6 = 1;
      v5 = (const wchar_t *)(v12[0] + 64LL);
    }
    else
    {
      v6 = 0;
    }
    v7 = RetailDemoExperienceManager::_ParseScreenInt(v5, 1, v6);
    v8 = RetailDemoExperienceManager::_ParseScreenInt((const wchar_t *)(v12[0] + 32LL), 0, 0);
    v9 = (const wchar_t *)v12[0];
    if ( pdwDefaultLayout != 1 )
    {
      v9 = (const wchar_t *)(v12[0] + 64LL);
      v6 = 0;
    }
    *(_QWORD *)&v11 = __PAIR64__(v8, v7);
    DWORD2(v11) = RetailDemoExperienceManager::_ParseScreenInt(v9, 1, v6);
    HIDWORD(v11) = RetailDemoExperienceManager::_ParseScreenInt((const wchar_t *)(v12[0] + 96LL), 0, 0);
    v4 = v11;
  }
  *a1 = v4;
  std::vector<std::wstring>::_Tidy(v12);
  return a1;
}
