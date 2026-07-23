/*
 * XREFs of LdrpQueryValueKey @ 0x18003F680
 * Callers:
 *     RtlpMuiRegLoadPreferredUILanguages @ 0x18003E734 (RtlpMuiRegLoadPreferredUILanguages.c)
 *     RtlpLoadInstallLanguageFallback @ 0x18008C298 (RtlpLoadInstallLanguageFallback.c)
 *     RtlpGetUserOrMachineUILanguage4NLS @ 0x180103810 (RtlpGetUserOrMachineUILanguage4NLS.c)
 *     RtlpHasMachineUILock @ 0x180103B60 (RtlpHasMachineUILock.c)
 *     RtlpLoadPolicyLanguageSpec @ 0x180103BF8 (RtlpLoadPolicyLanguageSpec.c)
 *     RtlpMuiRegAddAlternateCodePage @ 0x180103DC0 (RtlpMuiRegAddAlternateCodePage.c)
 *     _IsMachineLanguageListInMutableLocation @ 0x1801060F0 (_IsMachineLanguageListInMutableLocation.c)
 *     _RtlpMuiRegInitLIPLanguage @ 0x1801067C4 (_RtlpMuiRegInitLIPLanguage.c)
 *     _RtlpMuiRegLoadInstalledFromKey @ 0x180106B58 (_RtlpMuiRegLoadInstalledFromKey.c)
 *     _RtlpMuiRegPopulateBaseLanguages @ 0x180106DD4 (_RtlpMuiRegPopulateBaseLanguages.c)
 * Callees:
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 *     NtQueryValueKey @ 0x18009D7C0 (NtQueryValueKey.c)
 *     memmove @ 0x1800A4340 (memmove.c)
 */

__int64 __fastcall LdrpQueryValueKey(HANDLE KeyHandle, PUNICODE_STRING ValueName, _DWORD *a3, void *a4, ULONG *a5)
{
  ULONG *v5; // rbx
  ULONG v10; // ebp
  ULONG Length; // ebp
  _DWORD *Heap; // rsi
  NTSTATUS v13; // eax
  int v14; // edi
  ULONG v15; // eax
  ULONG ResultLength; // [rsp+78h] [rbp+20h] BYREF

  v5 = a5;
  if ( !a4 )
  {
    if ( !a5 )
    {
      v10 = 0;
LABEL_4:
      ResultLength = 0;
      Length = v10 + 12;
      if ( Length )
        Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, Length);
      else
        Heap = 0LL;
      if ( !Heap )
        return (unsigned int)-1073741670;
      v13 = NtQueryValueKey(KeyHandle, ValueName, KeyValuePartialInformation, Heap, Length, &ResultLength);
      v14 = v13;
      if ( v13 != -1073741772 )
      {
        if ( v13 < 0 )
        {
LABEL_21:
          if ( v14 != -2147483643 )
          {
LABEL_19:
            RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
            return (unsigned int)v14;
          }
LABEL_15:
          if ( v5 )
            *v5 = Heap[2];
          if ( a3 )
            *a3 = Heap[1];
          goto LABEL_19;
        }
        if ( a4 && v5 )
        {
          v15 = Heap[2];
          if ( v15 > *v5 )
          {
            v14 = -2147483643;
            goto LABEL_15;
          }
          if ( v15 <= Length )
            memmove(a4, Heap + 3, v15);
        }
      }
      if ( v14 >= 0 )
        goto LABEL_15;
      goto LABEL_21;
    }
LABEL_3:
    v10 = *a5;
    goto LABEL_4;
  }
  if ( a5 )
    goto LABEL_3;
  return 3221225485LL;
}
