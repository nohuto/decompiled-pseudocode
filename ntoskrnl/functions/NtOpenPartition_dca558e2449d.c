__int64 __fastcall NtOpenPartition(HANDLE *a1, int a2, __int64 a3)
{
  char PreviousMode; // di
  __int64 v5; // rcx
  __int64 result; // rax
  HANDLE Handle[4]; // [rsp+48h] [rbp-20h] BYREF

  Handle[0] = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v5 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a1 < 0x7FFFFFFF0000LL )
      v5 = (__int64)a1;
    *(_QWORD *)v5 = *(_QWORD *)v5;
  }
  result = ObOpenObjectByName(a3, (__int64)PsPartitionType, PreviousMode, 0LL, a2, 0LL, (__int64)Handle);
  if ( (int)result >= 0 )
  {
    *a1 = Handle[0];
    return (unsigned int)result;
  }
  return result;
}
