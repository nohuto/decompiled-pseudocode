__int64 __fastcall ACPIQueryDeviceLockMutexSupport(int *a1)
{
  int v1; // edx

  if ( *(_BYTE *)(*((_QWORD *)AcpiInformation + 1) + 8LL) >= 5u || (v1 = 0, (gAMLIInitFlags & 4) != 0) )
    v1 = 1;
  *a1 = v1;
  return 0LL;
}
