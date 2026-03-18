/*
 * XREFs of NtUserSetCursorIconDataEx @ 0x1C0025EE0
 * Callers:
 *     NtUserSetCursorIconData @ 0x1C01FCE30 (NtUserSetCursorIconData.c)
 * Callees:
 *     HMValidateHandle @ 0x1C0024F44 (HMValidateHandle.c)
 *     ?_SetCursorIconDataEx@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@KI@Z @ 0x1C0026768 (-_SetCursorIconDataEx@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@KI@Z.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C00705E0 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C00A2750 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0147E84 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     memset @ 0x1C0160540 (memset.c)
 */

__int64 __fastcall NtUserSetCursorIconDataEx(__int64 a1, ULONG64 a2, ULONG64 a3, _BYTE *a4, unsigned int a5)
{
  __int64 v9; // rax
  struct tagCURSOR *v10; // r15
  int v11; // ebx
  int v12; // edx
  WCHAR *v13; // r9
  int v14; // esi
  WCHAR *v15; // r14
  ULONG64 v16; // r8
  unsigned __int64 *v17; // rcx
  unsigned __int64 v18; // rdx
  __int64 v19; // rcx
  size_t Size; // [rsp+20h] [rbp-E8h]
  _BYTE v22[4]; // [rsp+30h] [rbp-D8h] BYREF
  int v23; // [rsp+34h] [rbp-D4h]
  int v24; // [rsp+38h] [rbp-D0h]
  int v25; // [rsp+3Ch] [rbp-CCh]
  int v26; // [rsp+40h] [rbp-C8h]
  struct _UNICODE_STRING v27; // [rsp+48h] [rbp-C0h] BYREF
  struct _UNICODE_STRING v28; // [rsp+58h] [rbp-B0h] BYREF
  _OWORD v29[9]; // [rsp+70h] [rbp-98h] BYREF

  v28 = 0LL;
  v27 = 0LL;
  memset(v29, 0, 0x88uLL);
  EnterCrit(0LL, 0LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v22);
  v9 = HMValidateHandle(a1, 3u);
  v10 = (struct tagCURSOR *)v9;
  v11 = 0;
  if ( !v9 )
    goto LABEL_37;
  if ( (*(_DWORD *)(v9 + 80) & 0x800) == 0 )
  {
    UserSetLastError(0LL);
    goto LABEL_37;
  }
  if ( a2 >= MmUserProbeAddress )
    a2 = MmUserProbeAddress;
  v12 = *(_DWORD *)a2;
  v24 = v12;
  *(_DWORD *)&v28.Length = v12;
  v13 = *(WCHAR **)(a2 + 8);
  v28.Buffer = v13;
  if ( a3 >= MmUserProbeAddress )
    a3 = MmUserProbeAddress;
  v14 = *(_DWORD *)a3;
  v25 = v14;
  *(_DWORD *)&v27.Length = v14;
  v15 = *(WCHAR **)(a3 + 8);
  v27.Buffer = v15;
  if ( ((unsigned __int8)v13 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v16 = (ULONG64)v13 + (unsigned __int16)v12 + 2;
  v17 = (unsigned __int64 *)MmUserProbeAddress;
  if ( v16 < MmUserProbeAddress && (unsigned __int16)v12 <= HIWORD(v24) )
  {
    if ( (v12 & 1) != 0 )
    {
LABEL_30:
      MicrosoftTelemetryAssertTriggeredNoArgsKM(MmUserProbeAddress);
      v17 = (unsigned __int64 *)MmUserProbeAddress;
      goto LABEL_31;
    }
    if ( v16 > (unsigned __int64)v13 )
      goto LABEL_12;
  }
  if ( (v12 & 1) != 0 )
    goto LABEL_30;
LABEL_31:
  *(_BYTE *)*v17 = 0;
  v17 = (unsigned __int64 *)MmUserProbeAddress;
LABEL_12:
  if ( ((unsigned __int64)v15 & 0xFFFFFFFFFFFF0000uLL) == 0 )
    goto LABEL_13;
  if ( ((unsigned __int8)v15 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v18 = (unsigned __int64)v15 + (unsigned __int16)v14 + 2;
  if ( v18 < *v17 && (unsigned __int16)v14 <= HIWORD(v25) )
  {
    if ( (v14 & 1) != 0 )
    {
LABEL_26:
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v17);
      v17 = (unsigned __int64 *)MmUserProbeAddress;
      goto LABEL_27;
    }
    if ( v18 > (unsigned __int64)v15 )
      goto LABEL_13;
  }
  if ( (v14 & 1) != 0 )
    goto LABEL_26;
LABEL_27:
  *(_BYTE *)*v17 = 0;
  v17 = (unsigned __int64 *)MmUserProbeAddress;
LABEL_13:
  if ( (unsigned __int64)a4 >= *v17 )
    a4 = (_BYTE *)*v17;
  v29[0] = *(_OWORD *)a4;
  v29[1] = *((_OWORD *)a4 + 1);
  v29[2] = *((_OWORD *)a4 + 2);
  v29[3] = *((_OWORD *)a4 + 3);
  v29[4] = *((_OWORD *)a4 + 4);
  v29[5] = *((_OWORD *)a4 + 5);
  v29[6] = *((_OWORD *)a4 + 6);
  v29[7] = *((_OWORD *)a4 + 7);
  *(_QWORD *)&v29[8] = *((_QWORD *)a4 + 16);
  if ( (DWORD2(v29[1]) & 0xFFFFEFB0) != 0 )
  {
    UserSetLastError(1004LL);
    v23 = 0;
  }
  else
  {
    if ( (BYTE8(v29[1]) & 8) == 0 )
    {
LABEL_36:
      v26 = v11;
      ProbeForRead(*((volatile void **)&v29[6] + 1), (unsigned int)v11, 4u);
      LODWORD(Size) = v11;
      v11 = _SetCursorIconDataEx(v10, &v28, &v27, (struct tagCURSORDATA *)v29, Size, a5);
      goto LABEL_37;
    }
    if ( WORD1(v29[6]) | WORD3(v29[6]) )
    {
      v23 = 0;
    }
    else
    {
      if ( v29[7] == __PAIR128__(8LL * SLODWORD(v29[6]), *((_QWORD *)&v29[7] + 1) + 4LL * SDWORD1(v29[6])) )
      {
        v11 = 8 * (LODWORD(v29[6]) + DWORD1(v29[6]));
        goto LABEL_36;
      }
      v23 = 0;
    }
  }
LABEL_37:
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v22);
  UserSessionSwitchLeaveCrit(v19);
  return v11;
}
