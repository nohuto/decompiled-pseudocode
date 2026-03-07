__int64 __fastcall NtCreateCompositionSurfaceHandle(__int64 a1, ACCESS_MASK a2, HANDLE *a3)
{
  __int64 v6; // rcx
  __int64 v7; // r9
  int v8; // ebx
  HANDLE Handle; // [rsp+88h] [rbp+20h] BYREF

  Handle = (HANDLE)-1LL;
  KeEnterCriticalRegion();
  LOBYTE(v6) = 1;
  v8 = DxgkCompositionObject::Create(
         v6,
         a1,
         a2,
         v7,
         1,
         160,
         (__int64 (__fastcall *)(PVOID, __int64, char *))CompositionSurfaceObject::ObjectInit,
         0LL,
         &Handle);
  if ( a3 )
  {
    if ( a3 + 1 < a3 || (unsigned __int64)(a3 + 1) > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    *a3 = Handle;
  }
  else
  {
    v8 = -1073741811;
  }
  if ( v8 < 0 && Handle != (HANDLE)-1LL )
    NtClose(Handle);
  KeLeaveCriticalRegion();
  return (unsigned int)v8;
}
