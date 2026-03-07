__int64 __fastcall GreRestoreDC(HDC a1, int a2)
{
  unsigned int v3; // ebx
  _QWORD v5[3]; // [rsp+20h] [rbp-18h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v5, a1);
  v3 = 0;
  if ( v5[0] )
    v3 = GrepRestoreDCOBJ((struct XDCOBJ *)v5, a2);
  else
    EngSetLastError(6u);
  DCOBJ::~DCOBJ((DCOBJ *)v5);
  return v3;
}
