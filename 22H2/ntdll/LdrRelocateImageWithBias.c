/*
 * XREFs of LdrRelocateImageWithBias @ 0x18008489C
 * Callers:
 *     LdrpProtectAndRelocateImage @ 0x1800835AC (LdrpProtectAndRelocateImage.c)
 * Callees:
 *     RtlpImageDirectoryEntryToDataEx @ 0x180032920 (RtlpImageDirectoryEntryToDataEx.c)
 *     RtlImageNtHeaderEx @ 0x180032AD0 (RtlImageNtHeaderEx.c)
 *     LdrProcessRelocationBlockLongLong @ 0x180084998 (LdrProcessRelocationBlockLongLong.c)
 */

NTSTATUS __cdecl LdrRelocateImageWithBias(
        PVOID NewBase,
        LONGLONG Bias,
        PSTR LoaderName,
        NTSTATUS Success,
        NTSTATUS Conflict,
        NTSTATUS Invalid)
{
  NTSTATUS v6; // ebx
  __int64 v8; // rdi
  __int64 v9; // rbp
  NTSTATUS v10; // eax
  _DWORD *v11; // rcx
  unsigned int v12; // esi
  int v13; // r8d
  __int64 v15; // [rsp+70h] [rbp+18h] BYREF
  unsigned int v16; // [rsp+78h] [rbp+20h] BYREF

  v15 = (__int64)LoaderName;
  v6 = 0;
  v16 = 0;
  if ( RtlImageNtHeaderEx(1u, NewBase, 0LL, (PIMAGE_NT_HEADERS *)&v15) < 0 )
    return -1073741701;
  v8 = v15;
  if ( *(_WORD *)(v15 + 24) == 267 )
  {
    v9 = *(unsigned int *)(v15 + 52);
  }
  else
  {
    if ( *(_WORD *)(v15 + 24) != 523 )
      return -1073741701;
    v9 = *(_QWORD *)(v15 + 48);
  }
  v10 = RtlpImageDirectoryEntryToDataEx((unsigned __int64)NewBase, 1, 5u, &v16, (char **)&v15);
  v11 = (_DWORD *)v15;
  if ( v10 < 0 )
    v11 = 0LL;
  if ( !v11 )
    return (*(_BYTE *)(v8 + 22) & 1) != 0 ? 0xC0000018 : 0;
  v12 = v16;
  if ( !v16 )
    return (*(_BYTE *)(v8 + 22) & 1) != 0 ? 0xC0000018 : 0;
  while ( 1 )
  {
    v13 = v11[1];
    v12 -= v13;
    v11 = (_DWORD *)LdrProcessRelocationBlockLongLong(
                      *(unsigned __int16 *)(v8 + 4),
                      (int)NewBase + *v11,
                      (unsigned int)(v13 - 8) >> 1,
                      (int)v11 + 8,
                      (__int64)NewBase - v9);
    if ( !v11 )
      break;
    if ( !v12 )
      return v6;
  }
  return -1073741701;
}
