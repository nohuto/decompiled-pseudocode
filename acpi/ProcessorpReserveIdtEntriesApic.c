/*
 * XREFs of ProcessorpReserveIdtEntriesApic @ 0x1C009BDB0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0001DE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ProcessorpReserveIdtEntriesApic(
        void *a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5,
        int a6,
        int a7,
        int a8,
        _OWORD *a9)
{
  _OWORD *UserData; // rdi
  char v14; // r14
  int v15; // esi
  int v16; // ecx
  UCHAR v17; // bl
  __int64 v18; // rsi
  unsigned __int8 i; // bp
  ULONG ProcessorIndexFromNumber; // eax
  struct _RTL_RANGE_LIST *v21; // rcx
  NTSTATUS v22; // r14d
  struct _PROCESSOR_NUMBER v23; // [rsp+50h] [rbp-48h]
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+58h] [rbp-40h] BYREF
  ULONGLONG Start; // [rsp+60h] [rbp-38h]

  UserData = (_OWORD *)ExAllocatePool2(256LL, 32LL, 1232102209LL);
  if ( !UserData )
    return 3221225626LL;
  v14 = a7;
  v15 = ((__int64 (__fastcall *)(void *, __int64, __int64, _QWORD, unsigned int, int, int, int))ProcessorFindIdtEntries)(
          a1,
          a2,
          a4,
          a5,
          a3,
          a6,
          a7,
          a8);
  if ( v15 < 0 )
  {
    ExFreePoolWithTag(UserData, 0);
    return (unsigned int)v15;
  }
  LODWORD(Start) = *(_DWORD *)(a4 + 32);
  v16 = Start;
  *UserData = 0LL;
  *((_WORD *)UserData + 4) = *(_WORD *)(a4 + 24);
  *((_DWORD *)UserData + 4) = a3;
  *((_DWORD *)UserData + 5) = v16;
  v17 = (a3 >= 0xFFF00000 ? 4 : 0) | ((a6 & 1) + 1);
  *((_DWORD *)UserData + 6) = a5;
  v18 = *(_QWORD *)(a4 + 16);
  for ( i = 0; ; ++i )
  {
    if ( !v18 )
    {
      *a9 = *UserData;
      a9[1] = UserData[1];
      return 0LL;
    }
    if ( _bittest64(&v18, i) )
    {
      v23.Group = *(_WORD *)(a4 + 24);
      *(_WORD *)&v23.Number = i;
      ProcNumber = v23;
      ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber(&ProcNumber);
      if ( ProcessorIndexFromNumber != -1 && ProcessorIndexFromNumber < ProcessorInstanceCount )
      {
        v21 = (struct _RTL_RANGE_LIST *)*((_QWORD *)ProcessorByNtNumber + ProcessorIndexFromNumber);
        if ( v21 )
          break;
      }
    }
LABEL_14:
    v18 &= ~(1LL << i);
  }
  if ( a8 == 1 )
    ++v21;
  v22 = RtlAddRange(v21, (unsigned int)Start, a5 + (unsigned int)Start - 1LL, v17, 2 * (v14 & 1) + 1, UserData, a1);
  if ( v22 >= 0 )
  {
    v14 = a7;
    *(_QWORD *)UserData |= 1LL << i;
    goto LABEL_14;
  }
  ExFreePoolWithTag(UserData, 0);
  return (unsigned int)v22;
}
