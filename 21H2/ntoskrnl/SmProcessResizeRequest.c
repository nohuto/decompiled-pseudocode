/*
 * XREFs of SmProcessResizeRequest @ 0x14092A09C
 * Callers:
 *     SmSetStoreInformation @ 0x14061D784 (SmSetStoreInformation.c)
 * Callees:
 *     ?SmStoreRequest@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@KPEAU_SM_WORK_ITEM@1@PEAU_KEVENT@@PEAU_IO_STATUS_BLOCK@@@Z @ 0x1402A07C4 (-SmStoreRequest@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@KPEAU_SM_WORK_ITEM@1@PEAU_KEVENT@@PEAU_I.c)
 *     KeWaitForSingleObject @ 0x1403504C0 (KeWaitForSingleObject.c)
 *     KeInitializeEvent @ 0x14035E640 (KeInitializeEvent.c)
 */

__int64 __fastcall SmProcessResizeRequest(__int64 a1, __int64 a2, int a3, char a4)
{
  __int64 result; // rax
  bool v7; // zf
  int v8; // eax
  unsigned int v9; // edx
  LARGE_INTEGER v10[2]; // [rsp+30h] [rbp-50h] BYREF
  struct _KEVENT Event; // [rsp+40h] [rbp-40h] BYREF
  int v12; // [rsp+58h] [rbp-28h] BYREF
  __int64 v13; // [rsp+5Ch] [rbp-24h]
  int v14; // [rsp+64h] [rbp-1Ch]
  __int64 v15; // [rsp+68h] [rbp-18h]
  int v16; // [rsp+70h] [rbp-10h]
  __int64 v17; // [rsp+74h] [rbp-Ch]
  int v18; // [rsp+7Ch] [rbp-4h]

  *(_OWORD *)&v10[0].LowPart = 0LL;
  if ( a3 != 24 )
    return 3221225990LL;
  if ( a4 )
    return 3221225485LL;
  if ( (unsigned __int8)*(_DWORD *)a2 != 6 )
    return 3221225561LL;
  KeInitializeEvent(&Event, NotificationEvent, 0);
  v13 = 0LL;
  v14 = 0;
  v17 = 0LL;
  v18 = 0;
  v7 = (*(_DWORD *)a2 & 0x100) == 0;
  v12 = 4;
  if ( v7 )
    v8 = 5;
  else
    v8 = 4;
  v9 = *(_DWORD *)(a2 + 4);
  HIDWORD(v13) = v8;
  v16 = *(_DWORD *)(a2 + 8);
  v15 = *(_QWORD *)(a2 + 16);
  SMKM_STORE_MGR<SM_TRAITS>::SmStoreRequest(a1, v9, (__int64)&v12, (__int64)&Event, (__int64)v10);
  KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
  result = v10[0].LowPart;
  *(_DWORD *)(a2 + 8) = v16;
  return result;
}
