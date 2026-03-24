/*
 * XREFs of NtUserInitializePointerDeviceInjectionEx @ 0x1C0130850
 * Callers:
 *     NtUserInitializePointerDeviceInjection @ 0x1C0130820 (NtUserInitializePointerDeviceInjection.c)
 * Callees:
 *     HMValidateSharedHandle @ 0x1C0010E18 (HMValidateSharedHandle.c)
 *     EnterCrit @ 0x1C002FF70 (EnterCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0037600 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C0039D2C (UserSetLastError.c)
 *     NtUserRemoveInjectionDevice @ 0x1C0132F20 (NtUserRemoveInjectionDevice.c)
 *     RIMIDECheckCurrentProcessForInjectionPermissions @ 0x1C0167108 (RIMIDECheckCurrentProcessForInjectionPermissions.c)
 *     RIMIDE_InitializePointerDeviceInjection @ 0x1C016B698 (RIMIDE_InitializePointerDeviceInjection.c)
 */

__int64 __fastcall NtUserInitializePointerDeviceInjectionEx(
        int a1,
        int a2,
        unsigned __int64 a3,
        int a4,
        int a5,
        _QWORD *a6)
{
  int v10; // esi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  int v14; // ebx
  _QWORD *v15; // rcx
  __int64 v17; // [rsp+50h] [rbp-18h] BYREF

  EnterCrit(0, 1);
  v10 = 0;
  v17 = 0LL;
  if ( !(unsigned int)RIMIDECheckCurrentProcessForInjectionPermissions(1LL) )
  {
    v12 = 5LL;
LABEL_18:
    v14 = 0;
    UserSetLastError(v12, v11);
    goto LABEL_19;
  }
  if ( a1 == 3 )
  {
    if ( a2 != 1 )
      goto LABEL_17;
  }
  else if ( a1 != 2 || (unsigned int)(a2 - 1) > 0xFF )
  {
    goto LABEL_17;
  }
  if ( (unsigned int)(a4 - 1) > 2 )
  {
LABEL_17:
    v12 = 87LL;
    goto LABEL_18;
  }
  if ( !a3 || (v13 = HMValidateSharedHandle(a3), v10 = v13, v13) )
  {
    v14 = RIMIDE_InitializePointerDeviceInjection(a1, a2, v10, a4, 0, a5, (__int64)&v17);
    if ( v14 )
    {
      v15 = a6;
      if ( (unsigned __int64)a6 >= MmUserProbeAddress )
        v15 = (_QWORD *)MmUserProbeAddress;
      *v15 = *v15;
      *a6 = v17;
    }
  }
  else
  {
    v14 = 0;
  }
LABEL_19:
  UserSessionSwitchLeaveCrit();
  return v14;
}
