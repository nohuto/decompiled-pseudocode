__int64 __fastcall Crashdump_EventRing_UpdateDequeuePointer(__int64 a1)
{
  __int64 v1; // r8
  __int64 result; // rax
  unsigned __int64 v3; // rdx
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF

  v1 = *(_QWORD *)(a1 + 16);
  result = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL);
  v3 = (*(_QWORD *)(a1 + 48) + 16LL * *(unsigned int *)(a1 + 92)) & 0xFFFFFFFFFFFFFFF0uLL | 8;
  if ( (result & 1) != 0 )
  {
    *(_DWORD *)(v1 + 24) = v3;
    _InterlockedOr((volatile signed __int32 *)&retaddr, 0);
    *(_DWORD *)(v1 + 28) = HIDWORD(v3);
  }
  else
  {
    *(_QWORD *)(v1 + 24) = v3;
  }
  _InterlockedOr((volatile signed __int32 *)&retaddr, 0);
  return result;
}
