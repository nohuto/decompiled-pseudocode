/*
 * XREFs of NtUserProcessConnect @ 0x1C003DB30
 * Callers:
 *     <none>
 * Callees:
 *     ?InitMapSharedSection@@YAJPEAU_EPROCESS@@PEAU_USERCONNECT@@@Z @ 0x1C003D768 (-InitMapSharedSection@@YAJPEAU_EPROCESS@@PEAU_USERCONNECT@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C003E064 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0130B80 (memmove.c)
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
 */

NTSTATUS __fastcall NtUserProcessConnect(HANDLE Handle, size_t Size, int *Address)
{
  unsigned int v4; // r13d
  __int64 v6; // rdx
  int v7; // r9d
  void *v8; // rsi
  __int64 ProcessPeb; // r15
  PDEVICE_OBJECT v10; // rcx
  char v11; // r14
  _UNKNOWN **v12; // r8
  int v13; // eax
  int v14; // ebx
  int v15; // eax
  NTSTATUS result; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  PVOID v20; // rdi
  int inited; // ebx
  __int64 v22; // rcx
  int v23; // r8d
  int v24; // r9d
  _UNKNOWN **v25; // rdx
  signed __int64 v26; // rsi
  signed __int32 v27[8]; // [rsp+0h] [rbp-3A8h] BYREF
  char v28; // [rsp+40h] [rbp-368h]
  int v29; // [rsp+48h] [rbp-360h]
  PVOID v30; // [rsp+50h] [rbp-358h]
  void *v31; // [rsp+58h] [rbp-350h]
  unsigned __int64 v32; // [rsp+60h] [rbp-348h]
  __int64 v33; // [rsp+68h] [rbp-340h]
  int *v34; // [rsp+70h] [rbp-338h]
  PVOID Object; // [rsp+78h] [rbp-330h] BYREF
  SIZE_T Length; // [rsp+80h] [rbp-328h]
  volatile void *v37; // [rsp+98h] [rbp-310h]
  volatile void *Addressa[2]; // [rsp+A0h] [rbp-308h]
  int Src; // [rsp+E0h] [rbp-2C8h] BYREF
  _BYTE v40[584]; // [rsp+E8h] [rbp-2C0h] BYREF
  _KAPC_STATE ApcState; // [rsp+330h] [rbp-78h] BYREF

  v31 = Address;
  v4 = Size;
  v29 = Size;
  v34 = Address;
  memset(&ApcState, 0, sizeof(ApcState));
  memset_0(&Src, 0, 0x248uLL);
  v8 = 0LL;
  ProcessPeb = 0LL;
  Length = v4 + 8;
  v10 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) == 0
    || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
  {
    LOBYTE(v6) = 0;
    v11 = 1;
  }
  else
  {
    v11 = 1;
    LOBYTE(v6) = 1;
  }
  v12 = &WPP_RECORDER_INITIALIZED;
  LOBYTE(v12) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( (_BYTE)v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v6,
      (_DWORD)v12,
      v7,
      4,
      3,
      16,
      (__int64)&WPP_ec7b7e6d7dea360f8b258b91fa3b2ce6_Traceguids);
  if ( v4 > 0x248 || gpepCSRSS != PsGetCurrentProcess(v10, v6, v12) )
    return -1073741823;
  if ( ext_ms_win_moderncore_win32k_base_sysentry_l1 )
    v13 = ext_ms_win_moderncore_win32k_base_sysentry_l1();
  else
    v13 = -1073741637;
  if ( v13 < 0 )
    return -1073741637;
  ProbeForWrite(Address, Length, 4u);
  v14 = *Address;
  Src = v14;
  v15 = (int)qword_1C0362688;
  if ( qword_1C0362688 )
    v15 = qword_1C0362688();
  if ( v14 != v15 )
    return -1073741811;
  Object = 0LL;
  result = ObReferenceObjectByHandle(Handle, 0, (POBJECT_TYPE)PsProcessType, 1, &Object, 0LL);
  v20 = Object;
  v30 = Object;
  if ( result >= 0 )
  {
    if ( v20 == (PVOID)PsGetCurrentProcess(v18, v17, v19)
      || !(unsigned int)PsIsProtectedProcess(v20)
      || (unsigned int)PsIsProtectedProcessLight(v20) )
    {
      v28 = 0;
    }
    else
    {
      v32 = 0LL;
      *(_OWORD *)Addressa = 0LL;
      inited = PsAcquireProcessExitSynchronization(v20);
      if ( inited < 0 )
      {
LABEL_23:
        ObfDereferenceObject(v20);
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) == 0
          || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
        {
          v11 = 0;
        }
        v25 = &WPP_RECORDER_INITIALIZED;
        if ( v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v25) = v11;
          LOBYTE(v23) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_(
            WPP_GLOBAL_Control->AttachedDevice,
            (_DWORD)v25,
            v23,
            v24,
            4,
            3,
            17,
            (__int64)&WPP_ec7b7e6d7dea360f8b258b91fa3b2ce6_Traceguids);
        }
        return inited;
      }
      v28 = 1;
      ProcessPeb = PsGetProcessPeb(v20);
      v33 = ProcessPeb;
      KeStackAttachProcess((PRKPROCESS)v20, &ApcState);
      _m_prefetchw((const void *)(ProcessPeb + 88));
      v26 = _InterlockedAnd64((volatile signed __int64 *)(ProcessPeb + 88), 0xFFFFFFFFFFFFFFFEuLL);
      v32 = v26;
      if ( (v26 & 1) == 0 )
      {
        inited = -1073741823;
        goto LABEL_22;
      }
      v32 = v26 & 0xFFFFFFFFFFFFFFFEuLL;
      ProbeForRead((volatile void *)(v26 & 0xFFFFFFFFFFFFFFFEuLL), 0x10uLL, 4u);
      *(_OWORD *)Addressa = *(_OWORD *)(v26 & 0xFFFFFFFFFFFFFFFEuLL);
      if ( LODWORD(Addressa[0]) != v4 )
      {
        inited = -1073741823;
        goto LABEL_22;
      }
      v8 = (void *)Addressa[1];
      v37 = Addressa[1];
      ProbeForWrite(Addressa[1], v4, 4u);
    }
    EnterCrit(1LL, 0LL);
    inited = InitMapSharedSection((struct _EPROCESS *)v20, (struct _USERCONNECT *)&Src);
    UserSessionSwitchLeaveCrit(v22);
    if ( inited >= 0 )
    {
      if ( v28 )
      {
        memmove(v8, v40, v4);
        _InterlockedOr(v27, 0);
        *(_QWORD *)(ProcessPeb + 88) = 0LL;
LABEL_37:
        KeUnstackDetachProcess(&ApcState);
        PsReleaseProcessExitSynchronization(v20);
        goto LABEL_23;
      }
      memmove(v31, &Src, Length);
    }
LABEL_22:
    if ( !v28 )
      goto LABEL_23;
    goto LABEL_37;
  }
  return result;
}
