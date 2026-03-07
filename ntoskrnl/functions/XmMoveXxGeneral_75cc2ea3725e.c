__int64 __fastcall XmMoveXxGeneral(__int64 a1)
{
  int v1; // eax
  __int64 result; // rax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  unsigned int v7; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(_DWORD *)(a1 + 112) & 1;
  v7 = 0;
  *(_DWORD *)(a1 + 120) = v1;
  result = XmEvaluateAddressSpecifier(a1, &v7);
  if ( result )
  {
    XmSetSourceValue(a1, result);
    v4 = *(_DWORD *)(a1 + 112) & 8;
    if ( *(_DWORD *)(a1 + 120) )
    {
      if ( v4 )
        v5 = *(__int16 *)(a1 + 108);
      else
        v5 = *(unsigned __int16 *)(a1 + 108);
    }
    else if ( v4 )
    {
      v5 = *(char *)(a1 + 108);
    }
    else
    {
      v5 = *(unsigned __int8 *)(a1 + 108);
    }
    *(_DWORD *)(a1 + 108) = v5;
    if ( *(_BYTE *)(a1 + 138) )
    {
      v6 = 3;
    }
    else
    {
      *(_WORD *)(a1 + 110) = 0;
      v6 = 1;
    }
    *(_DWORD *)(a1 + 120) = v6;
    result = 1LL;
    *(_QWORD *)(a1 + 88) = a1 + 4 * (v7 + 6LL);
  }
  return result;
}
