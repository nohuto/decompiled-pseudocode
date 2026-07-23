/*
 * XREFs of RtlDispatchException @ 0x14033E580
 * Callers:
 *     KiDispatchException @ 0x14033C330 (KiDispatchException.c)
 *     RtlRaiseException @ 0x14033D230 (RtlRaiseException.c)
 *     RtlRaiseNoncontinuableException @ 0x1404077C0 (RtlRaiseNoncontinuableException.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1402F1CB0 (RtlRaiseStatus.c)
 *     RtlLookupExceptionHandler @ 0x14032B31C (RtlLookupExceptionHandler.c)
 *     RtlpPopUserShadowStack @ 0x14032B65C (RtlpPopUserShadowStack.c)
 *     RtlpIsFrameInBounds @ 0x14033E9B0 (RtlpIsFrameInBounds.c)
 *     RtlVirtualUnwind @ 0x14033E9D0 (RtlVirtualUnwind.c)
 *     RtlpCopyContext @ 0x14033EF50 (RtlpCopyContext.c)
 *     RtlLookupFunctionEntry @ 0x14033F110 (RtlLookupFunctionEntry.c)
 *     RtlGetExtendedContextLength2 @ 0x14033F5D0 (RtlGetExtendedContextLength2.c)
 *     RtlInitializeExtendedContext2 @ 0x14033FFD0 (RtlInitializeExtendedContext2.c)
 *     KeQueryCurrentStackInformation @ 0x140340240 (KeQueryCurrentStackInformation.c)
 *     RtlpGetStackLimitsEx @ 0x140340290 (RtlpGetStackLimitsEx.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     _alloca_probe @ 0x140407B20 (_alloca_probe.c)
 *     RtlpExecuteHandlerForException @ 0x1404080A0 (RtlpExecuteHandlerForException.c)
 *     memset @ 0x140413800 (memset.c)
 *     RtlpLogExceptionDispatch @ 0x140584E80 (RtlpLogExceptionDispatch.c)
 *     RtlpLogExceptionHandler @ 0x140585020 (RtlpLogExceptionHandler.c)
 */

