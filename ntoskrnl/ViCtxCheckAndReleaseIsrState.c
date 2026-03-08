/*
 * XREFs of ViCtxCheckAndReleaseIsrState @ 0x140AE1B58
 * Callers:
 *     ViCtxIsr @ 0x140AE1DA0 (ViCtxIsr.c)
 *     ViCtxIsrMessageBased @ 0x140AE1E00 (ViCtxIsrMessageBased.c)
 * Callees:
 *     RtlXSave @ 0x14036A800 (RtlXSave.c)
 *     VfUtilDbgPrint @ 0x1405CBEB4 (VfUtilDbgPrint.c)
 *     VerifierBugCheckIfAppropriate @ 0x140ACA284 (VerifierBugCheckIfAppropriate.c)
 *     VfErrorStoreTriageInformation @ 0x140AD0684 (VfErrorStoreTriageInformation.c)
 *     ViCtxEqualExtendedState @ 0x140AE1C78 (ViCtxEqualExtendedState.c)
 */

__int64 __fastcall ViCtxCheckAndReleaseIsrState(__int64 a1, const void *a2, __int64 a3)
{
  unsigned __int8 CurrentIrql; // al
  unsigned __int8 v6; // si
  __int64 result; // rax
  __int64 v8; // r8
  int v9; // eax
  ULONG_PTR v10; // r9
  ULONG_PTR v11; // rdx
  ULONG_PTR v12; // rax
  ULONG v13; // ecx

  CurrentIrql = KeGetCurrentIrql();
  v6 = *(_BYTE *)(a1 + 8);
  *(_BYTE *)(a1 + 9) = CurrentIrql;
  if ( v6 != CurrentIrql
    || (result = *(unsigned int *)(a1 + 4), (result & 2) != 0)
    && (RtlXSave(*(_DWORD **)(a1 + 64), ViCtxXStateEnabledMask, a3),
        v6 = *(_BYTE *)(a1 + 8),
        LOBYTE(v8) = v6 == 0,
        result = ViCtxEqualExtendedState(*(_QWORD *)(a1 + 32), *(_QWORD *)(a1 + 64), v8),
        !(_BYTE)result) )
  {
    v9 = *(unsigned __int8 *)(a1 + 9);
    if ( v6 == (_BYTE)v9 )
    {
      VfUtilDbgPrint(
        "Interrupt Service Routine %p has changed extended thread context.\n"
        "Context saved before executing ISR: 0x%p. Context saved after executing ISR: 0x%p.\n",
        a2,
        *(const void **)(a1 + 32),
        *(const void **)(a1 + 64));
      v10 = *(_QWORD *)(a1 + 32);
      v11 = 272LL;
      v12 = *(_QWORD *)(a1 + 64);
    }
    else
    {
      VfUtilDbgPrint(
        "Interrupt Service Routine %p has changed IRQL.\nIRQL before executing ISR: %d. IRQL after executing ISR: %d.\n",
        a2,
        v6,
        v9);
      v10 = *(unsigned __int8 *)(a1 + 8);
      v11 = 273LL;
      v12 = *(unsigned __int8 *)(a1 + 9);
    }
    result = VfErrorStoreTriageInformation(196LL, v11, (ULONG_PTR)a2, v10, v12);
    if ( (_DWORD)result )
    {
      VerifierBugCheckIfAppropriate(v13, qword_140D71998, qword_140D719A0, qword_140D719A8, qword_140D719B0);
      result = (unsigned int)_InterlockedExchange(&VfErrorBugcheckDataReady, 0);
    }
  }
  *(_DWORD *)(a1 + 4) &= ~2u;
  _InterlockedExchange((volatile __int32 *)a1, 0);
  return result;
}
