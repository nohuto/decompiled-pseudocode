__int64 __fastcall PspWow64SetupUserProcessAddressSpace(__int64 a1, __int64 a2)
{
  __int64 *v2; // r8
  __int64 result; // rax
  __int16 v4; // cx
  __int64 v5; // rcx

  v2 = *(__int64 **)(a1 + 1408);
  result = 0LL;
  if ( v2 )
  {
    v4 = *(_WORD *)(a1 + 2412);
    if ( v4 == 332 || v4 == 452 )
    {
      v5 = *v2;
      *(_DWORD *)(a2 + 228) = *v2;
      return PspWow64ThunkProcessParameters(v5, *(_QWORD *)(a2 + 208), a2 + 224);
    }
  }
  return result;
}
