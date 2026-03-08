/*
 * XREFs of ?TelemetrySetPosition@InteractionSourceManager@@QEAAX_K@Z @ 0x180271D0C
 * Callers:
 *     ?TelemetrySetPosition@CInteractionTracker@@AEAAXXZ @ 0x180232380 (-TelemetrySetPosition@CInteractionTracker@@AEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     memset_0 @ 0x18010F5A8 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?HasActiveManipulation@InteractionSourceManager@@QEBA_NXZ @ 0x18012E95E (-HasActiveManipulation@InteractionSourceManager@@QEBA_NXZ.c)
 *     ?GetActiveInteraction@InteractionSourceManager@@AEBAPEAVCInteraction@@XZ @ 0x180130A1A (-GetActiveInteraction@InteractionSourceManager@@AEBAPEAVCInteraction@@XZ.c)
 *     ?TryGetActiveManipulation@InteractionSourceManager@@QEBAPEAVCManipulation@@XZ @ 0x180271E58 (-TryGetActiveManipulation@InteractionSourceManager@@QEBAPEAVCManipulation@@XZ.c)
 */

void __fastcall InteractionSourceManager::TelemetrySetPosition(InteractionSourceManager *this, __int64 a2)
{
  struct CInteraction *ActiveInteraction; // rbx
  int v5; // edi
  __int64 *v6; // rbx
  __int64 v7; // rax
  LARGE_INTEGER PerformanceCount; // [rsp+20h] [rbp-118h] BYREF
  _QWORD v9[25]; // [rsp+30h] [rbp-108h] BYREF
  int v10; // [rsp+F8h] [rbp-40h]

  ActiveInteraction = InteractionSourceManager::GetActiveInteraction(this);
  if ( InteractionSourceManager::HasActiveManipulation(this) )
  {
    if ( ActiveInteraction )
    {
      if ( a2 )
      {
        v5 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 16LL) + 176LL);
        if ( (unsigned int)(v5 - 1) <= 1 )
        {
          v6 = (__int64 *)*((_QWORD *)ActiveInteraction + 216);
          if ( v6 )
          {
            QueryPerformanceCounter(&PerformanceCount);
            if ( v5 == 2 )
            {
              memset_0(v9, 0, 0xD8uLL);
              v9[0] = InteractionSourceManager::TryGetActiveManipulation(this);
              v9[20] = PerformanceCount.QuadPart;
              v7 = *v6;
              v9[19] = a2;
              v10 = 1;
              (*(void (__fastcall **)(__int64 *, _QWORD *))(v7 + 208))(v6, v9);
            }
            (*(void (__fastcall **)(__int64 *, LARGE_INTEGER, _QWORD))(*v6 + 216))(
              v6,
              PerformanceCount,
              *((_QWORD *)g_pComposition + 62));
          }
        }
      }
    }
  }
}
