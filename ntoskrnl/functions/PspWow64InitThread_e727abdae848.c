__int64 __fastcall PspWow64InitThread(PRKPROCESS PROCESS, __int64 a2, _QWORD *a3, __int64 a4)
{
  unsigned int v7; // ebx
  unsigned __int16 v8; // si
  int v9; // eax
  __int64 v10; // r13
  __int64 v11; // r14
  bool v12; // zf
  __int64 v13; // rax
  __int64 v14; // r15
  __int64 v15; // r12
  _DWORD *v16; // rdx
  __int64 v18; // [rsp+30h] [rbp-98h] BYREF
  int v19; // [rsp+38h] [rbp-90h]
  _DWORD *v20; // [rsp+40h] [rbp-88h]
  __int64 v21; // [rsp+48h] [rbp-80h]
  struct _KAPC_STATE ApcState; // [rsp+50h] [rbp-78h] BYREF

  v21 = a4;
  memset(&ApcState, 0, sizeof(ApcState));
  v7 = 0;
  LODWORD(v18) = 0;
  if ( !PROCESS[1].Affinity.StaticBitmap[30] || (v8 = WORD2(PROCESS[2].Affinity.StaticBitmap[20])) == 0 )
    v8 = -31132;
  v9 = RtlpArchContextFlagFromMachine(v8);
  if ( !v9 )
    return 3221225485LL;
  RtlpGetLegacyContextLength(v9, 0LL, &v18);
  v20 = *(_DWORD **)(a2 + 16);
  v10 = ~((unsigned int)v18 - 1LL) & ((unsigned __int64)v20 + (unsigned int)v18 + 3);
  v18 = *(_QWORD *)(a2 + 40);
  v11 = a3[31];
  if ( v11 == qword_140D1F330 )
  {
    v12 = (unsigned __int16)PsWow64GetProcessNtdllType((__int64)PROCESS) == 1;
    v13 = 32LL;
    if ( v12 )
      v13 = (__int64)&unk_140D557D0;
    v11 = *(_QWORD *)v13;
  }
  v14 = a3[16];
  v15 = a3[17];
  KeStackAttachProcess(PROCESS, &ApcState);
  v16 = v20;
  *(_QWORD *)(v21 + 5256) = v20;
  *v16 = v8 << 16;
  if ( v8 == 332 )
  {
    PspWow64InitThreadGuestx86(PROCESS, v10, v11, v18, v14, v15);
  }
  else if ( v8 == 452 )
  {
    PspWow64InitThreadGuestArm(PROCESS, v10, v11, v18, v14, v15);
  }
  else
  {
    v7 = -1073741811;
    v19 = -1073741811;
  }
  KiUnstackDetachProcess(($115DCDF994C6370D29323EAB0E0C9502 *)&ApcState);
  return v7;
}
