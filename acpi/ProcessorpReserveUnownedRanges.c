__int64 __fastcall ProcessorpReserveUnownedRanges(PRTL_RANGE_LIST RangeList)
{
  __int64 v2; // rdi
  __int64 RootResourceList; // rbp
  __int64 v4; // r8
  ULONGLONG v5; // rdx
  NTSTATUS v6; // ebx
  __int64 v7; // r8
  struct _RTL_RANGE_LIST RangeLista; // [rsp+40h] [rbp-28h] BYREF

  memset(&RangeLista, 0, sizeof(RangeLista));
  RtlInitializeRangeList(&RangeLista);
  v2 = 0LL;
  RootResourceList = AcpiIrqGetRootResourceList();
  if ( *(_DWORD *)(RootResourceList + 16) )
  {
    while ( 1 )
    {
      if ( *(_BYTE *)(RootResourceList + 20 * v2 + 20) == 2 )
      {
        v5 = *(unsigned int *)(RootResourceList + 20 * v2 + 28);
        v6 = RtlAddRange(&RangeLista, v5, (unsigned int)v5, 0, 0, 0LL, 0LL);
        if ( v6 < 0 )
          break;
      }
      v2 = (unsigned int)(v2 + 1);
      if ( (unsigned int)v2 >= *(_DWORD *)(RootResourceList + 16) )
        goto LABEL_5;
    }
  }
  else
  {
LABEL_5:
    LOBYTE(v4) = 8;
    v6 = RtlInvertRangeListEx(RangeList, &RangeLista, v4, 0LL, 0LL);
    if ( v6 >= 0 )
    {
      LOBYTE(v7) = 8;
      v6 = RtlInvertRangeListEx(&RangeList[1], &RangeLista, v7, 0LL, 0LL);
    }
  }
  RtlFreeRangeList(&RangeLista);
  if ( v6 < 0 )
  {
    RtlFreeRangeList(RangeList + 1);
    RtlFreeRangeList(RangeList);
  }
  return (unsigned int)v6;
}
