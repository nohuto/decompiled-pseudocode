__int64 __fastcall NtFlipObjectCreate(__int64 a1, HANDLE *a2)
{
  __int64 v4; // rcx
  __int64 v5; // r9
  int v6; // edi
  HANDLE Handle; // [rsp+68h] [rbp+10h] BYREF

  Handle = 0LL;
  KeEnterCriticalRegion();
  if ( a2 )
  {
    LOBYTE(v4) = 1;
    v6 = DxgkCompositionObject::Create(
           v4,
           0LL,
           0xF0000u,
           v5,
           4,
           368,
           (__int64 (__fastcall *)(PVOID, __int64, char *))FlipManagerObject::ObjectInit,
           a1,
           &Handle);
    if ( v6 >= 0 )
    {
      if ( a2 + 1 < a2 || (unsigned __int64)(a2 + 1) > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      *a2 = Handle;
      Handle = 0LL;
    }
  }
  else
  {
    v6 = -1073741811;
  }
  if ( Handle )
    ObCloseHandle(Handle, 1);
  KeLeaveCriticalRegion();
  return (unsigned int)v6;
}
