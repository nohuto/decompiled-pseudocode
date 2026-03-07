__int64 __fastcall PiAuAllocateAndInitializeSid(PVOID *a1, struct _SID_IDENTIFIER_AUTHORITY *a2, unsigned int a3)
{
  UCHAR v3; // bl
  unsigned int v6; // eax
  void *Pool2; // rax
  NTSTATUS v8; // ebx

  v3 = a3;
  if ( a3 > 0x3FFFFFF7 )
    v6 = -1;
  else
    v6 = 4 * a3 + 8;
  Pool2 = (void *)ExAllocatePool2(256LL, v6, 538996816LL);
  *a1 = Pool2;
  if ( Pool2 )
  {
    v8 = RtlInitializeSid(Pool2, a2, v3);
    if ( v8 >= 0 )
      return (unsigned int)v8;
  }
  else
  {
    v8 = -1073741670;
  }
  if ( *a1 )
  {
    ExFreePoolWithTag(*a1, 0);
    *a1 = 0LL;
  }
  return (unsigned int)v8;
}
