/*
 * XREFs of ?_LogStoryboardEvent@CStoryboard@@IEAAXXZ @ 0x1800301D8
 * Callers:
 *     ?Initialize@CStoryboard@@MEAAJXZ @ 0x18002F710 (-Initialize@CStoryboard@@MEAAJXZ.c)
 *     ?_Cleanup@CStoryboard@@IEAAXXZ @ 0x18002FA58 (-_Cleanup@CStoryboard@@IEAAXXZ.c)
 *     ?_ScheduleStoryboardsForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z @ 0x180035040 (-_ScheduleStoryboardsForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z.c)
 *     ?ScheduleStartAnimation@CStoryboard@@QEAAJXZ @ 0x18003527C (-ScheduleStartAnimation@CStoryboard@@QEAAJXZ.c)
 *     ?_ScheduleStoryboard@CAnimationScheduler@@AEAAJPEAVCStoryboard@@@Z @ 0x180035E98 (-_ScheduleStoryboard@CAnimationScheduler@@AEAAJPEAVCStoryboard@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180053970 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180057EB0 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0qd_EtwEventWriteTransfer @ 0x1800B5570 (McTemplateU0qd_EtwEventWriteTransfer.c)
 */

void __fastcall CStoryboard::_LogStoryboardEvent(unsigned __int64 this, __int64 a2)
{
  int v3; // edx
  __int128 v4; // xmm0
  __int64 v5; // rcx
  unsigned __int64 v6; // r8
  __int64 *v7; // rcx
  __int64 v8; // rax
  __int128 v9; // [rsp+20h] [rbp-38h] BYREF
  __int128 v10; // [rsp+30h] [rbp-28h]

  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McTemplateU0qd_EtwEventWriteTransfer(this, a2, *(unsigned int *)(this + 24), *(unsigned int *)(this + 28));
  if ( *(_DWORD *)(this + 28) != -1 )
  {
    v3 = *(_DWORD *)(this + 24);
    if ( (unsigned int)(v3 - 3) <= 1 )
    {
      v4 = *(_OWORD *)(this + 32);
      v5 = *(_QWORD *)(this + 32);
      v10 = 0LL;
      v9 = v4;
      if ( !v5 )
        v5 = *((_QWORD *)&v9 + 1) - *((_QWORD *)&v10 + 1);
      if ( v5 )
      {
        v6 = this | 0xD100000000000000uLL;
        v7 = *(__int64 **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5) + 16LL);
        v8 = *v7;
        if ( v3 == 3 )
          (*(void (__fastcall **)(__int64 *, __int128 *, unsigned __int64))(v8 + 216))(v7, &v9, v6);
        else
          (*(void (__fastcall **)(__int64 *, __int128 *, unsigned __int64))(v8 + 224))(v7, &v9, v6);
      }
    }
  }
}
