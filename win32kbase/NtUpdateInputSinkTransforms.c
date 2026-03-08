/*
 * XREFs of NtUpdateInputSinkTransforms @ 0x1C006A230
 * Callers:
 *     <none>
 * Callees:
 *     UserIsCurrentProcessDwm @ 0x1C00191C0 (UserIsCurrentProcessDwm.c)
 *     _tlgKeywordOn @ 0x1C004E7C0 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00E1980 (memset.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@444444444444444@Z @ 0x1C027088C (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@_ea_1C027088C.c)
 */

__int64 __fastcall NtUpdateInputSinkTransforms(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // r12d
  NTSTATUS v6; // esi
  unsigned int i; // r14d
  ULONG64 v8; // rdx
  __int128 v9; // xmm3
  __int128 v10; // xmm4
  __int128 v11; // xmm5
  __int64 v12; // xmm0_8
  _QWORD **v13; // r15
  _QWORD **v14; // rbx
  bool v15; // sf
  _QWORD **v16; // rcx
  int v18; // r8d
  int v19; // r9d
  unsigned int v20; // [rsp+B0h] [rbp-E8h] BYREF
  int v21; // [rsp+B4h] [rbp-E4h] BYREF
  int v22; // [rsp+B8h] [rbp-E0h] BYREF
  int v23; // [rsp+BCh] [rbp-DCh] BYREF
  int v24; // [rsp+C0h] [rbp-D8h] BYREF
  int v25; // [rsp+C4h] [rbp-D4h] BYREF
  int v26; // [rsp+C8h] [rbp-D0h] BYREF
  int v27; // [rsp+CCh] [rbp-CCh] BYREF
  int v28; // [rsp+D0h] [rbp-C8h] BYREF
  int v29; // [rsp+D4h] [rbp-C4h] BYREF
  int v30; // [rsp+D8h] [rbp-C0h] BYREF
  int v31; // [rsp+DCh] [rbp-BCh] BYREF
  int v32; // [rsp+E0h] [rbp-B8h] BYREF
  int v33; // [rsp+E4h] [rbp-B4h] BYREF
  int v34; // [rsp+E8h] [rbp-B0h] BYREF
  int v35; // [rsp+ECh] [rbp-ACh] BYREF
  PVOID Object; // [rsp+F0h] [rbp-A8h] BYREF
  __int64 v37; // [rsp+F8h] [rbp-A0h] BYREF
  _OWORD v38[6]; // [rsp+100h] [rbp-98h] BYREF

  v4 = a2;
  if ( UserIsCurrentProcessDwm(a1, a2, a3, a4) )
  {
    v6 = 0;
    for ( i = 0; ; ++i )
    {
      v20 = i;
      if ( v6 < 0 || i >= v4 )
        return (unsigned int)v6;
      memset(&v38[1], 0, 0x48uLL);
      v8 = a1 + 72LL * i;
      if ( v8 + 72 < v8 || v8 + 72 > MmUserProbeAddress )
        v8 = MmUserProbeAddress;
      v9 = *(_OWORD *)(v8 + 16);
      v10 = *(_OWORD *)(v8 + 32);
      v11 = *(_OWORD *)(v8 + 48);
      v12 = *(_QWORD *)(v8 + 64);
      v38[1] = *(_OWORD *)v8;
      v38[2] = v9;
      v38[3] = v10;
      v38[4] = v11;
      *(_QWORD *)&v38[5] = v12;
      v13 = 0LL;
      Object = 0LL;
      v6 = ObReferenceObjectByHandle(*(HANDLE *)&v38[1], 2u, ExCompositionObjectType, 1, &Object, 0LL);
      v14 = (_QWORD **)Object;
      if ( v6 < 0 )
        goto LABEL_28;
      if ( (***((unsigned __int8 (__fastcall ****)(_QWORD))Object + 1))(*((_QWORD *)Object + 1)) )
      {
        if ( (*(unsigned int (__fastcall **)(_QWORD *))(*v14[1] + 16LL))(v14[1]) == 2 )
          v13 = v14;
        else
          v6 = -1073741788;
      }
      else
      {
        v6 = -1073741816;
      }
      v15 = v6 < 0;
      if ( v6 < 0 )
        break;
LABEL_14:
      if ( v15 )
        v13 = 0LL;
      if ( v6 >= 0 )
      {
        if ( ObReferenceObjectByPointer(v13, 3u, ExCompositionObjectType, 0) >= 0 )
        {
          KeEnterCriticalRegion();
          ExAcquirePushLockExclusiveEx(v13 + 4, 0LL);
          v13[5] = KeGetCurrentThread();
          *((_OWORD *)v13 + 7) = *(_OWORD *)((char *)&v38[1] + 8);
          *((_OWORD *)v13 + 8) = *(_OWORD *)((char *)&v38[2] + 8);
          *((_OWORD *)v13 + 9) = *(_OWORD *)((char *)&v38[3] + 8);
          *((_OWORD *)v13 + 10) = *(_OWORD *)((char *)&v38[4] + 8);
          v16 = v13 + 4;
          if ( KeGetCurrentThread() == (struct _KTHREAD *)v13[5] )
          {
            v13[5] = 0LL;
            ExReleasePushLockExclusiveEx(v16, 0LL);
          }
          else
          {
            ExReleasePushLockSharedEx(v16, 0LL);
          }
          KeLeaveCriticalRegion();
          ObfDereferenceObject(v13);
        }
        if ( (unsigned int)dword_1C02CA7E0 > 5 && tlgKeywordOn((__int64)&dword_1C02CA7E0, 4LL) )
        {
          v20 = DWORD1(v38[5]);
          v21 = v38[5];
          v22 = HIDWORD(v38[4]);
          v23 = DWORD2(v38[4]);
          v24 = DWORD1(v38[4]);
          v25 = v38[4];
          v26 = HIDWORD(v38[3]);
          v27 = DWORD2(v38[3]);
          v28 = DWORD1(v38[3]);
          v29 = v38[3];
          v30 = HIDWORD(v38[2]);
          v31 = DWORD2(v38[2]);
          v32 = DWORD1(v38[2]);
          v33 = v38[2];
          v34 = HIDWORD(v38[1]);
          v35 = DWORD2(v38[1]);
          v37 = *(_QWORD *)&v38[1];
          *(_QWORD *)&v38[0] = v13;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
            (unsigned int)&dword_1C02CA7E0,
            (unsigned int)&unk_1C029ECB2,
            v18,
            v19,
            (__int64)v38,
            (__int64)&v37,
            (__int64)&v35,
            (__int64)&v34,
            (__int64)&v33,
            (__int64)&v32,
            (__int64)&v31,
            (__int64)&v30,
            (__int64)&v29,
            (__int64)&v28,
            (__int64)&v27,
            (__int64)&v26,
            (__int64)&v25,
            (__int64)&v24,
            (__int64)&v23,
            (__int64)&v22,
            (__int64)&v21,
            (__int64)&v20);
        }
        ObfDereferenceObject(v13);
      }
    }
    ObfDereferenceObject(v14);
LABEL_28:
    v15 = v6 < 0;
    goto LABEL_14;
  }
  return (unsigned int)-1073741790;
}
