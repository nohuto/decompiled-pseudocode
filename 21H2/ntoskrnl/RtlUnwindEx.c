/*
 * XREFs of RtlUnwindEx @ 0x1402639D0
 * Callers:
 *     RtlUnwind @ 0x14024EF80 (RtlUnwind.c)
 *     __C_specific_handler @ 0x1403D0600 (__C_specific_handler.c)
 *     __longjmp_internal @ 0x1403F9D80 (__longjmp_internal.c)
 *     KiSystemServiceHandler @ 0x140411980 (KiSystemServiceHandler.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140212910 (RtlRaiseStatus.c)
 *     RtlpPopUserShadowStack @ 0x1402507AC (RtlpPopUserShadowStack.c)
 *     RtlpIsFrameInBounds @ 0x140263940 (RtlpIsFrameInBounds.c)
 *     RtlVirtualUnwind @ 0x140263960 (RtlVirtualUnwind.c)
 *     RtlpCopyContext @ 0x140263EE0 (RtlpCopyContext.c)
 *     RtlLookupFunctionEntry @ 0x1402640A0 (RtlLookupFunctionEntry.c)
 *     RtlGetExtendedContextLength2 @ 0x140264560 (RtlGetExtendedContextLength2.c)
 *     RtlInitializeExtendedContext2 @ 0x140264F60 (RtlInitializeExtendedContext2.c)
 *     KeQueryCurrentStackInformation @ 0x1402651D0 (KeQueryCurrentStackInformation.c)
 *     RtlpGetStackLimitsEx @ 0x140265220 (RtlpGetStackLimitsEx.c)
 *     RtlGuardRestoreContext @ 0x140265248 (RtlGuardRestoreContext.c)
 *     RtlpxVirtualUnwind @ 0x1402C2A70 (RtlpxVirtualUnwind.c)
 *     RtlpGetStackLimits @ 0x14035B1A0 (RtlpGetStackLimits.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     ZwRaiseException @ 0x1403FD280 (ZwRaiseException.c)
 *     RtlCaptureContext2 @ 0x140407D90 (RtlCaptureContext2.c)
 *     _alloca_probe @ 0x140408680 (_alloca_probe.c)
 *     RtlpExecuteHandlerForUnwind @ 0x140408C80 (RtlpExecuteHandlerForUnwind.c)
 *     memset @ 0x140414300 (memset.c)
 */

