/*
 * XREFs of KiMcheckFastForward @ 0x1402EDB10
 * Callers:
 *     KiNmiInterruptStart @ 0x140423B80 (KiNmiInterruptStart.c)
 *     KiMcheckAbort @ 0x140427E80 (KiMcheckAbort.c)
 * Callees:
 *     KiRspInIstStack @ 0x1402EDCB0 (KiRspInIstStack.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 */

__int64 __fastcall KiMcheckFastForward(ULONG_PTR BugCheckParameter4, char a2, __int64 a3, __int64 a4)
{
  unsigned int v6; // r11d
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned __int64 v10; // rax
  struct _KPRCB *CurrentPrcb; // r9
  __int64 result; // rax
  int v13; // ecx
  unsigned __int64 v14; // r8
  __int64 v15; // r8
  _MACHINE_CHECK_CONTEXT *McheckContext; // rdx
  unsigned __int64 GsBase; // rax
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rax

  v6 = 0;
  if ( (*(_BYTE *)(BugCheckParameter4 + 368) & 1) == 0 )
  {
    if ( (unsigned int)KiRspInIstStack(3LL, *(_QWORD *)(BugCheckParameter4 + 384), a3, a4) )
      _InterlockedAdd(&KiMcheckRecursive, 1u);
    if ( (unsigned int)KiRspInIstStack(2LL, v7, v8, v9) )
    {
      v6 |= 2u;
      _InterlockedAdd(&dword_140C409C4, 1u);
    }
    v10 = *(_QWORD *)(BugCheckParameter4 + 360);
    if ( v10 >= (unsigned __int64)&KiMcheckExitMceTailMceBegin && v10 < (unsigned __int64)&KiMcheckExitMceTailMceEnd )
    {
      v6 |= 4u;
      _InterlockedAdd(&dword_140C409C8, 1u);
    }
    if ( v10 >= (unsigned __int64)&KiMcheckExitMceTailNmiBegin && v10 < (unsigned __int64)KiMcheckExitMceTailNmiEnd )
    {
      v6 |= 4u;
      _InterlockedAdd(&dword_140C409C8, 1u);
    }
    if ( KiKvaShadow )
    {
      if ( v10 >= (unsigned __int64)&KiKernelIstMceExitMceTailMceBegin
        && v10 < (unsigned __int64)&KiKernelIstMceExitMceTailMceEnd )
      {
        v6 |= 4u;
        _InterlockedAdd(&dword_140C409CC, 1u);
      }
      if ( KiKvaShadow
        && v10 >= (unsigned __int64)&KiKernelIstMceExitMceTailNmiBegin
        && v10 < (unsigned __int64)&KiKernelIstMceExitMceTailNmiEnd )
      {
        v6 |= 4u;
        _InterlockedAdd(&dword_140C409CC, 1u);
      }
    }
  }
  CurrentPrcb = KeGetCurrentPrcb();
  result = v6 & 1;
  if ( a2 || (v6 & 1) != 0 )
  {
    _InterlockedAdd(&dword_140C409D8, 1u);
    if ( (v6 & 1) != 0 )
      _InterlockedAdd(&dword_140C409E0, 1u);
    v13 = 1;
  }
  else
  {
    _InterlockedAdd(&dword_140C409DC, 1u);
    v13 = 0;
  }
  if ( KiKvaShadow )
  {
    v14 = CurrentPrcb[-1].PrcbPad141[473];
    if ( a2 )
    {
      v15 = *(_QWORD *)(v14 + 52);
      goto LABEL_19;
    }
    v15 = *(_QWORD *)(v14 + 44);
  }
  else
  {
    v15 = 0LL;
    if ( a2 )
    {
LABEL_19:
      if ( (v6 & 1) != 0 )
        KeBugCheckEx(
          0x111u,
          v6,
          *(_QWORD *)(BugCheckParameter4 + 384),
          *(_QWORD *)(BugCheckParameter4 + 360),
          BugCheckParameter4);
      goto LABEL_20;
    }
  }
  McheckContext = &CurrentPrcb->McheckContext[1];
  if ( !v13 )
LABEL_20:
    McheckContext = CurrentPrcb->McheckContext;
  if ( (v6 & 4) != 0 )
  {
    _InterlockedAdd(&dword_140C409E4, 1u);
    GsBase = McheckContext->GsBase;
    if ( KiKvaShadow )
    {
      *(_QWORD *)(v15 + 16) = GsBase;
      *(_QWORD *)(v15 + 24) = McheckContext->Cr3;
      if ( (McheckContext->Cr3 & 3) != 0 && CurrentPrcb->CurrentThread->Process->AddressPolicy != 1 )
      {
        _InterlockedAdd(&dword_140C409E8, 1u);
        _interlockedbittestandreset((volatile signed __int32 *)&CurrentPrcb->ShadowFlags, 0);
        v18 = __readcr4();
        if ( (v18 & 0x20080) != 0 )
        {
          __writecr4(v18 ^ 0x80);
          __writecr4(v18);
        }
        else
        {
          v19 = __readcr3();
          __writecr3(v19);
        }
      }
    }
    else
    {
      *(_QWORD *)(BugCheckParameter4 + 104) = GsBase;
    }
    *(_OWORD *)(BugCheckParameter4 + 360) = *(_OWORD *)&McheckContext->MachineFrame.Rip;
    *(_OWORD *)(BugCheckParameter4 + 376) = *(_OWORD *)&McheckContext->MachineFrame.EFlags;
    *(_QWORD *)(BugCheckParameter4 + 392) = *(_QWORD *)&McheckContext->MachineFrame.SegSs;
    *(_QWORD *)(BugCheckParameter4 + 48) = McheckContext->Rax;
    *(_QWORD *)(BugCheckParameter4 + 56) = McheckContext->Rcx;
    result = McheckContext->Rdx;
    *(_QWORD *)(BugCheckParameter4 + 64) = result;
    _InterlockedAdd(&dword_140C409D4, 1u);
    McheckContext->MachineFrame.SegCs = 0;
  }
  if ( !a2 )
  {
    _InterlockedAdd(&dword_140C409D0, 1u);
    *(_OWORD *)&McheckContext->MachineFrame.Rip = *(_OWORD *)(BugCheckParameter4 + 360);
    *(_OWORD *)&McheckContext->MachineFrame.EFlags = *(_OWORD *)(BugCheckParameter4 + 376);
    *(_QWORD *)&McheckContext->MachineFrame.SegSs = *(_QWORD *)(BugCheckParameter4 + 392);
    McheckContext->Rax = *(_QWORD *)(BugCheckParameter4 + 48);
    McheckContext->Rcx = *(_QWORD *)(BugCheckParameter4 + 56);
    McheckContext->Rdx = *(_QWORD *)(BugCheckParameter4 + 64);
    result = *(_QWORD *)(BugCheckParameter4 + 104);
    McheckContext->GsBase = result;
    if ( KiKvaShadow )
    {
      McheckContext->GsBase = *(_QWORD *)(v15 + 16);
      result = *(_QWORD *)(v15 + 24);
      McheckContext->Cr3 = result;
    }
  }
  return result;
}
