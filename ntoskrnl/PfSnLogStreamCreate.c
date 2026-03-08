/*
 * XREFs of PfSnLogStreamCreate @ 0x1407A3E7C
 * Callers:
 *     PfFileInfoNotify @ 0x14028C770 (PfFileInfoNotify.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14028D330 (ExReleaseRundownProtection_0.c)
 *     RtlUpcaseUnicodeString @ 0x1407A3D00 (RtlUpcaseUnicodeString.c)
 *     PfSnGetNLLogEntry @ 0x1407A3E08 (PfSnGetNLLogEntry.c)
 *     PfSnLogHelper @ 0x1407A3FD0 (PfSnLogHelper.c)
 */

__int64 __fastcall PfSnLogStreamCreate(__int64 a1)
{
  unsigned int v1; // edi
  unsigned int v2; // esi
  unsigned int v4; // eax
  __int64 v5; // rsi
  unsigned __int64 v6; // rbx
  struct _EX_RUNDOWN_REF *v7; // r13
  __int64 v8; // r8
  __int64 *v9; // rcx
  _DWORD *NLLogEntry; // rbx
  __int64 v11; // rcx
  __int64 v12; // rax
  UNICODE_STRING SourceString; // [rsp+30h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-10h] BYREF
  __int64 *v16; // [rsp+80h] [rbp+30h] BYREF

  v1 = 0;
  v2 = *(unsigned __int16 *)(a1 + 34);
  v4 = (unsigned __int16)*(_DWORD *)(a1 + 32);
  *(_DWORD *)(&DestinationString.MaximumLength + 1) = 0;
  *(_DWORD *)(&SourceString.MaximumLength + 1) = 0;
  v16 = 0LL;
  if ( v2 <= v4 )
  {
    return (unsigned int)-1073741637;
  }
  else
  {
    v5 = v2 - v4;
    v6 = ((unsigned __int64)(unsigned int)(2 * v5 + 70) + 15) >> 4;
    v7 = (struct _EX_RUNDOWN_REF *)PfSnLogHelper(*(_QWORD *)a1, (unsigned int)v6, &v16);
    if ( v7 )
    {
      v8 = *(_QWORD *)(a1 + 16);
      v9 = v16;
      *(_OWORD *)v16 = 0LL;
      *v9 = (8LL * (unsigned int)(v6 - 1)) | 5;
      v9[1] = v8;
      NLLogEntry = PfSnGetNLLogEntry((__int64)v9, 0, 2 * (int)v5 + 54, *(_DWORD *)(a1 + 40), *(_DWORD *)(a1 + 44));
      DestinationString.Length = 0;
      DestinationString.Buffer = (wchar_t *)(NLLogEntry + 11);
      v11 = (unsigned __int16)*(_DWORD *)(a1 + 32);
      v12 = *(_QWORD *)(a1 + 24);
      DestinationString.MaximumLength = 2 * v5;
      SourceString.Length = 2 * v5;
      SourceString.MaximumLength = 2 * v5;
      *((_QWORD *)NLLogEntry + 3) = *(_QWORD *)(a1 + 8);
      NLLogEntry[8] = *(_DWORD *)(a1 + 48);
      *((_QWORD *)NLLogEntry + 2) = *(_QWORD *)(a1 + 16);
      SourceString.Buffer = (wchar_t *)(v12 + 2 * v11);
      LODWORD(v11) = NLLogEntry[10] ^ (*(_DWORD *)(a1 + 36) ^ NLLogEntry[10]) & 1;
      NLLogEntry[10] = v11;
      NLLogEntry[10] = v11 ^ ((unsigned __int8)v11 ^ (unsigned __int8)(2 * *(_DWORD *)(a1 + 36))) & 4;
      *((_WORD *)NLLogEntry + 21) = v5;
      RtlUpcaseUnicodeString(&DestinationString, &SourceString, 0);
      *((_WORD *)NLLogEntry + v5 + 22) = 0;
      ExReleaseRundownProtection_0(v7 + 45);
    }
    else
    {
      return (unsigned int)-1073741446;
    }
  }
  return v1;
}
