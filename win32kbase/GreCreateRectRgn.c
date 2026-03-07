struct HOBJ__ *__fastcall GreCreateRectRgn(LONG a1, LONG a2, LONG a3, LONG a4)
{
  unsigned int v4; // ecx
  unsigned int v5; // r9d
  unsigned int v6; // r8d
  struct OBJECT *v7; // rbx
  struct HOBJ__ *v8; // rsi
  PVOID Entry; // [rsp+30h] [rbp-20h] BYREF
  __int64 v12; // [rsp+38h] [rbp-18h] BYREF
  struct _RECTL v13; // [rsp+40h] [rbp-10h] BYREF

  v13.left = a1;
  v13.top = a2;
  v13.right = a3;
  v13.bottom = a4;
  v4 = a1 & 0xF8000000;
  if ( v4 && v4 != -134217728
    || (v5 = a4 & 0xF8000000) != 0 && v5 != -134217728
    || (v6 = a3 & 0xF8000000) != 0 && v6 != -134217728
    || (((a2 & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0 )
  {
    EngSetLastError(0x57u);
    return 0LL;
  }
  else
  {
    RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&Entry, 0x70u);
    v7 = (struct OBJECT *)Entry;
    if ( Entry )
    {
      ERECTL::vOrder((ERECTL *)&v13);
      RGNOBJ::vSet((RGNOBJ *)&Entry, &v13);
      *((_DWORD *)v7 + 20) = GrepIsPreviousModeKernel();
      v12 = 0LL;
      v8 = HmgInsertObjectHelper::Insert((HmgInsertObjectHelper *)&v12, v7, 0, 1, 4u);
      if ( !v8 )
        REGION::vDeleteREGION(v7);
      if ( v12 )
        _InterlockedDecrement((volatile signed __int32 *)(v12 + 12));
    }
    else
    {
      v8 = 0LL;
      EngSetLastError(8u);
    }
    return v8;
  }
}
