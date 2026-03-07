bool __fastcall NvmSubsystemReset(__int64 a1)
{
  bool result; // al
  signed __int32 v3[10]; // [rsp+0h] [rbp-28h] BYREF

  *(_DWORD *)(*(_QWORD *)(a1 + 184) + 32LL) = 1314278757;
  _InterlockedOr(v3, 0);
  StorPortStallExecution(5000LL);
  result = IsNVMeResetComplete(a1);
  if ( result )
    ++*(_DWORD *)(a1 + 4424);
  else
    ++*(_DWORD *)(a1 + 4428);
  return result;
}
