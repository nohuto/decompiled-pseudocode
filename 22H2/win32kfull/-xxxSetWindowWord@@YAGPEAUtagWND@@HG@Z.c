/*
 * XREFs of ?xxxSetWindowWord@@YAGPEAUtagWND@@HG@Z @ 0x1C022CF04
 * Callers:
 *     NtUserSetWindowWord @ 0x1C01DD860 (NtUserSetWindowWord.c)
 * Callees:
 *     ??1CProcessAttachDetach@@QEAA@XZ @ 0x1C00CA914 (--1CProcessAttachDetach@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 *     Feature_Backport_UserModeTooltips__private_IsEnabledDeviceUsage @ 0x1C0139CA0 (Feature_Backport_UserModeTooltips__private_IsEnabledDeviceUsage.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C01410D8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     FCallerOk @ 0x1C022D438 (FCallerOk.c)
 */

__int64 __fastcall xxxSetWindowWord(struct tagWND *a1, unsigned int a2, unsigned __int16 a3)
{
  int v3; // r15d
  __int64 v4; // rbx
  __int64 v6; // r8
  __int64 v7; // rsi
  __int64 CurrentProcessWin32Process; // rax
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r14
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v17; // rax
  __int64 v18; // r8
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r14
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // r9
  bool v26; // sf
  int v27; // ecx
  __int64 v28; // rdx
  _DWORD *v29; // rdx
  _DWORD *v30; // rax
  __int16 *v31; // rdx
  unsigned int v32; // ecx
  __int16 v33; // r8
  _DWORD *v34; // rdx
  __int64 v35; // r14
  BOOL v36; // ecx
  int v37; // eax
  __int64 v38; // rcx
  unsigned __int64 v39; // rdx
  int v40; // ebx
  __int64 v41; // r8
  _WORD *v42; // rax
  __int64 v43; // rcx
  char v44; // [rsp+88h] [rbp+20h] BYREF

  v3 = a3;
  v4 = a2;
  v44 = 0;
  if ( !(unsigned int)FCallerOk() )
    goto LABEL_73;
  v6 = *((_QWORD *)a1 + 5);
  v7 = (int)v4;
  if ( (*(_BYTE *)(v6 + 18) & 1) != 0 )
  {
    if ( (unsigned __int64)(int)v4 >= 8 && (int)v4 < 0 || (unsigned __int64)(int)v4 > 0x16 && (int)v4 < 30 )
      goto LABEL_45;
    if ( (*(_WORD *)(v6 + 42) & 0x2FFF) == 0x2A4 )
    {
      if ( (int)v4 < 0 )
        goto LABEL_45;
      if ( (int)v4 + 2LL <= (unsigned __int64)*(unsigned int *)(v6 + 248) )
        goto LABEL_53;
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process((int)v4 + 2LL);
      v9 = CurrentProcessWin32Process;
      if ( CurrentProcessWin32Process )
        v9 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
      v10 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL);
      if ( v10 == v9 )
        goto LABEL_53;
      v11 = *(unsigned int *)(*((_QWORD *)a1 + 5) + 232LL);
      if ( (v11 & 0x10) != 0 )
        goto LABEL_53;
      v12 = v10 + 888;
      v13 = PsGetCurrentProcessWin32Process(v11);
      if ( v13 )
        v13 &= -(__int64)(*(_QWORD *)v13 != 0LL);
      if ( (unsigned __int8)CheckAccess(v13 + 888, v12) )
        goto LABEL_20;
      v15 = PsGetCurrentProcessWin32Process(v14);
      if ( v15 )
        v15 &= -(__int64)(*(_QWORD *)v15 != 0LL);
      if ( *(int *)(v15 + 12) < 0 )
      {
LABEL_20:
        KeAttachProcess(**(PRKPROCESS **)(*((_QWORD *)a1 + 2) + 424LL));
        v44 = 1;
LABEL_53:
        v26 = (int)v4 < 0;
LABEL_54:
        if ( !v26
          && v4 + 2 <= (unsigned __int64)(unsigned int)(*(_DWORD *)(*((_QWORD *)a1 + 5) + 248LL)
                                                      + *(_DWORD *)(*((_QWORD *)a1 + 5) + 200LL)) )
        {
          v31 = *(__int16 **)(*((_QWORD *)a1 + 17) + 8LL);
          if ( !_bittest16(v31 + 3, 8u) )
            goto LABEL_67;
          v32 = 0;
          v33 = *v31;
          v34 = &gDefaultServerClasses;
          while ( v33 != *(_WORD *)(gpsi + 2LL * ((*v34 >> 3) & 0x1F) + 868) )
          {
            ++v32;
            v34 += 12;
            if ( v32 >= 8 )
              goto LABEL_67;
          }
          v35 = 6LL * v32;
          if ( (int)v4 >= *((_DWORD *)&gDefaultServerClasses + 12 * v32 + 6) )
            goto LABEL_67;
          v36 = Feature_Backport_UserModeTooltips__private_IsEnabledDeviceUsage() != 0;
          v37 = *((_DWORD *)&gDefaultServerClasses + 2 * v35) & 0xF8;
          if ( v36 )
          {
            if ( v37 == 176 )
              MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTellMeIf", 0x20000, 379);
            goto LABEL_67;
          }
          if ( v37 == 176 && (unsigned __int64)((int)v4 + 2LL) <= 0xFFFFFFFFFFFFFEE8uLL )
          {
LABEL_67:
            v38 = *((_QWORD *)a1 + 5);
            v39 = *(unsigned int *)(v38 + 248);
            if ( (int)v4 + 2LL <= v39 )
            {
              v43 = *((_QWORD *)a1 + 35);
              LOWORD(v4) = *(_WORD *)((int)v4 + v43);
              *(_WORD *)(v7 + v43) = v3;
            }
            else
            {
              v40 = v4 - v39;
              v41 = *(_QWORD *)(v38 + 296);
              if ( (*(_DWORD *)(v38 + 232) & 0x10) != 0 )
                v42 = (_WORD *)(v41 + v40 + *(_QWORD *)(*((_QWORD *)a1 + 3) + 136LL));
              else
                v42 = (_WORD *)(v40 + v41);
              LOWORD(v4) = *v42;
              *v42 = v3;
            }
            goto LABEL_23;
          }
          goto LABEL_73;
        }
LABEL_45:
        v27 = 1413;
LABEL_74:
        UserSetLastError(v27);
        CProcessAttachDetach::~CProcessAttachDetach((CProcessAttachDetach *)&v44);
        return 0LL;
      }
LABEL_73:
      v27 = 5;
      goto LABEL_74;
    }
  }
  if ( (_DWORD)v4 == -21 )
  {
    LOWORD(v4) = *(_WORD *)(v6 + 216);
    *(_QWORD *)(v6 + 216) = v3 | ((unsigned __int16)HIWORD(*(_DWORD *)(v6 + 216)) << 16);
LABEL_23:
    CProcessAttachDetach::~CProcessAttachDetach((CProcessAttachDetach *)&v44);
    return (unsigned __int16)v4;
  }
  if ( (_DWORD)v4 == -16 )
  {
    LOWORD(v4) = *(_WORD *)(v6 + 28);
    *(_DWORD *)(v6 + 28) = v3 | *(_DWORD *)(v6 + 28) & 0xFFFF0000;
    goto LABEL_23;
  }
  if ( (int)v4 >= 0 && (int)v4 + 2LL > (unsigned __int64)*(unsigned int *)(v6 + 248) )
  {
    v17 = PsGetCurrentProcessWin32Process((int)v4 + 2LL);
    v18 = v17;
    if ( v17 )
      v18 = -(__int64)(*(_QWORD *)v17 != 0LL) & v17;
    v19 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL);
    if ( v19 != v18 )
    {
      v20 = *(unsigned int *)(*((_QWORD *)a1 + 5) + 232LL);
      if ( (v20 & 0x10) == 0 )
      {
        v21 = v19 + 888;
        v22 = PsGetCurrentProcessWin32Process(v20);
        if ( v22 )
          v22 &= -(__int64)(*(_QWORD *)v22 != 0LL);
        if ( !(unsigned __int8)CheckAccess(v22 + 888, v21) )
        {
          v24 = PsGetCurrentProcessWin32Process(v23);
          if ( v24 )
            v24 &= -(__int64)(*(_QWORD *)v24 != 0LL);
          if ( *(int *)(v24 + 12) >= 0 )
            goto LABEL_73;
        }
        KeAttachProcess(**(PRKPROCESS **)(*((_QWORD *)a1 + 2) + 424LL));
        v44 = 1;
      }
    }
  }
  v25 = *((_QWORD *)a1 + 5);
  if ( (*(_WORD *)(v25 + 42) & 0x2FFF) == 0 )
    goto LABEL_53;
  if ( (int)v4 < 0 )
    goto LABEL_45;
  if ( (int)v4 >= *(unsigned __int16 *)(gpsi + 2LL * ((*(_WORD *)(v25 + 42) & 0x2FFFu) - 666) + 328) - 328 )
    goto LABEL_53;
  if ( (*(_WORD *)(v25 + 42) & 0x2FFF) != 0x2A1 )
  {
    if ( (*(_WORD *)(v25 + 42) & 0x2FFF) != 0x2A7 )
      goto LABEL_45;
    v26 = (int)v4 < 0;
    if ( (_DWORD)v4 )
      goto LABEL_45;
    goto LABEL_54;
  }
  if ( (_DWORD)v4 )
    goto LABEL_45;
  v28 = **(_QWORD **)(v25 + 296);
  if ( v28 && v28 != -1 )
  {
    v29 = (_DWORD *)(v28 + 8);
    v30 = v29;
    if ( (unsigned __int64)v29 >= MmUserProbeAddress )
      v30 = (_DWORD *)MmUserProbeAddress;
    LODWORD(v4) = *v30;
    *v29 = v3;
    goto LABEL_23;
  }
  CProcessAttachDetach::~CProcessAttachDetach((CProcessAttachDetach *)&v44);
  return 0LL;
}
