/*
 * XREFs of NtCallbackReturn @ 0x14041AD90
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 */

__int64 __fastcall NtCallbackReturn(__int64 a1, int a2, unsigned int a3)
{
  struct _KTHREAD *CurrentThread; // r11
  _QWORD *InitialStack; // r10
  __int64 v5; // r9
  __int64 result; // rax
  __int64 v7; // r8
  _KTRAP_FRAME *TrapFrame; // rbx
  bool v9; // zf
  unsigned __int64 Dr1; // rdx
  unsigned __int64 Dr3; // rdx
  void *v12; // rcx
  void *KernelShadowStackInitial; // rdx
  unsigned __int64 v14; // rcx
  char *v18; // rcx
  unsigned __int64 v19; // rcx

  CurrentThread = KeGetCurrentThread();
  InitialStack = CurrentThread->InitialStack;
  v5 = InitialStack[4];
  if ( v5 >= 0 )
  {
    if ( v5 > 0 )
      KeBugCheckEx(0x1CDu, (ULONG_PTR)CurrentThread, InitialStack[4], 0LL, 0LL);
    return 3221226072LL;
  }
  else
  {
    result = a3;
    **(_QWORD **)(v5 + 216) = a1;
    **(_DWORD **)(v5 + 224) = a2;
    _disable();
    v7 = *(_QWORD *)(v5 + 208);
    TrapFrame = CurrentThread->TrapFrame;
    CurrentThread->TrapFrame = (_KTRAP_FRAME *)v7;
    v9 = (CurrentThread->Header.Reserved1 & 3) == 0;
    *(_WORD *)(v7 + 256) = 0;
    if ( !v9 )
    {
      Dr1 = TrapFrame->Dr1;
      *(_QWORD *)(v7 + 216) = TrapFrame->Dr0;
      *(_QWORD *)(v7 + 224) = Dr1;
      Dr3 = TrapFrame->Dr3;
      *(_QWORD *)(v7 + 232) = TrapFrame->Dr2;
      *(_QWORD *)(v7 + 240) = Dr3;
      *(_QWORD *)(v7 + 256) = TrapFrame->Dr7;
    }
    v12 = (void *)InitialStack[6];
    if ( v12 )
    {
      CurrentThread->KernelShadowStackBase = v12;
      CurrentThread->KernelShadowStackLimit.AllFields = InitialStack[7];
      KernelShadowStackInitial = CurrentThread->KernelShadowStackInitial;
      v14 = InitialStack[9];
      CurrentThread->KernelShadowStackInitial = (void *)v14;
      __writegsqword(0x95A8u, v14);
      __asm { rdsspq  rcx }
      _RDX = ((unsigned __int64)KernelShadowStackInitial + 8 - _RCX) >> 3;
      __asm { incsspq rdx }
      _RCX = InitialStack[8];
      __asm
      {
        rstorssp qword ptr [rcx]
        saveprevssp
      }
    }
    v18 = (char *)InitialStack[2];
    CurrentThread->StackBase = v18;
    CurrentThread->StackLimit = &v18[-(unsigned int)KeKernelStackSize];
    v19 = InitialStack[5];
    CurrentThread->InitialStack = (void *)v19;
    if ( (KiKvaShadow & 1) != 0 )
      __writegsqword(0xA008u, v19);
    else
      *(_QWORD *)((char *)KeGetPcr()->NtTib.StackBase + 4) = v19;
    __writegsqword(0x1A8u, v19);
    _enable();
  }
  return result;
}
