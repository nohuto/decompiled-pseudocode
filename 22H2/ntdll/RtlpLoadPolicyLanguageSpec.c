/*
 * XREFs of RtlpLoadPolicyLanguageSpec @ 0x180103BF8
 * Callers:
 *     RtlpLoadLanguageConfigList @ 0x18003F48C (RtlpLoadLanguageConfigList.c)
 *     RtlpLoadUserUIByPolicy @ 0x18006FEE0 (RtlpLoadUserUIByPolicy.c)
 *     RtlpLoadMachineUIByPolicy @ 0x180082580 (RtlpLoadMachineUIByPolicy.c)
 * Callees:
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 *     RtlpMuiRegGetOrAddString @ 0x18003AB74 (RtlpMuiRegGetOrAddString.c)
 *     RtlpMuiRegGetInstalledLanguageIndex @ 0x18003AFAC (RtlpMuiRegGetInstalledLanguageIndex.c)
 *     RtlCultureNameToLCID @ 0x18003B850 (RtlCultureNameToLCID.c)
 *     RtlInitUnicodeString @ 0x18003BA40 (RtlInitUnicodeString.c)
 *     LdrpQueryValueKey @ 0x18003F680 (LdrpQueryValueKey.c)
 */

__int64 __fastcall RtlpLoadPolicyLanguageSpec(__int64 a1, __int64 a2, _BYTE *a3, __int16 *a4)
{
  void *Heap; // rdi
  int v9; // esi
  int v10; // eax
  int InstalledLanguageIndex; // ebx
  unsigned __int16 v12; // cx
  __int16 v14[2]; // [rsp+30h] [rbp-20h] BYREF
  unsigned int v15; // [rsp+34h] [rbp-1Ch] BYREF
  int v16; // [rsp+38h] [rbp-18h] BYREF
  int v17; // [rsp+3Ch] [rbp-14h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-10h] BYREF
  unsigned __int16 v19; // [rsp+88h] [rbp+38h] BYREF

  v19 = 0;
  v14[0] = -1;
  Heap = 0LL;
  if ( a2 && a1 )
  {
    v9 = 1;
    v15 = 0;
    v16 = 1;
    RtlInitUnicodeString(&DestinationString, L"PreferredUILanguages");
    v10 = LdrpQueryValueKey(a1, (__int64)&DestinationString, &v16, 0LL, &v15);
    if ( !v15 || v10 == -1073741772 )
      return (unsigned int)-1073741823;
    Heap = (void *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, v15);
    if ( !Heap )
      return (unsigned int)-1073741801;
    InstalledLanguageIndex = LdrpQueryValueKey(a1, (__int64)&DestinationString, &v16, Heap, &v15);
    if ( InstalledLanguageIndex >= 0 )
    {
      if ( v16 == 1
        && (RtlInitUnicodeString(&DestinationString, (PCWSTR)Heap), RtlCultureNameToLCID(
                                                                      &DestinationString.Length,
                                                                      &v17)) )
      {
        v12 = v17;
        if ( ((v17 - 4096) & 0xFFFFFBFF) != 0 )
          goto LABEL_14;
        InstalledLanguageIndex = RtlpMuiRegGetOrAddString(a2, DestinationString.Buffer, 0LL, (__int16 *)&v19);
        if ( InstalledLanguageIndex >= 0 )
        {
          v12 = v19;
          v9 = 3;
LABEL_14:
          InstalledLanguageIndex = RtlpMuiRegGetInstalledLanguageIndex(a2, v9, v12, v14);
          if ( InstalledLanguageIndex >= 0 )
          {
            if ( a3 )
              *a3 = 2;
            if ( a4 )
              *a4 = v14[0];
          }
        }
      }
      else
      {
        InstalledLanguageIndex = -1073741823;
      }
    }
  }
  else
  {
    InstalledLanguageIndex = -1073741811;
  }
  if ( Heap )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)Heap);
  return (unsigned int)InstalledLanguageIndex;
}
