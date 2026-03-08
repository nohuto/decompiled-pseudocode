/*
 * XREFs of SeConvertSecurityDescriptorToStringSecurityDescriptor @ 0x1402C0D20
 * Callers:
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x14066DCEC (AdtpBuildAccessReasonAuditStringInternal.c)
 *     AstLogDeviceSDDLUpdated @ 0x14074EF88 (AstLogDeviceSDDLUpdated.c)
 *     CmpLogHiveFileInaccessible @ 0x14078B330 (CmpLogHiveFileInaccessible.c)
 *     AdtpBuildSecurityDescriptorUnicodeString @ 0x140A58320 (AdtpBuildSecurityDescriptorUnicodeString.c)
 * Callees:
 *     LocalConvertSDToStringSD_Rev1 @ 0x14074F708 (LocalConvertSDToStringSD_Rev1.c)
 *     SddlpAlloc @ 0x1407507C8 (SddlpAlloc.c)
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
  if ( a1 && (_DWORD)a3 )
  {
LABEL_3:
    if ( a4 && (_DWORD)a3 )
    {
      if ( (_DWORD)a2 == 1 )
      {
        result = LocalConvertSDToStringSD_Rev1(a1, a2, a3, a1, a3, a4, a5);
        if ( (int)result <= 0 )
          return result;
      }
      else
      {
        LOWORD(result) = 1305;
      }
      return (unsigned __int16)result | 0xC0070000;
    }
LABEL_9:
    LOWORD(result) = 87;
    return (unsigned __int16)result | 0xC0070000;
  }
  if ( !a4 )
  {
    if ( !a1 )
      goto LABEL_9;
    goto LABEL_3;
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
