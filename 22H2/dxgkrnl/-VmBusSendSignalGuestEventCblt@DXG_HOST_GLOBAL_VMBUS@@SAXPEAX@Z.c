/*
 * XREFs of ?VmBusSendSignalGuestEventCblt@DXG_HOST_GLOBAL_VMBUS@@SAXPEAX@Z @ 0x1C002741C
 * Callers:
 *     ?VmBusSendSignalGuestEvent@DXG_HOST_GLOBAL_VMBUS@@SAXPEAX@Z @ 0x1C0041CD0 (-VmBusSendSignalGuestEvent@DXG_HOST_GLOBAL_VMBUS@@SAXPEAX@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 *     ?ReleaseReference@DXG_SIGNAL_GUEST_CPU_EVENT_CBLT@@SAXPEAU1@@Z @ 0x1C00D80A0 (-ReleaseReference@DXG_SIGNAL_GUEST_CPU_EVENT_CBLT@@SAXPEAU1@@Z.c)
 */

void __fastcall DXG_HOST_GLOBAL_VMBUS::VmBusSendSignalGuestEventCblt(
        struct DXG_SIGNAL_GUEST_CPU_EVENT_CBLT *a1,
        __int64 a2)
{
  _QWORD *v3; // rcx
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdi
  __int64 v8; // rax
  __int64 v9; // [rsp+58h] [rbp+17h] BYREF
  __int64 v10; // [rsp+60h] [rbp+1Fh] BYREF
  int v11; // [rsp+68h] [rbp+27h]
  int v12; // [rsp+6Ch] [rbp+2Bh]
  __int64 v13; // [rsp+70h] [rbp+2Fh]
  __int64 v14; // [rsp+78h] [rbp+37h]
  __int64 v15; // [rsp+80h] [rbp+3Fh]
  char v16; // [rsp+88h] [rbp+47h]
  char v17; // [rsp+89h] [rbp+48h]
  int v18; // [rsp+8Ah] [rbp+49h]
  __int16 v19; // [rsp+8Eh] [rbp+4Dh]

  v3 = (_QWORD *)*((_QWORD *)a1 + 3);
  if ( v3 )
  {
    v14 = *((_QWORD *)a1 + 1);
    v16 = *((_BYTE *)a1 + 16);
    v17 = *((_BYTE *)a1 + 18);
    v13 = 0LL;
    v18 = 0;
    v19 = 0;
    v10 = 0LL;
    v11 = 0;
    v12 = 2;
    v15 = 0LL;
    v9 = 0LL;
    v4 = ((__int64 (__fastcall *)(_QWORD, __int64 *, __int64, _QWORD, _DWORD, _QWORD, _QWORD, __int64 *))qword_1C00B43B0)(
           *v3,
           &v10,
           48LL,
           0LL,
           0,
           0LL,
           0LL,
           &v9);
    v7 = v4;
    if ( v4 >= 0 )
      goto LABEL_6;
    v8 = WdLogNewEntry5_WdError(v6, v5);
    *(_QWORD *)(v8 + 24) = v7;
  }
  else
  {
    v8 = WdLogNewEntry5_WdError(0LL, a2);
    *(_QWORD *)(v8 + 24) = 2108LL;
  }
  WdLogEvent5_WdError(v8);
LABEL_6:
  if ( !*((_BYTE *)a1 + 17) )
    DXG_SIGNAL_GUEST_CPU_EVENT_CBLT::ReleaseReference(a1);
}
