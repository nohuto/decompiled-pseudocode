__int64 __fastcall IopReadyDeviceObjects(__int64 a1)
{
  __int64 result; // rax
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF

  result = *(_QWORD *)(a1 + 8);
  _InterlockedOr((volatile signed __int32 *)&retaddr, 0);
  *(_DWORD *)(a1 + 16) |= 0x10u;
  while ( result )
  {
    *(_DWORD *)(result + 48) &= ~0x80u;
    result = *(_QWORD *)(result + 16);
  }
  return result;
}
