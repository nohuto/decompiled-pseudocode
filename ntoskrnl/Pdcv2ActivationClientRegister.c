/*
 * XREFs of Pdcv2ActivationClientRegister @ 0x140857554
 * Callers:
 *     PnpBootPhaseComplete @ 0x14081BD60 (PnpBootPhaseComplete.c)
 * Callees:
 *     KeInitializeEvent @ 0x14030F330 (KeInitializeEvent.c)
 *     PdcPortOpenCommon @ 0x140852DF8 (PdcPortOpenCommon.c)
 *     PdcRwLockInitialize2 @ 0x1408576A8 (PdcRwLockInitialize2.c)
 *     PdcReleaseRwLockExclusive2 @ 0x140857710 (PdcReleaseRwLockExclusive2.c)
 *     PdcAcquireRwLockExclusive2 @ 0x140857778 (PdcAcquireRwLockExclusive2.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall Pdcv2ActivationClientRegister(__int64 a1, __int128 *a2, __int64 (__fastcall *a3)())
{
  __int64 Pool2; // rax
  _DWORD *v5; // rsi
  __int64 v6; // r15
  int v7; // edi
  struct _KEVENT *v8; // rax
  struct _KEVENT *v9; // rbx
  __int128 v10; // xmm0
  void *v12; // rcx
  int v13; // [rsp+20h] [rbp-48h]
  int v14; // [rsp+28h] [rbp-40h]
  int v15; // [rsp+38h] [rbp-30h]
  __int64 (__fastcall *v16)(); // [rsp+80h] [rbp+18h] BYREF

  v16 = a3;
  PnpPdcClientHandle = 0LL;
  if ( *(_DWORD *)a2 != 1 || !*((_QWORD *)a2 + 1) )
    return (unsigned int)-1073741584;
  Pool2 = ExAllocatePool2(256LL, 280LL, 843138128LL);
  v5 = (_DWORD *)Pool2;
  if ( !Pool2 )
    return (unsigned int)-1073741801;
  v6 = Pool2 + 8;
  v7 = PdcRwLockInitialize2(Pool2 + 8);
  if ( v7 < 0 )
  {
LABEL_17:
    ExFreePoolWithTag(v5, 0);
    return (unsigned int)v7;
  }
  PdcAcquireRwLockExclusive2(v6, 0LL);
  v8 = (struct _KEVENT *)ExAllocatePool2(64LL, 24LL, 1164141648LL);
  v9 = v8;
  if ( v8 )
    KeInitializeEvent(v8, NotificationEvent, 1u);
  *((_QWORD *)v5 + 13) = v9;
  if ( !v9 )
  {
    v7 = -1073741670;
LABEL_16:
    PdcReleaseRwLockExclusive2(v5 + 2, 0LL);
    ExFreePoolWithTag(*((PVOID *)v5 + 1), 0);
    *((_QWORD *)v5 + 1) = 0LL;
    goto LABEL_17;
  }
  *v5 = 843138128;
  v5[8] = 121;
  *((_QWORD *)v5 + 11) = v5 + 20;
  *((_QWORD *)v5 + 10) = v5 + 20;
  *((_BYTE *)v5 + 72) = 1;
  v10 = *a2;
  v16 = Pdcv2pActivationClientCallback;
  *((_OWORD *)v5 + 3) = v10;
  *((_QWORD *)v5 + 8) = *((_QWORD *)a2 + 2);
  v7 = PdcPortOpenCommon(0x79u, 7u, (__int64)v5, (__int64 *)&v16, v13, v14, 0LL, v15, (_QWORD *)v5 + 5);
  if ( v7 )
  {
    v12 = (void *)*((_QWORD *)v5 + 13);
    if ( v12 )
      ExFreePoolWithTag(v12, 0);
    goto LABEL_16;
  }
  PnpPdcClientHandle = (__int64)v5;
  PdcReleaseRwLockExclusive2(v6, 0LL);
  return (unsigned int)v7;
}
