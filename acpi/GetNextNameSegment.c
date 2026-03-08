/*
 * XREFs of GetNextNameSegment @ 0x1C004BA9C
 * Callers:
 *     CreateNativeNameSpaceObject @ 0x1C0049D38 (CreateNativeNameSpaceObject.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetNextNameSegment(__int64 a1, int *a2, unsigned __int64 *a3)
{
  unsigned int v3; // r9d
  __int64 v6; // r11
  int *v7; // r8
  unsigned int v8; // edx
  __int64 v9; // rsi
  unsigned __int64 v10; // rax
  int v12; // [rsp+8h] [rbp+8h] BYREF

  v3 = 0;
  v6 = a1;
  if ( a1 )
  {
    v7 = &v12;
    v12 = 1600085855;
    v8 = 0;
    while ( 1 )
    {
      LOBYTE(a1) = *((_BYTE *)v7 + v6 - (_QWORD)&v12);
      if ( !(_BYTE)a1 || (_BYTE)a1 == 46 )
        break;
      if ( (char)a1 < 97 )
      {
        if ( (unsigned __int8)(a1 - 48) > 0x2Fu )
          return (unsigned int)-1073741811;
        v9 = 0x87FFFFFE03FFLL;
        if ( !_bittest64(&v9, (unsigned int)(a1 - 48)) )
          return (unsigned int)-1073741811;
      }
      else if ( (char)a1 > 122 )
      {
        return (unsigned int)-1073741811;
      }
      *(_BYTE *)v7 = a1;
      ++v8;
      v7 = (int *)((char *)v7 + 1);
      if ( v8 >= 4 )
        goto LABEL_14;
    }
    if ( !v8 )
      return (unsigned int)-1073741197;
LABEL_14:
    *a2 = v12;
    v10 = v6 + v8;
    if ( *(_BYTE *)v10 == 46 )
      *a3 = v10 + 1;
    else
      *a3 = v10 & -(__int64)(*(_BYTE *)v10 != 0);
  }
  else
  {
    return (unsigned int)-1073741197;
  }
  return v3;
}
