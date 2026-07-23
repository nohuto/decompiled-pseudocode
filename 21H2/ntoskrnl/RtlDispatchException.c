/*
 * XREFs of RtlDispatchException @ 0x140263510
 * Callers:
 *     KiDispatchException @ 0x1402612C0 (KiDispatchException.c)
 *     RtlRaiseException @ 0x1402621C0 (RtlRaiseException.c)
 *     RtlRaiseNoncontinuableException @ 0x140408320 (RtlRaiseNoncontinuableException.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140212910 (RtlRaiseStatus.c)
 *     RtlLookupExceptionHandler @ 0x14025046C (RtlLookupExceptionHandler.c)
 *     RtlpPopUserShadowStack @ 0x1402507AC (RtlpPopUserShadowStack.c)
 *     RtlpIsFrameInBounds @ 0x140263940 (RtlpIsFrameInBounds.c)
 *     RtlVirtualUnwind @ 0x140263960 (RtlVirtualUnwind.c)
 *     RtlpCopyContext @ 0x140263EE0 (RtlpCopyContext.c)
 *     RtlLookupFunctionEntry @ 0x1402640A0 (RtlLookupFunctionEntry.c)
 *     RtlGetExtendedContextLength2 @ 0x140264560 (RtlGetExtendedContextLength2.c)
 *     RtlInitializeExtendedContext2 @ 0x140264F60 (RtlInitializeExtendedContext2.c)
 *     KeQueryCurrentStackInformation @ 0x1402651D0 (KeQueryCurrentStackInformation.c)
 *     RtlpGetStackLimitsEx @ 0x140265220 (RtlpGetStackLimitsEx.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     _alloca_probe @ 0x140408680 (_alloca_probe.c)
 *     RtlpExecuteHandlerForException @ 0x140408C00 (RtlpExecuteHandlerForException.c)
 *     memset @ 0x140414300 (memset.c)
 *     RtlpLogExceptionDispatch @ 0x140585170 (RtlpLogExceptionDispatch.c)
 *     RtlpLogExceptionHandler @ 0x140585310 (RtlpLogExceptionHandler.c)
 */

