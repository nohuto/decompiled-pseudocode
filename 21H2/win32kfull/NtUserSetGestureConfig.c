/*
 * XREFs of NtUserSetGestureConfig @ 0x1C012B1C0
 * Callers:
 *     <none>
 * Callees:
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0069AF0 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0069B4C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C0069D40 (UserSetLastError.c)
 *     SetGestureConfigSettings @ 0x1C012B4F4 (SetGestureConfigSettings.c)
 *     memmove @ 0x1C016E4C0 (memmove.c)
 */

__int64 __fastcall NtUserSetGestureConfig(__int64 a1, __int64 a2, unsigned int a3, volatile void *a4, int a5)
{
  __int64 v6; // r14
  __int64 v8; // rsi
  int v9; // ebx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rax
  __int64 v13; // rcx
  void *v14; // rdi
  __int64 CurrentProcessWow64Process; // rax
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v19; // rcx
  _BYTE v20[16]; // [rsp+48h] [rbp-40h] BYREF
  __int128 v21; // [rsp+58h] [rbp-30h] BYREF
  __int64 v22; // [rsp+68h] [rbp-20h]

  v6 = a3;
  v21 = 0LL;
  v22 = 0LL;
  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v20);
  v8 = ValidateHwnd(a1);
  v9 = 0;
  if ( v8 )
  {
    *(_QWORD *)&v21 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v21;
    *((_QWORD *)&v21 + 1) = v8;
    HMLockObject(v8);
    if ( a4 && a5 == 12 && (unsigned int)(v6 - 1) <= 0xFF )
    {
      v12 = *(_QWORD *)(v8 + 40);
      if ( *(char *)(v12 + 20) >= 0
        && *(char *)(v12 + 19) >= 0
        && *(_QWORD *)(gptiCurrent + 424LL) == *(_QWORD *)(*(_QWORD *)(v8 + 16) + 424LL) )
      {
        v14 = (void *)Win32AllocPoolWithQuota((unsigned int)(12 * v6), 1667724117LL);
        if ( v14 )
        {
          CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v13);
          ProbeForRead(a4, 12 * v6, CurrentProcessWow64Process != 0 ? 1 : 4);
          memmove(v14, (const void *)a4, (unsigned int)(12 * v6));
          v9 = SetGestureConfigSettings((struct tagWND *)v8);
          Win32FreePool(v14);
LABEL_10:
          ThreadUnlock1(v16);
          goto LABEL_11;
        }
        v19 = 8LL;
      }
      else
      {
        v19 = 1400LL;
      }
    }
    else
    {
      v19 = 87LL;
    }
    UserSetLastError(v19, v10, v11);
    goto LABEL_10;
  }
LABEL_11:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v20);
  UserSessionSwitchLeaveCrit(v17);
  return v9;
}