BOOLEAN __cdecl RtlDispatchException(PEXCEPTION_RECORD ExceptionRecord, PCONTEXT ContextRecord)
{
  BOOLEAN v4; // r13
  __int64 v5; // r9
  unsigned int v6; // esi
  unsigned __int64 Rsp; // rcx
  BOOL v8; // r15d
  unsigned __int64 v9; // rax
  void *v10; // rsp
  DWORD64 Rip; // rdi
  _UNWIND_HISTORY_TABLE *p_HistoryTable; // r12
  _IMAGE_RUNTIME_FUNCTION_ENTRY *v13; // rax
  PRUNTIME_FUNCTION v14; // rbx
  unsigned __int64 v15; // r13
  PEXCEPTION_ROUTINE v16; // rax
  unsigned __int64 v17; // r15
  PCONTEXT_EX v18; // rsi
  DWORD64 v19; // rbx
  int v20; // r8d
  ULONG v21; // ecx
  bool v22; // zf
  PEXCEPTION_RECORD v23; // r10
  PVOID v24; // rax
  unsigned __int64 v25; // rdx
  PEXCEPTION_RECORD v26; // r15
  ULONG v27; // edx
  int v28; // ecx
  ULONG v29; // edx
  PRUNTIME_FUNCTION v30; // r9
  DWORD64 v31; // r10
  __int64 v32; // r9
  DWORD64 v33; // rax
  char v34; // cl
  int v35; // esi
  _CONTEXT_EX *v36; // rax
  char IsFrameInBounds; // al
  int v39; // [rsp+40h] [rbp+0h] BYREF
  int v40; // [rsp+44h] [rbp+4h] BYREF
  char v41; // [rsp+48h] [rbp+8h]
  char v42; // [rsp+49h] [rbp+9h]
  ULONG ContextLength; // [rsp+4Ch] [rbp+Ch] BYREF
  unsigned __int64 EstablisherFrame; // [rsp+50h] [rbp+10h] BYREF
  __int64 v45; // [rsp+58h] [rbp+18h] BYREF
  __int64 v46; // [rsp+60h] [rbp+20h] BYREF
  PCONTEXT_EX ContextEx; // [rsp+68h] [rbp+28h] BYREF
  unsigned __int64 ImageBase; // [rsp+70h] [rbp+30h] BYREF
  PVOID HandlerData; // [rsp+78h] [rbp+38h] BYREF
  DWORD64 v50; // [rsp+80h] [rbp+40h]
  PEXCEPTION_RECORD v51; // [rsp+88h] [rbp+48h]
  DWORD64 ControlPc[10]; // [rsp+90h] [rbp+50h] BYREF
  PCONTEXT v53; // [rsp+E0h] [rbp+A0h]
  _UNWIND_HISTORY_TABLE HistoryTable; // [rsp+F0h] [rbp+B0h] BYREF

  v53 = ContextRecord;
  v51 = ExceptionRecord;
  ContextLength = 0;
  v4 = 0;
  memset(ControlPc, 0, sizeof(ControlPc));
  v41 = 0;
  EstablisherFrame = 0LL;
  HandlerData = 0LL;
  v45 = 0LL;
  ImageBase = 0LL;
  v46 = 0LL;
  v40 = 0;
  memset(HistoryTable.Entry, 0, sizeof(HistoryTable.Entry));
  if ( (NtGlobalFlag & 0x800000) != 0 )
  {
    v41 = 1;
    RtlpLogExceptionDispatch(ExceptionRecord, ContextRecord);
  }
  v6 = ExceptionRecord->ExceptionFlags & 1;
  v39 = v6;
  KeQueryCurrentStackInformation(&v40, &v46, &v45, v5);
  Rsp = ContextRecord->Rsp;
  v8 = v40 == 10;
  v40 = v8;
  if ( !(unsigned __int8)RtlpGetStackLimitsEx(Rsp, &v46, &v45) )
  {
    ExceptionRecord->ExceptionFlags = v6 | 8;
    return v4;
  }
  RtlGetExtendedContextLength2(0x10000Bu, &ContextLength, 0LL);
  v9 = ContextLength + 15LL;
  if ( v9 <= ContextLength )
    v9 = 0xFFFFFFFFFFFFFF0LL;
  v10 = alloca(v9 & 0xFFFFFFFFFFFFFFF0uLL);
  RtlInitializeExtendedContext2((PCONTEXT)&v39, 0x10000Bu, &ContextEx, 0LL);
  RtlpCopyContext(&v39, ContextRecord);
  Rip = ContextRecord->Rip;
  v50 = 0LL;
  p_HistoryTable = &HistoryTable;
  HistoryTable.Count = 0;
  HistoryTable.HighAddress = 0LL;
  *(_DWORD *)&HistoryTable.LocalHint = 0x1000000;
  HistoryTable.LowAddress = -1LL;
  while ( 1 )
  {
    v13 = RtlLookupFunctionEntry(Rip, &ImageBase, p_HistoryTable);
    v14 = v13;
    if ( !v13 )
    {
      if ( Rip == *(_QWORD *)ControlPc[9] )
        goto LABEL_52;
      HistoryTable.Entry[3].ImageBase = *(_QWORD *)ControlPc[9];
      ControlPc[9] += 8LL;
      RtlpPopUserShadowStack((__int64)&v39);
      goto LABEL_11;
    }
    v15 = ImageBase;
    v16 = RtlVirtualUnwind(1u, ImageBase, Rip, v13, (PCONTEXT)&v39, &HandlerData, &EstablisherFrame, 0LL);
    v17 = EstablisherFrame;
    v18 = (PCONTEXT_EX)v16;
    if ( !(unsigned __int8)RtlpIsFrameInBounds(&v46, EstablisherFrame, &v45) )
    {
      if ( (_BYTE)v40 == 1 )
      {
        LOBYTE(v40) = 2;
        RtlpGetStackLimitsEx(v17, &v46, &v45);
        v17 = EstablisherFrame;
      }
      else if ( !(_BYTE)v40 )
      {
        v35 = v39 | 8;
LABEL_53:
        v4 = 0;
        v51->ExceptionFlags = v35;
        return v4;
      }
    }
    if ( v18 )
      break;
LABEL_10:
    v8 = v40;
LABEL_11:
    v19 = ControlPc[9];
    Rip = HistoryTable.Entry[3].ImageBase;
    if ( !(unsigned __int8)RtlpIsFrameInBounds(&v46, ControlPc[9], &v45) )
    {
      if ( !v8 || (LOBYTE(v8) = 0, v40 = v8, !(unsigned __int8)RtlpGetStackLimitsEx(v19, &v46, &v45)) )
      {
LABEL_52:
        v35 = v39;
        goto LABEL_53;
      }
    }
  }
  v20 = v39;
  v21 = 0;
  ContextLength = 0;
  while ( 1 )
  {
    v22 = v41 == 0;
    v23 = v51;
    v24 = HandlerData;
    v42 = 0;
    ControlPc[0] = Rip;
    v51->ExceptionFlags = v20;
    ControlPc[1] = v15;
    ControlPc[2] = (DWORD64)v14;
    ControlPc[3] = v17;
    ControlPc[5] = (DWORD64)&v39;
    ControlPc[6] = (DWORD64)v18;
    ControlPc[7] = (DWORD64)v24;
    ControlPc[8] = (DWORD64)p_HistoryTable;
    LODWORD(ControlPc[9]) = v21;
    ContextEx = 0LL;
    if ( !v22 )
    {
      v36 = (_CONTEXT_EX *)RtlpLogExceptionHandler(v23, &v39, Rip, v18);
      v17 = EstablisherFrame;
      ContextEx = v36;
    }
    v25 = v17;
    v26 = v51;
    v27 = RtlpExecuteHandlerForException(v51, v25, v53, ControlPc);
    if ( ContextEx )
      ContextEx[43].XState.Length = v27;
    v28 = v26->ExceptionFlags & 1;
    v17 = EstablisherFrame;
    v20 = v28 | v39;
    v39 |= v28;
    if ( v50 == EstablisherFrame )
    {
      v20 &= ~0x10u;
      v50 = 0LL;
      v39 = v20;
    }
    if ( v27 == 1 )
      goto LABEL_21;
    if ( !v27 )
      break;
    v29 = v27 - 2;
    if ( v29 )
    {
      if ( v29 != 1 )
        RtlRaiseStatus(-1073741786);
      Rip = ControlPc[0];
      ImageBase = ControlPc[1];
      RtlpCopyContext(&v39, ControlPc[5]);
      ContextEx = (PCONTEXT_EX)RtlVirtualUnwind(1u, v31, Rip, v30, (PCONTEXT)&v39, &HandlerData, &EstablisherFrame, 0LL);
      EstablisherFrame = ControlPc[3];
      v14 = RtlLookupFunctionEntry(Rip, &ImageBase, p_HistoryTable);
      if ( v14 != (PRUNTIME_FUNCTION)ControlPc[2]
        || (v15 = ImageBase,
            (int)RtlLookupExceptionHandler((__int64)v14, ImageBase, 2u, v32, &ContextEx, &HandlerData) < 0)
        || (v18 = ContextEx, ContextEx != (PCONTEXT_EX)ControlPc[6])
        || HandlerData != (PVOID)ControlPc[7] )
      {
        __fastfail(0x27u);
      }
      v17 = EstablisherFrame;
      p_HistoryTable = (_UNWIND_HISTORY_TABLE *)ControlPc[8];
      ContextLength = ControlPc[9];
      v42 = 1;
      if ( !(unsigned __int8)RtlpIsFrameInBounds(&v46, EstablisherFrame, &v45) && (_BYTE)v40 == 1 )
      {
        RtlpGetStackLimitsEx(v17, &v46, &v45);
        v20 = v39;
        v17 = EstablisherFrame;
LABEL_45:
        LOBYTE(v40) = 0;
        goto LABEL_22;
      }
      v20 = v39;
    }
    else
    {
      v33 = ControlPc[3];
      v20 |= 0x10u;
      v34 = 1;
      v39 = v20;
      if ( (_BYTE)v40 )
      {
        IsFrameInBounds = RtlpIsFrameInBounds(&v46, ControlPc[3], &v45);
        v20 = v39;
        v34 = IsFrameInBounds;
        v33 = ControlPc[3];
      }
      if ( v33 > v50 || !v34 )
        v50 = v33;
    }
LABEL_21:
    if ( (_BYTE)v40 == 2 )
      goto LABEL_45;
LABEL_22:
    v21 = ContextLength;
    if ( !v42 )
      goto LABEL_10;
  }
  if ( (v20 & 1) != 0 )
    RtlRaiseStatus(-1073741787);
  return 1;
}
