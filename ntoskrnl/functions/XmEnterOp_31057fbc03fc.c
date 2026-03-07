__int64 __fastcall XmEnterOp(__int64 a1)
{
  int v2; // esi
  int v3; // ebp
  __int64 result; // rax
  unsigned int v5; // edi

  v2 = *(_DWORD *)(a1 + 108);
  v3 = *(_DWORD *)(a1 + 104);
  if ( *(_BYTE *)(a1 + 138) )
  {
    *(_DWORD *)(a1 + 120) = 3;
    result = XmPushStack(a1, *(_DWORD *)(a1 + 44));
    v5 = *(_DWORD *)(a1 + 40);
  }
  else
  {
    *(_DWORD *)(a1 + 120) = 1;
    result = XmPushStack(a1, *(unsigned __int16 *)(a1 + 44));
    v5 = *(unsigned __int16 *)(a1 + 40);
  }
  if ( v3 )
  {
    if ( v3 != 1 )
      longjmp((_JBTYPE *)(a1 + 160), 8);
    result = XmPushStack(a1, v5);
  }
  if ( *(_BYTE *)(a1 + 138) )
  {
    *(_DWORD *)(a1 + 40) -= v2;
    *(_DWORD *)(a1 + 44) = v5;
  }
  else
  {
    *(_WORD *)(a1 + 40) -= v2;
    *(_WORD *)(a1 + 44) = v5;
  }
  return result;
}
