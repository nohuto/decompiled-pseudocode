char __fastcall KiCheckForFreezeExecution(__int64 a1)
{
  struct _KPRCB *CurrentPrcb; // rdi
  unsigned __int64 v4; // rax
  __int64 v5; // r9
  _QWORD *v6; // r8
  unsigned __int64 v7; // rcx

  CurrentPrcb = KeGetCurrentPrcb();
  if ( CurrentPrcb->IpiFrozen != 5 )
    return 0;
  KiFreezeTargetExecution();
  if ( KiResumeForReboot && a1 )
  {
    if ( *(_WORD *)(a1 + 368) != 16 )
    {
      *(_WORD *)(a1 + 368) = 16;
      *(_WORD *)(a1 + 392) = 24;
      *(_QWORD *)(a1 + 384) = CurrentPrcb->RspBase;
    }
    *(_DWORD *)(a1 + 376) &= ~0x200u;
    v4 = __readmsr(0xC0000101);
    *(_QWORD *)(a1 + 104) = ((unsigned __int64)HIDWORD(v4) << 32) | (unsigned int)v4;
    *(_QWORD *)(a1 + 360) = KiWaitForReboot;
    if ( (_BYTE)KiKernelCetEnabled )
      VslKernelShadowStackAssist(3, *(_QWORD *)(a1 + 216), 0, 0, (__int64)KiWaitForReboot, 4);
    if ( KiKvaShadow )
    {
      v5 = 7LL;
      v6 = (_QWORD *)(CurrentPrcb[-1].PrcbPad141[472] + 5168);
      do
      {
        v7 = __readcr3();
        v6[1] = v7;
        *v6 = __readmsr(0xC0000101);
        v6 += 64;
        --v5;
      }
      while ( v5 );
    }
  }
  return 1;
}
