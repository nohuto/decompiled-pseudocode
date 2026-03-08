/*
 * XREFs of ?VSyncTelemetryBucket@ADAPTER_DISPLAY@@QEAAXXZ @ 0x1C0040D40
 * Callers:
 *     ?VSyncTelemetryTimerDpc@ADAPTER_DISPLAY@@SAXPEAU_KDPC@@PEAX11@Z @ 0x1C00410B0 (-VSyncTelemetryTimerDpc@ADAPTER_DISPLAY@@SAXPEAU_KDPC@@PEAX11@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C000AA90 (_tlgKeywordOn.c)
 *     memset @ 0x1C0027640 (memset.c)
 *     ??$Write@U?$_tlgWrapperByVal@$01@@U1@U1@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U_tlgWrapperBinary@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$01@@33AEBU?$_tlgWrapperByVal@$03@@444AEBU_tlgWrapperBinary@@5@Z @ 0x1C0040808 (--$Write@U-$_tlgWrapperByVal@$01@@U1@U1@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U_tlgWrapperBinary@@U3.c)
 */

void __fastcall ADAPTER_DISPLAY::VSyncTelemetryBucket(ADAPTER_DISPLAY *this)
{
  unsigned __int64 v2; // rsi
  unsigned int v3; // eax
  char v4; // di
  _DWORD *v5; // rcx
  int v6; // r8d
  int v7; // edx
  __int64 v8; // r9
  int v9; // edx
  __int64 v10; // rdx
  unsigned int v11; // r9d
  __int64 v12; // r8
  __int64 v13; // r9
  int v14; // r10d
  __int64 v15; // rcx
  __int16 v16; // ax
  void *v17; // rcx
  void *v18; // rcx
  int v19; // [rsp+70h] [rbp-29h] BYREF
  int v20; // [rsp+74h] [rbp-25h] BYREF
  int v21; // [rsp+78h] [rbp-21h] BYREF
  __int64 v22; // [rsp+80h] [rbp-19h] BYREF
  __int16 v23; // [rsp+88h] [rbp-11h]
  __int64 v24; // [rsp+90h] [rbp-9h] BYREF
  __int16 v25; // [rsp+98h] [rbp-1h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+A0h] [rbp+7h] BYREF
  __int16 v27; // [rsp+100h] [rbp+67h] BYREF
  __int16 v28; // [rsp+108h] [rbp+6Fh] BYREF
  __int16 v29; // [rsp+110h] [rbp+77h] BYREF
  int v30; // [rsp+118h] [rbp+7Fh] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v2 = MEMORY[0xFFFFF78000000008] / 0x989680uLL;
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(*((_QWORD *)this + 2) + 4192LL), &LockHandle);
  v3 = *((_DWORD *)this + 182) + 1;
  *((_DWORD *)this + 182) = v3;
  if ( v3 >= 0x384 || (v4 = 0, (unsigned int)(v2 - *((_DWORD *)this + 183)) > 0xE10) )
    v4 = 1;
  v5 = (_DWORD *)*((_QWORD *)this + 127);
  if ( v5 )
  {
    v6 = *((_DWORD *)this + 244);
    v7 = *((_DWORD *)this + 242);
    if ( v6 == v7 )
    {
      if ( !*((_DWORD *)this + 236) )
        goto LABEL_14;
      if ( !v7 )
      {
        *v5 &= 0xFC03FFFF;
        **((_DWORD **)this + 127) ^= (*((_DWORD *)this + 182) ^ **((_DWORD **)this + 127)) & 0x3FFFF;
        *((_DWORD *)this + 243) = 1;
        goto LABEL_14;
      }
      v8 = *((unsigned int *)this + 243);
      v9 = v5[(unsigned int)(v8 - 1)];
      if ( (v9 & 0x3FC0000) == 0 )
      {
        v5[(unsigned int)(v8 - 1)] = v9 ^ (v9 ^ (v9 + 1)) & 0x3FFFF;
        goto LABEL_14;
      }
      v5[v8] &= 0xFC03FFFF;
      *(_DWORD *)(*((_QWORD *)this + 127) + 4LL * *((unsigned int *)this + 243)) = *(_DWORD *)(*((_QWORD *)this + 127)
                                                                                             + 4LL
                                                                                             * *((unsigned int *)this
                                                                                               + 243)) & 0xFFFC0000 | 1;
    }
    else
    {
      v5[*((unsigned int *)this + 243)] ^= (v5[*((unsigned int *)this + 243)] ^ ((v7 - v6) << 18)) & 0x3FC0000;
      *(_DWORD *)(*((_QWORD *)this + 127) + 4LL * *((unsigned int *)this + 243)) ^= (*(_DWORD *)(*((_QWORD *)this + 127)
                                                                                               + 4LL
                                                                                               * *((unsigned int *)this
                                                                                                 + 243)) ^ *((_DWORD *)this + 245)) & 0x3FFFF;
      *((_QWORD *)this + 122) = *((unsigned int *)this + 242);
    }
    ++*((_DWORD *)this + 243);
  }
LABEL_14:
  if ( v4 )
  {
    if ( (*((_DWORD *)this + 242) || *((_DWORD *)this + 241))
      && (unsigned int)dword_1C013A8E0 > 4
      && tlgKeywordOn((__int64)&dword_1C013A8E0, 0x400000002000LL)
      && v11 > 5
      && tlgKeywordOn((__int64)&dword_1C013A8E0, v10) )
    {
      v15 = *((_QWORD *)this + 127);
      if ( v15 )
        v16 = 4 * *((_WORD *)this + 486);
      else
        v16 = 0;
      v23 = v16;
      v24 = *((_QWORD *)this + 126);
      v22 = v15;
      v20 = v14;
      v28 = 1;
      v25 = v24 != 0 ? 0x180 : 0;
      v30 = 2 * *((_DWORD *)this + 246);
      v19 = *((_DWORD *)this + 241);
      v21 = v2 - *((_DWORD *)this + 183);
      v27 = *((_WORD *)this + 478);
      v29 = 2;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperBinary,_tlgWrapperBinary>(
        v15,
        byte_1C009DCD1,
        v12,
        v13,
        (__int64)&v29,
        (__int64)&v28,
        (__int64)&v27,
        (__int64)&v21,
        (__int64)&v20,
        (__int64)&v19,
        (__int64)&v30,
        &v24,
        &v22);
    }
    v17 = (void *)*((_QWORD *)this + 126);
    if ( v17 )
      memset(v17, 0, 0x180uLL);
    v18 = (void *)*((_QWORD *)this + 127);
    if ( v18 )
      memset(v18, 0, 4LL * *((unsigned int *)this + 243));
    ++*((_DWORD *)this + 239);
    *(_QWORD *)((char *)this + 964) = 0LL;
    *(_QWORD *)((char *)this + 972) = 0LL;
    *((_DWORD *)this + 182) = 0;
    *((_DWORD *)this + 183) = v2;
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
}
