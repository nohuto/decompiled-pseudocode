/*
 * XREFs of CmpSecurityMethod @ 0x1406DDF10
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206F80 (KeLeaveCriticalRegionThread.c)
 *     ExIsResourceAcquiredSharedLite @ 0x1402D0610 (ExIsResourceAcquiredSharedLite.c)
 *     EtwGetKernelTraceTimestamp @ 0x1402F1D90 (EtwGetKernelTraceTimestamp.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 *     CmpCallCallBacksEx @ 0x140640B60 (CmpCallCallBacksEx.c)
 *     CmPostCallbackNotificationEx @ 0x140645BA0 (CmPostCallbackNotificationEx.c)
 *     CmpQueryKeySecurity @ 0x1406DE150 (CmpQueryKeySecurity.c)
 *     CmpSetKeySecurity @ 0x1406E6CFC (CmpSetKeySecurity.c)
 *     CmpAssignKeySecurity @ 0x1407D0370 (CmpAssignKeySecurity.c)
 */

__int64 __fastcall CmpSecurityMethod(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 a8)
{
  __int64 v9; // r8
  ULONG_PTR BugCheckParameter4; // rdi
  int v13; // edx
  char v14; // si
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v16; // ecx
  unsigned int v17; // eax
  int v18; // eax
  unsigned int v19; // ebx
  int KeySecurity; // eax
  unsigned int v21; // ecx
  __int64 v22; // rcx
  _QWORD v24[2]; // [rsp+50h] [rbp-89h] BYREF
  __int64 v25; // [rsp+60h] [rbp-79h]
  __int128 v26; // [rsp+68h] [rbp-71h] BYREF
  __int128 v27; // [rsp+78h] [rbp-61h]
  __int128 v28; // [rsp+88h] [rbp-51h]
  __int64 v29; // [rsp+98h] [rbp-41h]
  _OWORD v30[2]; // [rsp+A0h] [rbp-39h] BYREF

  v9 = a8;
  BugCheckParameter4 = a2;
  v13 = a6;
  memset(v30, 0, sizeof(v30));
  v25 = 0LL;
  if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) )
  {
    EtwGetKernelTraceTimestamp((LARGE_INTEGER *)v30, 0x20000u);
    v13 = a6;
    v9 = a8;
  }
  v24[1] = v24;
  v14 = 0;
  v24[0] = v24;
  v26 = 0LL;
  v29 = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) && a1 )
    v25 = *(_QWORD *)(a1 + 8);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( CmpCallBackCount )
  {
    if ( !ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock) )
    {
      if ( (_DWORD)BugCheckParameter4 == 1 )
      {
        v16 = 36;
        *((_QWORD *)&v27 + 1) = a5;
        v17 = 37;
LABEL_8:
        *(_QWORD *)&v27 = a4;
        *((_QWORD *)&v26 + 1) = a3;
        *(_QWORD *)&v26 = a1;
        v18 = CmpCallCallBacksEx(v16, (__int64)&v26, 0LL, 1, v17, a1, (__int64)v24);
        v19 = v18;
        if ( v18 < 0 )
        {
          if ( v18 == -1073740541 )
            v19 = 0;
          goto LABEL_19;
        }
        v14 = 1;
        goto LABEL_10;
      }
      if ( !(_DWORD)BugCheckParameter4 )
      {
        v16 = 38;
        v17 = 39;
        goto LABEL_8;
      }
    }
LABEL_10:
    v13 = a6;
    v9 = a8;
  }
  if ( (_DWORD)BugCheckParameter4 == 1 )
  {
    KeySecurity = CmpQueryKeySecurity(a1, a3, a4, a5);
  }
  else if ( (_DWORD)BugCheckParameter4 )
  {
    if ( (_DWORD)BugCheckParameter4 == 2 )
      goto LABEL_14;
    if ( (_DWORD)BugCheckParameter4 != 3 )
      KeBugCheckEx(0x51u, 5uLL, 1uLL, *(_QWORD *)(a1 + 8), BugCheckParameter4);
    KeySecurity = CmpAssignKeySecurity(a1, a4);
  }
  else
  {
    KeySecurity = CmpSetKeySecurity(a1, a3, a4, v13, a7, v9);
  }
  v19 = KeySecurity;
  if ( KeySecurity >= 0 )
LABEL_14:
    v19 = 0;
  if ( !v14 )
    goto LABEL_19;
  if ( (_DWORD)BugCheckParameter4 == 1 )
  {
    v21 = 37;
LABEL_18:
    v19 = CmPostCallbackNotificationEx(v21, a1, v19, (__int64)&v26, 0LL, v24);
    goto LABEL_19;
  }
  if ( !(_DWORD)BugCheckParameter4 )
  {
    v21 = 39;
    goto LABEL_18;
  }
LABEL_19:
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) )
  {
    LOBYTE(v22) = ((_DWORD)BugCheckParameter4 != 0) + 28;
    (*(void (__fastcall **)(__int64, _OWORD *, _QWORD, _QWORD, __int64, _QWORD))((char *)&NlsMbCodePageTag + 7))(
      v22,
      v30,
      v19,
      0LL,
      v25,
      0LL);
  }
  return v19;
}
