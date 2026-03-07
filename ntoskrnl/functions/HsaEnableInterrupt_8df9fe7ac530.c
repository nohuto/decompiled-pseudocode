__int64 __fastcall HsaEnableInterrupt(__int64 *a1)
{
  __int64 result; // rax
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF

  result = *a1;
  if ( *a1 )
  {
    result = *(_QWORD *)(result + 24) | 0x4000LL;
    *(_QWORD *)(*a1 + 24) = result;
    _InterlockedOr((volatile signed __int32 *)&retaddr, 0);
  }
  return result;
}
