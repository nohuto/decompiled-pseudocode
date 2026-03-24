/*
 * XREFs of NtUserGetGestureConfig @ 0x1C01F9680
 * Callers:
 *     <none>
 * Callees:
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0069AF0 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0069B4C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C0069D40 (UserSetLastError.c)
 *     memmove @ 0x1C016E4C0 (memmove.c)
 *     GetGestureConfigSettings @ 0x1C0227648 (GetGestureConfigSettings.c)
 */

__int64 __fastcall NtUserGetGestureConfig(
        __int64 a1,
        __int64 a2,
        int a3,
        unsigned int *a4,
        volatile void *Address,
        int a6)
{
  __int64 v9; // rsi
  int GestureConfigSettings; // ebx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rbx
  size_t v17; // r15
  __int64 v18; // rcx
  void *v19; // rdi
  __int64 CurrentProcessWow64Process; // rax
  __int64 v21; // rcx
  _BYTE v23[8]; // [rsp+68h] [rbp-40h] BYREF
  __int128 v24; // [rsp+70h] [rbp-38h] BYREF
  __int64 v25; // [rsp+80h] [rbp-28h]

  v24 = 0LL;
  v25 = 0LL;
  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v23);
  v9 = ValidateHwnd(a1);
  if ( v9 )
  {
    *(_QWORD *)&v24 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v24;
    *((_QWORD *)&v24 + 1) = v9;
    HMLockObject(v9);
    if ( a6 == 12 )
    {
      if ( (a3 & 0xFFFFFFFE) != 0 )
      {
        UserSetLastError(1004LL, v11, v12);
        GestureConfigSettings = 0;
LABEL_20:
        ThreadUnlock1(v14);
        goto LABEL_21;
      }
      v15 = *(_QWORD *)(v9 + 40);
      if ( *(char *)(v15 + 20) < 0 || *(char *)(v15 + 19) < 0 )
      {
        v13 = 1400LL;
        goto LABEL_19;
      }
      if ( Address )
      {
        if ( (unsigned __int64)a4 >= MmUserProbeAddress )
          a4 = (unsigned int *)MmUserProbeAddress;
        v16 = *a4;
        if ( (unsigned int)(v16 - 1) <= 0xFF )
        {
          v17 = (unsigned int)(12 * v16);
          v19 = (void *)Win32AllocPoolWithQuota(v17, 1667724117LL);
          if ( v19 )
          {
            CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v18);
            ProbeForWrite(Address, 12 * v16, CurrentProcessWow64Process != 0 ? 1 : 4);
            memmove(v19, (const void *)Address, v17);
            GestureConfigSettings = GetGestureConfigSettings((struct tagWND *)v9, (__int64)v19);
            if ( GestureConfigSettings )
              memmove((void *)Address, v19, v17);
            Win32FreePool(v19);
            goto LABEL_20;
          }
          v13 = 8LL;
          goto LABEL_19;
        }
      }
    }
    v13 = 87LL;
LABEL_19:
    GestureConfigSettings = 0;
    UserSetLastError(v13, v11, v12);
    goto LABEL_20;
  }
  GestureConfigSettings = 0;
LABEL_21:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v23);
  UserSessionSwitchLeaveCrit(v21);
  return GestureConfigSettings;
}
