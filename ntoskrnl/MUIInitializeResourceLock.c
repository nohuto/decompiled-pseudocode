/*
 * XREFs of MUIInitializeResourceLock @ 0x14085B81C
 * Callers:
 *     NtGetMUIRegistryInfo @ 0x140779C90 (NtGetMUIRegistryInfo.c)
 *     NtFlushInstallUILanguage @ 0x14085B740 (NtFlushInstallUILanguage.c)
 *     NtMapCMFModule @ 0x140A005D0 (NtMapCMFModule.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x14030FAB0 (ExInitializeResourceLite.c)
 *     ExDeleteResourceLite @ 0x140336580 (ExDeleteResourceLite.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MUIInitializeResourceLock(volatile signed __int64 *a1)
{
  struct _ERESOURCE *Pool2; // rax
  struct _ERESOURCE *v3; // rbx
  unsigned int v4; // edi

  if ( a1 )
  {
    if ( *a1 )
    {
      return 0;
    }
    else
    {
      Pool2 = (struct _ERESOURCE *)ExAllocatePool2(64LL, 104LL, 1836411216LL);
      v3 = Pool2;
      if ( Pool2 )
      {
        v4 = ExInitializeResourceLite(Pool2);
        if ( (v4 & 0xC0000000) == 0xC0000000 )
          goto LABEL_11;
        if ( _InterlockedCompareExchange64(a1, (signed __int64)v3, 0LL) )
          ExDeleteResourceLite(v3);
        else
          v3 = 0LL;
        v4 = 0;
        if ( v3 )
LABEL_11:
          ExFreePoolWithTag(v3, 0);
      }
      else
      {
        return (unsigned int)-1073741801;
      }
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v4;
}
