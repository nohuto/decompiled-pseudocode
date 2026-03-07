__int64 __fastcall W32kCddSetDeviceBitmapAdapterLuid(HSURF a1, struct _LUID a2)
{
  struct OBJECT *v3; // rax
  unsigned int v4; // edi

  v3 = HmgShareLockIgnoreStockBit((unsigned int)a1);
  if ( v3 && ((v4 = 1, (*((_DWORD *)v3 + 28) & 0x400000) != 0) || *((_WORD *)v3 + 50) == 1) )
  {
    *((struct _LUID *)v3 + 72) = a2;
  }
  else
  {
    v4 = 0;
    if ( !v3 )
      return v4;
  }
  HmgDecrementShareReferenceCountEx((int *)v3, 0LL);
  return v4;
}
