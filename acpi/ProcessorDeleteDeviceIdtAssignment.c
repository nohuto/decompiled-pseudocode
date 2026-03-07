__int64 __fastcall ProcessorDeleteDeviceIdtAssignment(void *a1, int a2, unsigned int a3, int a4)
{
  char v4; // si
  char v5; // r15
  ULONGLONG v6; // r13
  __int64 v7; // rdi
  int v8; // r12d
  PVOID v9; // rbx
  struct _RTL_RANGE_LIST *v10; // r14
  _DWORD *UserData; // rbx
  unsigned int v12; // r12d
  __int64 v13; // rdx
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+20h] [rbp-30h] BYREF
  PRTL_RANGE Range; // [rsp+28h] [rbp-28h] BYREF
  _RANGE_LIST_ITERATOR Iterator; // [rsp+30h] [rbp-20h] BYREF
  int v20; // [rsp+A8h] [rbp+58h]

  v20 = a4;
  Range = 0LL;
  ProcNumber = 0;
  v4 = 0;
  v5 = 0;
  v6 = a3;
  v7 = 0LL;
  v8 = a2;
  v9 = a1;
  memset(&Iterator, 0, sizeof(Iterator));
  if ( !ProcessorInstanceCount )
    return 3221226021LL;
  do
  {
    v10 = (struct _RTL_RANGE_LIST *)*((_QWORD *)ProcessorByNtNumber + v7);
    if ( v10 )
    {
      if ( a4 )
        ++v10;
      RtlGetFirstRange(v10, &Iterator, &Range);
      while ( Range )
      {
        if ( Range->Owner == v9 && LODWORD(Range->Start) == (_DWORD)v6 )
        {
          UserData = Range->UserData;
          if ( UserData && UserData[4] == v8 )
          {
            v12 = UserData[6] - 1 + UserData[5];
            KeGetProcessorNumberFromIndex(v7, &ProcNumber);
            v13 = *(_QWORD *)UserData & ~(1LL << ProcNumber.Number);
            *(_QWORD *)UserData = v13;
            if ( !v13 )
            {
              ExFreePoolWithTag(UserData, 0);
              v4 = 1;
            }
            v9 = a1;
            v5 = 1;
            Range->UserData = 0LL;
            RtlDeleteRange(v10, v6, v12, a1);
            v8 = a2;
            break;
          }
          v9 = a1;
        }
        RtlGetNextRange(&Iterator, &Range, 1u);
      }
      a4 = v20;
    }
    v7 = (unsigned int)(v7 + 1);
  }
  while ( (unsigned int)v7 < ProcessorInstanceCount );
  if ( v5 )
    return v4 == 0 ? 0xC0000001 : 0;
  else
    return 3221226021LL;
}
