__int64 __fastcall KiInitializeBugcheckRecoveryProcessor(__int64 a1)
{
  __int64 result; // rax

  *(_DWORD *)(a1 + 38352) = 531;
  *(_QWORD *)(a1 + 38384) = 0LL;
  *(_QWORD *)(a1 + 38376) = KiBugCheckRecoveryFreezeProcessorDpc;
  *(_QWORD *)(a1 + 38408) = 0LL;
  *(_QWORD *)(a1 + 38368) = 0LL;
  result = *(_QWORD *)(a1 + 38408);
  if ( !result )
  {
    result = 2048LL;
    *(_WORD *)(a1 + 38354) = *(_DWORD *)(a1 + 36) + 2048;
  }
  return result;
}
