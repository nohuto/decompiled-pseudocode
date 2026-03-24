/*
 * XREFs of ?VSyncTelemetryBucket@ADAPTER_DISPLAY@@QEAAXXZ @ 0x1C003B084
 * Callers:
 *     ?VSyncTelemetryTimerDpc@ADAPTER_DISPLAY@@SAXPEAU_KDPC@@PEAX11@Z @ 0x1C003B3D0 (-VSyncTelemetryTimerDpc@ADAPTER_DISPLAY@@SAXPEAU_KDPC@@PEAX11@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C000C284 (_tlgKeywordOn.c)
 *     memset @ 0x1C0028FC0 (memset.c)
 *     ??$Write@U?$_tlgWrapperByVal@$01@@U1@U1@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U_tlgWrapperBinary@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$01@@33AEBU?$_tlgWrapperByVal@$03@@444AEBU_tlgWrapperBinary@@5@Z @ 0x1C003AAE0 (--$Write@U-$_tlgWrapperByVal@$01@@U1@U1@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U_tlgWrapperBinary@@U3.c)
 */

void __fastcall ADAPTER_DISPLAY::VSyncTelemetryBucket(ADAPTER_DISPLAY *this)
{
  unsigned __int64 v2; // rdi
  char v3; // r9
  _DWORD *v4; // rcx
  int v5; // r8d
  int v6; // edx
  __int64 v7; // r10
  int v8; // edx
  __int64 v9; // rdx
  unsigned int v10; // r9d
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // r10d
  __int64 v14; // rdx
  __int64 v15; // rcx
  int v16; // eax
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

  v2 = MEMORY[0xFFFFF78000000008] / 0x989680uLL;
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(*((_QWORD *)this + 2) + 3968LL), &LockHandle);
  if ( ++*((_DWORD *)this + 156) >= 0x384u || (v3 = 0, (unsigned int)(v2 - *((_DWORD *)this + 157)) > 0xE10) )
    v3 = 1;
  v4 = (_DWORD *)*((_QWORD *)this + 114);
  if ( v4 )
  {
    v5 = *((_DWORD *)this + 218);
    v6 = *((_DWORD *)this + 216);
    if ( v5 == v6 )
    {
      if ( !*((_DWORD *)this + 210) )
        goto LABEL_14;
      if ( !v6 )
      {
        *v4 &= 0xFC03FFFF;
        **((_DWORD **)this + 114) ^= (**((_DWORD **)this + 114) ^ *((_DWORD *)this + 156)) & 0x3FFFF;
        *((_DWORD *)this + 217) = 1;
        goto LABEL_14;
      }
      v7 = *((unsigned int *)this + 217);
      v8 = v4[(unsigned int)(v7 - 1)];
      if ( (v8 & 0x3FC0000) == 0 )
      {
        v4[(unsigned int)(v7 - 1)] = v8 ^ (v8 ^ (v8 + 1)) & 0x3FFFF;
        goto LABEL_14;
      }
      v4[v7] &= 0xFC03FFFF;
      *(_DWORD *)(*((_QWORD *)this + 114) + 4LL * *((unsigned int *)this + 217)) = *(_DWORD *)(*((_QWORD *)this + 114)
                                                                                             + 4LL
                                                                                             * *((unsigned int *)this
                                                                                               + 217)) & 0xFFFC0000 | 1;
    }
    else
    {
      v4[*((unsigned int *)this + 217)] ^= (v4[*((unsigned int *)this + 217)] ^ ((v6 - v5) << 18)) & 0x3FC0000;
      *(_DWORD *)(*((_QWORD *)this + 114) + 4LL * *((unsigned int *)this + 217)) ^= (*((_DWORD *)this + 219) ^ *(_DWORD *)(*((_QWORD *)this + 114) + 4LL * *((unsigned int *)this + 217))) & 0x3FFFF;
      *((_QWORD *)this + 109) = *((unsigned int *)this + 216);
    }
    ++*((_DWORD *)this + 217);
  }
LABEL_14:
  if ( v3 )
  {
    if ( (*((_DWORD *)this + 216) || *((_DWORD *)this + 215))
      && (unsigned int)dword_1C00B1A20 > 4
      && tlgKeywordOn((__int64)&dword_1C00B1A20, 0x400000002000LL)
      && v10 > 5
      && tlgKeywordOn((__int64)&dword_1C00B1A20, v9) )
    {
      v14 = *((_QWORD *)this + 114);
      if ( v14 )
      {
        v15 = *((unsigned __int16 *)this + 434);
        LOWORD(v15) = 4 * v15;
      }
      else
      {
        v15 = 0LL;
      }
      v24 = *((_QWORD *)this + 113);
      v22 = v14;
      v23 = v15;
      v20 = v13;
      v25 = v24 != 0 ? 0x180 : 0;
      v16 = 2 * *((_DWORD *)this + 220);
      v28 = 1;
      v30 = v16;
      v19 = *((_DWORD *)this + 215);
      v21 = v2 - *((_DWORD *)this + 157);
      v27 = *((_WORD *)this + 426);
      v29 = 2;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperBinary,_tlgWrapperBinary>(
        v15,
        byte_1C007EE04,
        v11,
        v12,
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
    v17 = (void *)*((_QWORD *)this + 113);
    if ( v17 )
      memset(v17, 0, 0x180uLL);
    v18 = (void *)*((_QWORD *)this + 114);
    if ( v18 )
      memset(v18, 0, 4LL * *((unsigned int *)this + 217));
    ++*((_DWORD *)this + 213);
    *(_QWORD *)((char *)this + 860) = 0LL;
    *(_QWORD *)((char *)this + 868) = 0LL;
    *((_DWORD *)this + 156) = 0;
    *((_DWORD *)this + 157) = v2;
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
}
