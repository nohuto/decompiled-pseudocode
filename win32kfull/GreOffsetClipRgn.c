__int64 __fastcall GreOffsetClipRgn(HDC a1, LONG a2, LONG a3)
{
  __int64 v5; // rcx
  unsigned int v6; // ebx
  unsigned int v8; // eax
  __int64 v9; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v10[4]; // [rsp+28h] [rbp-20h] BYREF
  struct _POINTL v11; // [rsp+68h] [rbp+20h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v10, a1);
  v5 = v10[0];
  v6 = 0;
  if ( v10[0] )
  {
    v11.x = a2;
    v11.y = a3;
    v9 = *(_QWORD *)(v10[0] + 160LL);
    if ( v9 )
    {
      v8 = RGNOBJ::bOffset((RGNOBJ *)&v9, &v11);
      v5 = v10[0];
      v6 = v8;
    }
    else
    {
      v6 = 1;
    }
    if ( v5 )
      XDCOBJ::vUnlockFast((XDCOBJ *)v10);
  }
  return v6;
}
