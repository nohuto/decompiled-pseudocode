/*
 * XREFs of MiLogFailedDriverLoad @ 0x140A2D5B4
 * Callers:
 *     MmLoadSystemImageEx @ 0x14072E4EC (MmLoadSystemImageEx.c)
 *     MiResolveImageReferences @ 0x1407EC794 (MiResolveImageReferences.c)
 *     MiCreateSectionForDriver @ 0x1407F5C64 (MiCreateSectionForDriver.c)
 * Callees:
 *     MiIsRetryIoStatus @ 0x140212D58 (MiIsRetryIoStatus.c)
 *     RtlInitAnsiString @ 0x140299410 (RtlInitAnsiString.c)
 *     IoWriteErrorLogEntry @ 0x1403C13F0 (IoWriteErrorLogEntry.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     IoAllocateGenericErrorLogEntry @ 0x140554348 (IoAllocateGenericErrorLogEntry.c)
 *     RtlAnsiStringToUnicodeString @ 0x1407A39E0 (RtlAnsiStringToUnicodeString.c)
 *     RtlFreeUnicodeString @ 0x1407F0430 (RtlFreeUnicodeString.c)
 */

void __fastcall MiLogFailedDriverLoad(unsigned __int16 *a1, unsigned __int16 *a2, const char *a3, NTSTATUS a4)
{
  int v4; // r15d
  __int64 v5; // rdi
  NTSTATUS v6; // ebx
  NTSTATUS v7; // r12d
  __int128 v8; // xmm0
  __int64 v9; // rsi
  __int64 v10; // rcx
  int v11; // ecx
  __int128 v12; // xmm0
  int v13; // eax
  bool v14; // sf
  int v15; // edi
  unsigned int v16; // r15d
  __int64 GenericErrorLogEntry; // rax
  _WORD *v18; // rdi
  char *v19; // r15
  const void **v20; // r12
  size_t v21; // rbx
  char *v22; // rax
  UNICODE_STRING UnicodeString; // [rsp+20h] [rbp-59h] BYREF
  STRING DestinationString; // [rsp+38h] [rbp-41h] BYREF
  __int128 v25; // [rsp+50h] [rbp-29h] BYREF
  __int16 v26; // [rsp+60h] [rbp-19h]
  const wchar_t *v27; // [rsp+68h] [rbp-11h]
  __int128 v28; // [rsp+70h] [rbp-9h]
  UNICODE_STRING v29; // [rsp+80h] [rbp+7h]

  v4 = *a1 + 2;
  DestinationString = 0LL;
  v5 = -1LL;
  v6 = a4;
  v7 = 0;
  v8 = *(_OWORD *)a1;
  UnicodeString = 0LL;
  v25 = v8;
  if ( !a2 || a4 != -1073741702 && a4 != -1073741772 && (unsigned int)(a4 + 1073741214) > 1 )
  {
    v9 = 1LL;
LABEL_11:
    v7 = v6;
    v27 = L"failed to load";
    do
      ++v5;
    while ( aFailedToLoad[v5] );
    v15 = 2 * v5;
    v26 = v15;
    v4 += v15 + 2;
    v6 = MiIsRetryIoStatus(v6, 0x1000uLL) ? -1073741670 : -1073741204;
    ++v9;
    goto LABEL_15;
  }
  v10 = -1LL;
  v27 = L"cannot find";
  do
    ++v10;
  while ( aCannotFind[v10] );
  v11 = 2 * v10;
  v12 = *(_OWORD *)a2;
  v13 = v11 + *a2;
  v26 = v11;
  v9 = 3LL;
  v4 += v13 + 4;
  v28 = v12;
  if ( a3 )
  {
    if ( ((unsigned __int64)a3 & 0xFFFFFFFFFFFF0000uLL) == 0 )
    {
      v7 = (int)a3;
      goto LABEL_15;
    }
    RtlInitAnsiString(&DestinationString, a3);
    v14 = RtlAnsiStringToUnicodeString(&UnicodeString, &DestinationString, 1u) < 0;
    v9 = 4LL;
    v4 += UnicodeString.Length + 2;
    v29 = UnicodeString;
    if ( v14 )
      goto LABEL_11;
  }
LABEL_15:
  v16 = v4 + 48;
  if ( v16 < 0xFF )
  {
    GenericErrorLogEntry = IoAllocateGenericErrorLogEntry(v16);
    v18 = (_WORD *)GenericErrorLogEntry;
    if ( GenericErrorLogEntry )
    {
      *(_DWORD *)(GenericErrorLogEntry + 16) = v7;
      v19 = (char *)(GenericErrorLogEntry + 48);
      *(_DWORD *)(GenericErrorLogEntry + 12) = 1073741850;
      v20 = (const void **)&v25 + 1;
      *(_DWORD *)(GenericErrorLogEntry + 20) = v6;
      *(_WORD *)(GenericErrorLogEntry + 6) = 48;
      do
      {
        v21 = *((unsigned __int16 *)v20 - 4);
        memmove(v19, *v20, v21);
        v20 += 2;
        v22 = &v19[2 * (v21 >> 1)];
        *(_WORD *)v22 = 32;
        v19 = v22 + 2;
        --v9;
      }
      while ( v9 );
      *(_WORD *)v22 = 0;
      v18[2] = 1;
      IoWriteErrorLogEntry(v18);
    }
  }
  RtlFreeUnicodeString(&UnicodeString);
}
