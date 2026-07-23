/*
 * XREFs of RtlRestoreContext @ 0x140407EE0
 * Callers:
 *     RtlGuardRestoreContext @ 0x140265248 (RtlGuardRestoreContext.c)
 * Callees:
 *     KeCheckStackAndTargetAddress @ 0x1402301E0 (KeCheckStackAndTargetAddress.c)
 *     ZwContinue @ 0x1403FADE0 (ZwContinue.c)
 */

void __cdecl RtlRestoreContext(PCONTEXT ContextRecord, _EXCEPTION_RECORD *ExceptionRecord)
{
  int v2; // r9d
  unsigned __int64 v3; // rax
  _QWORD v5[154]; // [rsp-98h] [rbp-520h] BYREF
  _QWORD _458[7]; // [rsp+458h] [rbp-30h] BYREF
  unsigned __int16 SegCs; // [rsp+490h] [rbp+8h]
  unsigned int EFlags; // [rsp+498h] [rbp+10h]
  unsigned __int64 Rsp; // [rsp+4A0h] [rbp+18h]
  unsigned __int16 SegSs; // [rsp+4A8h] [rbp+20h]
  int v11; // [rsp+4F8h] [rbp+70h]
  int v12; // [rsp+500h] [rbp+78h]
  int v13; // [rsp+508h] [rbp+80h]
  int v14; // [rsp+510h] [rbp+88h]
  int v15; // [rsp+518h] [rbp+90h]
  int v16; // [rsp+520h] [rbp+98h]
  int v17; // [rsp+528h] [rbp+A0h]
  int v18; // [rsp+530h] [rbp+A8h]
  int v19; // [rsp+538h] [rbp+B0h]
  int v20; // [rsp+540h] [rbp+B8h]
  int v21; // [rsp+548h] [rbp+C0h]
  int v22; // [rsp+550h] [rbp+C8h]
  int v23; // [rsp+558h] [rbp+D0h]
  int v24; // [rsp+560h] [rbp+D8h]
  int v25; // [rsp+568h] [rbp+E0h]
  int v26; // [rsp+570h] [rbp+E8h]
  int v27; // [rsp+578h] [rbp+F0h]
  int v28; // [rsp+580h] [rbp+F8h]
  int v29; // [rsp+588h] [rbp+100h]
  int v30; // [rsp+590h] [rbp+108h]
  int v31; // [rsp+598h] [rbp+110h]
  int v32; // [rsp+5A0h] [rbp+118h]
  int v33; // [rsp+5A8h] [rbp+120h]
  int v34; // [rsp+5B0h] [rbp+128h]
  int v35; // [rsp+5B8h] [rbp+130h]
  __int64 v36; // [rsp+5C0h] [rbp+138h]

  if ( ExceptionRecord )
  {
    if ( ExceptionRecord->ExceptionCode == -2147483607 && ExceptionRecord->NumberParameters )
    {
      qmemcpy(v5, ContextRecord, sizeof(v5));
      _458[3] = v5[19];
      _458[0] = v5[31];
      RcFrameConsolidation(
        (_DWORD)ExceptionRecord,
        (unsigned int)RcFrameConsolidation,
        (unsigned int)_458,
        v2,
        v11,
        v12,
        v13,
        v14,
        v15,
        v16,
        v17,
        v18,
        v19,
        v20,
        v21,
        v22,
        v23,
        v24,
        v25,
        v26,
        v27,
        v28,
        v29,
        v30,
        v31,
        v32,
        v33,
        v34,
        v35,
        v36);
      return;
    }
    if ( ExceptionRecord->ExceptionCode == -2147483610 )
    {
      v3 = ExceptionRecord->ExceptionInformation[0];
      ContextRecord->Rbx = *(_QWORD *)(v3 + 8);
      ContextRecord->Rsp = *(_QWORD *)(v3 + 16);
      ContextRecord->Rbp = *(_QWORD *)(v3 + 24);
      ContextRecord->Rsi = *(_QWORD *)(v3 + 32);
      ContextRecord->Rdi = *(_QWORD *)(v3 + 40);
      ContextRecord->R12 = *(_QWORD *)(v3 + 48);
      ContextRecord->R13 = *(_QWORD *)(v3 + 56);
      ContextRecord->R14 = *(_QWORD *)(v3 + 64);
      ContextRecord->R15 = *(_QWORD *)(v3 + 72);
      ContextRecord->Rip = *(_QWORD *)(v3 + 80);
      ContextRecord->MxCsr = *(_DWORD *)(v3 + 88);
      ContextRecord->Xmm6 = *(_M128A *)(v3 + 96);
      ContextRecord->Xmm7 = *(_M128A *)(v3 + 112);
      ContextRecord->Xmm8 = *(_M128A *)(v3 + 128);
      ContextRecord->Xmm9 = *(_M128A *)(v3 + 144);
      ContextRecord->Xmm10 = *(_M128A *)(v3 + 160);
      ContextRecord->Xmm11 = *(_M128A *)(v3 + 176);
      ContextRecord->Xmm12 = *(_M128A *)(v3 + 192);
      ContextRecord->Xmm13 = *(_M128A *)(v3 + 208);
      ContextRecord->Xmm14 = *(_M128A *)(v3 + 224);
      ContextRecord->Xmm15 = *(_M128A *)(v3 + 240);
    }
  }
  if ( (ContextRecord->ContextFlags & 0xFFFFFFBF) == 0x10000F )
  {
    _mm_setcsr(ContextRecord->MxCsr);
    KeCheckStackAndTargetAddress(ContextRecord->Rip, ContextRecord->Rsp);
    SegSs = ContextRecord->SegSs;
    Rsp = ContextRecord->Rsp;
    EFlags = ContextRecord->EFlags;
    SegCs = ContextRecord->SegCs;
    _458[6] = ContextRecord->Rip;
    _disable();
    __asm { iretq }
  }
  ZwContinue(ContextRecord, 0);
}
