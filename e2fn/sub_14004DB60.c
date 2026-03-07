__int64 __fastcall sub_14004DB60(__int64 a1, _BYTE *a2, _BYTE *a3)
{
  __int64 result; // rax
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF

  *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 368) + 8LL) + 5416LL) = *(_DWORD *)(a1 + 424);
  _InterlockedOr((volatile signed __int32 *)&retaddr, 0);
  result = *(_QWORD *)(a1 + 368);
  *(_DWORD *)(*(_QWORD *)(result + 8) + 5504LL) = *(_DWORD *)(a1 + 424);
  _InterlockedOr((volatile signed __int32 *)&retaddr, 0);
  *a2 = 1;
  *a3 = 1;
  return result;
}
