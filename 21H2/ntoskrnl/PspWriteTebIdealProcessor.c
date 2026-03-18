/*
 * XREFs of PspWriteTebIdealProcessor @ 0x1407028B8
 * Callers:
 *     PspUserThreadStartup @ 0x140702420 (PspUserThreadStartup.c)
 *     NtSetInformationThread @ 0x14072EC80 (NtSetInformationThread.c)
 * Callees:
 *     KeGetProcessorNumberFromIndex @ 0x1402949F0 (KeGetProcessorNumberFromIndex.c)
 *     ExReleaseRundownProtection @ 0x1402AD030 (ExReleaseRundownProtection.c)
 *     KiUnstackDetachProcess @ 0x1402D0930 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14030D5C0 (KiStackAttachProcess.c)
 *     ExAcquireRundownProtection @ 0x140347810 (ExAcquireRundownProtection.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

void __fastcall PspWriteTebIdealProcessor(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  struct _PROCESSOR_NUMBER *v6; // r13
  struct _PROCESSOR_NUMBER *v7; // rsi
  struct _PROCESSOR_NUMBER *v8; // rax
  __int64 v9; // r15
  char v10; // di
  char v11; // r14
  struct _PROCESSOR_NUMBER *v12; // r15
  struct _PROCESSOR_NUMBER *i; // r12
  struct _PROCESSOR_NUMBER v14; // eax
  struct _PROCESSOR_NUMBER *v15; // rax
  signed __int32 v16[8]; // [rsp+0h] [rbp-C8h] BYREF
  char v17; // [rsp+20h] [rbp-A8h]
  char v18; // [rsp+21h] [rbp-A7h]
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+24h] [rbp-A4h] BYREF
  struct _PROCESSOR_NUMBER v20; // [rsp+28h] [rbp-A0h] BYREF
  struct _PROCESSOR_NUMBER *v21; // [rsp+30h] [rbp-98h]
  struct _PROCESSOR_NUMBER *v22; // [rsp+38h] [rbp-90h]
  struct _PROCESSOR_NUMBER *v23; // [rsp+40h] [rbp-88h]
  struct _PROCESSOR_NUMBER *p_ProcNumber; // [rsp+48h] [rbp-80h]
  struct _PROCESSOR_NUMBER *v25; // [rsp+50h] [rbp-78h]
  __int64 v26; // [rsp+58h] [rbp-70h]
  _OWORD v27[3]; // [rsp+60h] [rbp-68h] BYREF

  v26 = a2;
  memset(v27, 0, sizeof(v27));
  ProcNumber = 0;
  v20 = 0;
  v6 = 0LL;
  v22 = 0LL;
  v7 = 0LL;
  v23 = 0LL;
  v8 = *(struct _PROCESSOR_NUMBER **)(a2 + 240);
  v21 = v8;
  v25 = v8;
  v9 = *(_QWORD *)(a2 + 544);
  p_ProcNumber = &ProcNumber;
  if ( *(_QWORD *)(v9 + 1408) )
  {
    v15 = v8 + 2048;
    if ( *(_WORD *)(v9 + 2412) == 0x8664 )
    {
      v7 = v15;
      v23 = v15;
    }
    else
    {
      v6 = v15;
      v22 = v15;
    }
  }
  v10 = 0;
  v18 = 0;
  if ( a2 != a1 )
  {
    if ( !ExAcquireRundownProtection((PEX_RUNDOWN_REF)(a2 + 1352)) )
      return;
    v10 = 1;
    v18 = 1;
  }
  v11 = 0;
  v17 = 0;
  if ( v9 != *(_QWORD *)(a1 + 184) )
  {
    KiStackAttachProcess((_KPROCESS *)v9, 0LL, (__int64)v27, a4);
    v11 = 1;
    v17 = 1;
  }
  KeGetProcessorNumberFromIndex(*(_DWORD *)(a2 + 196), &ProcNumber);
  v12 = v21;
  for ( i = p_ProcNumber; ; *i = v20 )
  {
    ProcNumber.Reserved = ProcNumber.Number;
    v14 = ProcNumber;
    v12[1489] = ProcNumber;
    if ( v7 )
      v7[1489] = v14;
    if ( v6 )
    {
      LOWORD(v21) = v14.Group;
      BYTE2(v21) = v14.Number & 0x1F;
      BYTE3(v21) = v14.Reserved & 0x1F;
      v6[989] = (struct _PROCESSOR_NUMBER)v21;
    }
    _InterlockedOr(v16, 0);
    KeGetProcessorNumberFromIndex(*(_DWORD *)(a2 + 196), &v20);
    if ( v20.Group == ProcNumber.Group && v20.Number == ProcNumber.Number )
      break;
  }
  if ( v11 )
    KiUnstackDetachProcess((__int64)v27, 0LL);
  if ( v10 )
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)(a2 + 1352));
}
