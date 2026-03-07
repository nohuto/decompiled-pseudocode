__int64 __fastcall XmIntOp(__int64 a1)
{
  __int64 result; // rax
  unsigned int v3; // edi
  int *v4; // rax

  *(_DWORD *)(a1 + 120) = *(_BYTE *)(a1 + 138) != 0 ? 3 : 1;
  result = *(unsigned int *)(a1 + 112);
  if ( (_DWORD)result == 204 )
  {
    v3 = 3;
    goto LABEL_9;
  }
  if ( (_DWORD)result == 206 )
  {
    if ( (*(_DWORD *)(a1 + 16) & 0x800) == 0 )
      return result;
    v3 = 4;
    goto LABEL_9;
  }
  v3 = *(unsigned __int8 *)(a1 + 108);
  if ( v3 != 66 )
  {
    if ( v3 != 26 || (result = XmExecuteInt1a(), !(_BYTE)result) )
    {
LABEL_9:
      XmPushStack(a1, *(_DWORD *)(a1 + 16));
      XmPushStack(a1, *(unsigned __int16 *)(a1 + 58));
      XmPushStack(a1, *(_DWORD *)(a1 + 20));
      v4 = x86BiosTranslateAddress(0, 0);
      *(_WORD *)(a1 + 58) = HIWORD(v4[v3]);
      result = LOWORD(v4[v3]);
      *(_DWORD *)(a1 + 20) = result;
    }
  }
  return result;
}
