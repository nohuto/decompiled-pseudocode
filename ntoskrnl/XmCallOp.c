__int64 __fastcall XmCallOp(__int64 a1)
{
  int v2; // edi
  __int64 result; // rax

  v2 = *(_DWORD *)(a1 + 104);
  *(_DWORD *)(a1 + 120) = *(_BYTE *)(a1 + 138) != 0 ? 3 : 1;
  if ( *(_DWORD *)(a1 + 112) == 154 || *(_DWORD *)(a1 + 124) != 32 )
  {
    XmPushStack(a1, *(unsigned __int16 *)(a1 + 58));
    XmPushStack(a1, *(unsigned int *)(a1 + 20));
    result = *(unsigned __int16 *)(a1 + 82);
    *(_WORD *)(a1 + 58) = result;
  }
  else
  {
    result = XmPushStack(a1, *(unsigned int *)(a1 + 20));
  }
  *(_DWORD *)(a1 + 20) = v2;
  return result;
}
