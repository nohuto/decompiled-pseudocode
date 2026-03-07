bool __fastcall KeIsWaitListEmpty(__int64 a1)
{
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF

  _InterlockedOr((volatile signed __int32 *)&retaddr, 0);
  return a1 + 8 == *(_QWORD *)(a1 + 8);
}
