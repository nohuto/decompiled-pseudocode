__int64 __fastcall GreGetRandomRgn(HDC a1, HRGN a2, int a3)
{
  DC *v7; // rcx
  __int64 v8; // rcx
  unsigned int v9; // ebx
  int v10; // ebx
  int v11; // ebx
  int v12; // ebx
  __int64 v13; // rcx
  __int64 v14; // r8
  bool v15; // zf
  DC *v16[2]; // [rsp+30h] [rbp-49h] BYREF
  _QWORD v17[2]; // [rsp+40h] [rbp-39h] BYREF
  _QWORD v18[3]; // [rsp+50h] [rbp-29h] BYREF
  __int64 v19; // [rsp+68h] [rbp-11h] BYREF
  _BYTE v20[80]; // [rsp+70h] [rbp-9h] BYREF
  struct _POINTL v21; // [rsp+F8h] [rbp+7Fh] BYREF

  if ( !(unsigned int)Feature_3160330556__private_IsEnabledDeviceUsage() )
    return GreGetRandomRgn_Unpatched(a1, a2, a3);
  DCOBJ::DCOBJ((DCOBJ *)v16, a1);
  if ( !v16[0] )
    goto LABEL_4;
  if ( *((_WORD *)v16[0] + 6) != 1 )
  {
    TraceLoggingWriteUnsupportedGdiUsage(21LL, 0LL, *((unsigned __int16 *)v16[0] + 6));
LABEL_4:
    EngSetLastError(6u);
LABEL_5:
    DCOBJ::~DCOBJ((DCOBJ *)v16);
    return 0xFFFFFFFFLL;
  }
  DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v20);
  if ( !DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v20, (struct XDCOBJ *)v16, 1) )
  {
    DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v20);
    goto LABEL_5;
  }
  RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v18, a2, 0, 0);
  if ( !v18[0] )
    goto LABEL_18;
  v7 = v16[0];
  if ( a3 != 4 )
  {
    v10 = a3 - 1;
    if ( v10 )
    {
      v11 = v10 - 1;
      if ( v11 )
      {
        v12 = v11 - 1;
        if ( v12 )
        {
          if ( (unsigned int)(v12 - 1) >= 2 )
          {
            v9 = 0;
            goto LABEL_35;
          }
          goto LABEL_24;
        }
        v14 = *((_QWORD *)v16[0] + 21);
        v7 = (DC *)*((_QWORD *)v16[0] + 20);
        if ( v14 )
        {
          v15 = v7 == 0LL;
          if ( v7 )
          {
            v17[0] = *((_QWORD *)v16[0] + 20);
            v19 = v14;
            v9 = RGNOBJAPI::iCombine((RGNOBJAPI *)v18, (struct RGNOBJ *)v17, (struct RGNOBJ *)&v19, 1) != 0 ? 1 : -1;
            goto LABEL_35;
          }
        }
        else
        {
          v15 = v7 == 0LL;
        }
        if ( !v15 )
          v14 = *((_QWORD *)v16[0] + 20);
      }
      else
      {
        v14 = *((_QWORD *)v16[0] + 21);
      }
    }
    else
    {
      v14 = *((_QWORD *)v16[0] + 20);
    }
    v9 = lambda_27add1e8d57a913bfbcc33c9b5f13734_::operator()(v7, v18, v14);
    goto LABEL_35;
  }
  if ( (*((_DWORD *)v16[0] + 9) & 0x4000) == 0 )
  {
LABEL_24:
    DC::AcquireDcVisRgnShared(v16[0]);
    v9 = lambda_27add1e8d57a913bfbcc33c9b5f13734_::operator()(v13, v18, *((_QWORD *)v16[0] + 142));
    goto LABEL_14;
  }
  DC::AcquireDcVisRgnShared(v16[0]);
  v9 = lambda_27add1e8d57a913bfbcc33c9b5f13734_::operator()(v8, v18, *((_QWORD *)v16[0] + 142));
  if ( v9 == 1 )
  {
    wil::details::lambda_call<_lambda_d4ac050843a32da14874304f2689d2a8_>::~lambda_call<_lambda_d4ac050843a32da14874304f2689d2a8_>(v17);
    v21 = 0LL;
    if ( (unsigned int)UserGetRedirectedWindowOrigin((__int64)a1, (__int64)&v21) && RGNOBJ::bOffset((RGNOBJ *)v18, &v21) )
    {
      v9 = 1;
      goto LABEL_35;
    }
LABEL_18:
    v9 = -1;
    goto LABEL_35;
  }
LABEL_14:
  wil::details::lambda_call<_lambda_d4ac050843a32da14874304f2689d2a8_>::~lambda_call<_lambda_d4ac050843a32da14874304f2689d2a8_>(v17);
LABEL_35:
  RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v18);
  DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v20);
  DCOBJ::~DCOBJ((DCOBJ *)v16);
  return v9;
}
