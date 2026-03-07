__int64 __fastcall CGlobalComposition::GetDesktopTree(
        CRenderTargetManager **this,
        struct _LUID a2,
        struct CDesktopTree **a3)
{
  DWORD LowPart; // ebx
  int DesktopTree; // edi
  struct IMonitorTarget *PrimaryMonitorTarget; // rax
  int v9; // eax
  unsigned int v10; // ecx
  LONG HighPart; // [rsp+4Ch] [rbp+14h]

  HighPart = a2.HighPart;
  LowPart = a2.LowPart;
  DesktopTree = CComposition::GetDesktopTree((CComposition *)this, a2, a3);
  if ( DesktopTree < 0 && LowPart == dword_1803E13A0 && HighPart == dword_1803E13A4 )
  {
    PrimaryMonitorTarget = CRenderTargetManager::GetPrimaryMonitorTarget(this[27]);
    if ( PrimaryMonitorTarget )
    {
      v9 = (*(__int64 (__fastcall **)(struct IMonitorTarget *, struct CDesktopTree **))(*(_QWORD *)PrimaryMonitorTarget
                                                                                      + 16LL))(
             PrimaryMonitorTarget,
             a3);
      DesktopTree = v9;
      if ( v9 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v10, &dword_180353B28, 2u, v9, 0x93u, 0LL);
    }
  }
  return (unsigned int)DesktopTree;
}
