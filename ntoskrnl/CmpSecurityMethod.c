/*
 * XREFs of CmpSecurityMethod @ 0x1407AC040
 * Callers:
 *     <none>
 * Callees:
 *     EtwGetKernelTraceTimestamp @ 0x140250530 (EtwGetKernelTraceTimestamp.c)
 *     CmpIsRegistryLockAcquired @ 0x1402630C0 (CmpIsRegistryLockAcquired.c)
 *     CmCleanupThreadInfo @ 0x140263740 (CmCleanupThreadInfo.c)
 *     CmpInitializeThreadInfo @ 0x140263760 (CmpInitializeThreadInfo.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     CmpSetKeySecurity @ 0x1406B7E3C (CmpSetKeySecurity.c)
 *     CmPostCallbackNotificationEx @ 0x1406BD240 (CmPostCallbackNotificationEx.c)
 *     CmpCallCallBacksEx @ 0x1406E0B20 (CmpCallCallBacksEx.c)
 *     CmpQueryKeySecurity @ 0x1407AC310 (CmpQueryKeySecurity.c)
 *     CmpAssignKeySecurity @ 0x140854E7C (CmpAssignKeySecurity.c)
 */

__int64 __fastcall CmpSecurityMethod(
        __int64 a1,
        int a2,
        unsigned int *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 a8)
{
  __int64 v8; // rbx
  ULONG_PTR BugCheckParameter4; // rsi
  char v13; // di
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v15; // ecx
  unsigned int v16; // eax
  int v17; // eax
  unsigned int v18; // ebx
  int KeySecurity; // eax
  __int64 v20; // rcx
  _QWORD v22[2]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v23; // [rsp+50h] [rbp-B0h]
  __int64 v24; // [rsp+58h] [rbp-A8h]
  __int64 v25; // [rsp+60h] [rbp-A0h]
  __int128 v26; // [rsp+68h] [rbp-98h] BYREF
  __int128 v27; // [rsp+78h] [rbp-88h]
  __int128 v28; // [rsp+88h] [rbp-78h]
  __int64 v29; // [rsp+98h] [rbp-68h]
  __int128 v30; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v31; // [rsp+B0h] [rbp-50h] BYREF
  __int128 *v32; // [rsp+C0h] [rbp-40h]
  unsigned int v33; // [rsp+C8h] [rbp-38h]
  __int128 v34; // [rsp+CCh] [rbp-34h]
  __int64 v35; // [rsp+DCh] [rbp-24h]
  int v36; // [rsp+E4h] [rbp-1Ch]
  _OWORD v37[2]; // [rsp+E8h] [rbp-18h] BYREF

  v8 = a6;
  v24 = a6;
  v25 = a8;
  v30 = 0LL;
  BugCheckParameter4 = a2;
  memset(v37, 0, sizeof(v37));
  v23 = 0LL;
  if ( CmpTraceRoutine )
    EtwGetKernelTraceTimestamp((__int64)v37, 0x20000LL);
  CmpInitializeThreadInfo((__int64)&v30);
  v22[1] = v22;
  v13 = 0;
  v22[0] = v22;
  v26 = 0LL;
  v29 = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  if ( CmpTraceRoutine && a1 )
    v23 = *(_QWORD *)(a1 + 8);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( !CmpCallBackCount || CmpIsRegistryLockAcquired() )
  {
LABEL_10:
    if ( (_DWORD)BugCheckParameter4 == 1 )
    {
      KeySecurity = CmpQueryKeySecurity(a1, a3, a4, a5);
      goto LABEL_12;
    }
LABEL_23:
    if ( (_DWORD)BugCheckParameter4 )
    {
      if ( (_DWORD)BugCheckParameter4 == 2 )
      {
LABEL_13:
        v18 = 0;
LABEL_14:
        if ( v13 )
        {
          if ( (_DWORD)BugCheckParameter4 == 1 )
          {
            if ( CmpCallBackCount && !CmpIsRegistryLockAcquired() && (_QWORD *)v22[0] != v22 )
            {
              v32 = &v26;
              v35 = 0LL;
              v36 = 0;
              v34 = 0LL;
              *(_QWORD *)&v31 = a1;
              *((_QWORD *)&v31 + 1) = v18;
              v33 = v18;
              CmpCallCallBacksEx(0x25u, &v31, 0LL, 0, 0x25u, a1, (__int64)v22);
              v18 = v33;
            }
          }
          else if ( !(_DWORD)BugCheckParameter4 )
          {
            v18 = CmPostCallbackNotificationEx(39, a1, v18, (__int64)&v26, 0LL, v22);
          }
        }
        goto LABEL_20;
      }
      if ( (_DWORD)BugCheckParameter4 != 3 )
        KeBugCheckEx(0x51u, 5uLL, 1uLL, *(_QWORD *)(a1 + 8), BugCheckParameter4);
      KeySecurity = CmpAssignKeySecurity(a1, a4);
    }
    else
    {
      KeySecurity = CmpSetKeySecurity(a1, a3, a4, v8, a7, v25);
    }
LABEL_12:
    v18 = KeySecurity;
    if ( KeySecurity < 0 )
      goto LABEL_14;
    goto LABEL_13;
  }
  if ( (_DWORD)BugCheckParameter4 == 1 )
  {
    v15 = 36;
    *((_QWORD *)&v27 + 1) = a5;
    v16 = 37;
  }
  else
  {
    if ( (_DWORD)BugCheckParameter4 )
      goto LABEL_23;
    v15 = 38;
    v16 = 39;
  }
  *(_QWORD *)&v27 = a4;
  *((_QWORD *)&v26 + 1) = a3;
  *(_QWORD *)&v26 = a1;
  v17 = CmpCallCallBacksEx(v15, &v26, 0LL, 1, v16, a1, (__int64)v22);
  v18 = v17;
  if ( v17 >= 0 )
  {
    v8 = v24;
    v13 = 1;
    goto LABEL_10;
  }
  if ( v17 == -1073740541 )
    v18 = 0;
LABEL_20:
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  CmCleanupThreadInfo((__int64 *)&v30);
  if ( CmpTraceRoutine )
  {
    LOBYTE(v20) = ((_DWORD)BugCheckParameter4 != 0) + 28;
    CmpTraceRoutine(v20, v37, v18, 0LL, v23, 0LL);
  }
  return v18;
}
