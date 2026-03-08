/*
 * XREFs of ProcessorCopyData @ 0x1C009A964
 * Callers:
 *     AcpiIrqLibSetupSciInterrupt @ 0x1C0098DAC (AcpiIrqLibSetupSciInterrupt.c)
 *     IrqArbBootAllocation @ 0x1C009CF90 (IrqArbBootAllocation.c)
 *     IrqArbCommitAllocation @ 0x1C009D040 (IrqArbCommitAllocation.c)
 *     IrqArbpPrepareForTestOrConflict @ 0x1C009E4D0 (IrqArbpPrepareForTestOrConflict.c)
 * Callees:
 *     ProcessorpClearData @ 0x1C009B098 (ProcessorpClearData.c)
 *     ProcessorpInsertAssignment @ 0x1C009BB90 (ProcessorpInsertAssignment.c)
 */

__int64 __fastcall ProcessorCopyData(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // esi
  int v5; // eax
  __int64 v6; // rbx
  struct _RTL_RANGE_LIST *v7; // rcx
  struct _RTL_RANGE_LIST *v8; // rdx
  __int64 v9; // rdx
  NTSTATUS v10; // edi
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rbx
  struct _RTL_RANGE_LIST *v14; // rcx
  __int64 v15; // rdi
  struct _RTL_RANGE_LIST *v16; // r14
  struct _RTL_RANGE_LIST *v17; // rcx
  _WORD *UserData; // rbx
  __int64 v19; // r14
  _OWORD *Pool2; // rax
  _OWORD *v21; // rdx
  struct _RANGE_LIST_ITERATOR Iterator; // [rsp+20h] [rbp-40h] BYREF
  struct _RANGE_LIST_ITERATOR v24; // [rsp+40h] [rbp-20h] BYREF
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+98h] [rbp+38h] BYREF
  PRTL_RANGE Range; // [rsp+A0h] [rbp+40h] BYREF
  PRTL_RANGE v27; // [rsp+A8h] [rbp+48h] BYREF

  v27 = 0LL;
  Range = 0LL;
  ProcNumber = 0;
  v4 = a1;
  memset(&v24, 0, sizeof(v24));
  ProcessorpClearData(a1, a2, a3, a4, 0LL, 0LL, 0LL, 0LL);
  v5 = ProcessorInstanceCount;
  v6 = 0LL;
  if ( ProcessorInstanceCount )
  {
    while ( 1 )
    {
      v7 = (struct _RTL_RANGE_LIST *)*((_QWORD *)ProcessorByNtNumber + v6);
      if ( v7 )
      {
        v8 = v7 + 1;
        if ( v4 )
        {
          v8 = (struct _RTL_RANGE_LIST *)*((_QWORD *)ProcessorByNtNumber + v6);
          ++v7;
        }
        v10 = RtlCopyRangeList(v7, v8);
        if ( v10 < 0 )
          break;
      }
      v5 = ProcessorInstanceCount;
      v6 = (unsigned int)(v6 + 1);
      if ( (unsigned int)v6 >= ProcessorInstanceCount )
        goto LABEL_7;
    }
LABEL_33:
    ProcessorpClearData(
      v4,
      v9,
      v11,
      v12,
      Iterator.RangeListHead,
      Iterator.MergedHead,
      Iterator.Current,
      *(_QWORD *)&Iterator.Stamp);
  }
  else
  {
LABEL_7:
    v13 = 0LL;
    if ( v5 )
    {
      do
      {
        v14 = (struct _RTL_RANGE_LIST *)*((_QWORD *)ProcessorByNtNumber + v13);
        if ( v14 )
        {
          if ( v4 )
            ++v14;
          RtlGetFirstRange(v14, &Iterator, &Range);
          while ( Range )
          {
            Range->UserData = 0LL;
            RtlGetNextRange(&Iterator, &Range, 1u);
          }
        }
        v5 = ProcessorInstanceCount;
        v13 = (unsigned int)(v13 + 1);
      }
      while ( (unsigned int)v13 < ProcessorInstanceCount );
    }
    v15 = 0LL;
    if ( v5 )
    {
      do
      {
        v16 = (struct _RTL_RANGE_LIST *)*((_QWORD *)ProcessorByNtNumber + v15);
        if ( v16 )
        {
          v17 = v16 + 1;
          if ( v4 )
            v17 = (struct _RTL_RANGE_LIST *)*((_QWORD *)ProcessorByNtNumber + v15);
          RtlGetFirstRange(v17, &v24, &v27);
          if ( v4 )
            ++v16;
          RtlGetFirstRange(v16, &Iterator, &Range);
          while ( v27 )
          {
            UserData = v27->UserData;
            if ( UserData )
            {
              v19 = *(_QWORD *)UserData;
              KeGetProcessorNumberFromIndex(v15, &ProcNumber);
              if ( UserData[4] == ProcNumber.Group && ((1LL << ProcNumber.Number) & (v19 ^ (v19 - 1)) & v19) != 0 )
              {
                Pool2 = (_OWORD *)ExAllocatePool2(256LL, 32LL, 1232102209LL);
                if ( !Pool2 )
                {
                  v10 = -1073741670;
                  goto LABEL_33;
                }
                v21 = v27->UserData;
                *Pool2 = *v21;
                Pool2[1] = v21[1];
                ProcessorpInsertAssignment(v27->Owner, Pool2, v4);
              }
            }
            RtlGetNextRange(&v24, &v27, 1u);
            RtlGetNextRange(&Iterator, &Range, 1u);
          }
        }
        v15 = (unsigned int)(v15 + 1);
      }
      while ( (unsigned int)v15 < ProcessorInstanceCount );
    }
    return 0;
  }
  return (unsigned int)v10;
}
