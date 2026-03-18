/*
 * XREFs of KGetAppModelStateSeparatedRegKeyPath @ 0x1407E7030
 * Callers:
 *     KIsUnlockSettingEnabled @ 0x1407E237C (KIsUnlockSettingEnabled.c)
 *     KIsSideloadingEnabled @ 0x140A0A4A0 (KIsSideloadingEnabled.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14022B6E0 (RtlInitUnicodeStringEx.c)
 *     RtlGetPersistedStateLocation @ 0x1406C5480 (RtlGetPersistedStateLocation.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140AAFC80 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall KGetAppModelStateSeparatedRegKeyPath(PCWSTR SourceString, _WORD *a2, UNICODE_STRING *a3)
{
  int PersistedStateLocation; // eax
  int inited; // ebx
  unsigned int v8; // ebx
  PVOID PoolWithTag; // rdi
  SIZE_T NumberOfBytes; // [rsp+70h] [rbp+18h] BYREF

  LODWORD(NumberOfBytes) = 0;
  if ( a3 )
  {
    PersistedStateLocation = RtlGetPersistedStateLocation(
                               SourceString,
                               L"TargetNtPath",
                               a2,
                               0,
                               0LL,
                               0,
                               (unsigned int *)&NumberOfBytes);
    inited = PersistedStateLocation;
    if ( PersistedStateLocation >= 0 )
    {
      return (unsigned int)-1073741823;
    }
    else if ( PersistedStateLocation == -2147483643 )
    {
      v8 = NumberOfBytes;
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x4D707041u);
      if ( PoolWithTag )
      {
        inited = RtlGetPersistedStateLocation(
                   SourceString,
                   L"TargetNtPath",
                   a2,
                   0,
                   PoolWithTag,
                   v8,
                   (unsigned int *)&NumberOfBytes);
        if ( inited < 0 || (inited = RtlInitUnicodeStringEx(a3, (PCWSTR)PoolWithTag), inited < 0) )
          ExFreePoolWithTag(PoolWithTag, 0x4D707041u);
      }
      else
      {
        return (unsigned int)-1073741670;
      }
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)inited;
}
