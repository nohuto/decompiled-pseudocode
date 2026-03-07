__int64 __fastcall DXGMONITOR::_GetMonitorEldInformation(DXGMONITOR *this, struct _MONITOR_PACKED_ELD_INFORMATION *a2)
{
  unsigned int v4; // r15d
  unsigned __int16 *v5; // rbx
  __int64 v6; // rcx
  _WORD *v7; // r12
  _WORD *v8; // rdi
  int v9; // eax
  void (__fastcall ***v10)(_QWORD); // rcx
  bool v11; // r13
  unsigned __int64 v12; // rax
  unsigned __int16 *v13; // rdi
  int CCDMonitorID; // eax
  NTSTATUS v15; // edi
  unsigned int Length; // r14d
  unsigned __int64 v17; // rax
  void (__fastcall ***v19)(_QWORD, __int64); // rcx
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-10h] BYREF
  void (__fastcall ***HashValue)(_QWORD, __int64); // [rsp+60h] [rbp+30h] BYREF

  v4 = 130;
  v5 = 0LL;
  if ( !a2 )
    WdLogSingleEntry0(1LL);
  if ( *((_DWORD *)this + 78) != 1 )
    WdLogSingleEntry0(1LL);
  v6 = *(_QWORD *)(*((_QWORD *)this + 27) + 160LL);
  if ( !v6 )
  {
    v8 = (_WORD *)((char *)a2 + 8);
    v7 = (_WORD *)((char *)a2 + 10);
    goto LABEL_30;
  }
  (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v6 + 24LL))(v6, &HashValue);
  if ( !HashValue )
  {
    WdLogSingleEntry0(6LL);
    v19 = HashValue;
    HashValue = 0LL;
    if ( v19 )
      (**v19)(v19, 1LL);
    return (unsigned int)-1073741801;
  }
  v7 = (_WORD *)((char *)a2 + 10);
  v8 = (_WORD *)((char *)a2 + 8);
  v9 = ((__int64 (__fastcall *)(void (__fastcall ***)(_QWORD, __int64), char *, char *))(*HashValue)[14])(
         HashValue,
         (char *)a2 + 8,
         (char *)a2 + 10);
  v10 = (void (__fastcall ***)(_QWORD))HashValue;
  v11 = v9 >= 0;
  HashValue = 0LL;
  if ( v10 )
    (**v10)(v10);
  if ( !v11 )
  {
LABEL_30:
    *v8 = 0;
    *v7 = 0;
    goto LABEL_10;
  }
  while ( 1 )
  {
LABEL_10:
    v4 *= 2;
    v12 = 2LL * v4;
    v13 = v5;
    if ( !is_mul_ok(v4, 2uLL) )
      v12 = -1LL;
    v5 = (unsigned __int16 *)operator new[](v12, 0x4D677844u, 256LL);
    if ( v13 )
      operator delete(v13);
    if ( !v5 )
      break;
    CCDMonitorID = DXGMONITOR::GetCCDMonitorID(this, 0, v4, v5);
    v15 = CCDMonitorID;
    if ( CCDMonitorID != -2147483643 && CCDMonitorID != -1073741789 )
    {
      if ( CCDMonitorID < 0 )
      {
        WdLogSingleEntry2(2LL, this, CCDMonitorID);
      }
      else
      {
        LODWORD(HashValue) = 0;
        DestinationString = 0LL;
        RtlInitUnicodeString(&DestinationString, v5);
        Length = DestinationString.Length;
        DestinationString.Length = (DestinationString.Length >> 1) & 0xFFFE;
        v15 = RtlHashUnicodeString(&DestinationString, 1u, 0, (PULONG)&HashValue);
        if ( v15 < 0 )
          WdLogSingleEntry0(1LL);
        *(_QWORD *)a2 = (unsigned int)HashValue;
        if ( Length > 2 )
        {
          DestinationString.MaximumLength -= DestinationString.Length;
          v17 = (unsigned __int64)DestinationString.Length >> 1;
          DestinationString.Length = Length - DestinationString.Length;
          DestinationString.Buffer = &v5[v17];
          v15 = RtlHashUnicodeString(&DestinationString, 1u, 0, (PULONG)&HashValue);
          if ( v15 < 0 )
            WdLogSingleEntry0(1LL);
          *(_QWORD *)a2 |= (unsigned __int64)(unsigned int)HashValue << 32;
        }
      }
LABEL_24:
      operator delete(v5);
      return (unsigned int)v15;
    }
    v15 = -1073741789;
    if ( v4 >= 0x410 )
      goto LABEL_24;
  }
  WdLogSingleEntry0(6LL);
  return (unsigned int)-1073741801;
}
