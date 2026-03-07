void __fastcall XmCmpsOp(__int64 a1)
{
  int v2; // edi
  unsigned __int16 *StringAddress; // rax
  __int64 v4; // rcx
  unsigned __int16 *v5; // rax

  v2 = 1;
  if ( !*(_BYTE *)(a1 + 139) )
    goto LABEL_5;
  if ( *(_BYTE *)(a1 + 137) )
    v2 = *(_DWORD *)(a1 + 28);
  else
    v2 = *(unsigned __int16 *)(a1 + 28);
  while ( v2 )
  {
LABEL_5:
    StringAddress = (unsigned __int16 *)XmGetStringAddress(a1, *(_DWORD *)(a1 + 116), 6u);
    XmSetSourceValue(a1, StringAddress);
    v5 = (unsigned __int16 *)XmGetStringAddress(v4, 0, 7u);
    XmSetDestinationValue(a1, v5);
    XmCompareOperands();
    --v2;
    if ( ((*(_DWORD *)(a1 + 16) & 0x40) != 0) != *(_BYTE *)(a1 + 141) )
      break;
  }
  if ( *(_BYTE *)(a1 + 139) )
  {
    if ( *(_BYTE *)(a1 + 137) )
      *(_DWORD *)(a1 + 28) = v2;
    else
      *(_WORD *)(a1 + 28) = v2;
  }
}
