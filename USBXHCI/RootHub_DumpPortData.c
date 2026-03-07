__int64 __fastcall RootHub_DumpPortData(__int64 a1, __int64 a2)
{
  char v3; // si
  __int64 result; // rax
  int v5; // edx
  unsigned int v6; // ebx
  int v7; // edx
  int v8; // edx
  int v9; // edx
  int v10; // edx
  int v11; // edx
  int v12; // edx
  int v13; // edx

  v3 = a1;
  result = XilRegister_ReadUlong(*(_QWORD *)(a2 + 88), a1);
  v6 = result;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    result = WPP_RECORDER_SF_qD(
               *(_QWORD *)(a2 + 72),
               v5,
               11,
               12,
               (__int64)&WPP_60a997f3b28234a4d1c27687c5bd6445_Traceguids,
               v3,
               result);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v7 = (v6 >> 3) & 1;
      LOBYTE(v7) = 4;
      result = WPP_RECORDER_SF_ddd(
                 *(_QWORD *)(a2 + 72),
                 v7,
                 11,
                 13,
                 (__int64)&WPP_60a997f3b28234a4d1c27687c5bd6445_Traceguids,
                 v6 & 1,
                 (v6 & 2) != 0,
                 (v6 & 8) != 0);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v8 = (v6 >> 5) & 0xF;
        LOBYTE(v8) = 4;
        result = WPP_RECORDER_SF_ddd(
                   *(_QWORD *)(a2 + 72),
                   v8,
                   11,
                   14,
                   (__int64)&WPP_60a997f3b28234a4d1c27687c5bd6445_Traceguids,
                   (v6 & 0x10) != 0,
                   (v6 & 0x200) != 0,
                   (v6 >> 5) & 0xF);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v9 = HIWORD(v6) & 1;
          LOBYTE(v9) = 4;
          result = WPP_RECORDER_SF_ddd(
                     *(_QWORD *)(a2 + 72),
                     v9,
                     11,
                     15,
                     (__int64)&WPP_60a997f3b28234a4d1c27687c5bd6445_Traceguids,
                     (v6 >> 10) & 0xF,
                     (unsigned __int16)v6 >> 14,
                     BYTE2(v6) & 1);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v10 = (v6 >> 20) & 1;
            LOBYTE(v10) = 4;
            result = WPP_RECORDER_SF_ddd(
                       *(_QWORD *)(a2 + 72),
                       v10,
                       11,
                       16,
                       (__int64)&WPP_60a997f3b28234a4d1c27687c5bd6445_Traceguids,
                       (v6 & 0x20000) != 0,
                       (v6 & 0x40000) != 0,
                       (v6 & 0x100000) != 0);
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v11 = (v6 >> 22) & 1;
              LOBYTE(v11) = 4;
              result = WPP_RECORDER_SF_ddd(
                         *(_QWORD *)(a2 + 72),
                         v11,
                         11,
                         17,
                         (__int64)&WPP_60a997f3b28234a4d1c27687c5bd6445_Traceguids,
                         (v6 & 0x80000) != 0,
                         (v6 & 0x200000) != 0,
                         (v6 & 0x400000) != 0);
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                v12 = (v6 >> 26) & 1;
                LOBYTE(v12) = 4;
                result = WPP_RECORDER_SF_ddd(
                           *(_QWORD *)(a2 + 72),
                           v12,
                           11,
                           18,
                           (__int64)&WPP_60a997f3b28234a4d1c27687c5bd6445_Traceguids,
                           (v6 & 0x800000) != 0,
                           (v6 & 0x2000000) != 0,
                           (v6 & 0x4000000) != 0);
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  LOBYTE(v13) = 4;
                  return WPP_RECORDER_SF_ddd(
                           *(_QWORD *)(a2 + 72),
                           v13,
                           11,
                           19,
                           (__int64)&WPP_60a997f3b28234a4d1c27687c5bd6445_Traceguids,
                           (v6 & 0x8000000) != 0,
                           (v6 & 0x40000000) != 0,
                           (v6 & 0x80000000) != 0);
                }
              }
            }
          }
        }
      }
    }
  }
  return result;
}
