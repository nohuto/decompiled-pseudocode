LONG WheapLogAddToDefectListFail()
{
  _DWORD Src[8]; // [rsp+20h] [rbp-38h] BYREF

  Src[3] = 0;
  Src[7] = 0;
  Src[0] = 1733060695;
  Src[1] = 1;
  Src[2] = 32;
  Src[5] = -2147483569;
  Src[4] = 1280201291;
  Src[6] = 2;
  return WheaLogInternalEvent(Src);
}
