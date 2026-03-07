__int64 __fastcall KdpSetContextState(__int64 a1, __int64 a2)
{
  struct _KPRCB *CurrentPrcb; // r8
  __int64 result; // rax

  CurrentPrcb = KeGetCurrentPrcb();
  *(_QWORD *)(a1 + 192) = CurrentPrcb->ProcessorState.SpecialRegisters.KernelDr6;
  *(_QWORD *)(a1 + 200) = CurrentPrcb->ProcessorState.SpecialRegisters.KernelDr7;
  *(_WORD *)(a1 + 232) = *(_WORD *)(a2 + 56);
  *(_WORD *)(a1 + 234) = *(_WORD *)(a2 + 58);
  *(_WORD *)(a1 + 236) = *(_WORD *)(a2 + 60);
  *(_WORD *)(a1 + 238) = *(_WORD *)(a2 + 62);
  *(_DWORD *)(a1 + 208) = *(_DWORD *)(a2 + 68);
  *(_WORD *)(a1 + 214) = 1;
  result = *(unsigned __int16 *)(a2 + 56);
  if ( (_WORD)result == 16 || (_WORD)result == 51 )
  {
    result = 3LL;
    *(_WORD *)(a1 + 214) = 3;
  }
  return result;
}
