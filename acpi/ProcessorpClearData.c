void __fastcall ProcessorpClearData(int a1)
{
  __int64 v1; // rbx
  struct _RTL_RANGE_LIST *v3; // rsi
  _QWORD *UserData; // rdi
  __int64 v5; // rdx
  struct _RANGE_LIST_ITERATOR Iterator; // [rsp+20h] [rbp-20h] BYREF
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+68h] [rbp+28h] BYREF
  PRTL_RANGE Range; // [rsp+70h] [rbp+30h] BYREF

  Range = 0LL;
  ProcNumber = 0;
  v1 = 0LL;
  memset(&Iterator, 0, sizeof(Iterator));
  if ( ProcessorInstanceCount )
  {
    do
    {
      v3 = (struct _RTL_RANGE_LIST *)*((_QWORD *)ProcessorByNtNumber + v1);
      if ( v3 )
      {
        if ( a1 )
          ++v3;
        RtlGetFirstRange(v3, &Iterator, &Range);
        while ( Range )
        {
          UserData = Range->UserData;
          if ( UserData )
          {
            KeGetProcessorNumberFromIndex(v1, &ProcNumber);
            v5 = *UserData & ~(1LL << ProcNumber.Number);
            *UserData = v5;
            if ( !v5 )
              ExFreePoolWithTag(UserData, 0);
            Range->UserData = 0LL;
          }
          RtlGetNextRange(&Iterator, &Range, 1u);
        }
        RtlFreeRangeList(v3);
      }
      v1 = (unsigned int)(v1 + 1);
    }
    while ( (unsigned int)v1 < ProcessorInstanceCount );
  }
}
