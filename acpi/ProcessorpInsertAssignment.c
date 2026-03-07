__int64 __fastcall ProcessorpInsertAssignment(PVOID a1, _DWORD *a2, int a3)
{
  __int64 v4; // rbx
  __int64 result; // rax
  unsigned __int8 v8; // di
  ULONG ProcessorIndexFromNumber; // eax
  struct _RTL_RANGE_LIST *v10; // rcx
  PRTL_RANGE Range; // [rsp+20h] [rbp-48h] BYREF
  struct _RANGE_LIST_ITERATOR Iterator; // [rsp+28h] [rbp-40h] BYREF
  struct _PROCESSOR_NUMBER v13; // [rsp+78h] [rbp+10h]
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+88h] [rbp+20h] BYREF

  Range = 0LL;
  v4 = *(_QWORD *)a2;
  memset(&Iterator, 0, sizeof(Iterator));
  result = *((unsigned __int16 *)a2 + 4);
  v8 = 0;
  v13 = (struct _PROCESSOR_NUMBER)*((unsigned __int16 *)a2 + 4);
  while ( v4 )
  {
    if ( _bittest64(&v4, v8) )
    {
      v13.Number = v8;
      ProcNumber = v13;
      ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber(&ProcNumber);
      if ( ProcessorIndexFromNumber == -1 || ProcessorIndexFromNumber >= ProcessorInstanceCount )
        v10 = 0LL;
      else
        v10 = (struct _RTL_RANGE_LIST *)*((_QWORD *)ProcessorByNtNumber + ProcessorIndexFromNumber);
      if ( a3 )
        ++v10;
      RtlGetFirstRange(v10, &Iterator, &Range);
      while ( Range )
      {
        if ( LODWORD(Range->Start) == a2[5] && Range->Owner == a1 )
        {
          Range->UserData = a2;
          break;
        }
        RtlGetNextRange(&Iterator, &Range, 1u);
      }
    }
    result = v8;
    v4 &= ~(1LL << v8++);
  }
  return result;
}
