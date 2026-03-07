__int64 __fastcall IopQueryReconfiguration(char a1, _QWORD *a2)
{
  __int64 v4; // r9
  _BYTE v6[88]; // [rsp+30h] [rbp-58h] BYREF

  v4 = *(_QWORD *)(a2[39] + 40LL);
  if ( a1 == 4 )
  {
    if ( *(_DWORD *)(v4 + 300) != 779 )
      return 3221225473LL;
    goto LABEL_5;
  }
  if ( a1 == 5 )
  {
    if ( *(_DWORD *)(v4 + 300) != 778 )
      return 3221225473LL;
LABEL_5:
    memset(v6, 0, 0x48uLL);
    v6[0] = 27;
    v6[1] = a1;
    return IopSynchronousCall(a2, (__int64)v6, -1073741637, 0LL, 0LL);
  }
  if ( a1 == 6 && (unsigned int)(*(_DWORD *)(v4 + 300) - 778) <= 1 )
    goto LABEL_5;
  return 3221225473LL;
}