BOOLEAN __cdecl RtlDispatchException(PEXCEPTION_RECORD ExceptionRecord, PCONTEXT ContextRecord)
{
  BOOLEAN v4; // r13
  unsigned int v5; // esi
  unsigned __int64 Rsp; // rcx
  BOOL v7; // r15d
  unsigned __int64 v8; // rax
  void *v9; // rsp
  DWORD64 Rip; // rdi
  _UNWIND_HISTORY_TABLE *p_HistoryTable; // r12
  _IMAGE_RUNTIME_FUNCTION_ENTRY *v12; // rax
  PRUNTIME_FUNCTION v13; // rbx
  unsigned __int64 v14; // r13
  PEXCEPTION_ROUTINE v15; // rax
  unsigned __int64 v16; // r15
  PCONTEXT_EX v17; // rsi
  DWORD64 v18; // rbx
  int v19; // r8d
  ULONG v20; // ecx
  bool v21; // zf
  PEXCEPTION_RECORD v22; // r10
  PVOID v23; // rax
  unsigned __int64 v24; // rdx
  PEXCEPTION_RECORD v25; // r15
  ULONG v26; // edx
  int v27; // ecx
  ULONG v28; // edx
  PRUNTIME_FUNCTION v29; // r9
  DWORD64 v30; // r10
  __int64 v31; // r9
  DWORD64 v32; // rax
  char v33; // cl
  int v34; // esi
  _CONTEXT_EX *v35; // rax
  char IsFrameInBounds; // al
  int v38; // [rsp+40h] [rbp+0h] BYREF
  int v39; // [rsp+44h] [rbp+4h] BYREF
  char v40; // [rsp+48h] [rbp+8h]
  char v41; // [rsp+49h] [rbp+9h]
  ULONG ContextLength; // [rsp+4Ch] [rbp+Ch] BYREF
  unsigned __int64 EstablisherFrame; // [rsp+50h] [rbp+10h] BYREF
  __int64 v44; // [rsp+58h] [rbp+18h] BYREF
  __int64 v45; // [rsp+60h] [rbp+20h] BYREF
  PCONTEXT_EX ContextEx; // [rsp+68h] [rbp+28h] BYREF
  unsigned __int64 ImageBase; // [rsp+70h] [rbp+30h] BYREF
  PVOID HandlerData; // [rsp+78h] [rbp+38h] BYREF
  DWORD64 v49; // [rsp+80h] [rbp+40h]
  PEXCEPTION_RECORD v50; // [rsp+88h] [rbp+48h]
  DWORD64 ControlPc[10]; // [rsp+90h] [rbp+50h] BYREF
  PCONTEXT v52; // [rsp+E0h] [rbp+A0h]
  _UNWIND_HISTORY_TABLE HistoryTable; // [rsp+F0h] [rbp+B0h] BYREF

  v52 = ContextRecord;
  v50 = ExceptionRecord;
  ContextLength = 0;
  v4 = 0;
  memset(ControlPc, 0, sizeof(ControlPc));
  v40 = 0;
  EstablisherFrame = 0LL;
  HandlerData = 0LL;
  v44 = 0LL;
  ImageBase = 0LL;
  v45 = 0LL;
  v39 = 0;
  memset(HistoryTable.Entry, 0, sizeof(HistoryTable.Entry));
  if ( (NtGlobalFlag & 0x800000) != 0 )
  {
    v40 = 1;
    RtlpLogExceptionDispatch(ExceptionRecord, ContextRecord);
  }
  v5 = ExceptionRecord->ExceptionFlags & 1;
  v38 = v5;
  KeQueryCurrentStackInformation(&v39, &v45, &v44);
  Rsp = ContextRecord->Rsp;
  v7 = v39 == 10;
  v39 = v7;
  if ( !(unsigned __int8)RtlpGetStackLimitsEx(Rsp, &v45, &v44) )
  {
    ExceptionRecord->ExceptionFlags = v5 | 8;
    return v4;
  }
  RtlGetExtendedContextLength2(0x10000Bu, &ContextLength, 0LL);
  v8 = ContextLength + 15LL;
  if ( v8 <= ContextLength )
    v8 = 0xFFFFFFFFFFFFFF0LL;
  v9 = alloca(v8 & 0xFFFFFFFFFFFFFFF0uLL);
  RtlInitializeExtendedContext2((PCONTEXT)&v38, 0x10000Bu, &ContextEx, 0LL);
  RtlpCopyContext(&v38, ContextRecord);
  Rip = ContextRecord->Rip;
  v49 = 0LL;
  p_HistoryTable = &HistoryTable;
  HistoryTable.Count = 0;
  HistoryTable.HighAddress = 0LL;
  *(_DWORD *)&HistoryTable.LocalHint = 0x1000000;
  HistoryTable.LowAddress = -1LL;
  while ( 1 )
  {
    v12 = RtlLookupFunctionEntry(Rip, &ImageBase, p_HistoryTable);
    v13 = v12;
    if ( !v12 )
    {
      if ( Rip == *(_QWORD *)ControlPc[9] )
        goto LABEL_52;
      HistoryTable.Entry[3].ImageBase = *(_QWORD *)ControlPc[9];
      ControlPc[9] += 8LL;
      RtlpPopUserShadowStack((__int64)&v38);
      goto LABEL_11;
    }
    v14 = ImageBase;
    v15 = RtlVirtualUnwind(1u, ImageBase, Rip, v12, (PCONTEXT)&v38, &HandlerData, &EstablisherFrame, 0LL);
    v16 = EstablisherFrame;
    v17 = (PCONTEXT_EX)v15;
    if ( !(unsigned __int8)RtlpIsFrameInBounds(&v45, EstablisherFrame, &v44) )
    {
      if ( (_BYTE)v39 == 1 )
      {
        LOBYTE(v39) = 2;
        RtlpGetStackLimitsEx(v16, &v45, &v44);
        v16 = EstablisherFrame;
      }
      else if ( !(_BYTE)v39 )
      {
        v34 = v38 | 8;
LABEL_53:
        v4 = 0;
        v50->ExceptionFlags = v34;
        return v4;
      }
    }
    if ( v17 )
      break;
LABEL_10:
    v7 = v39;
LABEL_11:
    v18 = ControlPc[9];
    Rip = HistoryTable.Entry[3].ImageBase;
    if ( !(unsigned __int8)RtlpIsFrameInBounds(&v45, ControlPc[9], &v44) )
    {
      if ( !v7 || (LOBYTE(v7) = 0, v39 = v7, !(unsigned __int8)RtlpGetStackLimitsEx(v18, &v45, &v44)) )
      {
LABEL_52:
        v34 = v38;
        goto LABEL_53;
      }
    }
  }
  v19 = v38;
  v20 = 0;
  ContextLength = 0;
  while ( 1 )
  {
    v21 = v40 == 0;
    v22 = v50;
    v23 = HandlerData;
    v41 = 0;
    ControlPc[0] = Rip;
    v50->ExceptionFlags = v19;
    ControlPc[1] = v14;
    ControlPc[2] = (DWORD64)v13;
    ControlPc[3] = v16;
    ControlPc[5] = (DWORD64)&v38;
    ControlPc[6] = (DWORD64)v17;
    ControlPc[7] = (DWORD64)v23;
    ControlPc[8] = (DWORD64)p_HistoryTable;
    LODWORD(ControlPc[9]) = v20;
    ContextEx = 0LL;
    if ( !v21 )
    {
      v35 = (_CONTEXT_EX *)RtlpLogExceptionHandler(v22, &v38, Rip, v17);
      v16 = EstablisherFrame;
      ContextEx = v35;
    }
    v24 = v16;
    v25 = v50;
    v26 = RtlpExecuteHandlerForException(v50, v24, v52, ControlPc);
    if ( ContextEx )
      ContextEx[43].XState.Length = v26;
    v27 = v25->ExceptionFlags & 1;
    v16 = EstablisherFrame;
    v19 = v27 | v38;
    v38 |= v27;
    if ( v49 == EstablisherFrame )
    {
      v19 &= ~0x10u;
      v49 = 0LL;
      v38 = v19;
    }
    if ( v26 == 1 )
      goto LABEL_21;
    if ( !v26 )
      break;
    v28 = v26 - 2;
    if ( v28 )
    {
      if ( v28 != 1 )
        RtlRaiseStatus(-1073741786);
      Rip = ControlPc[0];
      ImageBase = ControlPc[1];
      RtlpCopyContext(&v38, ControlPc[5]);
      ContextEx = (PCONTEXT_EX)RtlVirtualUnwind(1u, v30, Rip, v29, (PCONTEXT)&v38, &HandlerData, &EstablisherFrame, 0LL);
      EstablisherFrame = ControlPc[3];
      v13 = RtlLookupFunctionEntry(Rip, &ImageBase, p_HistoryTable);
      if ( v13 != (PRUNTIME_FUNCTION)ControlPc[2]
        || (v14 = ImageBase,
            (int)RtlLookupExceptionHandler((__int64)v13, ImageBase, 2u, v31, &ContextEx, &HandlerData) < 0)
        || (v17 = ContextEx, ContextEx != (PCONTEXT_EX)ControlPc[6])
        || HandlerData != (PVOID)ControlPc[7] )
      {
        __fastfail(0x27u);
      }
      v16 = EstablisherFrame;
      p_HistoryTable = (_UNWIND_HISTORY_TABLE *)ControlPc[8];
      ContextLength = ControlPc[9];
      v41 = 1;
      if ( !(unsigned __int8)RtlpIsFrameInBounds(&v45, EstablisherFrame, &v44) && (_BYTE)v39 == 1 )
      {
        RtlpGetStackLimitsEx(v16, &v45, &v44);
        v19 = v38;
        v16 = EstablisherFrame;
LABEL_45:
        LOBYTE(v39) = 0;
        goto LABEL_22;
      }
      v19 = v38;
    }
    else
    {
      v32 = ControlPc[3];
      v19 |= 0x10u;
      v33 = 1;
      v38 = v19;
      if ( (_BYTE)v39 )
      {
        IsFrameInBounds = RtlpIsFrameInBounds(&v45, ControlPc[3], &v44);
        v19 = v38;
        v33 = IsFrameInBounds;
        v32 = ControlPc[3];
      }
      if ( v32 > v49 || !v33 )
        v49 = v32;
    }
LABEL_21:
    if ( (_BYTE)v39 == 2 )
      goto LABEL_45;
LABEL_22:
    v20 = ContextLength;
    if ( !v41 )
      goto LABEL_10;
  }
  if ( (v19 & 1) != 0 )
    RtlRaiseStatus(-1073741787);
  return 1;
}
