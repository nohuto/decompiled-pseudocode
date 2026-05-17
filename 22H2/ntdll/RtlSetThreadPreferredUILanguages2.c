/*
 * XREFs of RtlSetThreadPreferredUILanguages2 @ 0x18003EC00
 * Callers:
 *     <none>
 * Callees:
 *     RtlpMuiRegFreeLanguageList @ 0x1800207AC (RtlpMuiRegFreeLanguageList.c)
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 *     RtlGetThreadPreferredUILanguages @ 0x180035CA0 (RtlGetThreadPreferredUILanguages.c)
 *     RtlSetThreadPreferredUILanguages @ 0x18003EC50 (RtlSetThreadPreferredUILanguages.c)
 *     RtlpFreeTebLanguageList @ 0x18006FE8C (RtlpFreeTebLanguageList.c)
 *     RtlpMuiRegDupLanguageList @ 0x180079500 (RtlpMuiRegDupLanguageList.c)
 *     RtlpDupTebLanguageList @ 0x1800F0418 (RtlpDupTebLanguageList.c)
 */

__int64 __fastcall RtlSetThreadPreferredUILanguages2(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  unsigned int v7; // ebx
  __int64 Heap; // rdi
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  int v13; // ebx
  _BYTE v14[40]; // [rsp+20h] [rbp-28h] BYREF
  int v15; // [rsp+68h] [rbp+20h] BYREF

  v7 = a1;
  if ( !a4 )
    return RtlSetThreadPreferredUILanguages(a1, a2, a3);
  *a4 = 0LL;
  v15 = 0;
  RtlGetThreadPreferredUILanguages(a1 | 0x30, (__int64)v14, 0LL, &v15);
  Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 32LL);
  if ( !Heap )
    return 3221225495LL;
  if ( NtCurrentTeb()->PreferredLanguages )
  {
    v10 = RtlpMuiRegDupLanguageList(NtCurrentTeb()->PreferredLanguages);
    *(_QWORD *)Heap = v10;
    if ( !v10 )
      goto LABEL_19;
    *(_DWORD *)(v10 + 40) &= ~0x40u;
  }
  if ( NtCurrentTeb()->MergedPrefLanguages )
  {
    v11 = RtlpMuiRegDupLanguageList(NtCurrentTeb()->MergedPrefLanguages);
    *(_QWORD *)(Heap + 8) = v11;
    if ( !v11 )
      goto LABEL_19;
    *(_DWORD *)(v11 + 40) &= ~0x40u;
  }
  if ( !NtCurrentTeb()->UserPrefLanguages )
    goto LABEL_14;
  v12 = RtlpDupTebLanguageList(NtCurrentTeb()->UserPrefLanguages);
  *(_QWORD *)(Heap + 16) = v12;
  if ( v12 )
  {
    *(_DWORD *)(*(_QWORD *)v12 + 40LL) &= ~0x40u;
LABEL_14:
    *(_DWORD *)(Heap + 24) = NtCurrentTeb()->ClientId.UniqueThread;
    v13 = RtlSetThreadPreferredUILanguages(v7, a2, a3);
    if ( v13 >= 0 )
    {
      *a4 = Heap;
      Heap = 0LL;
    }
    goto LABEL_16;
  }
LABEL_19:
  v13 = -1073741801;
LABEL_16:
  if ( Heap )
  {
    RtlpMuiRegFreeLanguageList(*(_QWORD *)Heap);
    RtlpMuiRegFreeLanguageList(*(_QWORD *)(Heap + 8));
    RtlpFreeTebLanguageList(*(_QWORD *)(Heap + 16));
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, Heap);
  }
  return (unsigned int)v13;
}
