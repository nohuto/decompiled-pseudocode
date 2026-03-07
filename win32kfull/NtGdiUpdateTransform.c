__int64 __fastcall NtGdiUpdateTransform(HDC a1)
{
  unsigned int v1; // ebx
  DC *v2; // rax
  DC *v4[3]; // [rsp+20h] [rbp-18h] BYREF

  v1 = 1;
  DCOBJ::DCOBJ((DCOBJ *)v4, a1);
  v2 = v4[0];
  if ( v4[0] )
  {
    DC::vUpdateWtoDXform(v4[0]);
    v2 = v4[0];
  }
  else
  {
    v1 = 0;
  }
  if ( v2 )
    XDCOBJ::vUnlockFast((XDCOBJ *)v4);
  return v1;
}
