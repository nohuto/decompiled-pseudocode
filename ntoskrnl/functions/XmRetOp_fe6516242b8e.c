__int64 __fastcall XmRetOp(__int64 a1)
{
  int WordImmediate; // edi
  __int64 result; // rax

  if ( (*(_DWORD *)(a1 + 112) & 1) != 0 )
    WordImmediate = 0;
  else
    WordImmediate = (unsigned __int16)XmGetWordImmediate(a1);
  *(_DWORD *)(a1 + 120) = *(_BYTE *)(a1 + 138) != 0 ? 3 : 1;
  *(_DWORD *)(a1 + 20) = XmPopStack(a1);
  if ( (*(_DWORD *)(a1 + 112) & 8) != 0 )
    *(_WORD *)(a1 + 58) = XmPopStack(a1);
  *(_DWORD *)(a1 + 40) += WordImmediate;
  result = 0xFFFFLL;
  if ( *(_DWORD *)(a1 + 20) == 0xFFFF && *(_WORD *)(a1 + 58) == 0xFFFF )
    XmStatus = 1;
  return result;
}
