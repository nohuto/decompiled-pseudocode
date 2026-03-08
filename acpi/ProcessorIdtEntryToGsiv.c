/*
 * XREFs of ProcessorIdtEntryToGsiv @ 0x1C009AD78
 * Callers:
 *     IrqLibpGetVectorInput @ 0x1C005CD50 (IrqLibpGetVectorInput.c)
 *     IrqLibFreeMessageTarget @ 0x1C0099250 (IrqLibFreeMessageTarget.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ProcessorIdtEntryToGsiv(int a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  unsigned __int16 v5; // ax
  unsigned __int8 v6; // bl
  __int64 v7; // r8
  ULONG ProcessorIndexFromNumber; // eax
  struct _RTL_RANGE_LIST *v11; // rcx
  __int64 result; // rax
  PRTL_RANGE Range; // [rsp+20h] [rbp-30h] BYREF
  struct _RANGE_LIST_ITERATOR Iterator; // [rsp+28h] [rbp-28h] BYREF
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+78h] [rbp+28h] BYREF
  struct _PROCESSOR_NUMBER v16; // [rsp+80h] [rbp+30h]

  v16 = 0;
  Range = 0LL;
  v5 = *(_WORD *)(a2 + 8);
  v6 = 0;
  v7 = *(_QWORD *)a2;
  memset(&Iterator, 0, sizeof(Iterator));
  v16.Group = v5;
  while ( v7 )
  {
    if ( _bittest64(&v7, v6) )
    {
      v16.Number = v6;
      ProcNumber = v16;
      ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber(&ProcNumber);
      if ( ProcessorIndexFromNumber != -1 && ProcessorIndexFromNumber < ProcessorInstanceCount )
      {
        v11 = (struct _RTL_RANGE_LIST *)*((_QWORD *)ProcessorByNtNumber + ProcessorIndexFromNumber);
        if ( v11 )
        {
          RtlGetFirstRange(v11, &Iterator, &Range);
          while ( Range )
          {
            if ( LODWORD(Range->Start) == a1 )
            {
              result = 0LL;
              *a4 = *((_DWORD *)Range->UserData + 4);
              return result;
            }
            RtlGetNextRange(&Iterator, &Range, 1u);
          }
        }
      }
    }
    v7 = *(_QWORD *)a2 & ~(1LL << v6);
    *(_QWORD *)a2 = v7;
    ++v6;
  }
  return 3221226021LL;
}
