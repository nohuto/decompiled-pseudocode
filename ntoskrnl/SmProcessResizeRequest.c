__int64 __fastcall SmProcessResizeRequest(__int64 a1, int a2, char a3)
{
  __int64 result; // rax
  __int64 ProcessPartition; // rdi
  bool v6; // zf
  int v7; // eax
  unsigned int v8; // edx
  LARGE_INTEGER v9[2]; // [rsp+30h] [rbp-50h] BYREF
  struct _KEVENT Event; // [rsp+40h] [rbp-40h] BYREF
  int v11; // [rsp+58h] [rbp-28h] BYREF
  __int64 v12; // [rsp+5Ch] [rbp-24h]
  int v13; // [rsp+64h] [rbp-1Ch]
  __int64 v14; // [rsp+68h] [rbp-18h]
  int v15; // [rsp+70h] [rbp-10h]
  __int64 v16; // [rsp+74h] [rbp-Ch]
  int v17; // [rsp+7Ch] [rbp-4h]

  memset(&Event, 0, sizeof(Event));
  *(_OWORD *)&v9[0].LowPart = 0LL;
  if ( a2 != 24 )
    return 3221225990LL;
  if ( a3 )
    return 3221225485LL;
  if ( (unsigned __int8)*(_DWORD *)a1 != 6 )
    return 3221225561LL;
  ProcessPartition = SmpGetProcessPartition((__int64)KeGetCurrentThread()->ApcState.Process);
  KeInitializeEvent(&Event, NotificationEvent, 0);
  v12 = 0LL;
  v13 = 0;
  v16 = 0LL;
  v17 = 0;
  v6 = (*(_DWORD *)a1 & 0x100) == 0;
  v11 = 4;
  if ( v6 )
    v7 = 5;
  else
    v7 = 4;
  v8 = *(_DWORD *)(a1 + 4);
  HIDWORD(v12) = v7;
  v15 = *(_DWORD *)(a1 + 8);
  v14 = *(_QWORD *)(a1 + 16);
  SMKM_STORE_MGR<SM_TRAITS>::SmStoreRequest(ProcessPartition, v8, (int)&v11, (int)&Event, (__int64)v9);
  KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
  result = v9[0].LowPart;
  *(_DWORD *)(a1 + 8) = v15;
  return result;
}
