void __fastcall PspWriteTebIdealProcessor(__int64 a1, __int64 a2)
{
  struct _PROCESSOR_NUMBER *v4; // r13
  struct _PROCESSOR_NUMBER *v5; // r15
  struct _PROCESSOR_NUMBER *v6; // rax
  __int64 v7; // rsi
  char v8; // di
  char v9; // r14
  struct _PROCESSOR_NUMBER *v10; // r12
  struct _PROCESSOR_NUMBER v11; // eax
  struct _PROCESSOR_NUMBER *v12; // rax
  signed __int32 v13[8]; // [rsp+0h] [rbp-C8h] BYREF
  char v14; // [rsp+20h] [rbp-A8h]
  char v15; // [rsp+21h] [rbp-A7h]
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+24h] [rbp-A4h] BYREF
  struct _PROCESSOR_NUMBER v17; // [rsp+28h] [rbp-A0h] BYREF
  struct _PROCESSOR_NUMBER *v18; // [rsp+30h] [rbp-98h]
  struct _PROCESSOR_NUMBER *v19; // [rsp+38h] [rbp-90h]
  struct _PROCESSOR_NUMBER *v20; // [rsp+40h] [rbp-88h]
  struct _PROCESSOR_NUMBER *v21; // [rsp+48h] [rbp-80h]
  __int64 v22; // [rsp+50h] [rbp-78h]
  __int64 v23; // [rsp+58h] [rbp-70h]
  struct _PROCESSOR_NUMBER *p_ProcNumber; // [rsp+60h] [rbp-68h]
  $115DCDF994C6370D29323EAB0E0C9502 v25; // [rsp+68h] [rbp-60h] BYREF

  v22 = a2;
  memset(&v25, 0, sizeof(v25));
  ProcNumber = 0;
  v17 = 0;
  v4 = 0LL;
  v19 = 0LL;
  v5 = 0LL;
  v20 = 0LL;
  v6 = *(struct _PROCESSOR_NUMBER **)(a2 + 240);
  v18 = v6;
  v21 = v6;
  v7 = *(_QWORD *)(a2 + 544);
  p_ProcNumber = &ProcNumber;
  if ( *(_QWORD *)(v7 + 1408) )
  {
    v12 = v6 + 2048;
    if ( *(_WORD *)(v7 + 2412) == 0x8664 )
    {
      v5 = v12;
      v20 = v12;
    }
    else
    {
      v4 = v12;
      v19 = v12;
    }
  }
  v8 = 0;
  v15 = 0;
  if ( a2 != a1 )
  {
    if ( !ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(a2 + 1352)) )
      return;
    v8 = 1;
    v15 = 1;
  }
  v9 = 0;
  v14 = 0;
  if ( v7 != *(_QWORD *)(a1 + 184) )
  {
    KiStackAttachProcess((_KPROCESS *)v7, 0, (__int64)&v25);
    v9 = 1;
    v14 = 1;
  }
  v23 = a2 + 196;
  KeGetProcessorNumberFromIndex(*(_DWORD *)(a2 + 196), &ProcNumber);
  v10 = v18;
  while ( 1 )
  {
    ProcNumber.Reserved = ProcNumber.Number;
    v11 = ProcNumber;
    v10[1489] = ProcNumber;
    if ( v5 )
      v5[1489] = v11;
    if ( v4 )
    {
      LOWORD(v18) = v11.Group;
      BYTE2(v18) = v11.Number & 0x1F;
      BYTE3(v18) = v11.Reserved & 0x1F;
      v4[989] = (struct _PROCESSOR_NUMBER)v18;
    }
    _InterlockedOr(v13, 0);
    KeGetProcessorNumberFromIndex(*(_DWORD *)(a2 + 196), &v17);
    if ( v17.Group == ProcNumber.Group && v17.Number == ProcNumber.Number )
      break;
    *p_ProcNumber = v17;
  }
  if ( v9 )
    KiUnstackDetachProcess(&v25);
  if ( v8 )
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(a2 + 1352));
}
