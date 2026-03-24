/*
 * XREFs of NtUserInitializeGenericHidInjection @ 0x1C0130280
 * Callers:
 *     <none>
 * Callees:
 *     Win32AllocPoolWithQuota @ 0x1C002AA40 (Win32AllocPoolWithQuota.c)
 *     Win32FreePool @ 0x1C002C230 (Win32FreePool.c)
 *     EnterCrit @ 0x1C002FF70 (EnterCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0037600 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C0039D2C (UserSetLastError.c)
 *     memset @ 0x1C00CF8C0 (memset.c)
 *     memmove @ 0x1C00CF9C0 (memmove.c)
 *     RIMIDECheckCurrentProcessForInjectionPermissions @ 0x1C0167108 (RIMIDECheckCurrentProcessForInjectionPermissions.c)
 *     RIMIDE_CreateGenericHidDevice @ 0x1C016B3E8 (RIMIDE_CreateGenericHidDevice.c)
 */

__int64 __fastcall NtUserInitializeGenericHidInjection(_OWORD *a1, _QWORD *a2)
{
  int v4; // edi
  __int64 v5; // rdx
  __int64 v6; // rcx
  PVOID CurrentProcess; // rax
  __int64 v8; // rcx
  BOOL v9; // edx
  __int64 v10; // rdx
  _OWORD *v11; // rcx
  ULONG64 v12; // rdx
  unsigned __int16 epi16; // r14
  __int64 CurrentProcessWow64Process; // rax
  size_t v15; // rsi
  __int64 v16; // rax
  const void *v17; // r15
  __int64 v18; // rdx
  const void *v19; // r15
  char v21; // [rsp+20h] [rbp-98h]
  char v22; // [rsp+21h] [rbp-97h]
  _OWORD v23[6]; // [rsp+40h] [rbp-78h] BYREF
  __int64 v24; // [rsp+D0h] [rbp+18h] BYREF

  v4 = 1;
  EnterCrit(0, 1);
  v24 = 0LL;
  memset(v23, 0, 0x40uLL);
  v21 = 0;
  v22 = 0;
  CurrentProcess = (PVOID)PsGetCurrentProcess(v6, v5);
  v9 = 0;
  if ( CurrentProcess )
    v9 = CurrentProcess == g_pepDwm;
  if ( !v9 && !(unsigned int)RIMIDECheckCurrentProcessForInjectionPermissions(1LL) )
  {
    v4 = 0;
    UserSetLastError(5LL, v10);
    goto LABEL_40;
  }
  if ( ((PsGetCurrentProcessWow64Process(v8) == 0 ? 3 : 0) & (unsigned __int8)a1) != 0 )
    ExRaiseDatatypeMisalignment();
  v11 = a1 + 4;
  v12 = MmUserProbeAddress;
  if ( (unsigned __int64)(a1 + 4) > MmUserProbeAddress || v11 < a1 )
    *(_BYTE *)MmUserProbeAddress = 0;
  v23[0] = *a1;
  v23[1] = a1[1];
  v23[2] = a1[2];
  v23[3] = a1[3];
  epi16 = _mm_extract_epi16((__m128i)v23[3], 4);
  if ( epi16 )
  {
    CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v11);
    if ( ((CurrentProcessWow64Process == 0 ? 3 : 0) & LOBYTE(v23[3])) != 0 )
      ExRaiseDatatypeMisalignment();
    v11 = *(_OWORD **)&v23[3];
    v12 = *(_QWORD *)&v23[3] + epi16;
    if ( v12 > MmUserProbeAddress || v12 < *(_QWORD *)&v23[3] )
      *(_BYTE *)MmUserProbeAddress = 0;
  }
  v15 = WORD4(v23[2]);
  if ( !WORD4(v23[2]) )
    goto LABEL_27;
  v16 = PsGetCurrentProcessWow64Process(v11);
  if ( ((v16 == 0 ? 3 : 0) & LOBYTE(v23[2])) != 0 )
    ExRaiseDatatypeMisalignment();
  v12 = *(_QWORD *)&v23[2] + v15;
  if ( *(_QWORD *)&v23[2] + v15 > MmUserProbeAddress || v12 < *(_QWORD *)&v23[2] )
    *(_BYTE *)MmUserProbeAddress = 0;
  if ( !(_WORD)v15 )
  {
LABEL_27:
    if ( epi16 )
    {
      v19 = *(const void **)&v23[3];
      *(_QWORD *)&v23[3] = Win32AllocPoolWithQuota(epi16, 0x74697355u);
      if ( !*(_QWORD *)&v23[3] )
        goto LABEL_25;
      v22 = 1;
      memmove(*(void **)&v23[3], v19, epi16);
    }
    if ( *(_QWORD *)&v23[2] && (unsigned int)RIMIDE_CreateGenericHidDevice(v23, &v24) )
    {
      if ( (unsigned __int64)a2 >= MmUserProbeAddress )
        a2 = (_QWORD *)MmUserProbeAddress;
      *a2 = v24;
    }
    else
    {
      v4 = 0;
      UserSetLastError(87LL, v12);
    }
    goto LABEL_36;
  }
  v17 = *(const void **)&v23[2];
  *(_QWORD *)&v23[2] = Win32AllocPoolWithQuota(v15, 0x74697355u);
  if ( *(_QWORD *)&v23[2] )
  {
    v21 = 1;
    memmove(*(void **)&v23[2], v17, v15);
    goto LABEL_27;
  }
LABEL_25:
  v4 = 0;
  UserSetLastError(8LL, v18);
LABEL_36:
  if ( v21 )
    Win32FreePool(*(__int64 *)&v23[2]);
  if ( v22 )
    Win32FreePool(*(__int64 *)&v23[3]);
LABEL_40:
  UserSessionSwitchLeaveCrit();
  return v4;
}
