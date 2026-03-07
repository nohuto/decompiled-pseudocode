__int64 __fastcall GrepGetTextMetricsW(HDC a1, struct _TMW_INTERNAL *a2, int a3)
{
  unsigned int v5; // ebx
  int v6; // eax
  _DWORD v8[2]; // [rsp+30h] [rbp-20h] BYREF
  _QWORD v9[3]; // [rsp+38h] [rbp-18h] BYREF
  Gre::Base *v10; // [rsp+78h] [rbp+28h] BYREF

  v5 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v9, a1);
  if ( v9[0] )
  {
    v6 = *(unsigned __int16 *)(v9[0] + 12LL);
    v10 = 0LL;
    v8[1] = v6;
    v8[0] = a3;
    if ( (unsigned int)RFONTOBJ::bInit(&v10, (struct XDCOBJ *)v9, 0, 2u, (const struct RFONTOBJ::Tag *)v8) )
      GreAcquireSemaphore(*((_QWORD *)v10 + 63));
    if ( v10 )
    {
      vGetTextMetrics((struct RFONTOBJ *)&v10, (struct DCOBJ *)v9, a2);
      v5 = 1;
    }
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v10);
    if ( v9[0] )
      XDCOBJ::vUnlockFast((XDCOBJ *)v9);
  }
  return v5;
}
