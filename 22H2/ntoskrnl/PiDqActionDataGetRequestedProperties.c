/*
 * XREFs of PiDqActionDataGetRequestedProperties @ 0x1406B38DC
 * Callers:
 *     PiDqActionDataCreate @ 0x1406A878C (PiDqActionDataCreate.c)
 * Callees:
 *     ZwClose @ 0x1403F9C00 (ZwClose.c)
 *     PiDqOpenObjectRegKey @ 0x14068C7E8 (PiDqOpenObjectRegKey.c)
 *     PiPnpRtlEndOperation @ 0x1406ACCB8 (PiPnpRtlEndOperation.c)
 *     PiPnpRtlBeginOperation @ 0x1406AD460 (PiPnpRtlBeginOperation.c)
 *     PiDqPnPGetObjectProperty @ 0x1406B0D74 (PiDqPnPGetObjectProperty.c)
 *     PiDqPnPGetObjectPropertyInBestLocale @ 0x1406B1B74 (PiDqPnPGetObjectPropertyInBestLocale.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PiDqActionDataGetRequestedProperties(
        __int64 a1,
        int a2,
        __int64 a3,
        char a4,
        const wchar_t *a5,
        __int64 a6,
        unsigned int a7,
        _QWORD *a8,
        _DWORD *a9)
{
  int v9; // ebx
  unsigned int v10; // r15d
  PVOID PoolWithTag; // rax
  unsigned int v12; // ebp
  __int64 v13; // rax
  __int64 v14; // rsi
  HANDLE v15; // r8
  __int64 v16; // rdi
  __int64 v17; // r9
  int v18; // eax
  __int128 v20; // xmm1
  HANDLE Handle; // [rsp+50h] [rbp-48h] BYREF
  PVOID P[8]; // [rsp+58h] [rbp-40h] BYREF

  v9 = 0;
  Handle = 0LL;
  v10 = a2;
  P[0] = 0LL;
  *a9 = 0;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 48LL * a7, 0x58706E50u);
  *a8 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v9 = -1073741670;
    goto LABEL_12;
  }
  PiPnpRtlBeginOperation(P);
  v12 = 0;
  if ( !a7 )
    goto LABEL_12;
  v13 = (unsigned int)*a9;
  v14 = a6 + 20;
  while ( 1 )
  {
    v15 = 0LL;
    v16 = *a8 + 48 * v13;
    if ( !*(_DWORD *)v14 )
      goto LABEL_5;
    if ( *(_DWORD *)v14 != 1 )
      break;
    v10 = 0;
    if ( !Handle )
    {
      v9 = PiDqOpenObjectRegKey(1, a3, a2, 1, 0, a1, &Handle);
      if ( v9 == -1073741772 )
      {
        v9 = 0;
        Handle = (HANDLE)-1LL;
      }
    }
    if ( Handle == (HANDLE)-1LL )
    {
      *(_OWORD *)v16 = *(_OWORD *)(v14 - 20);
      v20 = *(_OWORD *)(v14 - 4);
      *(_DWORD *)(v16 + 32) = 0;
      *(_QWORD *)(v16 + 40) = 0LL;
      *(_DWORD *)(v16 + 36) = 0;
      *(_OWORD *)(v16 + 16) = v20;
      goto LABEL_9;
    }
    v15 = Handle;
LABEL_5:
    if ( v9 < 0 )
      goto LABEL_12;
    v17 = a6 + 32LL * v12;
    v18 = a4
        ? PiDqPnPGetObjectPropertyInBestLocale(a3, v10, (__int64)v15, v17, *(_DWORD *)v14, a5, (_OWORD *)v16)
        : PiDqPnPGetObjectProperty(
            a3,
            v10,
            (__int64)v15,
            v17,
            *(_DWORD *)v14,
            *(NTSTRSAFE_PCWSTR *)(v14 + 4),
            (_OWORD *)v16);
    v9 = v18;
    if ( v18 < 0 )
      goto LABEL_12;
LABEL_9:
    ++*a9;
    ++v12;
    v13 = (unsigned int)*a9;
    v14 += 32LL;
    if ( v12 >= a7 )
      goto LABEL_12;
    v10 = a2;
  }
  v9 = -1073741811;
LABEL_12:
  if ( (char *)Handle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
    ZwClose(Handle);
  if ( P[0] )
    PiPnpRtlEndOperation((PVOID **)P[0]);
  return (unsigned int)v9;
}
