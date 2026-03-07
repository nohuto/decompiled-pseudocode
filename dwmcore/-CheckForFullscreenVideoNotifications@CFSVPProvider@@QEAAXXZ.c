void __fastcall CFSVPProvider::CheckForFullscreenVideoNotifications(CFSVPProvider *this)
{
  struct CCompositionSurfaceInfo *MajorityScreenContent; // rbx
  __int64 v3; // rax

  MajorityScreenContent = 0LL;
  if ( (***(unsigned __int8 (__fastcall ****)(_QWORD))this)(*(_QWORD *)this)
    && *(_BYTE *)(*((_QWORD *)g_pComposition + 27) + 577LL) )
  {
    v3 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 32LL))(*(_QWORD *)this);
    MajorityScreenContent = (struct CCompositionSurfaceInfo *)COverlayContext::FindMajorityScreenContent(v3);
  }
  CFSVPProvider::CheckForMajorityScreenVideoNotificationsWithCompSurfInfo(this, MajorityScreenContent);
}
