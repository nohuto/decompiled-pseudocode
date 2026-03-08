/*
 * XREFs of RtlUnalignedStringCbLengthW @ 0x1C0053200
 * Callers:
 *     UsbhPdo_ReportPnPFailureProblem @ 0x1C0056F88 (UsbhPdo_ReportPnPFailureProblem.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlUnalignedStringCbLengthW(STRSAFE_PCUNZWCH psz, size_t cbMax, size_t *pcbLength)
{
  size_t v3; // rdx
  __int64 v5; // rax
  size_t i; // r8
  NTSTATUS v7; // ecx

  v3 = cbMax >> 1;
  v5 = 0LL;
  if ( psz && v3 <= 0x7FFFFFFF )
  {
    for ( i = v3; i; --i )
    {
      if ( !*psz )
        break;
      ++psz;
    }
    v7 = i == 0 ? 0xC000000D : 0;
    v5 = (v3 - i) & -(__int64)(i != 0);
  }
  else
  {
    v7 = -1073741811;
  }
  if ( pcbLength )
  {
    if ( v7 < 0 )
      *pcbLength = 0LL;
    else
      *pcbLength = 2 * v5;
  }
  return v7;
}
