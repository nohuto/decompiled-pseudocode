/*
 * XREFs of ?NotifyRealizationBitmapReleased@CDDisplaySwapChain@@UEAAXPEAUIDisplaySurface@Core@Display@Devices@Windows@@@Z @ 0x180287C60
 * Callers:
 *     <none>
 * Callees:
 *     ?erase@?$list@V?$unique_ptr@VCDDisplayAgedCachedScanout@@U?$default_delete@VCDDisplayAgedCachedScanout@@@std@@@std@@V?$allocator@V?$unique_ptr@VCDDisplayAgedCachedScanout@@U?$default_delete@VCDDisplayAgedCachedScanout@@@std@@@std@@@2@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@V?$unique_ptr@VCDDisplayAgedCachedScanout@@U?$default_delete@VCDDisplayAgedCachedScanout@@@std@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@V?$unique_ptr@VCDDisplayAgedCachedScanout@@U?$default_delete@VCDDisplayAgedCachedScanout@@@std@@@std@@@std@@@std@@@2@@Z @ 0x18028896C (-erase@-$list@V-$unique_ptr@VCDDisplayAgedCachedScanout@@U-$default_delete@VCDDisplayAgedCachedS.c)
 */

void __fastcall CDDisplaySwapChain::NotifyRealizationBitmapReleased(
        CDDisplaySwapChain *this,
        struct Windows::Devices::Display::Core::IDisplaySurface *a2)
{
  _QWORD *v2; // rdi
  _QWORD *i; // r8
  __int64 *v5; // rax
  _QWORD *v6; // rbx
  __int64 j; // rcx
  char v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = (_QWORD *)((char *)this + 32);
  for ( i = (_QWORD *)**((_QWORD **)this + 4); i != (_QWORD *)*v2; i = v6 )
  {
    v5 = (__int64 *)i[2];
    v6 = (_QWORD *)*i;
    for ( j = *v5; j != v5[1]; j += 80LL )
    {
      if ( *(struct Windows::Devices::Display::Core::IDisplaySurface **)(j + 8) == a2 )
      {
        std::list<std::unique_ptr<CDDisplayAgedCachedScanout>>::erase(v2, &v8, i);
        break;
      }
    }
  }
}
