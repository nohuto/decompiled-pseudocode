__int64 __fastcall GreSetDIBits(HDC a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, unsigned int *a6)
{
  unsigned int v6; // esi
  unsigned int *v9; // rdi
  unsigned int v11; // esi
  __int64 v12[3]; // [rsp+50h] [rbp-28h] BYREF
  __int16 v13; // [rsp+68h] [rbp-10h]

  v6 = a4;
  v9 = a6;
  if ( !a6 )
    goto LABEL_7;
  if ( *a6 == 12 )
    v9 = (unsigned int *)pbmiConvertInfo((unsigned __int16 *)a6, a2, a3, a4);
  if ( *a6 >= 0x28 && a6[4] - 4 <= 1 )
  {
    EngSetLastError(0x57u);
    return 0LL;
  }
  else
  {
LABEL_7:
    v12[2] = 0LL;
    v12[1] = -1LL;
    v12[0] = a5;
    v13 = 0;
    v11 = GreSetDIBitsInternal(a1, a2, a3, v6, v12, v9, 0, 0xFFFFFFFF, 0LL);
    if ( v9 )
    {
      if ( v9 != a6 )
        Win32FreePool(v9);
    }
    return v11;
  }
}
