__int64 __fastcall PiCMCreateObject(
        unsigned __int64 a1,
        unsigned int a2,
        _QWORD *a3,
        unsigned int a4,
        int a5,
        _DWORD *a6)
{
  int v8; // ebx
  int Object; // eax
  int v10; // r8d
  int v11; // ecx
  __int128 v13; // [rsp+40h] [rbp-38h] BYREF
  __int128 v14; // [rsp+50h] [rbp-28h]
  __int64 v15; // [rsp+60h] [rbp-18h]

  *a6 = 0;
  v13 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  v8 = PiCMCaptureObjectInputData(a1, a2, a5, (__int64)&v13);
  if ( v8 >= 0 )
  {
    if ( !PiAuDoesClientHaveAccess(2u) )
    {
      Object = -1073741790;
LABEL_16:
      v8 = PiCMReturnBasicResultData(Object, v15, a3, a4, a6);
      goto LABEL_17;
    }
    if ( !(_QWORD)v14 || DWORD1(v13) || HIDWORD(v14) || !a3 || (v10 = 8, a4 < 8) )
    {
LABEL_15:
      Object = -1073741811;
      goto LABEL_16;
    }
    if ( SDWORD2(v13) > 6 )
    {
      if ( DWORD2(v13) == 65537 )
      {
        v10 = 7;
      }
      else if ( DWORD2(v13) != 65538 )
      {
        switch ( DWORD2(v13) )
        {
          case 0x10003:
            v10 = 9;
            break;
          case 0x10004:
            v10 = 10;
            break;
          case 0x10005:
            v10 = 11;
            break;
          default:
            goto LABEL_15;
        }
      }
      if ( !PiDrvDbCtx )
        goto LABEL_15;
      v11 = v10 - 5;
      if ( (unsigned int)(v10 - 5) < 2 )
        goto LABEL_32;
    }
    else
    {
      if ( DWORD2(v13) == 6 || DWORD2(v13) == 1 )
        goto LABEL_32;
      v11 = DWORD2(v13) - 2;
      if ( DWORD2(v13) == 2 )
      {
        v10 = 2;
      }
      else
      {
        v11 = DWORD2(v13) - 3;
        if ( DWORD2(v13) != 3 )
        {
          if ( (unsigned int)(DWORD2(v13) - 4) >= 2 )
            goto LABEL_15;
LABEL_32:
          Object = -1073741637;
          goto LABEL_16;
        }
        v10 = 4;
      }
    }
    Object = PnpCreateObject(v11, v14, v10, 0, 0LL);
    goto LABEL_16;
  }
LABEL_17:
  PiCMReleaseObjectInputData((__int64)&v13);
  return (unsigned int)v8;
}
