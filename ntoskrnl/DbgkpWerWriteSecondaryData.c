/*
 * XREFs of DbgkpWerWriteSecondaryData @ 0x140938EAC
 * Callers:
 *     DbgkpWerWriteTriageDump @ 0x140939010 (DbgkpWerWriteTriageDump.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ZwWriteFile @ 0x140412410 (ZwWriteFile.c)
 */

NTSTATUS __fastcall DbgkpWerWriteSecondaryData(__int64 a1, void *a2)
{
  __int128 *v2; // rbx
  NTSTATUS result; // eax
  ULONG Length; // ecx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+58h] [rbp+7h] BYREF
  _DWORD Buffer[4]; // [rsp+68h] [rbp+17h] BYREF
  int i; // [rsp+78h] [rbp+27h] BYREF
  __int128 v9; // [rsp+7Ch] [rbp+2Bh]
  int v10; // [rsp+8Ch] [rbp+3Bh]
  int v11; // [rsp+90h] [rbp+3Fh]
  int v12; // [rsp+94h] [rbp+43h]

  v2 = *(__int128 **)(a1 + 160);
  v9 = 0LL;
  IoStatusBlock = 0LL;
  if ( !v2 )
    return 0;
  Buffer[3] = NtBuildNumber;
  Buffer[2] = 16;
  Buffer[0] = 1886221636;
  Buffer[1] = 1651469378;
  result = ZwWriteFile(a2, 0LL, 0LL, 0LL, &IoStatusBlock, Buffer, 0x10u, 0LL, 0LL);
  if ( result >= 0 )
  {
    v11 = 0;
    Length = 32;
    v12 = 0;
    for ( i = 32; ; Length = i )
    {
      v9 = *v2;
      v10 = *((_DWORD *)v2 + 6);
      result = ZwWriteFile(a2, 0LL, 0LL, 0LL, &IoStatusBlock, &i, Length, 0LL, 0LL);
      if ( result < 0 )
        break;
      result = ZwWriteFile(a2, 0LL, 0LL, 0LL, &IoStatusBlock, *((PVOID *)v2 + 2), *((_DWORD *)v2 + 6), 0LL, 0LL);
      if ( result < 0 )
        break;
      v2 = (__int128 *)*((_QWORD *)v2 + 4);
      if ( !v2 )
        break;
    }
  }
  return result;
}