void __cdecl RtlUnwindEx(
        PVOID TargetFrame,
        PVOID TargetIp,
        PEXCEPTION_RECORD ExceptionRecord,
        PVOID ReturnValue,
        PCONTEXT ContextRecord,
        PUNWIND_HISTORY_TABLE HistoryTable)
{
  _CONTEXT *v6; // r14
  _UNWIND_HISTORY_TABLE *v8; // rbx
  char v10; // di
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rcx
  void *v13; // rsp
  void *v14; // rsp
  PCONTEXT_EX v15; // r13
  DWORD64 v16; // r12
  _IMAGE_RUNTIME_FUNCTION_ENTRY *v17; // r15
  unsigned __int64 v18; // rbx
  PEXCEPTION_ROUTINE v19; // r13
  ULONG v20; // ecx
  unsigned int v21; // eax
  PEXCEPTION_RECORD v22; // r10
  int v23; // edx
  int v24; // edx
  _CONTEXT_EX *v25; // rax
  int v26; // et0
  char v27; // al
  _CONTEXT_EX *v28; // rax
  PEXCEPTION_RECORD v29; // r15
  _CONTEXT *v30; // r9
  PCONTEXT v31; // r8
  DWORD64 v32; // r10
  unsigned __int64 Rip; // rax
  bool v34; // bl
  unsigned __int64 *Rsp; // rcx
  int v36; // [rsp+50h] [rbp+0h] BYREF
  ULONG ContextLength; // [rsp+54h] [rbp+4h] BYREF
  unsigned __int64 EstablisherFrame; // [rsp+58h] [rbp+8h] BYREF
  PCONTEXT_EX ContextEx; // [rsp+60h] [rbp+10h] BYREF
  unsigned __int64 v40; // [rsp+68h] [rbp+18h] BYREF
  unsigned __int64 v41; // [rsp+70h] [rbp+20h] BYREF
  EXCEPTION_DISPOSITION (__cdecl *v42)(_EXCEPTION_RECORD *, PVOID, _CONTEXT *, PVOID); // [rsp+78h] [rbp+28h] BYREF
  unsigned __int64 ImageBase; // [rsp+80h] [rbp+30h] BYREF
  PVOID HandlerData; // [rsp+88h] [rbp+38h] BYREF
  PEXCEPTION_RECORD ExceptionRecorda; // [rsp+90h] [rbp+40h]
  PUNWIND_HISTORY_TABLE v46; // [rsp+98h] [rbp+48h]
  PCONTEXT v47; // [rsp+A0h] [rbp+50h]
  PVOID v48; // [rsp+A8h] [rbp+58h]
  PVOID v49; // [rsp+B0h] [rbp+60h]
  DWORD64 ControlPc[10]; // [rsp+C0h] [rbp+70h] BYREF
  _CONTEXT_EX *v51; // [rsp+110h] [rbp+C0h]
  __int64 v52; // [rsp+118h] [rbp+C8h] BYREF
  __int128 v53; // [rsp+120h] [rbp+D0h]
  _QWORD v54[20]; // [rsp+130h] [rbp+E0h] BYREF

  v6 = ContextRecord;
  v8 = HistoryTable;
  v49 = TargetIp;
  ExceptionRecorda = ExceptionRecord;
  v48 = ReturnValue;
  v47 = ContextRecord;
  v46 = HistoryTable;
  memset(ControlPc, 0, sizeof(ControlPc));
  memset(v54, 0, 0x98uLL);
  HandlerData = 0LL;
  v41 = 0LL;
  ImageBase = 0LL;
  ContextLength = 0;
  v40 = 0LL;
  v36 = 0;
  KeQueryCurrentStackInformation(&v36, &v40, &v41);
  v10 = v36 == 10;
  if ( !(unsigned __int8)RtlpGetStackLimits(&v40, &v41) )
LABEL_63:
    RtlRaiseStatus(-1073741784);
  RtlGetExtendedContextLength2(0x10000Bu, &ContextLength, 0LL);
  v11 = ContextLength + 15LL;
  if ( v11 <= ContextLength )
    v11 = 0xFFFFFFFFFFFFFF0LL;
  v12 = v11 & 0xFFFFFFFFFFFFFFF0uLL;
  v13 = alloca(v12);
  v14 = alloca(v12);
  v51 = (_CONTEXT_EX *)&v36;
  RtlInitializeExtendedContext2((PCONTEXT)&v36, 0x10000Bu, &ContextEx, 0LL);
  ContextEx = (PCONTEXT_EX)&v36;
  v15 = (PCONTEXT_EX)&v36;
  RtlCaptureContext2(ContextRecord);
  if ( HistoryTable )
    HistoryTable->Search = 1;
  if ( !ExceptionRecord )
  {
    Rip = ContextRecord->Rip;
    ExceptionRecorda = (PEXCEPTION_RECORD)v54;
    v54[2] = Rip;
    LODWORD(v54[0]) = -1073741785;
    v54[1] = 0LL;
    LODWORD(v54[3]) = 0;
  }
  v36 = 2;
  if ( !TargetFrame )
    v36 = 6;
  EstablisherFrame = 0LL;
  while ( 1 )
  {
    v16 = v6->Rip;
    v17 = RtlLookupFunctionEntry(v16, &ImageBase, v8);
    if ( v17 )
    {
      RtlpCopyContext(v15, v6);
      v42 = 0LL;
      v52 = 0LL;
      v53 = 0LL;
      RtlpxVirtualUnwind(
        2,
        ImageBase,
        v16,
        (_DWORD)v17,
        (__int64)v15,
        0LL,
        (__int64)&HandlerData,
        (__int64)&EstablisherFrame,
        (__int64)&v42,
        (__int64)&v52);
      v18 = EstablisherFrame;
      v19 = v42;
      if ( (EstablisherFrame & 7) != 0 || EstablisherFrame < v40 || EstablisherFrame >= v41 )
      {
        if ( v10 != 1 )
          goto LABEL_63;
        v10 = 2;
        if ( !(unsigned __int8)RtlpGetStackLimitsEx(EstablisherFrame, &v40, &v41) )
          goto LABEL_63;
        v18 = EstablisherFrame;
      }
      if ( TargetFrame && !v10 && (unsigned __int64)TargetFrame < v18 )
        goto LABEL_63;
      if ( v19 )
      {
        v20 = 0;
        ControlPc[4] = (DWORD64)v49;
        v21 = v36;
        ContextLength = 0;
        while ( 1 )
        {
          if ( TargetFrame == (PVOID)v18 )
          {
            v21 |= 0x20u;
            v36 = v21;
          }
          v22 = ExceptionRecorda;
          ExceptionRecorda->ExceptionFlags = v21;
          v6->Rax = (unsigned __int64)v48;
          ControlPc[1] = ImageBase;
          ControlPc[7] = (DWORD64)HandlerData;
          ControlPc[8] = (DWORD64)v46;
          ControlPc[0] = v16;
          ControlPc[2] = (DWORD64)v17;
          ControlPc[3] = EstablisherFrame;
          ControlPc[5] = (DWORD64)v6;
          ControlPc[6] = (DWORD64)v19;
          LODWORD(ControlPc[9]) = v20;
          v34 = (v6->ContextFlags & 0x100040) == 1048640;
          v23 = RtlpExecuteHandlerForUnwind(v22, EstablisherFrame, v6, ControlPc);
          if ( !v34 && (v6->ContextFlags & 0x100040) == 0x100040 )
            v6->ContextFlags &= ~0x40u;
          v36 &= 0xFFFFFF9F;
          v24 = v23 - 1;
          if ( v24 )
          {
            if ( v24 != 2 )
              RtlRaiseStatus(-1073741786);
            v16 = ControlPc[0];
            v17 = (_IMAGE_RUNTIME_FUNCTION_ENTRY *)ControlPc[2];
            ImageBase = ControlPc[1];
            RtlpCopyContext(v47, ControlPc[5]);
            ContextEx = v51;
            v6 = v30;
            RtlpCopyContext(v51, v30);
            v19 = RtlVirtualUnwind(2u, v32, v16, v17, v31, &HandlerData, &EstablisherFrame, 0LL);
            if ( v19 != (PEXCEPTION_ROUTINE)ControlPc[6]
              || (v18 = EstablisherFrame, EstablisherFrame != ControlPc[3])
              || HandlerData != (PVOID)ControlPc[7] )
            {
              __fastfail(0x27u);
            }
            v36 |= 0x40u;
            v46 = (PUNWIND_HISTORY_TABLE)ControlPc[8];
            ContextLength = ControlPc[9];
            if ( RtlpIsFrameInBounds(&v40, EstablisherFrame, &v41) || v10 != 1 )
              goto LABEL_30;
            v10 = 2;
            RtlpGetStackLimitsEx(v18, &v40, &v41);
          }
          else
          {
            if ( (PVOID)EstablisherFrame != TargetFrame )
            {
              v25 = (_CONTEXT_EX *)v6;
              v6 = (_CONTEXT *)ContextEx;
              ContextEx = v25;
            }
            v26 = _mm_getcsr();
            LODWORD(v42) = v26;
            v6->MxCsr = v26;
            v6->FltSave.MxCsr = v26;
          }
          v18 = EstablisherFrame;
LABEL_30:
          v21 = v36;
          v20 = ContextLength;
          if ( (v36 & 0x40) == 0 )
            goto LABEL_31;
        }
      }
      if ( (PVOID)v18 == TargetFrame )
      {
LABEL_31:
        v15 = ContextEx;
      }
      else
      {
        v28 = (_CONTEXT_EX *)v6;
        v6 = (_CONTEXT *)ContextEx;
        v15 = v28;
        ContextEx = v28;
      }
    }
    else
    {
      Rsp = (unsigned __int64 *)v6->Rsp;
      v6->Rip = *Rsp;
      v6->Rsp = (unsigned __int64)(Rsp + 1);
      RtlpPopUserShadowStack((__int64)v6);
      v18 = EstablisherFrame;
    }
    v27 = 0;
    if ( v10 != 2 )
      v27 = v10;
    if ( (v18 & 7) != 0 || v18 < v40 || v18 >= v41 )
      break;
    if ( (PVOID)v18 == TargetFrame )
      goto LABEL_41;
    v8 = v46;
    v10 = v27;
  }
  if ( (PVOID)v18 == TargetFrame )
  {
LABEL_41:
    v29 = ExceptionRecorda;
    v6->Rax = (unsigned __int64)v48;
    if ( v29->ExceptionCode != -2147483607 )
    {
      v6->Rip = (unsigned __int64)v49;
      if ( v29->ExceptionCode != -2147483610 )
        v29->ExceptionCode = -1073741785;
    }
    RtlGuardRestoreContext(v6, v29);
  }
  else
  {
    if ( v16 == v6->Rip )
      RtlRaiseStatus(-1073741569);
    ZwRaiseException(ExceptionRecorda, v6, 0);
  }
}
