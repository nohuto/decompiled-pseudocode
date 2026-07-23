/*
 * XREFs of WerpCreateCrashDataSection @ 0x1800DD914
 * Callers:
 *     RtlReportExceptionEx @ 0x1800DCA00 (RtlReportExceptionEx.c)
 *     RtlReportExceptionHelper @ 0x1800DCED0 (RtlReportExceptionHelper.c)
 * Callees:
 *     NtClose @ 0x18009D6C0 (NtClose.c)
 *     ZwMapViewOfSection @ 0x18009D9E0 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x18009DA20 (NtUnmapViewOfSection.c)
 *     NtCreateSection @ 0x18009DE20 (NtCreateSection.c)
 *     memset @ 0x1800A4600 (memset.c)
 */

__int64 __fastcall WerpCreateCrashDataSection(HANDLE *a1, PVOID *a2)
{
  NTSTATUS v4; // ebx
  HANDLE v5; // rcx
  PVOID v6; // rdx
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  PVOID BaseAddress; // [rsp+B0h] [rbp+30h] BYREF
  HANDLE SectionHandle; // [rsp+B8h] [rbp+38h] BYREF
  LARGE_INTEGER MaximumSize; // [rsp+C0h] [rbp+40h] BYREF
  ULONG_PTR ViewSize; // [rsp+C8h] [rbp+48h] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  SectionHandle = 0LL;
  BaseAddress = 0LL;
  ViewSize = 0LL;
  if ( a1 )
    *a1 = 0LL;
  if ( a2 )
    *a2 = 0LL;
  if ( a1 )
  {
    if ( a2 )
    {
      ObjectAttributes.Length = 48;
      ObjectAttributes.RootDirectory = 0LL;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      ObjectAttributes.Attributes = 2;
      ObjectAttributes.ObjectName = 0LL;
      MaximumSize.QuadPart = 1648LL;
      v4 = NtCreateSection(&SectionHandle, 0xF0007u, &ObjectAttributes, &MaximumSize, 4u, 0x8000000u, 0LL);
      if ( v4 < 0
        || (v4 = ZwMapViewOfSection(
                   SectionHandle,
                   (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                   &BaseAddress,
                   0LL,
                   0LL,
                   0LL,
                   &ViewSize,
                   ViewShare,
                   0,
                   4u),
            v4 < 0) )
      {
        v5 = SectionHandle;
        v6 = BaseAddress;
      }
      else
      {
        memset(BaseAddress, 0, 0xF8uLL);
        v5 = 0LL;
        *a1 = SectionHandle;
        v6 = 0LL;
        v4 = 0;
        *a2 = BaseAddress;
        SectionHandle = 0LL;
        BaseAddress = 0LL;
      }
      if ( v6 )
      {
        NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, v6);
        v5 = SectionHandle;
        BaseAddress = 0LL;
      }
      if ( v5 )
        NtClose(v5);
    }
    else
    {
      return (unsigned int)-1073741584;
    }
  }
  else
  {
    return (unsigned int)-1073741585;
  }
  return (unsigned int)v4;
}
