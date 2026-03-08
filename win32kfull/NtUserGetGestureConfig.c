/*
 * XREFs of NtUserGetGestureConfig @ 0x1C01D2300
 * Callers:
 *     <none>
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C003C2A4 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C0047B70 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C009DC7C (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     memmove @ 0x1C0130B80 (memmove.c)
 *     GetGestureConfigSettings @ 0x1C02071A8 (GetGestureConfigSettings.c)
 */

__int64 __fastcall NtUserGetGestureConfig(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int *a4,
        volatile void *Address,
        int a6)
{
  int v7; // r12d
  __int64 v9; // rcx
  struct tagWND *v10; // rsi
  int GestureConfigSettings; // ebx
  struct tagTHREADINFO *v12; // rax
  int v13; // ecx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rax
  __int64 v18; // rbx
  size_t v19; // r15
  __int64 v20; // rcx
  void *v21; // rdi
  __int64 CurrentProcessWow64Process; // rax
  __int64 v23; // rcx
  _BYTE v25[4]; // [rsp+30h] [rbp-78h] BYREF
  unsigned int v26; // [rsp+34h] [rbp-74h]
  void *v27; // [rsp+38h] [rbp-70h]
  __int128 v28; // [rsp+68h] [rbp-40h] BYREF
  __int64 v29; // [rsp+78h] [rbp-30h]

  v7 = a3;
  v27 = 0LL;
  v26 = 0;
  v28 = 0LL;
  v29 = 0LL;
  EnterSharedCrit(a1, a2, a3);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v25);
  v10 = (struct tagWND *)ValidateHwnd(a1);
  if ( v10 )
  {
    v12 = PtiCurrentShared(v9);
    *(_QWORD *)&v28 = *((_QWORD *)v12 + 52);
    *((_QWORD *)v12 + 52) = &v28;
    *((_QWORD *)&v28 + 1) = v10;
    HMLockObject(v10);
    if ( a6 == 12 )
    {
      if ( (v7 & 0xFFFFFFFE) != 0 )
      {
        UserSetLastError(1004);
        GestureConfigSettings = 0;
LABEL_21:
        ThreadUnlock1(v15, v14, v16);
        goto LABEL_22;
      }
      v17 = *((_QWORD *)v10 + 5);
      if ( *(char *)(v17 + 20) < 0 || *(char *)(v17 + 19) < 0 )
      {
        v13 = 1400;
        goto LABEL_20;
      }
      if ( Address )
      {
        if ( (unsigned __int64)a4 >= MmUserProbeAddress )
          a4 = (unsigned int *)MmUserProbeAddress;
        v26 = *a4;
        v18 = v26;
        if ( v26 - 1 <= 0xFF )
        {
          v19 = 12 * v26;
          v21 = (void *)Win32AllocPoolWithQuotaZInit(v19, 1667724117LL);
          v27 = v21;
          if ( v21 )
          {
            CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v20);
            ProbeForWrite(Address, 12 * v18, CurrentProcessWow64Process != 0 ? 1 : 4);
            memmove(v21, (const void *)Address, v19);
            GestureConfigSettings = GetGestureConfigSettings(v10, (__int64)v21);
            if ( GestureConfigSettings )
              memmove((void *)Address, v21, v19);
            if ( v21 )
              Win32FreePool(v21);
            goto LABEL_21;
          }
          v13 = 8;
          goto LABEL_20;
        }
      }
    }
    v13 = 87;
LABEL_20:
    GestureConfigSettings = 0;
    UserSetLastError(v13);
    goto LABEL_21;
  }
  GestureConfigSettings = 0;
LABEL_22:
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v25);
  UserSessionSwitchLeaveCrit(v23);
  return GestureConfigSettings;
}
