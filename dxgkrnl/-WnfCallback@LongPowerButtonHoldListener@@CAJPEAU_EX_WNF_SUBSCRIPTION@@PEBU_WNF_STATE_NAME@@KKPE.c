__int64 __fastcall LongPowerButtonHoldListener::WnfCallback(
        struct _EX_WNF_SUBSCRIPTION *a1,
        const struct _WNF_STATE_NAME *a2,
        __int64 a3,
        __int64 a4,
        const struct _WNF_TYPE_ID *a5,
        char *a6)
{
  __int64 v6; // rcx
  _BYTE OutputBuffer[4]; // [rsp+30h] [rbp-29h] BYREF
  int v9; // [rsp+34h] [rbp-25h] BYREF
  int v10; // [rsp+38h] [rbp-21h] BYREF
  __int64 InputBuffer; // [rsp+40h] [rbp-19h] BYREF
  int v12; // [rsp+48h] [rbp-11h] BYREF
  __int64 v13; // [rsp+4Ch] [rbp-Dh]
  int v14; // [rsp+54h] [rbp-5h]
  __int64 v15; // [rsp+58h] [rbp-1h]
  __int64 v16; // [rsp+60h] [rbp+7h]
  _BYTE v17[16]; // [rsp+68h] [rbp+Fh] BYREF
  _BYTE v18[24]; // [rsp+78h] [rbp+1Fh] BYREF

  if ( *a2 == WNF_PO_POWER_BUTTON_STATE )
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v17, (struct DXGFASTMUTEX *const)(a6 + 24), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v17);
    v6 = *(_QWORD *)a6;
    v10 = 0;
    v9 = 24;
    memset(v18, 0, sizeof(v18));
    if ( (int)ExQueryWnfStateData(v6, &v10, v18, &v9) >= 0 && v9 == 24 )
    {
      if ( (v18[0] & 1) != 0 )
      {
        if ( *(_DWORD *)v18 >> 1 < *((_DWORD *)a6 + 3) || a6[8] )
        {
          if ( *(_DWORD *)v18 >> 1 >= *((_DWORD *)a6 + 4) && !a6[9] )
          {
            OutputBuffer[0] = 0;
            InputBuffer = 49LL;
            if ( ZwPowerInformation(SystemPowerStateLogging|0x40, &InputBuffer, 8u, OutputBuffer, 1u) < 0
              || !OutputBuffer[0] )
            {
              v13 = 0LL;
              v14 = 0;
              v16 = 0LL;
              v12 = 16;
              v15 = 2LL;
              SMgrGdiCallout(&v12, 0x200000000LL, 0LL, 0LL, 0LL, 0LL);
              a6[9] = 1;
            }
          }
        }
        else
        {
          v13 = 0LL;
          v14 = 0;
          v16 = 0LL;
          *(_OWORD *)(a6 + 72) = *(_OWORD *)&v18[8];
          v12 = 16;
          v15 = 1LL;
          SMgrGdiCallout(&v12, 0x200000000LL, 0LL, 0LL, 0LL, 0LL);
          a6[8] = 1;
        }
      }
      else
      {
        *((_WORD *)a6 + 4) = 0;
      }
    }
    if ( v17[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v17);
  }
  return 0LL;
}
