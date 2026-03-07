__int64 __fastcall IrqTranslateResources(__int64 a1, __int64 a2, int a3, __int64 a4, int a5, __int64 a6, _OWORD *a7)
{
  _OWORD *v7; // rbx
  int DeviceIdtAssignment; // edi
  __int64 v9; // r15
  unsigned int v13; // eax
  __int64 v14; // rdx
  char v15; // si
  PRTL_RANGE v16; // rax
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  int v20; // [rsp+20h] [rbp-51h]
  __int128 v21; // [rsp+50h] [rbp-21h] BYREF
  __int128 v22; // [rsp+60h] [rbp-11h]
  struct _RANGE_LIST_ITERATOR Iterator; // [rsp+70h] [rbp-1h] BYREF
  PRTL_RANGE Range; // [rsp+C0h] [rbp+4Fh] BYREF

  v7 = a7;
  Range = 0LL;
  DeviceIdtAssignment = 0;
  v9 = a6;
  v21 = 0LL;
  v22 = 0LL;
  memset(&Iterator, 0, sizeof(Iterator));
  *a7 = *(_OWORD *)a2;
  *((_DWORD *)v7 + 4) = *(_DWORD *)(a2 + 16);
  if ( v9 == a1 )
    return 0LL;
  IrqLibAcquireArbiterLock(0);
  if ( a3 )
  {
    if ( a3 == 1 )
      DeviceIdtAssignment = -1073741637;
  }
  else
  {
    v13 = IrqArbGsivFromIrq(*(unsigned int *)(a2 + 8));
    DeviceIdtAssignment = ProcessorGetDeviceIdtAssignment(0LL, v13, 0LL, &v21);
    if ( DeviceIdtAssignment < 0 )
    {
      v15 = 0;
      RtlGetFirstRange(RangeList, &Iterator, &Range);
      v16 = Range;
      if ( !Range )
        goto LABEL_13;
      do
      {
        if ( v16->Owner == (PVOID)v9 )
          v15 = 1;
        RtlGetNextRange(&Iterator, &Range, 1u);
        v16 = Range;
      }
      while ( Range );
      if ( !v15 )
      {
LABEL_13:
        DeviceIdtAssignment = 0;
        *v7 = *(_OWORD *)a2;
        *((_DWORD *)v7 + 4) = *(_DWORD *)(a2 + 16);
      }
    }
    else
    {
      v14 = DWORD1(v22);
      *((_WORD *)v7 + 3) = WORD4(v21);
      *(_QWORD *)((char *)v7 + 12) = v21;
      *((_DWORD *)v7 + 2) = v14;
      DeviceIdtAssignment = 288;
      *((_WORD *)v7 + 2) = (unsigned __int8)IrqTranslatepQueryDeviceIrql(*(unsigned int *)(a2 + 8), v14);
    }
  }
  IrqLibReleaseArbiterLock();
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_dDDq((__int64)WPP_GLOBAL_Control->DeviceExtension, v17, v18, v19, v20);
  return (unsigned int)DeviceIdtAssignment;
}
