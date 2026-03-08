/*
 * XREFs of PfSnLogVolumeCreate @ 0x14078C1D0
 * Callers:
 *     PfFileInfoNotify @ 0x14028C770 (PfFileInfoNotify.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14028D330 (ExReleaseRundownProtection_0.c)
 *     RtlUpcaseUnicodeString @ 0x1407A3D00 (RtlUpcaseUnicodeString.c)
 *     PfSnGetNLLogEntry @ 0x1407A3E08 (PfSnGetNLLogEntry.c)
 *     PfSnLogHelper @ 0x1407A3FD0 (PfSnLogHelper.c)
 */

__int64 __fastcall PfSnLogVolumeCreate(__int64 *a1)
{
  int v1; // esi
  unsigned int v2; // edi
  __int64 v4; // rcx
  int v5; // esi
  struct _EX_RUNDOWN_REF *v6; // r15
  __int64 v7; // r8
  __int64 *v8; // rcx
  __int64 NLLogEntry; // rbx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v13; // eax
  UNICODE_STRING SourceString; // [rsp+30h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-10h] BYREF
  __int64 *v17; // [rsp+70h] [rbp+20h] BYREF

  v1 = *((unsigned __int16 *)a1 + 15);
  v2 = 0;
  v4 = *a1;
  v5 = 2 * v1;
  *(_DWORD *)(&DestinationString.MaximumLength + 1) = 0;
  *(_DWORD *)(&SourceString.MaximumLength + 1) = 0;
  v17 = 0LL;
  v6 = (struct _EX_RUNDOWN_REF *)PfSnLogHelper(v4, (unsigned int)(v5 + 97) >> 4, &v17);
  if ( v6 )
  {
    v7 = a1[1];
    v8 = v17;
    *(_OWORD *)v17 = 0LL;
    *v8 = (8LL * (((unsigned int)(v5 + 97) >> 4) - 1)) | 5;
    v8[1] = v7;
    NLLogEntry = PfSnGetNLLogEntry(v8, 2LL, (unsigned int)(v5 + 66), *((unsigned int *)a1 + 13), *((_DWORD *)a1 + 14));
    DestinationString.Length = 0;
    DestinationString.MaximumLength = v5;
    DestinationString.Buffer = (wchar_t *)(NLLogEntry + 56);
    v10 = *(_DWORD *)(NLLogEntry + 36);
    SourceString.Buffer = (wchar_t *)a1[5];
    *(_QWORD *)(NLLogEntry + 24) = a1[1];
    v11 = (*((_DWORD *)a1 + 12) ^ v10) & 0xF;
    SourceString.Length = v5;
    v12 = *(_DWORD *)(NLLogEntry + 36) ^ v11;
    *(_DWORD *)(NLLogEntry + 36) = v12;
    v13 = (*((_DWORD *)a1 + 12) ^ v12) & 0xF0;
    SourceString.MaximumLength = v5;
    *(_DWORD *)(NLLogEntry + 36) = v12 ^ v13;
    *(_QWORD *)(NLLogEntry + 16) = a1[2];
    *(_DWORD *)(NLLogEntry + 32) = *((_DWORD *)a1 + 6);
    *(_WORD *)(NLLogEntry + 40) = v5;
    *(_WORD *)(NLLogEntry + 42) = v5;
    RtlUpcaseUnicodeString(&DestinationString, &SourceString, 0);
    *(_WORD *)(NLLogEntry + 2LL * *((unsigned __int16 *)a1 + 15) + 56) = 0;
    ExReleaseRundownProtection_0(v6 + 45);
  }
  else
  {
    return (unsigned int)-1073741446;
  }
  return v2;
}
