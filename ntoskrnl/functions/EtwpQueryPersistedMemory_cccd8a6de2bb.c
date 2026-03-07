__int64 __fastcall EtwpQueryPersistedMemory(__int64 a1, __int64 a2, _QWORD *a3, unsigned int *a4)
{
  int v7; // eax
  int v8; // ebx
  void *Pool2; // rdi
  unsigned int v11; // [rsp+50h] [rbp+8h] BYREF
  int v12; // [rsp+54h] [rbp+Ch]

  v12 = HIDWORD(a1);
  v11 = 0;
  v7 = KsrClaimPersistedMemory(EtwpKsrGuid, a2, 0LL, 0LL, 0, &v11);
  v8 = v7;
  if ( v7 == -1073741789 )
  {
    Pool2 = (void *)ExAllocatePool2(64LL, 8LL * v11, 1266119749LL);
    if ( Pool2 )
    {
      v8 = KsrClaimPersistedMemory(EtwpKsrGuid, a2, Pool2, v11, 0, &v11);
      if ( v8 < 0 )
      {
        ExFreePoolWithTag(Pool2, 0);
      }
      else
      {
        *a4 = v11;
        *a3 = Pool2;
      }
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else if ( v7 >= 0 )
  {
    return (unsigned int)-1073741823;
  }
  return (unsigned int)v8;
}
