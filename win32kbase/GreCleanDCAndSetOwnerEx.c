_BOOL8 __fastcall GreCleanDCAndSetOwnerEx(HDC a1, unsigned int a2, int a3, unsigned int a4)
{
  BOOL v8; // ebx
  DC *v10[3]; // [rsp+20h] [rbp-18h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v10, a1);
  v8 = v10[0] && (unsigned int)XDCOBJ::bCleanDC(v10, 0) && (unsigned int)GreSetDCOwnerEx((__int64)a1, a2, a3, a4);
  if ( v10[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v10);
  return v8;
}
