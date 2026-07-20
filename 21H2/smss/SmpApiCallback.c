/*
 * XREFs of SmpApiCallback @ 0x140002A70
 * Callers:
 *     <none>
 * Callees:
 *     GetVersionExW_Current @ 0x1400011F0 (GetVersionExW_Current.c)
 *     SmpStartCsr @ 0x140002100 (SmpStartCsr.c)
 *     SmpExecPgm @ 0x1400023D0 (SmpExecPgm.c)
 *     SmpFinalizeClientContext @ 0x140002F30 (SmpFinalizeClientContext.c)
 *     SmpHandleConnectionRequest @ 0x140003030 (SmpHandleConnectionRequest.c)
 *     SmpMarkThreadFree @ 0x1400036D4 (SmpMarkThreadFree.c)
 *     SmpMarkThreadBusy @ 0x140003740 (SmpMarkThreadBusy.c)
 *     SmpStopCsr @ 0x1400059D0 (SmpStopCsr.c)
 *     SmpEstablishClientSecurity @ 0x14000E5E8 (SmpEstablishClientSecurity.c)
 *     __security_check_cookie @ 0x14000E8D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x140011DC0 (_guard_dispatch_icall_nop.c)
 *     SmpUnhandledExceptionFilter @ 0x1400182A0 (SmpUnhandledExceptionFilter.c)
 */

NTSTATUS __fastcall SmpApiCallback(__int64 a1, __int64 a2)
{
  int v3; // r12d
  __int64 v4; // r15
  _BYTE *v5; // r14
  int v6; // ebx
  _BYTE *v7; // rdi
  int v8; // ecx
  __int64 (__fastcall *v9)(__int64); // rax
  int started; // eax
  __int64 (*v11)(); // rax
  __int64 v12; // r8
  _BYTE *v13; // rdx
  int Version; // eax
  __int64 MessageAttribute; // rax
  __int64 v17; // [rsp+50h] [rbp-1C8h] BYREF
  _BYTE *v18; // [rsp+58h] [rbp-1C0h]
  _OWORD v19[2]; // [rsp+60h] [rbp-1B8h] BYREF
  __int64 v20; // [rsp+80h] [rbp-198h]
  _BYTE v21[4]; // [rsp+90h] [rbp-188h] BYREF
  __int16 v22; // [rsp+94h] [rbp-184h]
  unsigned int v23; // [rsp+B8h] [rbp-160h]
  int v24; // [rsp+BCh] [rbp-15Ch]

  v3 = 0;
  RtlSetThreadIsCritical(1u, 0LL, 1u);
  v4 = SmpApiConnectionPort;
  v5 = 0LL;
  memset(v19, 0, sizeof(v19));
  v20 = 0LL;
  AlpcInitializeMessageAttribute(0x20000000LL, v19, 40LL, &v17);
  do
  {
    v17 = 328LL;
    DWORD1(v19[0]) |= 0x20000000u;
    v6 = NtAlpcSendWaitReceivePort(v4, 0x10000LL, 0LL, 0LL, v21, &v17, v19, 0LL);
  }
  while ( v6 < 0 );
  v7 = *(_BYTE **)AlpcGetMessageAttribute(v19, 0x20000000LL);
  AlpcGetMessageAttribute(v19, 0x20000000LL);
  if ( (unsigned __int8)v22 != 1 )
  {
    if ( (unsigned __int8)v22 != 5 )
    {
      if ( (unsigned __int8)v22 == 10 )
      {
        SmpHandleConnectionRequest(v4, v21, v19, v22 < 0);
      }
      else if ( (v22 & 0x2000) != 0 )
      {
        MessageAttribute = AlpcGetMessageAttribute(v19, 0x20000000LL);
        NtAlpcCancelMessage(v4, 0LL, MessageAttribute);
        v5 = v21;
        v18 = v21;
      }
    }
    goto LABEL_7;
  }
  v5 = v21;
  v18 = v21;
  v8 = v23;
  if ( v23 >= 9 )
  {
    v24 = -1073741822;
    goto LABEL_7;
  }
  if ( *((_DWORD *)&SmpApiDispatch + 4 * (int)v23 + 2) )
  {
    v6 = SmpMarkThreadBusy(a2);
    if ( v6 < 0 )
    {
      v24 = -1073741670;
      goto LABEL_7;
    }
    v3 = 1;
    v8 = v23;
  }
  v24 = 259;
  if ( v8 == 3 )
    goto LABEL_28;
  if ( v8 != 5 )
  {
    if ( (unsigned int)v8 <= 2 )
    {
      if ( (*v7 & 0x10) == 0 )
      {
        v6 = -1073741811;
        goto LABEL_31;
      }
      v11 = *(&SmpApiDispatch + 2 * v8);
      v12 = v4;
      v13 = v7;
      if ( v11 == GetVersionExW_Current )
      {
        Version = GetVersionExW_Current();
        goto LABEL_30;
      }
      goto LABEL_52;
    }
    if ( v8 != 4 )
    {
      if ( v8 <= 5 || v8 > 8 )
        goto LABEL_31;
      goto LABEL_17;
    }
LABEL_28:
    v11 = *(&SmpApiDispatch + 2 * v8);
    v12 = v4;
    v13 = v7;
    if ( (char *)v11 == (char *)SmpExecPgm )
    {
      Version = SmpExecPgm((__int64)v21, (__int64)v7);
LABEL_30:
      v6 = Version;
      goto LABEL_31;
    }
LABEL_52:
    Version = ((__int64 (__fastcall *)(_BYTE *, _BYTE *, __int64))v11)(v21, v13, v12);
    goto LABEL_30;
  }
LABEL_17:
  if ( (*v7 & 6) == 0 )
  {
    v6 = SmpEstablishClientSecurity(v21, v7);
    v8 = v23;
  }
  if ( v6 >= 0 )
  {
    if ( (*v7 & 4) != 0 )
    {
      v9 = (__int64 (__fastcall *)(__int64))*(&SmpApiDispatch + 2 * v8);
      if ( v9 == SmpStartCsr )
      {
        started = SmpStartCsr((__int64)v21);
      }
      else if ( (char *)v9 == (char *)SmpStopCsr )
      {
        started = SmpStopCsr(v21, v7, v4);
      }
      else
      {
        started = ((__int64 (__fastcall *)(_BYTE *, _BYTE *, __int64))v9)(v21, v7, v4);
      }
      v6 = started;
      v8 = v23;
    }
    else
    {
      v6 = -1073741790;
    }
  }
  if ( v6 == 259 && v8 == 5 )
  {
    v5 = 0LL;
    v18 = 0LL;
    goto LABEL_32;
  }
LABEL_31:
  v24 = v6;
LABEL_32:
  if ( v3 )
    SmpMarkThreadFree(a2);
LABEL_7:
  if ( v7 )
    SmpFinalizeClientContext(v7);
  if ( v5 )
    NtAlpcSendWaitReceivePort(v4, 0x10000LL, v5, 0LL, 0LL, 0LL, 0LL, 0LL);
  return RtlSetThreadIsCritical(0, 0LL, 1u);
}
