__int64 __fastcall KiFixupControlProtectionKernelModeReturnMismatch(
        unsigned __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        char a5)
{
  unsigned __int64 v8; // rbp
  volatile signed __int32 *SchedulerAssist; // rcx
  unsigned int v11; // r14d
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *v18; // r8
  signed __int32 v19; // eax
  signed __int32 v20; // ett
  __int16 v22; // [rsp+40h] [rbp-8h]

  _RBX = a4;
  _R13 = a3;
  v8 = (-(__int64)(a5 != 0) & 0x10) + 8;
  __asm { rdsspq  rdi }
  if ( (unsigned __int64)_RDI - v8 < a1 || (unsigned __int64)(a2 - (_QWORD)_RDI + 24) >= 0x80 )
    return 2147483653LL;
  _disable();
  SchedulerAssist = (volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist;
  if ( SchedulerAssist )
    _InterlockedOr(SchedulerAssist, 0x200000u);
  v11 = 0;
  do
  {
    KiDecrementKernelShadowStack();
    ++v11;
  }
  while ( v11 < v8 >> 3 );
  while ( (unsigned __int64)_RDI < a2 + 24 )
  {
    _RCX = *_RDI;
    _RAX = (char *)_RDI++ - v8;
    __asm { wrssq   qword ptr [rax], rcx }
  }
  _RSI = a2 - v8;
  if ( !_RBX )
    _RBX = _RSI + 24;
  if ( a5 )
  {
    _RAX = _RBX + 24;
    __asm { wrssq   qword ptr [rbx], rax }
    _RAX = 16LL;
    __asm
    {
      wrssq   qword ptr [rbx+8], r13
      wrssq   qword ptr [rbx+10h], rax
    }
  }
  else
  {
    __asm { wrssq   qword ptr [rbx], r13 }
  }
  __asm { wrssq   qword ptr [rsi], rbx }
  if ( (v22 & 0x200) != 0 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v18 = (signed __int32 *)CurrentPrcb->SchedulerAssist;
    if ( v18 )
    {
      _m_prefetchw(v18);
      v19 = *v18;
      do
      {
        v20 = v19;
        v19 = _InterlockedCompareExchange(v18, v19 & 0xFFDFFFFF, v19);
      }
      while ( v20 != v19 );
      if ( (v19 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    _enable();
  }
  return 0LL;
}
