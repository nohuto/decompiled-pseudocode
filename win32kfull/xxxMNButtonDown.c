__int64 __fastcall xxxMNButtonDown(__int64 *a1, __int64 a2, unsigned int a3, int a4)
{
  _DWORD **v8; // rax
  int v9; // edi
  __int64 result; // rax

  if ( *(_DWORD *)(*(_QWORD *)*a1 + 80LL) == a3 )
  {
    if ( a4 )
      **(_DWORD **)*a1 |= 0x80u;
    result = xxxMNHideNextHierarchy(a1);
    if ( (_DWORD)result )
    {
LABEL_10:
      if ( !a4 )
        return result;
      goto LABEL_11;
    }
    if ( a4 )
    {
      if ( xxxMNOpenHierarchy(a1, a2) )
        **(_DWORD **)*a1 &= ~0x80u;
LABEL_11:
      *(_DWORD *)(a2 + 8) |= 8u;
      return xxxMNDoScroll((__int64)a1, a3, 1);
    }
  }
  else
  {
    v8 = (_DWORD **)*a1;
    if ( a4 )
    {
      v9 = 1;
      **v8 &= ~0x80u;
    }
    else
    {
      v9 = (**v8 >> 10) & 1;
    }
    result = xxxMNSelectItem(a1, a2);
    if ( !result )
      goto LABEL_10;
    if ( !*(_QWORD *)(result + 16) )
      goto LABEL_10;
    result = *(_QWORD *)result;
    if ( (*(_DWORD *)(result + 4) & 3) != 0 )
      goto LABEL_10;
    if ( !v9 )
      goto LABEL_10;
    result = xxxMNOpenHierarchy(a1, a2);
    if ( result != -1 )
      goto LABEL_10;
  }
  return result;
}
