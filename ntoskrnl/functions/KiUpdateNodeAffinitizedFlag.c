__int64 __fastcall KiUpdateNodeAffinitizedFlag(__int64 a1)
{
  __int64 result; // rax

  result = KiTestNodeAffinity(*(_QWORD *)(a1 + 576));
  if ( (_DWORD)result == ((*(unsigned __int8 *)(a1 + 2) >> 3) & 1) )
    _InterlockedXor((volatile signed __int32 *)a1, 0x80000u);
  return result;
}
