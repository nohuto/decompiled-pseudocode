__int64 __fastcall GetWindowMinimizeAnimation(struct tagWND *a1, enum CORNER_STYLE *a2)
{
  unsigned int v4; // edi
  _BYTE v6[40]; // [rsp+20h] [rbp-58h] BYREF
  int v7; // [rsp+48h] [rbp-30h]

  v4 = -1073741816;
  memset_0(v6, 0, 0x40uLL);
  if ( (unsigned int)_GetWindowCompositionInfo(a1, (struct WINDOWCOMPOSITIONINFO *)v6) )
  {
    v4 = 0;
    *(_DWORD *)a2 = v7;
  }
  return v4;
}
