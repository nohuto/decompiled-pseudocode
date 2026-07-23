/*
 * XREFs of RtlQueryAtomInAtomTable @ 0x1406853F0
 * Callers:
 *     NtQueryInformationAtom @ 0x1405FE8D0 (NtQueryInformationAtom.c)
 * Callees:
 *     RtlpLookupLowBox @ 0x14027BFC8 (RtlpLookupLowBox.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140356100 (KeLeaveCriticalRegion.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     _snwprintf_s @ 0x1403D7370 (_snwprintf_s.c)
 *     Feature_2482235707__private_IsEnabledDeviceUsage @ 0x1403F863C (Feature_2482235707__private_IsEnabledDeviceUsage.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     RtlpLockAtomTable @ 0x140685688 (RtlpLockAtomTable.c)
 *     RtlpAtomMapAtomToHandleEntry @ 0x1406856D0 (RtlpAtomMapAtomToHandleEntry.c)
 */

NTSTATUS __cdecl RtlQueryAtomInAtomTable(
        PVOID AtomTableHandle,
        RTL_ATOM Atom,
        PULONG AtomUsage,
        PULONG AtomFlags,
        PWSTR AtomName,
        PULONG AtomNameLength)
{
  int v8; // ebx
  ULONG v11; // r14d
  ULONG v12; // r15d
  __int64 v13; // rax
  __int64 v14; // r15
  unsigned int v15; // edi
  ULONG v16; // eax
  NTSTATUS v17; // [rsp+34h] [rbp-94h]
  wchar_t DstBuf[16]; // [rsp+68h] [rbp-60h] BYREF

  v8 = Atom;
  if ( !(unsigned __int8)RtlpLockAtomTable() )
    return -1073741811;
  v11 = *AtomNameLength & 0xFFFFFFFE;
  if ( (unsigned __int16)v8 >= 0xC000u )
  {
    v17 = -1073741816;
    v13 = RtlpAtomMapAtomToHandleEntry(AtomTableHandle, v8 & 0x3FFF);
    v14 = v13;
    if ( !v13 || *(_WORD *)(v13 + 10) != (_WORD)v8 || !RtlpLookupLowBox((__int64)AtomTableHandle, v13, 0) )
      goto LABEL_36;
    v17 = 0;
    if ( AtomUsage )
      *AtomUsage = *(unsigned __int16 *)(v14 + 36);
    if ( AtomFlags )
      *AtomFlags = *(unsigned __int16 *)(v14 + 38);
    if ( !AtomName )
      goto LABEL_36;
    v15 = 2 * *(unsigned __int8 *)(v14 + 40);
    if ( (unsigned int)Feature_2482235707__private_IsEnabledDeviceUsage() )
    {
      if ( v15 < v11 )
        goto LABEL_33;
      if ( v11 >= 2 )
      {
        v15 = v11 - 2;
        goto LABEL_33;
      }
LABEL_29:
      *AtomNameLength = v15;
      goto LABEL_35;
    }
    v16 = *AtomNameLength;
    if ( v15 >= *AtomNameLength )
    {
      if ( v16 < 2 )
        goto LABEL_29;
      v15 = v16 - 2;
    }
LABEL_33:
    if ( v15 )
    {
      memmove(AtomName, (const void *)(v14 + 42), v15);
      AtomName[(unsigned __int64)v15 >> 1] = 0;
      *AtomNameLength = v15;
      goto LABEL_36;
    }
LABEL_35:
    v17 = -1073741789;
    goto LABEL_36;
  }
  if ( (_WORD)v8 )
  {
    v17 = 0;
    if ( AtomUsage )
      *AtomUsage = 1;
    if ( AtomFlags )
      *AtomFlags = 1;
    if ( !AtomName )
      goto LABEL_36;
    v12 = 2 * snwprintf_s(DstBuf, 0x10uLL, 0xFFFFFFFFFFFFFFFFuLL, L"#%u", v8);
    if ( v12 >= v11 )
    {
      if ( v11 < 2 )
        goto LABEL_16;
      v12 = v11 - 2;
    }
    if ( v12 )
    {
      memmove(AtomName, DstBuf, v12);
      AtomName[(unsigned __int64)v12 >> 1] = 0;
      *AtomNameLength = v12;
      goto LABEL_36;
    }
LABEL_16:
    v17 = -1073741789;
    goto LABEL_36;
  }
  v17 = -1073741811;
LABEL_36:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)AtomTableHandle + 1, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((char *)AtomTableHandle + 8);
  KeAbPostRelease((ULONG_PTR)AtomTableHandle + 8);
  KeLeaveCriticalRegion();
  return v17;
}
