__int64 ACPIGetUsedDebuggingDevices()
{
  __int64 result; // rax
  __int64 Pool2; // rax
  unsigned int *v2; // rdi
  unsigned int v3; // ebp
  const WCHAR *v4; // rbx
  unsigned int v5; // r14d
  unsigned int i; // esi
  __int64 v7; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-28h] BYREF
  unsigned int v9; // [rsp+60h] [rbp+8h] BYREF

  v9 = 0;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  gDebuggingDevicesInUse[0] = 0LL;
  xmmword_1C006EA10 = 0LL;
  result = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, unsigned int *))HalDispatchTable->HalQuerySystemInformation)(
             33LL,
             0LL,
             0LL,
             &v9);
  if ( (_DWORD)result == -2147483643 )
  {
    Pool2 = ExAllocatePool2(256LL, v9, 1114661697LL);
    v2 = (unsigned int *)Pool2;
    if ( Pool2 )
    {
      result = ((__int64 (__fastcall *)(__int64, _QWORD, __int64, unsigned int *))HalDispatchTable->HalQuerySystemInformation)(
                 33LL,
                 v9,
                 Pool2,
                 &v9);
      if ( (int)result >= 0 )
      {
        v3 = 0;
        v4 = (const WCHAR *)(v2 + 1);
        v5 = 0;
        for ( i = 0; i < *v2; ++i )
        {
          v4 = (const WCHAR *)((char *)v4 + v5);
          v5 = *((_DWORD *)v4 + 1);
          if ( *(_DWORD *)v4 == 1 )
          {
            if ( *((_DWORD *)v4 + 2) )
            {
              RtlInitUnicodeString(&DestinationString, v4 + 6);
              v7 = v3++;
              gDebuggingDevicesInUse[v7] = (__int128)DestinationString;
            }
          }
        }
        return 0LL;
      }
    }
    else
    {
      return 3221225626LL;
    }
  }
  return result;
}
