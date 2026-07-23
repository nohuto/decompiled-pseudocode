/*
 * XREFs of PspWow64InitThread @ 0x1405F4EF0
 * Callers:
 *     PspAllocateThread @ 0x14063FE68 (PspAllocateThread.c)
 * Callees:
 *     RtlpGetLegacyContextLength @ 0x140264610 (RtlpGetLegacyContextLength.c)
 *     KiStackAttachProcess @ 0x14027D850 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1402AB900 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 *     PspWow64InitThreadGuestx86 @ 0x1405F50DC (PspWow64InitThreadGuestx86.c)
 *     RtlpArchContextFlagFromMachine @ 0x1405F61E4 (RtlpArchContextFlagFromMachine.c)
 *     PspWow64GetSharedInformation @ 0x1406A16E4 (PspWow64GetSharedInformation.c)
 *     PsWow64GetProcessNtdllType @ 0x1406A16FC (PsWow64GetProcessNtdllType.c)
 *     PspWow64InitThreadGuestArm @ 0x14090CA4C (PspWow64InitThreadGuestArm.c)
 */

__int64 __fastcall PspWow64InitThread(_KPROCESS *BugCheckParameter1, __int64 a2, _QWORD *a3, __int64 a4)
{
  unsigned int v7; // ebx
  unsigned __int64 v8; // rax
  unsigned __int16 v9; // si
  int v10; // eax
  __int64 v11; // rdi
  __int64 v12; // r14
  unsigned __int16 ProcessNtdllType; // ax
  __int64 v14; // r15
  __int64 v15; // r12
  _DWORD *v16; // rdx
  __int64 v18; // [rsp+30h] [rbp-98h] BYREF
  int v19; // [rsp+38h] [rbp-90h]
  _DWORD *v20; // [rsp+40h] [rbp-88h]
  __int64 v21; // [rsp+48h] [rbp-80h]
  _OWORD v22[3]; // [rsp+50h] [rbp-78h] BYREF

  v21 = a4;
  memset(v22, 0, sizeof(v22));
  v7 = 0;
  LODWORD(v18) = 0;
  v8 = BugCheckParameter1[1].AffinityPadding[10];
  if ( !v8 || (v9 = *(_WORD *)(v8 + 8)) == 0 )
    v9 = -31132;
  v10 = RtlpArchContextFlagFromMachine(v9);
  if ( !v10 )
    return 3221225485LL;
  RtlpGetLegacyContextLength(v10, 0LL, &v18);
  v20 = *(_DWORD **)(a2 + 16);
  v11 = ~((unsigned int)v18 - 1LL) & ((unsigned __int64)v20 + (unsigned int)v18 + 3);
  v18 = *(_QWORD *)(a2 + 40);
  v12 = a3[31];
  if ( v12 == PspUserThreadStart )
  {
    ProcessNtdllType = PsWow64GetProcessNtdllType(BugCheckParameter1);
    v12 = *(_QWORD *)(PspWow64GetSharedInformation(ProcessNtdllType) + 32);
  }
  v14 = a3[16];
  v15 = a3[17];
  KiStackAttachProcess(BugCheckParameter1, 0, (__int64)v22);
  v16 = v20;
  *(_QWORD *)(v21 + 5256) = v20;
  *v16 = v9 << 16;
  switch ( v9 )
  {
    case 0x14Cu:
      PspWow64InitThreadGuestx86(BugCheckParameter1, v11, v12, v18, v14, v15);
      break;
    case 0x1C4u:
      PspWow64InitThreadGuestArm(BugCheckParameter1, v11, v12, v18, v14, v15);
      break;
    case 0x8664u:
      memset((void *)v11, 0, 0x4D0uLL);
      *(_QWORD *)(v11 + 152) = v18;
      *(_QWORD *)(v11 + 248) = v12;
      *(_QWORD *)(v11 + 128) = v14;
      *(_QWORD *)(v11 + 136) = v15;
      *(_DWORD *)(v11 + 48) = 1048607;
      break;
    default:
      v7 = -1073741811;
      v19 = -1073741811;
      break;
  }
  KiUnstackDetachProcess((__int64)v22, 0LL);
  return v7;
}
