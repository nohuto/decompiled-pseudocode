void __fastcall HUBREG_QueryUsbflagsAlternateSettingFilter(__int64 a1, __int64 a2)
{
  unsigned __int16 v4; // r9
  __int64 Pool2; // rax
  unsigned int v6; // [rsp+60h] [rbp+18h] BYREF
  int v7; // [rsp+68h] [rbp+20h] BYREF

  v7 = 0;
  v6 = 0;
  if ( (*(unsigned int (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const wchar_t *, _QWORD, _QWORD, unsigned int *, int *))(WdfFunctions_01015 + 1880))(
         WdfDriverGlobals,
         a2,
         L",.",
         0LL,
         0LL,
         &v6,
         &v7) == -2147483643 )
  {
    if ( !v6 || (v6 & 1) != 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return;
      v4 = 20;
      goto LABEL_19;
    }
    if ( v7 != 3 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return;
      v4 = 21;
LABEL_19:
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
        2u,
        5u,
        v4,
        (__int64)&WPP_7a0afab5c79d3741c23ff4ee70090e0b_Traceguids);
      return;
    }
    Pool2 = ExAllocatePool2(64LL, v6 + 6LL, 1681082453LL);
    *(_QWORD *)(a1 + 2448) = Pool2;
    if ( !Pool2 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return;
      v4 = 22;
      goto LABEL_19;
    }
    if ( (*(int (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const wchar_t *, _QWORD, __int64, _QWORD, _QWORD))(WdfFunctions_01015 + 1880))(
           WdfDriverGlobals,
           a2,
           L",.",
           v6,
           Pool2 + 4,
           0LL,
           0LL) >= 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
          4u,
          5u,
          0x18u,
          (__int64)&WPP_7a0afab5c79d3741c23ff4ee70090e0b_Traceguids);
      **(_DWORD **)(a1 + 2448) = v6 >> 1;
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
          2u,
          5u,
          0x17u,
          (__int64)&WPP_7a0afab5c79d3741c23ff4ee70090e0b_Traceguids);
      ExFreePoolWithTag(*(PVOID *)(a1 + 2448), 0x64334855u);
      *(_QWORD *)(a1 + 2448) = 0LL;
    }
  }
}
