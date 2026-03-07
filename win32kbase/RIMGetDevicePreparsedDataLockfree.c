__int64 __fastcall RIMGetDevicePreparsedDataLockfree(char *a1, char *a2, _DWORD *a3, int a4)
{
  int v7; // esi
  PVOID v8; // rdi
  char *v9; // rax
  __int64 v10; // rax
  __int64 v11; // rdx
  const void *v12; // r9
  PVOID Object; // [rsp+28h] [rbp-10h] BYREF

  Object = 0LL;
  v7 = RawInputManagerDeviceObjectResolveHandle(a1, 1u, 1, &Object);
  if ( v7 >= 0 )
  {
    v8 = Object;
    if ( Object )
      v9 = (char *)Object + 72;
    else
      v9 = 0LL;
    if ( v9[48] == 2 )
    {
      v10 = *((_QWORD *)v9 + 57);
      v11 = *(unsigned int *)(v10 + 104);
      v12 = *(const void **)(v10 + 16);
      if ( a2 )
      {
        if ( a4 )
        {
          if ( a3 + 1 < a3 || (unsigned __int64)(a3 + 1) > MmUserProbeAddress )
            *(_BYTE *)MmUserProbeAddress = 0;
          if ( (unsigned int)v11 >= *a3 )
            v11 = (unsigned int)*a3;
          if ( (unsigned __int64)&a2[v11] > MmUserProbeAddress || &a2[v11] <= a2 )
            *(_BYTE *)MmUserProbeAddress = 0;
        }
        else if ( (unsigned int)v11 >= *a3 )
        {
          LODWORD(v11) = *a3;
        }
        memmove(a2, v12, (unsigned int)v11);
      }
      else if ( a4 )
      {
        if ( (unsigned __int64)a3 >= MmUserProbeAddress )
          a3 = (_DWORD *)MmUserProbeAddress;
        *a3 = v11;
      }
      else
      {
        *a3 = v11;
      }
    }
    else
    {
      v7 = -1073741811;
    }
    ObfDereferenceObject(v8);
  }
  return (unsigned int)v7;
}
