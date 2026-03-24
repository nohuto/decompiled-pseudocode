/*
 * XREFs of PspWow64InitThread @ 0x1406959A0
 * Callers:
 *     PspAllocateThread @ 0x14064B048 (PspAllocateThread.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140207000 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14025C2E0 (KiStackAttachProcess.c)
 *     RtlpGetLegacyContextLength @ 0x140276670 (RtlpGetLegacyContextLength.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     memset @ 0x140414200 (memset.c)
 *     PspWow64GetSharedInformation @ 0x140611C34 (PspWow64GetSharedInformation.c)
 *     PsWow64GetProcessNtdllType @ 0x140611C4C (PsWow64GetProcessNtdllType.c)
 *     PspWow64InitThreadGuestx86 @ 0x140695B8C (PspWow64InitThreadGuestx86.c)
 *     RtlpArchContextFlagFromMachine @ 0x140696C94 (RtlpArchContextFlagFromMachine.c)
 *     PspWow64InitThreadGuestArm @ 0x14090C8EC (PspWow64InitThreadGuestArm.c)
 */

__int64 __fastcall PspWow64InitThread(_KPROCESS *BugCheckParameter1, __int64 a2, _QWORD *a3, __int64 a4)
{
  unsigned int v7; // ebx
  unsigned __int64 v8; // rax
  unsigned __int16 v9; // si
  int v10; // eax
  _DWORD *v11; // r9
  __int64 v12; // rdi
  __int64 v13; // r14
  unsigned __int16 ProcessNtdllType; // ax
  __int64 v15; // r15
  __int64 v16; // r12
  _DWORD *v17; // rdx
  __int64 v19; // [rsp+30h] [rbp-98h] BYREF
  int v20; // [rsp+38h] [rbp-90h]
  _DWORD *v21; // [rsp+40h] [rbp-88h]
  __int64 v22; // [rsp+48h] [rbp-80h]
  _OWORD v23[3]; // [rsp+50h] [rbp-78h] BYREF

  v22 = a4;
  memset(v23, 0, sizeof(v23));
  v7 = 0;
  LODWORD(v19) = 0;
  v8 = BugCheckParameter1[1].AffinityPadding[10];
  if ( !v8 || (v9 = *(_WORD *)(v8 + 8)) == 0 )
    v9 = -31132;
  v10 = RtlpArchContextFlagFromMachine(v9);
  if ( !v10 )
    return 3221225485LL;
  RtlpGetLegacyContextLength(v10, 0LL, &v19);
  v21 = *(_DWORD **)(a2 + 16);
  v12 = ~((unsigned int)v19 - 1LL) & ((unsigned __int64)v21 + (unsigned int)v19 + 3);
  v19 = *(_QWORD *)(a2 + 40);
  v13 = a3[31];
  if ( v13 == PspUserThreadStart )
  {
    ProcessNtdllType = PsWow64GetProcessNtdllType((__int64)BugCheckParameter1);
    v13 = *((_QWORD *)PspWow64GetSharedInformation(ProcessNtdllType) + 4);
  }
  v15 = a3[16];
  v16 = a3[17];
  KiStackAttachProcess(BugCheckParameter1, 0LL, (__int64)v23, v11);
  v17 = v21;
  *(_QWORD *)(v22 + 5256) = v21;
  *v17 = v9 << 16;
  switch ( v9 )
  {
    case 0x14Cu:
      PspWow64InitThreadGuestx86(BugCheckParameter1, v12, v13, v19, v15, v16);
      break;
    case 0x1C4u:
      PspWow64InitThreadGuestArm(BugCheckParameter1, v12, v13, v19, v15, v16);
      break;
    case 0x8664u:
      memset((void *)v12, 0, 0x4D0uLL);
      *(_QWORD *)(v12 + 152) = v19;
      *(_QWORD *)(v12 + 248) = v13;
      *(_QWORD *)(v12 + 128) = v15;
      *(_QWORD *)(v12 + 136) = v16;
      *(_DWORD *)(v12 + 48) = 1048607;
      break;
    default:
      v7 = -1073741811;
      v20 = -1073741811;
      break;
  }
  KiUnstackDetachProcess((__int64)v23, 0);
  return v7;
}
