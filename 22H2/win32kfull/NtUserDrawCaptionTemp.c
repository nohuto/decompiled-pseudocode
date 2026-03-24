/*
 * XREFs of NtUserDrawCaptionTemp @ 0x1C01F7CE0
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandle @ 0x1C0067040 (HMValidateHandle.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C00BF9A0 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C00BFA20 (PushW32ThreadLock.c)
 *     xxxDrawCaptionTemp @ 0x1C0158B14 (xxxDrawCaptionTemp.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C016D990 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memmove @ 0x1C016DB40 (memmove.c)
 */

__int64 __fastcall NtUserDrawCaptionTemp(
        __int64 a1,
        HDC a2,
        struct tagRECT *a3,
        __int64 a4,
        unsigned __int64 a5,
        ULONG64 a6,
        unsigned int a7)
{
  ULONG64 v10; // r15
  __int64 v11; // rcx
  __int64 v12; // rsi
  unsigned int v13; // edi
  struct tagCURSOR *v14; // rdi
  int v15; // ecx
  void *v16; // r15
  ULONG64 v17; // rdx
  _BYTE **v18; // rax
  void *v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rcx
  int v23; // [rsp+40h] [rbp-C8h]
  void *v24[2]; // [rsp+48h] [rbp-C0h] BYREF
  int v25; // [rsp+58h] [rbp-B0h]
  __int64 v26; // [rsp+60h] [rbp-A8h]
  __int128 v27; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v28; // [rsp+78h] [rbp-90h]
  __int128 v29; // [rsp+80h] [rbp-88h] BYREF
  __int64 v30; // [rsp+90h] [rbp-78h]
  __int128 v31; // [rsp+98h] [rbp-70h] BYREF
  __int64 v32; // [rsp+A8h] [rbp-60h]
  struct tagRECT v33; // [rsp+B8h] [rbp-50h] BYREF

  v26 = a4;
  v10 = a6;
  v29 = 0LL;
  v30 = 0LL;
  v33 = 0LL;
  *(_OWORD *)v24 = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  v31 = 0LL;
  v32 = 0LL;
  v25 = 0;
  EnterCrit(0LL, 1LL);
  if ( a1 )
  {
    v12 = ValidateHwnd(a1);
    if ( !v12 )
    {
LABEL_3:
      v13 = 0;
      goto LABEL_33;
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
  v33 = *a3;
  if ( a6 >= MmUserProbeAddress )
    v10 = MmUserProbeAddress;
  v15 = *(_DWORD *)v10;
  v23 = *(_DWORD *)v10;
  LODWORD(v24[0]) = *(_DWORD *)v10;
  v16 = *(void **)(v10 + 8);
  v24[1] = v16;
  if ( v16 )
  {
    if ( ((unsigned __int8)v16 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v17 = (ULONG64)v16 + (unsigned __int16)v15 + 2;
    v18 = (_BYTE **)MmUserProbeAddress;
    if ( v17 < MmUserProbeAddress && (unsigned __int16)v15 <= HIWORD(v23) )
    {
      if ( (v15 & 1) != 0 )
        goto LABEL_21;
      if ( v17 > (unsigned __int64)v16 )
      {
LABEL_23:
        v19 = (void *)Win32AllocPoolWithQuota(LOWORD(v24[0]) + 2LL, 2020897621LL);
        v24[1] = v19;
        if ( !v19 )
          ExRaiseStatus(-1073741801);
        v25 = 1;
        PushW32ThreadLock((__int64)v19, &v31, (__int64)Win32FreePool);
        memmove(v24[1], v16, LOWORD(v24[0]));
        *((_WORD *)v24[1] + ((unsigned __int64)LOWORD(v24[0]) >> 1)) = 0;
        WORD1(v24[0]) = LOWORD(v24[0]) + 2;
        goto LABEL_25;
      }
    }
    if ( (v15 & 1) == 0 )
    {
LABEL_22:
      **v18 = 0;
      goto LABEL_23;
    }
LABEL_21:
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 10261);
    v18 = (_BYTE **)MmUserProbeAddress;
    goto LABEL_22;
  }
LABEL_25:
  *(_QWORD *)&v27 = *(_QWORD *)(gptiCurrent + 416LL);
  *(_QWORD *)(gptiCurrent + 416LL) = &v27;
  *((_QWORD *)&v27 + 1) = v12;
  if ( v12 )
    HMLockObject(v12);
  *(_QWORD *)&v29 = *(_QWORD *)(gptiCurrent + 416LL);
  *(_QWORD *)(gptiCurrent + 416LL) = &v29;
  *((_QWORD *)&v29 + 1) = v14;
  if ( v14 )
    HMLockObject(v14);
  v13 = xxxDrawCaptionTemp(
          v12,
          a2,
          &v33,
          v26,
          v14,
          (unsigned __int16 **)((unsigned __int64)v24 & -(__int64)(v24[1] != 0LL)),
          a7);
  ThreadUnlock1(v20);
  ThreadUnlock1(v21);
  if ( v25 )
    PopAndFreeAlwaysW32ThreadLock((__int64)&v31);
LABEL_33:
  UserSessionSwitchLeaveCrit(v11);
  return v13;
}
