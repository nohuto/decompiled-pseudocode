__int64 __fastcall CmEnumDevicesInContainerWithCallbackWorker(
        __int64 a1,
        __int64 a2,
        void *a3,
        __int64 (__fastcall *a4)(__int64, char *, __int64),
        __int64 a5,
        int a6)
{
  char *Pool2; // rdi
  int v7; // r12d
  int v11; // ebx
  HANDLE v12; // rdx
  __int64 v13; // rcx
  ULONG v14; // r15d
  int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // rcx
  ULONG i; // esi
  int v19; // eax
  int v20; // eax
  ULONG v21; // eax
  _BYTE v23[8]; // [rsp+40h] [rbp-20h] BYREF
  HANDLE KeyHandle; // [rsp+48h] [rbp-18h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp-10h] BYREF
  HANDLE v26; // [rsp+58h] [rbp-8h] BYREF

  v26 = 0LL;
  Pool2 = 0LL;
  KeyHandle = 0LL;
  v7 = 0;
  if ( (_WORD)a6 )
    return (unsigned int)-1073741811;
  if ( a3 )
    goto LABEL_6;
  v11 = PnpOpenObjectRegKey(a1, a2, 5u, 1, 0, (__int64)&v26);
  if ( v11 < 0 )
    goto LABEL_41;
  v12 = v26;
  if ( !v26 )
LABEL_6:
    v12 = a3;
  if ( a1 )
    v13 = *(_QWORD *)(a1 + 224);
  else
    v13 = 0LL;
  v11 = SysCtxRegOpenKey(v13, (__int64)v12, (__int64)L"BaseContainers", 0, 8u, (__int64)&KeyHandle);
  if ( v11 >= 0 )
  {
    Pool2 = (char *)ExAllocatePool2(256LL, 400LL, 1380994640LL);
    if ( Pool2 )
    {
      v14 = 0;
      while ( 1 )
      {
        Handle = 0LL;
        a6 = 200;
        v15 = RegRtlEnumKey(KeyHandle, v14, Pool2, (unsigned int *)&a6);
        v11 = v15;
        if ( v15 == -2147483622 )
          break;
        if ( v15 != -1073741789 )
        {
          if ( v15 < 0 )
            goto LABEL_41;
          v16 = a1 ? *(_QWORD *)(a1 + 224) : 0LL;
          v11 = SysCtxRegOpenKey(v16, (__int64)KeyHandle, (__int64)Pool2, 0, 1u, (__int64)&Handle);
          if ( v11 < 0 )
            goto LABEL_41;
          for ( i = 0; ; ++i )
          {
            do
            {
              a6 = 200;
              v19 = PnpCtxRegEnumValue(v17, Handle, i, Pool2, (__int64)&a6, (__int64)v23, 0LL, 0LL);
              v11 = v19;
              if ( v19 == -2147483622 )
              {
                v11 = 0;
                goto LABEL_33;
              }
            }
            while ( v19 == -1073741789 );
            if ( v19 < 0 )
              goto LABEL_33;
            v20 = a4(a1, Pool2, a5);
            v7 = v20;
            if ( v20 )
              break;
          }
          if ( v20 != 1 && v20 != 2 )
          {
            if ( v20 == 3 )
              v11 = -1073741248;
            else
              v11 = -1073741595;
          }
LABEL_33:
          if ( Handle )
            ZwClose(Handle);
          if ( v11 < 0 )
            goto LABEL_41;
          if ( v7 == 2 )
            goto LABEL_43;
          v21 = v14 + 1;
          v14 = 0;
          if ( v7 != 1 )
            v14 = v21;
        }
      }
      v11 = 0;
    }
    else
    {
      v11 = -1073741801;
    }
    goto LABEL_43;
  }
LABEL_41:
  if ( v11 == -1073741444 )
    v11 = -1073741772;
LABEL_43:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  if ( v26 )
    ZwClose(v26);
  return (unsigned int)v11;
}
