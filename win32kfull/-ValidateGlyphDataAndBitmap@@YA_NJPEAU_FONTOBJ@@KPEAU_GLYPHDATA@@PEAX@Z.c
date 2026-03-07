char __fastcall ValidateGlyphDataAndBitmap(int a1, struct _FONTOBJ *a2, int a3, struct _GLYPHDATA *a4, int *a5)
{
  _QWORD v10[3]; // [rsp+20h] [rbp-18h] BYREF

  if ( a1 < 0 )
    return 0;
  if ( a3 != 3 )
  {
    if ( !(unsigned int)Feature_Servicing_MSRC86686AppCompatRegression__private_IsEnabledDeviceUsage() )
    {
      if ( a4 && !a2[10].iUniq && (a4->rclInk.right - a4->rclInk.left < 0 || a4->rclInk.bottom - a4->rclInk.top < 0) )
      {
        v10[0] = 0LL;
        RFONTOBJ::~RFONTOBJ((RFONTOBJ *)v10);
        return 0;
      }
      v10[0] = 0LL;
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)v10);
    }
    if ( a5 && a3 == 1 && ((unsigned int)a1 < 0x10 || a5[2] < 0 || a5[3] < 0) )
      return 0;
  }
  return 1;
}
