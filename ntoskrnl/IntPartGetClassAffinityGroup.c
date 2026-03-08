/*
 * XREFs of IntPartGetClassAffinityGroup @ 0x140B43A84
 * Callers:
 *     KiIntPartInit @ 0x140B437B4 (KiIntPartInit.c)
 * Callees:
 *     IntPartGetProcessorEfficiencyClass @ 0x14037FFF4 (IntPartGetProcessorEfficiencyClass.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

__int64 __fastcall IntPartGetClassAffinityGroup(__int64 a1, unsigned int a2)
{
  unsigned __int8 v2; // bl
  unsigned __int8 v4; // si
  unsigned __int8 i; // di
  bool ProcessorEfficiencyClass; // al
  unsigned __int8 v7; // dl
  __int64 Pool2; // rax
  __int64 v9; // rdi
  _BOOL8 v10; // rdx
  unsigned __int8 v11; // al
  struct _PROCESSOR_NUMBER v13; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  v13 = 0;
  v4 = 0;
  for ( i = 0; i < a2; v4 = v7 )
  {
    v13.Number = i;
    ProcessorEfficiencyClass = IntPartGetProcessorEfficiencyClass(&v13);
    v7 = v4;
    if ( v4 < (unsigned __int8)ProcessorEfficiencyClass )
      v7 = ProcessorEfficiencyClass;
    ++i;
  }
  Pool2 = ExAllocatePool2(64LL, 8LL * v4 + 16, 0x5049654Bu);
  v9 = Pool2;
  if ( Pool2 )
  {
    *(_WORD *)(Pool2 + 2) = 0;
    *(_BYTE *)Pool2 = v4 + 1;
    if ( a2 )
    {
      do
      {
        v13.Number = v2;
        v10 = IntPartGetProcessorEfficiencyClass(&v13);
        v11 = v2++;
        *(_QWORD *)(v9 + 8 * v10 + 8) |= 1LL << v11;
      }
      while ( v2 < a2 );
    }
  }
  return v9;
}
