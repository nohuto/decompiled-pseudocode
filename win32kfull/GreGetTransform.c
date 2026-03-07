__int64 __fastcall GreGetTransform(HDC a1, int a2, struct _XFORML *a3)
{
  unsigned int v5; // ebx
  __int64 v6; // rax
  _QWORD v8[2]; // [rsp+20h] [rbp-50h] BYREF
  _QWORD v9[2]; // [rsp+30h] [rbp-40h] BYREF
  _OWORD v10[2]; // [rsp+40h] [rbp-30h] BYREF
  int v11; // [rsp+60h] [rbp-10h]

  v5 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v8, a1);
  if ( v8[0] )
  {
    EXFORMOBJ::vQuickInit((EXFORMOBJ *)v9, (struct XDCOBJ *)v8, a2 | 0x80000000);
    v11 = 0;
    v6 = v9[0];
    memset(v10, 0, sizeof(v10));
    if ( v9[0] )
      goto LABEL_6;
    if ( a2 == 772 )
    {
      EXFORMOBJ::vInitPageToDevice((EXFORMOBJ *)v9, (struct XDCOBJ *)v8, (struct MATRIX *)v10);
      v6 = v9[0];
    }
    if ( v6 )
    {
LABEL_6:
      EXFORMOBJ::vGetCoefficient((EXFORMOBJ *)v9, a3);
      v5 = 1;
    }
  }
  if ( v8[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v8);
  return v5;
}
