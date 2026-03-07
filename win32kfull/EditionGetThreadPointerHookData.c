__int64 __fastcall EditionGetThreadPointerHookData(__int64 a1, __int16 a2)
{
  __int64 v2; // r8
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 24);
  result = 0LL;
  if ( v2 )
  {
    if ( *(_WORD *)(v2 + 16) != a2 )
      return 0LL;
    return v2;
  }
  return result;
}
