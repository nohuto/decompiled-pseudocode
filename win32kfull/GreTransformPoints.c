__int64 __fastcall GreTransformPoints(HDC a1, struct _POINTL *a2, struct _POINTL *a3, int a4, int a5)
{
  unsigned __int64 v6; // rsi
  unsigned int v8; // edi
  int v9; // ebx
  int v10; // r8d
  int v11; // ebx
  unsigned int v12; // eax
  _QWORD v14[2]; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v15[3]; // [rsp+30h] [rbp-18h] BYREF

  v6 = a4;
  v8 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v14, a1);
  if ( v14[0] )
  {
    if ( (int)v6 <= 0 )
    {
      v8 = 1;
    }
    else
    {
      v9 = a5 & 0x7FFFFFFF;
      v10 = ((a5 & 0x7FFFFFFF) != 0 ? 516 : 1026) | 0x80000000;
      if ( a5 < 0 )
        v10 = (a5 & 0x7FFFFFFF) != 0 ? 516 : 1026;
      EXFORMOBJ::vQuickInit((EXFORMOBJ *)v15, (struct XDCOBJ *)v14, v10);
      if ( v15[0] )
      {
        if ( !v9 || (v11 = v9 - 1) == 0 )
        {
          v12 = EXFORMOBJ::bXform((EXFORMOBJ *)v15, a2, a3, v6);
LABEL_9:
          v8 = v12;
          goto LABEL_10;
        }
        if ( v11 == 1 )
        {
          v12 = EXFORMOBJ::bXform((EXFORMOBJ *)v15, a2, (struct _POINTFIX *)a3, v6);
          goto LABEL_9;
        }
      }
    }
  }
LABEL_10:
  if ( v14[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v14);
  return v8;
}
