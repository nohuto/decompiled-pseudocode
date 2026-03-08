/*
 * XREFs of ??$SetCommentHelper@$$CBUtagMILCMD_ANIMATIONLOGGINGMANAGER_SETCOMPOSITORCOMMENT@@@@YAJAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBUtagMILCMD_ANIMATIONLOGGINGMANAGER_SETCOMPOSITORCOMMENT@@PEBXI@Z @ 0x1800F4138
 * Callers:
 *     ?ProcessSetCompositorComment@CAnimationLoggingManager@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_ANIMATIONLOGGINGMANAGER_SETCOMPOSITORCOMMENT@@PEBXI@Z @ 0x1800F40FC (-ProcessSetCompositorComment@CAnimationLoggingManager@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_AN.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x18003EDBC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG_K@Z @ 0x18003FF68 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG_K@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 */

__int64 __fastcall SetCommentHelper<tagMILCMD_ANIMATIONLOGGINGMANAGER_SETCOMPOSITORCOMMENT const>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4)
{
  _WORD *v5; // rax
  unsigned int v6; // eax
  _QWORD *v7; // rdi
  _QWORD v9[4]; // [rsp+20h] [rbp-48h] BYREF

  v5 = a1;
  if ( a1[3] >= 8uLL )
    v5 = (_WORD *)*a1;
  a1[2] = 0LL;
  *v5 = 0;
  if ( !a3 )
    return 0LL;
  v6 = *(_DWORD *)(a2 + 8);
  if ( v6 && v6 <= a4 >> 1 && !*(_WORD *)(a3 + 2LL * (v6 - 1)) )
  {
    v7 = std::wstring::wstring(v9);
    if ( a1 != v7 )
    {
      std::wstring::_Tidy_deallocate(a1);
      *(_OWORD *)a1 = *(_OWORD *)v7;
      *((_OWORD *)a1 + 1) = *((_OWORD *)v7 + 1);
      v7[2] = 0LL;
      v7[3] = 7LL;
      *(_WORD *)v7 = 0;
    }
    std::wstring::_Tidy_deallocate(v9);
    return 0LL;
  }
  return 2147942487LL;
}
