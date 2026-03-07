__int64 __fastcall XmMoveSegment(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rcx
  __int64 v4; // rdx
  unsigned int v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = 0;
  *(_DWORD *)(a1 + 120) = 1;
  result = XmEvaluateAddressSpecifier(a1, &v5);
  v3 = result;
  if ( result )
  {
    if ( (*(_DWORD *)(a1 + 112) & 2) != 0 )
    {
      v4 = result;
      v3 = a1 + 2 * (v5 + 28LL);
    }
    else
    {
      v4 = a1 + 2 * (v5 + 28LL);
    }
    *(_QWORD *)(a1 + 88) = v3;
    XmSetSourceValue(a1, v4);
    return 1LL;
  }
  return result;
}
