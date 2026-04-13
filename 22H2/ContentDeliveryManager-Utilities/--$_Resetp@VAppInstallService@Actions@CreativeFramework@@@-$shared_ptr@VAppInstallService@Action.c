/*
 * XREFs of ??$_Resetp@VAppInstallService@Actions@CreativeFramework@@@?$shared_ptr@VAppInstallService@Actions@CreativeFramework@@@std@@AEAAXPEAVAppInstallService@Actions@CreativeFramework@@@Z @ 0x1800873E4
 * Callers:
 *     ?MakeAppInstallService@Actions@CreativeFramework@@YA?AV?$shared_ptr@VIActionService@Actions@CreativeFramework@@@std@@AEBUActionContext@12@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@4@@Z @ 0x180086430 (-MakeAppInstallService@Actions@CreativeFramework@@YA-AV-$shared_ptr@VIActionService@Actions@Crea.c)
 *     ?MakeLaunchUriService@Actions@CreativeFramework@@YA?AV?$shared_ptr@VIActionService@Actions@CreativeFramework@@@std@@AEBUActionContext@12@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@4@@Z @ 0x18008E4A0 (-MakeLaunchUriService@Actions@CreativeFramework@@YA-AV-$shared_ptr@VIActionService@Actions@Creat.c)
 *     ?MakeSetLockScreenHotspotsService@Actions@CreativeFramework@@YA?AV?$shared_ptr@VIActionService@Actions@CreativeFramework@@@std@@AEBUActionContext@12@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@4@@Z @ 0x18009A1B0 (-MakeSetLockScreenHotspotsService@Actions@CreativeFramework@@YA-AV-$shared_ptr@VIActionService@A.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1800B2468 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D0BC0 (_guard_dispatch_icall_nop.c)
 */

unsigned __int64 __fastcall std::shared_ptr<CreativeFramework::Actions::AppInstallService>::_Resetp<CreativeFramework::Actions::AppInstallService>(
        _QWORD *a1,
        void (__fastcall ***a2)(_QWORD, __int64))
{
  unsigned __int64 result; // rax
  _QWORD *v5; // rbx
  volatile signed __int32 *v6; // rdi

  try
  {
    result = (unsigned __int64)operator new(0x18uLL);
    v5 = (_QWORD *)result;
    if ( result )
    {
      *(_DWORD *)(result + 8) = 1;
      *(_DWORD *)(result + 12) = 1;
      result = (unsigned __int64)&std::_Ref_count<CreativeFramework::Actions::AppInstallService>::`vftable';
      *v5 = &std::_Ref_count<CreativeFramework::Actions::AppInstallService>::`vftable';
      v5[2] = a2;
    }
    v6 = (volatile signed __int32 *)a1[1];
    if ( v6 )
    {
      result = (unsigned int)_InterlockedExchangeAdd(v6 + 2, 0xFFFFFFFF);
      if ( (_DWORD)result == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v6)(v6);
        result = (unsigned int)_InterlockedExchangeAdd(v6 + 3, 0xFFFFFFFF);
        if ( (_DWORD)result == 1 )
          result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 8LL))(v6);
      }
    }
    a1[1] = v5;
    *a1 = a2;
  }
  catch ( ... )
  {
    if ( a2 )
      (**a2)(a2, 1LL);
    throw;
  }
  return result;
}
