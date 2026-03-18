/*
 * XREFs of NtUserProcessConnect @ 0x1C0079860
 * Callers:
 *     <none>
 * Callees:
 *     ?InitMapSharedSection@@YAJPEAU_EPROCESS@@PEAU_USERCONNECT@@@Z @ 0x1C00794C4 (-InitMapSharedSection@@YAJPEAU_EPROCESS@@PEAU_USERCONNECT@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0079D94 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0160280 (memmove.c)
 *     memset @ 0x1C0160540 (memset.c)
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
  PVOID v19; // rdi
  int inited; // ebx
  __int64 v21; // rcx
  int v22; // r8d
  int v23; // r9d
  _UNKNOWN **v24; // rdx
  signed __int64 v25; // rsi
  signed __int32 v26[8]; // [rsp+0h] [rbp-3A8h] BYREF
  char v27; // [rsp+40h] [rbp-368h]
  int v28; // [rsp+48h] [rbp-360h]
  PVOID v29; // [rsp+50h] [rbp-358h]
  void *v30; // [rsp+58h] [rbp-350h]
  unsigned __int64 v31; // [rsp+60h] [rbp-348h]
  __int64 v32; // [rsp+68h] [rbp-340h]
  int *v33; // [rsp+70h] [rbp-338h]
  PVOID Object; // [rsp+78h] [rbp-330h] BYREF
  SIZE_T Length; // [rsp+80h] [rbp-328h]
  volatile void *v36; // [rsp+98h] [rbp-310h]
  volatile void *Addressa[2]; // [rsp+A0h] [rbp-308h]
  _DWORD Src[148]; // [rsp+E0h] [rbp-2C8h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+330h] [rbp-78h] BYREF

  v30 = Address;
  v4 = Size;
  v28 = Size;
  v33 = Address;
  memset(&ApcState, 0, sizeof(ApcState));
  memset(Src, 0, 0x248uLL);
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
  if ( (_BYTE)v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v12) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v6,
      (_DWORD)v12,
      v7,
      4,
      3,
      16,
      (__int64)&WPP_6ef41bf7ba8b3874ce66483ce5bf9e7b_Traceguids);
  }
  if ( v4 > 0x248 || gpepCSRSS != PsGetCurrentProcess(v10, v6) )
    return -1073741823;
  if ( ext_ms_win_moderncore_win32k_base_sysentry_l1 )
    v13 = ext_ms_win_moderncore_win32k_base_sysentry_l1();
  else
    v13 = -1073741637;
  if ( v13 < 0 )
    return -1073741637;
  ProbeForWrite(Address, Length, 4u);
  v14 = *Address;
  Src[0] = v14;
  v15 = (int)qword_1C0337D18;
  if ( qword_1C0337D18 )
    v15 = qword_1C0337D18();
  if ( v14 != v15 )
    return -1073741811;
  Object = 0LL;
  result = ObReferenceObjectByHandle(Handle, 0, (POBJECT_TYPE)PsProcessType, 1, &Object, 0LL);
  v19 = Object;
  v29 = Object;
  if ( result >= 0 )
  {
    if ( v19 == (PVOID)PsGetCurrentProcess(v18, v17)
      || !(unsigned int)PsIsProtectedProcess(v19)
      || (unsigned int)PsIsProtectedProcessLight(v19) )
    {
      v27 = 0;
    }
    else
    {
      v31 = 0LL;
      *(_OWORD *)Addressa = 0LL;
      inited = PsAcquireProcessExitSynchronization(v19);
      if ( inited < 0 )
      {
LABEL_23:
        ObfDereferenceObject(v19);
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) == 0
          || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
        {
          v11 = 0;
        }
        v24 = &WPP_RECORDER_INITIALIZED;
        if ( v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v24) = v11;
          LOBYTE(v22) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_(
            WPP_GLOBAL_Control->AttachedDevice,
            (_DWORD)v24,
            v22,
            v23,
            4,
            3,
            17,
            (__int64)&WPP_6ef41bf7ba8b3874ce66483ce5bf9e7b_Traceguids);
        }
        return inited;
      }
      v27 = 1;
      ProcessPeb = PsGetProcessPeb(v19);
      v32 = ProcessPeb;
      KeStackAttachProcess((PRKPROCESS)v19, &ApcState);
      _m_prefetchw((const void *)(ProcessPeb + 88));
      v25 = _InterlockedAnd64((volatile signed __int64 *)(ProcessPeb + 88), 0xFFFFFFFFFFFFFFFEuLL);
      v31 = v25;
      if ( (v25 & 1) == 0 )
      {
        inited = -1073741823;
        goto LABEL_22;
      }
      v31 = v25 & 0xFFFFFFFFFFFFFFFEuLL;
      ProbeForRead((volatile void *)(v25 & 0xFFFFFFFFFFFFFFFEuLL), 0x10uLL, 4u);
      *(_OWORD *)Addressa = *(_OWORD *)(v25 & 0xFFFFFFFFFFFFFFFEuLL);
      if ( LODWORD(Addressa[0]) != v4 )
      {
        inited = -1073741823;
        goto LABEL_22;
      }
      v8 = (void *)Addressa[1];
      v36 = Addressa[1];
      ProbeForWrite(Addressa[1], v4, 4u);
    }
    EnterCrit(1LL, 0LL);
    inited = InitMapSharedSection((struct _EPROCESS *)v19, (struct _USERCONNECT *)Src);
    UserSessionSwitchLeaveCrit(v21);
    if ( inited >= 0 )
    {
      if ( v27 )
      {
        memmove(v8, &Src[2], v4);
        _InterlockedOr(v26, 0);
        *(_QWORD *)(ProcessPeb + 88) = 0LL;
LABEL_37:
        KeUnstackDetachProcess(&ApcState);
        PsReleaseProcessExitSynchronization(v19);
        goto LABEL_23;
      }
      memmove(v30, Src, Length);
    }
LABEL_22:
    if ( !v27 )
      goto LABEL_23;
    goto LABEL_37;
  }
  return result;
}
