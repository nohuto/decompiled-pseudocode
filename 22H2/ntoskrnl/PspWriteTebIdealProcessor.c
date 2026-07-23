/*
 * XREFs of PspWriteTebIdealProcessor @ 0x1406C0488
 * Callers:
 *     NtSetInformationThread @ 0x14064A5A0 (NtSetInformationThread.c)
 *     PspUserThreadStartup @ 0x1406BFC00 (PspUserThreadStartup.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140206FC0 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14025BB40 (KiStackAttachProcess.c)
 *     KeGetProcessorNumberFromIndex @ 0x14033E500 (KeGetProcessorNumberFromIndex.c)
 *     ExReleaseRundownProtection @ 0x140345500 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x1403459C0 (ExAcquireRundownProtection.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 */

void __fastcall PspWriteTebIdealProcessor(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  _PROCESSOR_NUMBER *v6; // r15
  _PROCESSOR_NUMBER *v7; // r14
  _PROCESSOR_NUMBER *v8; // rax
  _KPROCESS *v9; // r12
  unsigned __int64 v10; // rcx
  char v11; // di
  char v12; // si
  _PROCESSOR_NUMBER *v13; // r13
  _PROCESSOR_NUMBER *i; // r12
  _PROCESSOR_NUMBER v15; // eax
  _PROCESSOR_NUMBER *v16; // rax
  signed __int32 v17[8]; // [rsp+0h] [rbp-C8h] BYREF
  char v18; // [rsp+20h] [rbp-A8h]
  char v19; // [rsp+21h] [rbp-A7h]
  _PROCESSOR_NUMBER ProcNumber; // [rsp+24h] [rbp-A4h] BYREF
  _PROCESSOR_NUMBER v21; // [rsp+28h] [rbp-A0h] BYREF
  _PROCESSOR_NUMBER *v22; // [rsp+30h] [rbp-98h]
  _PROCESSOR_NUMBER *v23; // [rsp+38h] [rbp-90h]
  _PROCESSOR_NUMBER *v24; // [rsp+40h] [rbp-88h]
  _PROCESSOR_NUMBER *p_ProcNumber; // [rsp+48h] [rbp-80h]
  _PROCESSOR_NUMBER *v26; // [rsp+50h] [rbp-78h]
  __int64 v27; // [rsp+58h] [rbp-70h]
  _OWORD v28[3]; // [rsp+60h] [rbp-68h] BYREF

  v27 = a2;
  memset(v28, 0, sizeof(v28));
  ProcNumber = 0;
  v21 = 0;
  v6 = 0LL;
  v23 = 0LL;
  v7 = 0LL;
  v24 = 0LL;
  v8 = *(_PROCESSOR_NUMBER **)(a2 + 240);
  v22 = v8;
  v26 = v8;
  v9 = *(_KPROCESS **)(a2 + 544);
  p_ProcNumber = &ProcNumber;
  v10 = v9[1].AffinityPadding[10];
  if ( v10 )
  {
    v16 = v8 + 2048;
    if ( *(_WORD *)(v10 + 8) == 0x8664 )
    {
      v7 = v16;
      v24 = v16;
    }
    else
    {
      v6 = v16;
      v23 = v16;
    }
  }
  v11 = 0;
  v19 = 0;
  if ( a2 != a1 )
  {
    if ( !ExAcquireRundownProtection((PEX_RUNDOWN_REF)(a2 + 1272)) )
      return;
    v11 = 1;
    v19 = 1;
  }
  v12 = 0;
  v18 = 0;
  if ( v9 != *(_KPROCESS **)(a1 + 184) )
  {
    KiStackAttachProcess(v9, 0LL, (__int64)v28, a4);
    v12 = 1;
    v18 = 1;
  }
  KeGetProcessorNumberFromIndex(*(_DWORD *)(a2 + 196), &ProcNumber);
  v13 = v22;
  for ( i = p_ProcNumber; ; *i = v21 )
  {
    ProcNumber.Reserved = ProcNumber.Number;
    v15 = ProcNumber;
    v13[1489] = ProcNumber;
    if ( v7 )
      v7[1489] = v15;
    if ( v6 )
    {
      LOWORD(v22) = v15.Group;
      BYTE2(v22) = v15.Number & 0x1F;
      BYTE3(v22) = v15.Reserved & 0x1F;
      v6[989] = (_PROCESSOR_NUMBER)v22;
    }
    _InterlockedOr(v17, 0);
    KeGetProcessorNumberFromIndex(*(_DWORD *)(a2 + 196), &v21);
    if ( v21.Group == ProcNumber.Group && v21.Number == ProcNumber.Number )
      break;
  }
  if ( v12 )
    KiUnstackDetachProcess((__int64)v28, 0);
  if ( v11 )
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)(a2 + 1272));
}
