__int64 __fastcall DpiProcessOpmVmBusRequest(
        __int64 a1,
        int a2,
        int a3,
        __int64 a4,
        unsigned int a5,
        void **a6,
        unsigned int *a7)
{
  __int64 result; // rax
  __int64 v8; // r10
  _QWORD *ChildDescriptor; // rax
  char *v10; // r9
  struct _FDO_CONTEXT *v11; // r10
  int v12; // r11d
  __int64 v13; // rdx
  __int64 v14; // rdx
  unsigned __int64 v15[3]; // [rsp+40h] [rbp-18h] BYREF

  if ( a3 == 2303131 )
  {
    WdLogSingleEntry1(2LL, -1073741637LL);
    return 3221225659LL;
  }
  else
  {
    v8 = *(_QWORD *)(a1 + 64);
    if ( v8 && *(_DWORD *)(v8 + 16) == 1953656900 && *(_DWORD *)(v8 + 20) == 2 )
    {
      ChildDescriptor = DpiFdoGetChildDescriptor(*(_QWORD *)(a1 + 64), a2);
      if ( ChildDescriptor
        && (v13 = ChildDescriptor[6]) != 0
        && (v14 = *(_QWORD *)(v13 + 64)) != 0
        && *(_DWORD *)(v14 + 16) == 1953656900
        && *(_DWORD *)(v14 + 20) == 5 )
      {
        v15[0] = 0LL;
        result = DpiPdoHandleOpmIoctlsInternal(v11, (struct _PDO_CONTEXT *)v14, v12, v10, a5, a6, *a7, v15);
        *a7 = v15[0];
      }
      else
      {
        return 3221225712LL;
      }
    }
    else
    {
      return 3221225711LL;
    }
  }
  return result;
}
