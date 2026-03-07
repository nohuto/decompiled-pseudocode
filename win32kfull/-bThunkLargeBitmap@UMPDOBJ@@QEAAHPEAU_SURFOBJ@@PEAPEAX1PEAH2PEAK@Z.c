__int64 __fastcall UMPDOBJ::bThunkLargeBitmap(
        UMPDOBJ *this,
        struct _SURFOBJ *a2,
        void **a3,
        void **a4,
        int *a5,
        int *a6,
        unsigned int *a7)
{
  unsigned int v8; // r10d
  BOOL v9; // r8d
  struct _SURFOBJ *v10; // rdx
  int v11; // r8d
  unsigned int MaxSize; // r9d
  UMPDOBJ *v13; // r11
  unsigned int v14; // ebx
  unsigned int cjBits; // eax
  unsigned int v16; // ecx

  v8 = 1;
  if ( !a2 || !a2->pvBits )
    return v8;
  v9 = 0;
  if ( !a2->iType )
    v9 = SLOBYTE(a2->fjBitmap) < 0;
  *a5 = !v9;
  *a3 = a2->pvBits;
  *a4 = a2->pvScan0;
  MaxSize = UMPDOBJ::ulGetMaxSize(this);
  v14 = *a7 + 80;
  if ( *a7 < 0xFFFFFFB0 )
  {
    if ( !v10->pvBits )
      goto LABEL_14;
    cjBits = v10->cjBits;
    if ( cjBits + 7 >= cjBits )
    {
      v16 = (cjBits + 7) & 0xFFFFFFF8;
      if ( v16 + v14 >= v16 )
      {
        if ( v16 + v14 <= MaxSize || v11 )
        {
          v14 += v16;
        }
        else
        {
          v8 = UMPDOBJ::bSendLargeBitmap(v13, v10, a6);
          if ( !v8 )
            return v8;
        }
LABEL_14:
        *a7 = v14;
        return v8;
      }
    }
  }
  return 0LL;
}
