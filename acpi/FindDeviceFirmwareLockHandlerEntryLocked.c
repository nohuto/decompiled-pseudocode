__int64 __fastcall FindDeviceFirmwareLockHandlerEntryLocked(int a1, __int64 a2, __int64 *a3)
{
  __int64 v3; // r9
  __int64 v4; // rax

  v3 = 0LL;
  if ( a3 )
    v4 = *a3;
  else
    v4 = AcpiDeviceFirmwareLockHandlerList;
  while ( (__int64 *)v4 != &AcpiDeviceFirmwareLockHandlerList )
  {
    if ( *(_DWORD *)(v4 + 40) == a1 && (!a2 || *(_QWORD *)(v4 + 48) == a2) )
    {
      v3 = v4;
      _InterlockedIncrement((volatile signed __int32 *)(v4 + 64));
      return v3;
    }
    v4 = *(_QWORD *)v4;
  }
  return v3;
}
