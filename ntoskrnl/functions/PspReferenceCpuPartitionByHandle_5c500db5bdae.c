__int64 __fastcall PspReferenceCpuPartitionByHandle(
        ULONG_PTR BugCheckParameter1,
        int a2,
        char a3,
        __int64 a4,
        _QWORD *a5)
{
  __int64 v8; // r9
  unsigned int v9; // ecx
  NTSTATUS v11[4]; // [rsp+40h] [rbp-1B8h] BYREF
  struct _ACCESS_STATE AccessState; // [rsp+50h] [rbp-1A8h] BYREF
  _BYTE v13[224]; // [rsp+F0h] [rbp-108h] BYREF

  memset(&AccessState, 0, sizeof(AccessState));
  memset(v13, 0, sizeof(v13));
  if ( BugCheckParameter1 == -1LL )
  {
    v11[0] = SeCreateAccessState((int)&AccessState, (int)v13, a2, PsCpuPartitionType + 76);
    v9 = v11[0];
    if ( v11[0] >= 0 )
    {
      LOBYTE(v8) = a3;
      if ( ObCheckObjectAccess((char *)PspSystemCpuPartition, &AccessState, 0LL, v8, v11) )
      {
        v9 = 0;
        *a5 = PspSystemCpuPartition;
      }
      else
      {
        return (unsigned int)v11[0];
      }
    }
  }
  else
  {
    return (unsigned int)ObpReferenceObjectByHandleWithTag(
                           BugCheckParameter1,
                           a2,
                           PsCpuPartitionType,
                           a3,
                           0x50707350u,
                           a5,
                           0LL,
                           0LL);
  }
  return v9;
}
