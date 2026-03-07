__int64 __fastcall XmAasOp(__int64 a1)
{
  unsigned __int8 v1; // r9
  unsigned int *v2; // rdx
  unsigned int v3; // eax
  __int64 result; // rax
  unsigned int v5; // eax

  v1 = *(_BYTE *)(a1 + 24);
  v2 = (unsigned int *)(a1 + 16);
  if ( (v1 & 0xFu) > 9 || (*v2 & 0x10) != 0 )
  {
    *(_BYTE *)(a1 + 24) = (v1 - 6) & 0xF;
    v5 = *v2;
    *(_BYTE *)(a1 + 25) += -1 - (v1 < 6u);
    result = v5 | 0x11;
  }
  else
  {
    v3 = *v2 & 0xFFFFFFFE;
    *(_BYTE *)(a1 + 24) = v1 & 0xF;
    *v2 = v3;
    result = v3 & 0xFFFFFFEF;
  }
  *v2 = result;
  return result;
}
