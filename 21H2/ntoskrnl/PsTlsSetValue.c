/*
 * XREFs of PsTlsSetValue @ 0x1406941F0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpFlsCallbackEntryGetContext @ 0x14021BB0C (RtlpFlsCallbackEntryGetContext.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     RtlpFlsSetValue @ 0x1406942E8 (RtlpFlsSetValue.c)
 */

__int64 __fastcall PsTlsSetValue(__int64 a1, int a2)
{
  unsigned __int64 *EndPadding; // rdi
  int v4; // edx
  int v5; // esi
  struct _KTHREAD *CurrentThread; // rax
  int Context; // ebx
  struct _KTHREAD *v8; // rax
  bool v9; // zf
  unsigned int v11; // eax
  unsigned __int64 v12; // [rsp+60h] [rbp+18h] BYREF
  __int64 v13; // [rsp+68h] [rbp+20h] BYREF

  v12 = 0LL;
  EndPadding = KeGetCurrentThread()[1].EndPadding;
  v13 = 0LL;
  v4 = a1;
  if ( (*(_DWORD *)EndPadding & 2) != 0 )
    return (unsigned int)-1073741749;
  if ( (*(_DWORD *)EndPadding & 1) == 0 )
  {
    v5 = 0;
    goto LABEL_4;
  }
  Context = RtlpFlsCallbackEntryGetContext(a1, a1, &v13);
  if ( Context < 0 )
    return (unsigned int)Context;
  if ( (_DWORD)v13 != 0x40000000 )
    return (unsigned int)-1073741749;
  v5 = 1;
  v12 = *EndPadding;
  EndPadding = &v12;
  LODWORD(v12) = v12 & 0xFFFFFFFE;
LABEL_4:
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  Context = RtlpFlsSetValue(a1, (_DWORD)EndPadding, v4, a2, v5);
  v8 = KeGetCurrentThread();
  v9 = v8->SpecialApcDisable++ == -1;
  if ( v9 && ($CEA84C04E3712D858E5667A507841A2A *)v8->ApcState.ApcListHead[0].Flink != &v8->152 )
    KiCheckForKernelApcDelivery();
  if ( Context == -1073741801 )
  {
    v11 = -1073741801;
    if ( v5 )
      return (unsigned int)-1073741749;
    return v11;
  }
  return (unsigned int)Context;
}
