/*
 * XREFs of NtUserDrawCaptionTemp @ 0x1C01CFDF0
 * Callers:
 *     <none>
 * Callees:
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0035F20 (PopAndFreeAlwaysW32ThreadLock.c)
 *     HMValidateHandle @ 0x1C0064BF4 (HMValidateHandle.c)
 *     PushW32ThreadLock @ 0x1C00A1C30 (PushW32ThreadLock.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C0130974 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memmove @ 0x1C0130B80 (memmove.c)
 *     xxxDrawCaptionTemp @ 0x1C022EDB4 (xxxDrawCaptionTemp.c)
 */

__int64 __fastcall NtUserDrawCaptionTemp(
        __int64 a1,
        HDC a2,
        struct tagRECT *a3,
        __int64 a4,
        __int64 a5,
        ULONG64 a6,
        unsigned int a7)
{
  ULONG64 v10; // r14
  __int64 v11; // rcx
  struct tagWND *v12; // rsi
  unsigned int v13; // edi
  struct tagCURSOR *v14; // rdi
  int v15; // ecx
  void *v16; // r14
  ULONG64 v17; // rdx
  void *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  int v26; // [rsp+40h] [rbp-C8h]
  int v27; // [rsp+44h] [rbp-C4h]
  void *v28[2]; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v29; // [rsp+58h] [rbp-B0h]
  __int128 v30; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v31; // [rsp+70h] [rbp-98h]
  __int128 v32; // [rsp+78h] [rbp-90h] BYREF
  __int64 v33; // [rsp+88h] [rbp-80h]
  __int128 v34; // [rsp+90h] [rbp-78h] BYREF
  __int64 v35; // [rsp+A0h] [rbp-68h]
  struct tagRECT v36; // [rsp+B0h] [rbp-58h] BYREF

  v29 = a4;
  v10 = a6;
  v32 = 0LL;
  v33 = 0LL;
  v36 = 0LL;
  *(_OWORD *)v28 = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  v34 = 0LL;
  v35 = 0LL;
  v27 = 0;
  EnterCrit(0LL, 0LL);
  if ( a1 )
  {
    v12 = (struct tagWND *)ValidateHwnd(a1);
    if ( !v12 )
    {
LABEL_3:
      v13 = 0;
      goto LABEL_34;
    }
  }
  else
  {
    v12 = 0LL;
  }
  if ( a5 )
  {
    v14 = (struct tagCURSOR *)HMValidateHandle(a5, 3u);
    if ( !v14 )
      goto LABEL_3;
  }
  else
  {
    v14 = 0LL;
  }
  if ( (unsigned __int64)a3 >= MmUserProbeAddress )
    a3 = (struct tagRECT *)MmUserProbeAddress;
  v36 = *a3;
  if ( a6 >= MmUserProbeAddress )
    v10 = MmUserProbeAddress;
  v15 = *(_DWORD *)v10;
  v26 = *(_DWORD *)v10;
  LODWORD(v28[0]) = *(_DWORD *)v10;
  v16 = *(void **)(v10 + 8);
  v28[1] = v16;
  if ( v16 )
  {
    if ( ((unsigned __int8)v16 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v17 = (ULONG64)v16 + (unsigned __int16)v15 + 2;
    if ( v17 <= (unsigned __int64)v16 || v17 >= MmUserProbeAddress )
      ExRaiseAccessViolation();
    if ( (unsigned __int16)v15 > HIWORD(v26) )
    {
      if ( (v15 & 1) == 0 )
        goto LABEL_30;
    }
    else if ( (v15 & 1) == 0 )
    {
      v18 = (void *)Win32AllocPoolWithQuotaZInit((unsigned __int16)v15 + 2LL, 2020897621LL);
      v28[1] = v18;
      if ( !v18 )
        ExRaiseStatus(-1073741801);
      v27 = 1;
      PushW32ThreadLock((__int64)v18, &v34, (__int64)Win32FreePool);
      memmove(v28[1], v16, LOWORD(v28[0]));
      *((_WORD *)v28[1] + ((unsigned __int64)LOWORD(v28[0]) >> 1)) = 0;
      WORD1(v28[0]) = LOWORD(v28[0]) + 2;
      goto LABEL_22;
    }
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 10593);
LABEL_30:
    ExRaiseAccessViolation();
  }
LABEL_22:
  *(_QWORD *)&v30 = *(_QWORD *)(gptiCurrent + 416LL);
  *(_QWORD *)(gptiCurrent + 416LL) = &v30;
  *((_QWORD *)&v30 + 1) = v12;
  if ( v12 )
    HMLockObject(v12);
  *(_QWORD *)&v32 = *(_QWORD *)(gptiCurrent + 416LL);
  *(_QWORD *)(gptiCurrent + 416LL) = &v32;
  *((_QWORD *)&v32 + 1) = v14;
  if ( v14 )
    HMLockObject(v14);
  v13 = xxxDrawCaptionTemp(v12, a2, &v36, v14, (unsigned __int64)v28 & -(__int64)(v28[1] != 0LL), a7);
  ThreadUnlock1(v20, v19, v21);
  ThreadUnlock1(v23, v22, v24);
  if ( v27 )
    PopAndFreeAlwaysW32ThreadLock((__int64)&v34);
LABEL_34:
  UserSessionSwitchLeaveCrit(v11);
  return v13;
}
