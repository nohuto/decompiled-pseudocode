__int64 __fastcall lambda_c820ae13d6b077cc6710fe5fbb8b13a3_::operator()(__int64 **a1)
{
  __int64 v2; // rsi
  __int64 *v4; // rax
  struct DXGGLOBAL *Global; // rax
  __int64 *v6; // rdx
  struct DXGGLOBAL *v7; // r11
  struct _LUID *v8; // r10
  __int64 v9; // rax
  __int64 v10; // r8
  struct _LUID v11; // [rsp+50h] [rbp-38h] BYREF
  DWORD LowPart; // [rsp+58h] [rbp-30h]
  int v13; // [rsp+5Ch] [rbp-2Ch]
  __int64 v14; // [rsp+60h] [rbp-28h]
  int v15; // [rsp+68h] [rbp-20h]
  __int64 v16; // [rsp+6Ch] [rbp-1Ch]
  int v17; // [rsp+74h] [rbp-14h]
  __int64 v18; // [rsp+78h] [rbp-10h]

  v2 = *(_QWORD *)(*(_QWORD *)(**a1 + 96) + 608LL);
  if ( *(_DWORD *)(v2 + 392) >= 0x23u )
  {
    Feature_VAIL_Vsync_Projection__private_ReportDeviceUsage();
    if ( *(_QWORD *)(v2 + 320) )
    {
      v4 = a1[1];
      if ( *(_DWORD *)(*v4 + 36) < 0x10u )
      {
        if ( *(_DWORD *)(*v4 + 40) < 2u )
        {
          Global = DXGGLOBAL::GetGlobal();
          v6 = *a1;
          v7 = Global;
          v8 = (struct _LUID *)*a1[1];
          v9 = **a1;
          if ( (v8[5].LowPart & 1) != 0 )
          {
            v10 = *(_QWORD *)(*(_QWORD *)(v9 + 96) + 608LL);
            v13 = 0;
            v16 = 0LL;
            v17 = 0;
            v14 = *(_QWORD *)(*v6 + 104) + 160LL;
            v11 = v8[3];
            LowPart = v8[4].LowPart;
            v18 = *(_QWORD *)(v10 + 320) + 32LL * (unsigned int)v8[4].HighPart + 8;
            v15 = *(_DWORD *)(v10 + 392);
            return HOSTVMMONITORMAPPING::AddMapping((KSPIN_LOCK *)v7 + 38111, &v11);
          }
          else
          {
            return HOSTVMMONITORMAPPING::RemoveMapping(
                     (struct DXGGLOBAL *)((char *)v7 + 304888),
                     (void *)(*(_QWORD *)(v9 + 104) + 160LL),
                     v8[3],
                     v8[4].LowPart,
                     0LL);
          }
        }
        else
        {
          WdLogSingleEntry1(2LL, 8266LL);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Flags.Unused was not zero, failing request",
            8266LL,
            0LL,
            0LL,
            0LL,
            0LL);
          return 3221225714LL;
        }
      }
      else
      {
        WdLogSingleEntry1(2LL, 8260LL);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"SharedDataIndex was not out of range, failing request",
          8260LL,
          0LL,
          0LL,
          0LL,
          0LL);
        return 3221225713LL;
      }
    }
    else
    {
      WdLogSingleEntry1(2LL, 8254LL);
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Shared page is not enabled", 8254LL, 0LL, 0LL, 0LL, 0LL);
      return 3221225485LL;
    }
  }
  else
  {
    WdLogSingleEntry1(2LL, 8241LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Message is not supported from this guest VM",
      8241LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225659LL;
  }
}
