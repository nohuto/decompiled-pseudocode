__int64 __fastcall IopLiveDumpMarkImportantDumpData(__int64 a1, __int64 a2)
{
  const EVENT_DESCRIPTOR *v2; // r12
  __int64 MillisecondCounter; // r15
  unsigned int v4; // r14d
  int v6; // eax
  __int64 v7; // rbx
  __int64 (__fastcall **v8)(); // rsi
  int v9; // eax
  __int64 v10; // rax
  int v12; // [rsp+30h] [rbp-29h] BYREF
  _QWORD v13[6]; // [rsp+38h] [rbp-21h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+68h] [rbp+Fh] BYREF
  int *v15; // [rsp+78h] [rbp+1Fh]
  int v16; // [rsp+80h] [rbp+27h]
  int v17; // [rsp+84h] [rbp+2Bh]

  v12 = 0;
  v2 = (const EVENT_DESCRIPTOR *)LIVEDUMP_EVENT_SIZING_WORKFLOW_FEATURE_CALLOUT;
  v13[3] = 0LL;
  MillisecondCounter = 0LL;
  v13[1] = 0LL;
  v4 = 0;
  v13[5] = 1LL;
  v13[2] = a1 + 544;
  v13[0] = IoSetDumpRange;
  v6 = *(_DWORD *)(a1 + 80);
  v13[4] = a2;
  if ( (v6 & 1) == 0 )
    v2 = &LIVEDUMP_EVENT_CAPTURE_PAGES_WORKFLOW_FEATURE_CALLOUT;
  if ( (v6 & 0x80u) != 0 )
    MillisecondCounter = IopLiveDumpGetMillisecondCounter(0);
  v7 = 0LL;
  v8 = off_140C074B8;
  while ( 1 )
  {
    v12 = ((__int64 (__fastcall *)(__int64))v8[1])(a1);
    if ( !v12 )
      goto LABEL_10;
    v9 = ((__int64 (__fastcall *)(__int64, _QWORD *))*v8)(a1, v13);
    if ( v9 >= 0 )
      goto LABEL_10;
    if ( v9 == -1073741789 )
      break;
    v4 = v9;
LABEL_10:
    if ( IopLiveDumpIsTracingEnabled() )
    {
      UserData.Reserved = 0;
      v17 = 0;
      UserData.Ptr = (ULONGLONG)&AddPageCallouts + 24 * v7;
      UserData.Size = 4;
      v15 = &v12;
      v16 = 4;
      EtwWrite(IopLiveDumpEtwRegHandle, v2, 0LL, 2u, &UserData);
    }
    v7 = (unsigned int)(v7 + 1);
    v8 += 3;
    if ( (unsigned int)v7 >= 6 )
      goto LABEL_15;
  }
  v4 = 0;
LABEL_15:
  if ( (*(_DWORD *)(a1 + 80) & 0x80u) != 0 )
  {
    v10 = IopLiveDumpGetMillisecondCounter(0);
    IopLiveDumpTraceMarkImportantDumpDataDuration(a1, v10 - MillisecondCounter);
  }
  return v4;
}
