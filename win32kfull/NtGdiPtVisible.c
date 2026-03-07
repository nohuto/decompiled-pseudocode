__int64 __fastcall NtGdiPtVisible(HDC a1, LONG a2, LONG a3)
{
  unsigned int v6; // ebx
  __int64 v7; // rcx
  struct REGION *v8; // [rsp+38h] [rbp-29h] BYREF
  DC *v9[2]; // [rsp+40h] [rbp-21h] BYREF
  _BYTE v10[24]; // [rsp+50h] [rbp-11h] BYREF
  _BYTE v11[32]; // [rsp+68h] [rbp+7h] BYREF
  __int64 v12; // [rsp+88h] [rbp+27h] BYREF
  int v13; // [rsp+90h] [rbp+2Fh]
  int v14; // [rsp+94h] [rbp+33h]
  __int16 v15; // [rsp+98h] [rbp+37h]
  struct _POINTL v16; // [rsp+E0h] [rbp+7Fh] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v9, a1);
  if ( !v9[0] )
  {
    EngSetLastError(6u);
    DCOBJ::~DCOBJ((DCOBJ *)v9);
    return 0xFFFFFFFFLL;
  }
  v6 = 1;
  if ( *((_WORD *)v9[0] + 6) == 1 )
  {
    v12 = 0LL;
    v13 = 0;
    v14 = 0;
    v15 = 256;
    DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v11, (struct XDCOBJ *)v9, 1);
    if ( (v11[24] & 1) != 0 )
    {
      v8 = XDCOBJ::prgnEffRao(v9);
      v16.x = a2;
      v16.y = a3;
      EXFORMOBJ::vQuickInit((EXFORMOBJ *)v10, (struct XDCOBJ *)v9, -2147483132);
      EXFORMOBJ::bXform((EXFORMOBJ *)v10, &v16, 1LL);
      v7 = *((_DWORD *)v9[0] + 10) & 1LL;
      v16.x += *((_DWORD *)v9[0] + 2 * v7 + 254);
      v16.y += *((_DWORD *)v9[0] + 2 * v7 + 255);
      v6 = RGNOBJ::bInside((RGNOBJ *)&v8, &v16) == 2;
      DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v11);
      if ( v12 )
        DLODCOBJ::vUnlock((DLODCOBJ *)&v12);
      if ( v9[0] )
        XDCOBJ::vUnlockFast((XDCOBJ *)v9);
      return v6;
    }
    DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v11);
  }
  else
  {
    TraceLoggingWriteUnsupportedGdiUsage(21, 0LL, *((unsigned __int16 *)v9[0] + 6), 6LL, 0LL);
    EngSetLastError(6u);
    v6 = -1;
  }
  DCOBJ::~DCOBJ((DCOBJ *)v9);
  return v6;
}
