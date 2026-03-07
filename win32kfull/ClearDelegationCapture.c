__int64 __fastcall ClearDelegationCapture(__int64 a1)
{
  __int64 result; // rax

  result = HMAssignmentUnlock(a1 + 144);
  *(_BYTE *)(a1 + 152) = 0;
  return result;
}
