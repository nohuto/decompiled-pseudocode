/*
 * XREFs of NtUpdateInputSinkTransforms @ 0x1C0031A60
 * Callers:
 *     <none>
 * Callees:
 *     UserIsCurrentProcessDwm @ 0x1C001B580 (UserIsCurrentProcessDwm.c)
 *     _tlgKeywordOn @ 0x1C0053E90 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C00CDBD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00D6A00 (memset.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@444444444444444@Z @ 0x1C02319CC (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@_ea_1C02319CC.c)
 */

__int64 __fastcall NtUpdateInputSinkTransforms(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // r12d
  NTSTATUS v5; // esi
  unsigned int i; // r14d
  ULONG64 v7; // rdx
  __int128 v8; // xmm3
  __int128 v9; // xmm4
  __int128 v10; // xmm5
  __int64 v11; // xmm0_8
  _QWORD **v12; // r15
  _QWORD **v13; // rbx
  bool v14; // sf
  _QWORD **v15; // rcx
  int v17; // r8d
  int v18; // r9d
  unsigned int v19; // [rsp+B0h] [rbp-E8h] BYREF
  int v20; // [rsp+B4h] [rbp-E4h] BYREF
  int v21; // [rsp+B8h] [rbp-E0h] BYREF
  int v22; // [rsp+BCh] [rbp-DCh] BYREF
  int v23; // [rsp+C0h] [rbp-D8h] BYREF
  int v24; // [rsp+C4h] [rbp-D4h] BYREF
  int v25; // [rsp+C8h] [rbp-D0h] BYREF
  int v26; // [rsp+CCh] [rbp-CCh] BYREF
  int v27; // [rsp+D0h] [rbp-C8h] BYREF
  int v28; // [rsp+D4h] [rbp-C4h] BYREF
  int v29; // [rsp+D8h] [rbp-C0h] BYREF
  int v30; // [rsp+DCh] [rbp-BCh] BYREF
  int v31; // [rsp+E0h] [rbp-B8h] BYREF
  int v32; // [rsp+E4h] [rbp-B4h] BYREF
  int v33; // [rsp+E8h] [rbp-B0h] BYREF
  int v34; // [rsp+ECh] [rbp-ACh] BYREF
  PVOID Object; // [rsp+F0h] [rbp-A8h] BYREF
  __int64 v36; // [rsp+F8h] [rbp-A0h] BYREF
  _OWORD v37[6]; // [rsp+100h] [rbp-98h] BYREF

  v3 = a2;
  if ( UserIsCurrentProcessDwm(a1, a2, a3) )
  {
    v5 = 0;
    for ( i = 0; ; ++i )
    {
      v19 = i;
      if ( v5 < 0 || i >= v3 )
        return (unsigned int)v5;
      memset(&v37[1], 0, 0x48uLL);
      v7 = a1 + 72LL * i;
      if ( v7 + 72 < v7 || v7 + 72 > MmUserProbeAddress )
        v7 = MmUserProbeAddress;
      v8 = *(_OWORD *)(v7 + 16);
      v9 = *(_OWORD *)(v7 + 32);
      v10 = *(_OWORD *)(v7 + 48);
      v11 = *(_QWORD *)(v7 + 64);
      v37[1] = *(_OWORD *)v7;
      v37[2] = v8;
      v37[3] = v9;
      v37[4] = v10;
      *(_QWORD *)&v37[5] = v11;
      v12 = 0LL;
      Object = 0LL;
      v5 = ObReferenceObjectByHandle(*(HANDLE *)&v37[1], 2u, ExCompositionObjectType, 1, &Object, 0LL);
      v13 = (_QWORD **)Object;
      if ( v5 < 0 )
        goto LABEL_28;
      if ( (***((unsigned __int8 (__fastcall ****)(_QWORD))Object + 1))(*((_QWORD *)Object + 1)) )
      {
        if ( (*(unsigned int (__fastcall **)(_QWORD *))(*v13[1] + 16LL))(v13[1]) == 2 )
          v12 = v13;
        else
          v5 = -1073741788;
      }
      else
      {
        v5 = -1073741816;
      }
      v14 = v5 < 0;
      if ( v5 < 0 )
        break;
LABEL_14:
      if ( v14 )
        v12 = 0LL;
      if ( v5 >= 0 )
      {
        if ( ObReferenceObjectByPointer(v12, 3u, ExCompositionObjectType, 0) >= 0 )
        {
          KeEnterCriticalRegion();
          ExAcquirePushLockExclusiveEx(v12 + 4, 0LL);
          v12[5] = KeGetCurrentThread();
          *((_OWORD *)v12 + 7) = *(_OWORD *)((char *)&v37[1] + 8);
          *((_OWORD *)v12 + 8) = *(_OWORD *)((char *)&v37[2] + 8);
          *((_OWORD *)v12 + 9) = *(_OWORD *)((char *)&v37[3] + 8);
          *((_OWORD *)v12 + 10) = *(_OWORD *)((char *)&v37[4] + 8);
          v15 = v12 + 4;
          if ( KeGetCurrentThread() == (struct _KTHREAD *)v12[5] )
          {
            v12[5] = 0LL;
            ExReleasePushLockExclusiveEx(v15, 0LL);
          }
          else
          {
            ExReleasePushLockSharedEx(v15, 0LL);
          }
          KeLeaveCriticalRegion();
          ObfDereferenceObject(v12);
        }
        if ( (unsigned int)dword_1C0289810 > 5 )
        {
          if ( (unsigned __int8)tlgKeywordOn(&dword_1C0289810, 4LL) )
          {
            v19 = DWORD1(v37[5]);
            v20 = v37[5];
            v21 = HIDWORD(v37[4]);
            v22 = DWORD2(v37[4]);
            v23 = DWORD1(v37[4]);
            v24 = v37[4];
            v25 = HIDWORD(v37[3]);
            v26 = DWORD2(v37[3]);
            v27 = DWORD1(v37[3]);
            v28 = v37[3];
            v29 = HIDWORD(v37[2]);
            v30 = DWORD2(v37[2]);
            v31 = DWORD1(v37[2]);
            v32 = v37[2];
            v33 = HIDWORD(v37[1]);
            v34 = DWORD2(v37[1]);
            v36 = *(_QWORD *)&v37[1];
            *(_QWORD *)&v37[0] = v12;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
              (unsigned int)&dword_1C0289810,
              (unsigned int)&unk_1C0260324,
              v17,
              v18,
              (__int64)v37,
              (__int64)&v36,
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
              (__int64)&v20,
              (__int64)&v19);
          }
        }
        ObfDereferenceObject(v12);
      }
    }
    ObfDereferenceObject(v13);
LABEL_28:
    v14 = v5 < 0;
    goto LABEL_14;
  }
  return (unsigned int)-1073741790;
}
