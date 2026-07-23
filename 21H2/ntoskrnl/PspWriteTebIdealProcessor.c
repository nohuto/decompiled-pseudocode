/*
 * XREFs of PspWriteTebIdealProcessor @ 0x14063C4B8
 * Callers:
 *     PspUserThreadStartup @ 0x14063BC30 (PspUserThreadStartup.c)
 *     NtSetInformationThread @ 0x140714260 (NtSetInformationThread.c)
 * Callees:
 *     KeGetProcessorNumberFromIndex @ 0x140263490 (KeGetProcessorNumberFromIndex.c)
 *     ExReleaseRundownProtection @ 0x14026A490 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x14026A950 (ExAcquireRundownProtection.c)
 *     KiStackAttachProcess @ 0x14027D850 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1402AB900 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 */

void __fastcall PspWriteTebIdealProcessor(__int64 a1, __int64 a2)
{
  _PROCESSOR_NUMBER *v4; // r15
  _PROCESSOR_NUMBER *v5; // r14
  _PROCESSOR_NUMBER *v6; // rax
  _KPROCESS *v7; // r12
  unsigned __int64 v8; // rcx
  char v9; // di
  char v10; // si
  _PROCESSOR_NUMBER *v11; // r13
  _PROCESSOR_NUMBER *i; // r12
  _PROCESSOR_NUMBER v13; // eax
  _PROCESSOR_NUMBER *v14; // rax
  signed __int32 v15[8]; // [rsp+0h] [rbp-C8h] BYREF
  char v16; // [rsp+20h] [rbp-A8h]
  char v17; // [rsp+21h] [rbp-A7h]
  _PROCESSOR_NUMBER ProcNumber; // [rsp+24h] [rbp-A4h] BYREF
  _PROCESSOR_NUMBER v19; // [rsp+28h] [rbp-A0h] BYREF
  _PROCESSOR_NUMBER *v20; // [rsp+30h] [rbp-98h]
  _PROCESSOR_NUMBER *v21; // [rsp+38h] [rbp-90h]
  _PROCESSOR_NUMBER *v22; // [rsp+40h] [rbp-88h]
  _PROCESSOR_NUMBER *p_ProcNumber; // [rsp+48h] [rbp-80h]
  _PROCESSOR_NUMBER *v24; // [rsp+50h] [rbp-78h]
  __int64 v25; // [rsp+58h] [rbp-70h]
  _OWORD v26[3]; // [rsp+60h] [rbp-68h] BYREF

  v25 = a2;
  memset(v26, 0, sizeof(v26));
  ProcNumber = 0;
  v19 = 0;
  v4 = 0LL;
  v21 = 0LL;
  v5 = 0LL;
  v22 = 0LL;
  v6 = *(_PROCESSOR_NUMBER **)(a2 + 240);
  v20 = v6;
  v24 = v6;
  v7 = *(_KPROCESS **)(a2 + 544);
  p_ProcNumber = &ProcNumber;
  v8 = v7[1].AffinityPadding[10];
  if ( v8 )
  {
    v14 = v6 + 2048;
    if ( *(_WORD *)(v8 + 8) == 0x8664 )
    {
      v5 = v14;
      v22 = v14;
    }
    else
    {
      v4 = v14;
      v21 = v14;
    }
  }
  v9 = 0;
  v17 = 0;
  if ( a2 != a1 )
  {
    if ( !ExAcquireRundownProtection((PEX_RUNDOWN_REF)(a2 + 1272)) )
      return;
    v9 = 1;
    v17 = 1;
  }
  v10 = 0;
  v16 = 0;
  if ( v7 != *(_KPROCESS **)(a1 + 184) )
  {
    KiStackAttachProcess(v7, 0, (__int64)v26);
    v10 = 1;
    v16 = 1;
  }
  KeGetProcessorNumberFromIndex(*(_DWORD *)(a2 + 196), &ProcNumber);
  v11 = v20;
  for ( i = p_ProcNumber; ; *i = v19 )
  {
    ProcNumber.Reserved = ProcNumber.Number;
    v13 = ProcNumber;
    v11[1489] = ProcNumber;
    if ( v5 )
      v5[1489] = v13;
    if ( v4 )
    {
      LOWORD(v20) = v13.Group;
      BYTE2(v20) = v13.Number & 0x1F;
      BYTE3(v20) = v13.Reserved & 0x1F;
      v4[989] = (_PROCESSOR_NUMBER)v20;
    }
    _InterlockedOr(v15, 0);
    KeGetProcessorNumberFromIndex(*(_DWORD *)(a2 + 196), &v19);
    if ( v19.Group == ProcNumber.Group && v19.Number == ProcNumber.Number )
      break;
  }
  if ( v10 )
    KiUnstackDetachProcess((__int64)v26, 0LL);
  if ( v9 )
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)(a2 + 1272));
}
