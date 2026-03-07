_BOOL8 __fastcall GreCleanDC(HDC a1)
{
  BOOL v1; // ebx
  DC *v3; // [rsp+20h] [rbp-18h] BYREF
  int v4; // [rsp+28h] [rbp-10h]
  int v5; // [rsp+2Ch] [rbp-Ch]

  v3 = 0LL;
  v4 = 0;
  v5 = 0;
  XDCOBJ::vLock((XDCOBJ *)&v3, a1);
  v1 = v3 && (unsigned int)XDCOBJ::bCleanDC(&v3, 0);
  if ( v3 )
    XDCOBJ::vUnlockFast((XDCOBJ *)&v3);
  return v1;
}
