__int64 __fastcall InkDeviceParser::GetDeviceFeatures(
        struct _HIDP_PREPARSED_DATA *a1,
        CHAR *a2,
        ULONG a3,
        const struct UsageValueInfo *a4,
        struct InkDevice::Features *a5)
{
  int ReportUsages; // eax
  unsigned int v7; // edi
  int v8; // eax
  int v10; // [rsp+40h] [rbp-41h] BYREF
  ULONG v11[9]; // [rsp+48h] [rbp-39h] BYREF
  unsigned int v12; // [rsp+6Ch] [rbp-15h]
  int v13; // [rsp+74h] [rbp-Dh]
  int v14; // [rsp+7Ch] [rbp-5h]
  struct _EVENT_DATA_DESCRIPTOR v15; // [rsp+80h] [rbp-1h] BYREF
  int *v16; // [rsp+A0h] [rbp+1Fh]
  int v17; // [rsp+A8h] [rbp+27h]
  int v18; // [rsp+ACh] [rbp+2Bh]

  ReportUsages = ExtractReportUsages((enum _HIDP_REPORT_TYPE)a1, a1, a4, (__int64)a4, a2, a3, v11);
  v7 = ReportUsages;
  if ( ReportUsages >= 0 )
  {
    *(_DWORD *)a5 = v11[1];
    *((_DWORD *)a5 + 1) = v11[3];
    *((_DWORD *)a5 + 2) = v11[5];
    *((_DWORD *)a5 + 3) = v11[7];
    *((_DWORD *)a5 + 4) = HIWORD(v12);
    *((_DWORD *)a5 + 5) = (unsigned __int16)v12;
    v8 = 1;
    *((_DWORD *)a5 + 7) = *((_BYTE *)a4 + 380) != 0 ? v13 : 0;
    if ( *((_BYTE *)a4 + 456) )
      v8 = v14;
    *((_DWORD *)a5 + 6) = v8;
  }
  else if ( (unsigned int)dword_1C03570E0 > 2 )
  {
    v18 = 0;
    v10 = ReportUsages;
    v17 = 4;
    v16 = &v10;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_1C03570E0, (unsigned __int8 *)dword_1C031DA06, 0LL, 0LL, 3u, &v15);
  }
  return v7;
}
