/*
 * XREFs of NtUserInitializeInputDeviceInjection @ 0x1C01305F0
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateSharedHandle @ 0x1C0010E18 (HMValidateSharedHandle.c)
 *     Win32AllocPoolWithQuota @ 0x1C002AA40 (Win32AllocPoolWithQuota.c)
 *     Win32FreePool @ 0x1C002C230 (Win32FreePool.c)
 *     EnterCrit @ 0x1C002FF70 (EnterCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0037600 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C0039D2C (UserSetLastError.c)
 *     memmove @ 0x1C00CF9C0 (memmove.c)
 *     RIMIDECheckCurrentProcessForInjectionPermissions @ 0x1C0167108 (RIMIDECheckCurrentProcessForInjectionPermissions.c)
 *     RIMIDE_InitializeDeviceInjection @ 0x1C016B534 (RIMIDE_InitializeDeviceInjection.c)
 */

__int64 __fastcall NtUserInitializeInputDeviceInjection(
        unsigned __int16 a1,
        unsigned __int16 a2,
        char *a3,
        unsigned int a4,
        unsigned __int64 a5,
        int a6,
        _QWORD *a7)
{
  __int64 v7; // r14
  __int64 v10; // rdi
  __int64 v11; // r12
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rbx
  unsigned __int64 v15; // rcx
  int v16; // ebx
  void *v17; // rax
  _QWORD *v18; // rdx
  __int64 v20; // [rsp+58h] [rbp-40h]
  __int64 v21; // [rsp+60h] [rbp-38h] BYREF

  v7 = a4;
  EnterCrit(0, 1);
  v10 = 0LL;
  v11 = 0LL;
  v21 = 0LL;
  if ( !(unsigned int)RIMIDECheckCurrentProcessForInjectionPermissions(1LL) )
  {
    v13 = 5LL;
LABEL_24:
    v16 = 0;
    UserSetLastError(v13, v12);
    goto LABEL_25;
  }
  v14 = 32 * v7;
  if ( (unsigned __int64)(32 * v7) > 0xFFFFFFFF || !(_DWORD)v7 || (unsigned int)(a6 - 1) > 2 )
  {
    v13 = 87LL;
    goto LABEL_24;
  }
  v15 = a5;
  if ( !a5 || (v11 = HMValidateSharedHandle(a5)) != 0 )
  {
    if ( v14 )
    {
      if ( ((PsGetCurrentProcessWow64Process(v15) == 0 ? 3 : 0) & (unsigned __int8)a3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)&a3[v14] > MmUserProbeAddress || &a3[v14] < a3 )
        *(_BYTE *)MmUserProbeAddress = 0;
    }
    v17 = (void *)Win32AllocPoolWithQuota((unsigned int)v14, 0x74697355u);
    v10 = (__int64)v17;
    v20 = (__int64)v17;
    if ( !v17 )
      ExRaiseStatus(-1073741801);
    memmove(v17, a3, 32 * v7);
    v16 = RIMIDE_InitializeDeviceInjection(a1, a2, v10, (unsigned int)v7, v11, a6, &v21);
    if ( v16 )
    {
      v18 = a7;
      if ( (unsigned __int64)a7 >= MmUserProbeAddress )
        v18 = (_QWORD *)MmUserProbeAddress;
      *v18 = *v18;
      *a7 = v21;
      v10 = v20;
    }
  }
  else
  {
    v16 = 0;
  }
  if ( v10 )
    Win32FreePool(v10);
LABEL_25:
  UserSessionSwitchLeaveCrit();
  return v16;
}
