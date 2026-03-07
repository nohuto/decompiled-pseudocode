void __fastcall AlpcpLogWaitForNewMessage(__int64 a1)
{
  const void **v1; // rbx
  unsigned int v3; // esi
  _DWORD *Pool2; // rax
  _DWORD *v5; // rdi
  __int128 v6; // xmm0
  unsigned int v7; // [rsp+40h] [rbp+8h] BYREF
  const void **v8; // [rsp+48h] [rbp+10h] BYREF

  v1 = 0LL;
  v8 = 0LL;
  v3 = 30;
  if ( a1 )
  {
    v7 = -1;
    if ( (int)AlpcpGetPortNameInformation((char *)a1, &v8, &v7) < 0 )
      return;
    v1 = v8;
    v3 = *(unsigned __int16 *)v8 + 30;
  }
  Pool2 = (_DWORD *)ExAllocatePool2(256LL, v3, 1699507265LL);
  v5 = Pool2;
  if ( Pool2 )
  {
    memset(Pool2, 0, v3);
    v1 = v8;
    v6 = *(_OWORD *)&KeGetCurrentThread()[1].CycleTime;
    v5[4] = 4;
    *(_OWORD *)v5 = v6;
    if ( a1 )
    {
      v5[6] = (*(_DWORD *)(a1 + 416) & 6) == 2;
      memmove(v5 + 7, v1[1], *(unsigned __int16 *)v1);
    }
    else
    {
      v5[6] = 0;
    }
    AlpcpInvokeLogCallbacks((__int64)v5, v3);
    ExFreePoolWithTag(v5, 0);
  }
  if ( v1 )
    ExFreePoolWithTag(v1, 0);
}
