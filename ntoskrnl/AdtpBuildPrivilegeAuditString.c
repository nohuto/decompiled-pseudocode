/*
 * XREFs of AdtpBuildPrivilegeAuditString @ 0x140A57DA0
 * Callers:
 *     AdtpPackageParameters @ 0x1403958B4 (AdtpPackageParameters.c)
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x14066DCEC (AdtpBuildAccessReasonAuditStringInternal.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     AdtpLookupKnownPrivilegeNameQuickly @ 0x14066EC04 (AdtpLookupKnownPrivilegeNameQuickly.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

__int64 __fastcall AdtpBuildPrivilegeAuditString(
        unsigned int *a1,
        UNICODE_STRING *a2,
        __int64 *a3,
        __int64 a4,
        unsigned int *a5,
        _BYTE *a6)
{
  unsigned int v6; // eax
  unsigned int v7; // r12d
  UNICODE_STRING *v10; // r15
  unsigned __int16 v13; // bx
  __int64 v14; // rdx
  unsigned int v15; // r8d
  __int64 Pool2; // r14
  _WORD *v17; // rdi
  size_t Length; // rbx
  wchar_t *Buffer; // rdx
  __int64 v20; // rbx
  unsigned __int16 v21; // di
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-40h] BYREF
  UNICODE_STRING v23; // [rsp+30h] [rbp-30h]
  __int128 v24; // [rsp+40h] [rbp-20h] BYREF
  UNICODE_STRING v25; // [rsp+50h] [rbp-10h] BYREF

  v6 = *a1;
  v7 = 0;
  *(_DWORD *)(&v23.MaximumLength + 1) = 0;
  v10 = a2;
  DestinationString = 0LL;
  v25 = 0LL;
  v24 = 0LL;
  if ( v6 )
  {
    if ( v6 > 0x42 )
      return 3221225485LL;
    RtlInitUnicodeString(&DestinationString, L"\r\n\t\t\t");
    RtlInitUnicodeString(&v25, L"?");
    v13 = (unsigned __int16)(*(_WORD *)a1 * (AdtpWellKnownPrivilegeMaxLen + DestinationString.Length)
                           - DestinationString.Length
                           + 2) >> 1;
    if ( a4 && (v14 = *a5, v15 = v14 + v13, v15 < 0x400) )
    {
      Pool2 = a4 + 2 * v14;
      *a5 = v15;
    }
    else
    {
      Pool2 = ExAllocatePool2(256LL, 2LL * v13, 1799447891LL);
      if ( !Pool2 )
        return 3221225495LL;
      *a6 = 1;
    }
    v23.Buffer = (wchar_t *)Pool2;
    v23.MaximumLength = 2 * v13;
    v17 = (_WORD *)Pool2;
    if ( *a1 )
    {
      do
      {
        if ( (unsigned int)AdtpLookupKnownPrivilegeNameQuickly(&a1[2 * v7 + 2 + v7], &v24) )
        {
          Length = v25.Length;
          Buffer = v25.Buffer;
        }
        else
        {
          Length = (unsigned __int16)v24;
          Buffer = (wchar_t *)*((_QWORD *)&v24 + 1);
        }
        memmove(v17, Buffer, Length);
        v17 = (_WORD *)((char *)v17 + Length);
        if ( v7 < *a1 - 1 )
        {
          v20 = DestinationString.Length;
          memmove(v17, DestinationString.Buffer, DestinationString.Length);
          v17 = (_WORD *)((char *)v17 + v20);
        }
        ++v7;
      }
      while ( v7 < *a1 );
      v10 = a2;
    }
    *v17 = 0;
    v21 = (_WORD)v17 - Pool2;
    v23.Length = v21;
    if ( a3 )
    {
      *a3 = Pool2;
      a3[1] = (unsigned int)v21 + 2;
    }
    else
    {
      *v10 = v23;
    }
  }
  else if ( a3 )
  {
    a3[1] = 4LL;
    *a3 = (__int64)"-";
  }
  else if ( a2 )
  {
    RtlInitUnicodeString(a2, L"-");
  }
  return 0LL;
}
