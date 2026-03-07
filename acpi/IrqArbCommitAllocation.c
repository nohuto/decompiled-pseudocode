__int64 __fastcall IrqArbCommitAllocation(__int64 a1)
{
  struct _RTL_RANGE_LIST *v2; // rcx
  _DWORD *UserData; // rax
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  int IsPciDevice; // ebx
  char *v8; // rsi
  _DWORD *v9; // rdx
  char Start; // dl
  PRTL_RANGE v11; // rcx
  struct _RTL_RANGE_LIST *v12; // rcx
  struct _RANGE_LIST_ITERATOR v14; // [rsp+20h] [rbp-40h] BYREF
  struct _RANGE_LIST_ITERATOR Iterator; // [rsp+40h] [rbp-20h] BYREF
  bool v16; // [rsp+90h] [rbp+30h] BYREF
  PRTL_RANGE v17; // [rsp+98h] [rbp+38h] BYREF
  PRTL_RANGE Range; // [rsp+A0h] [rbp+40h] BYREF

  v17 = 0LL;
  Range = 0LL;
  v16 = 0;
  v2 = *(struct _RTL_RANGE_LIST **)(a1 + 48);
  memset(&v14, 0, sizeof(v14));
  memset(&Iterator, 0, sizeof(Iterator));
  RtlGetFirstRange(v2, &Iterator, &Range);
  while ( Range )
  {
    UserData = Range->UserData;
    if ( UserData )
      UserData[1] &= ~8u;
    RtlGetNextRange(&Iterator, &Range, 1u);
  }
  IrtClearDeletedMsiMappings(a1);
  IsPciDevice = ProcessorCopyData(0LL, v4, v5, v6);
  if ( IsPciDevice < 0 )
    goto LABEL_30;
  IsPciDevice = IcRemapInputs();
  if ( IsPciDevice < 0 )
    goto LABEL_30;
  IcCopyInputStateToDeviceState(a1, 1LL);
  IsPciDevice = IcCopyData(0LL);
  if ( IsPciDevice < 0 )
    goto LABEL_30;
  ProcessorpClearData(1);
  IcClearPossibleData();
  IsPciDevice = LinkNodeWriteStateToHardware();
  if ( IsPciDevice < 0 )
    goto LABEL_30;
  IsPciDevice = LinkNodeCopyData(0);
  if ( IsPciDevice < 0 )
    goto LABEL_30;
  LinkNodeClearPossibleData();
  IsPciDevice = IrtRemapNewMsiAssignments(a1);
  if ( IsPciDevice < 0 )
    goto LABEL_30;
  RtlGetFirstRange(*(PRTL_RANGE_LIST *)(a1 + 48), &v14, &v17);
  while ( 1 )
  {
    v11 = v17;
    if ( !v17 )
      break;
    if ( v17->Owner && (v17->Attributes & 1) == 0 )
    {
      v8 = (char *)v17->UserData;
      v9 = v8 + 4;
      if ( !v8 || (*v9 & 0x10) == 0 )
      {
        IsPciDevice = PcisuppIsPciDevice((__int64)v17->Owner, &v16);
        v9 = v8 + 4;
        if ( IsPciDevice >= 0 && v16 )
        {
          if ( v17->Start <= 0xFF )
            Start = v17->Start;
          else
            Start = 0;
          PcisuppWriteIntLine((__int64)v17->Owner, Start);
          v9 = v8 + 4;
        }
        v11 = v17;
      }
      if ( v8 )
      {
        if ( (*v9 & 1) != 0 )
        {
          Iterator = v14;
          IsPciDevice = IrqArbpSetDeviceProperties(v11, &Iterator);
          if ( IsPciDevice < 0 )
            goto LABEL_30;
        }
      }
    }
    RtlGetNextRange(&v14, &v17, 1u);
  }
  v12 = *(struct _RTL_RANGE_LIST **)(a1 + 40);
  *(_QWORD *)(a1 + 40) = *(_QWORD *)(a1 + 48);
  *(_QWORD *)(a1 + 48) = v12;
  RtlFreeRangeList(v12);
  ProcessorpClearData(1);
  IcClearPossibleData();
  LinkNodeClearPossibleData();
  if ( IsPciDevice < 0 )
LABEL_30:
    byte_1C006E7E8 = 0;
  return (unsigned int)IsPciDevice;
}
