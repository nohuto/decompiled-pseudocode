/*
 * XREFs of PiGetStateRootPath @ 0x14086F420
 * Callers:
 *     PiCreateDriverRedirectedStateKey @ 0x14086F37C (PiCreateDriverRedirectedStateKey.c)
 *     PiOpenDriverRedirectedStateKey @ 0x140875B5C (PiOpenDriverRedirectedStateKey.c)
 *     IoGetDeviceDirectory @ 0x1409520A0 (IoGetDeviceDirectory.c)
 *     PiGetDriverMutableStateDirectory @ 0x1409530D4 (PiGetDriverMutableStateDirectory.c)
 *     PiOpenDriverRedirectedStateRootKey @ 0x1409533F8 (PiOpenDriverRedirectedStateRootKey.c)
 *     PiCreateDriverDataDirectoryRoot @ 0x140B68F88 (PiCreateDriverDataDirectoryRoot.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140246490 (RtlInitUnicodeStringEx.c)
 *     RtlGetPersistedStateLocation @ 0x14069ADC0 (RtlGetPersistedStateLocation.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiGetStateRootPath(PCWSTR SourceString, _WORD *a2, unsigned int a3, UNICODE_STRING *a4)
{
  int PersistedStateLocation; // eax
  NTSTATUS inited; // ebx
  unsigned int v11; // ebx
  void *Pool2; // rdi
  int v13; // eax
  __int64 v14; // [rsp+78h] [rbp+20h] BYREF

  if ( !a4 )
    return (unsigned int)-1073741811;
  LODWORD(v14) = 0;
  PersistedStateLocation = RtlGetPersistedStateLocation(SourceString, 0LL, a2, a3, 0LL, 0, (unsigned int *)&v14);
  inited = PersistedStateLocation;
  if ( PersistedStateLocation >= 0 )
    return (unsigned int)-1073741823;
  if ( PersistedStateLocation == -2147483643 )
  {
    v11 = v14;
    Pool2 = (void *)ExAllocatePool2(256LL, (unsigned int)v14, 1869181008LL);
    if ( !Pool2 )
      return (unsigned int)-1073741670;
    v13 = RtlGetPersistedStateLocation(SourceString, 0LL, a2, a3, Pool2, v11, (unsigned int *)&v14);
    inited = v13;
    if ( v13 == -1073741772 )
    {
      inited = -1073741595;
    }
    else if ( v13 >= 0 )
    {
      inited = RtlInitUnicodeStringEx(a4, (PCWSTR)Pool2);
      if ( inited >= 0 )
        return (unsigned int)inited;
    }
    ExFreePoolWithTag(Pool2, 0);
  }
  return (unsigned int)inited;
}
