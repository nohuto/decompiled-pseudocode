/*
 * XREFs of SeConvertSecurityDescriptorToStringSecurityDescriptor @ 0x14026DA40
 * Callers:
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x1405C2B24 (AdtpBuildAccessReasonAuditStringInternal.c)
 *     CmpLogHiveFileInaccessible @ 0x14066A9C4 (CmpLogHiveFileInaccessible.c)
 *     AdtpBuildSecurityDescriptorUnicodeString @ 0x14096DB2C (AdtpBuildSecurityDescriptorUnicodeString.c)
 * Callees:
 *     SddlpAlloc @ 0x140669778 (SddlpAlloc.c)
 *     LocalConvertSDToStringSD_Rev1 @ 0x14066A500 (LocalConvertSDToStringSD_Rev1.c)
 */

__int64 __fastcall SeConvertSecurityDescriptorToStringSecurityDescriptor(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4,
        _DWORD *a5)
{
  unsigned int v6; // ebx
  __int64 result; // rax
  _WORD *v8; // rax

  v6 = 0;
  if ( a1 && (_DWORD)a3 || !a4 )
  {
    if ( a1 && a4 && (_DWORD)a3 )
    {
      if ( (_DWORD)a2 != 1 )
      {
        LOWORD(result) = 1305;
        return (unsigned __int16)result | 0xC0070000;
      }
      result = LocalConvertSDToStringSD_Rev1(a1, a2, a3, a1, a3, a4, a5);
    }
    else
    {
      result = 87LL;
    }
    if ( (int)result <= 0 )
      return result;
    return (unsigned __int16)result | 0xC0070000;
  }
  v8 = (_WORD *)SddlpAlloc(2uLL);
  *a4 = v8;
  if ( v8 )
  {
    *v8 = 0;
    if ( a5 )
      *a5 = 0;
  }
  else
  {
    v6 = 8;
  }
  if ( v6 )
    v6 |= 0xC0070000;
  return v6;
}
