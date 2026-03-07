__int64 __fastcall sub_140014EF8(__int64 a1)
{
  int v1; // r9d
  int v2; // edx
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF

  v1 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 408) + 8LL) + 23476LL);
  if ( (v1 & 0x80008000) != 0 )
  {
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 408) + 8LL) + 23476LL) = v1 & 0x7FFF7FFF;
    _InterlockedOr((volatile signed __int32 *)&retaddr, 0);
  }
  v2 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 408) + 8LL) + 23472LL);
  if ( (v2 & 0x80008000) != 0 )
  {
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 408) + 8LL) + 23472LL) = v2 & 0x7FFF7FFF;
    _InterlockedOr((volatile signed __int32 *)&retaddr, 0);
  }
  return 0LL;
}
