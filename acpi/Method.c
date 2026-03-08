/*
 * XREFs of Method @ 0x1C0050AE0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C0001E80 (memmove.c)
 *     memset @ 0x1C0002180 (memset.c)
 *     AcpiDiagTraceAmlError @ 0x1C0007768 (AcpiDiagTraceAmlError.c)
 *     AddObjSymbol @ 0x1C004D680 (AddObjSymbol.c)
 *     LogError @ 0x1C004E224 (LogError.c)
 *     PrintDebugMessage @ 0x1C004EB7C (PrintDebugMessage.c)
 *     HeapAlloc @ 0x1C004EC38 (HeapAlloc.c)
 *     CreateNameSpaceObject @ 0x1C004F10C (CreateNameSpaceObject.c)
 */

__int64 __fastcall Method(__int64 a1, _QWORD *a2)
{
  __int64 *v2; // r15
  unsigned int NameSpaceObject; // eax
  unsigned int v6; // esi
  __int64 v7; // rax
  __int64 v8; // rdi

  v2 = a2 + 8;
  NameSpaceObject = CreateNameSpaceObject(
                      *(_QWORD *)(a1 + 320),
                      *(unsigned __int8 **)(a2[10] + 32LL),
                      *(_QWORD *)(a1 + 80),
                      *(struct _EX_RUNDOWN_REF **)(a1 + 88),
                      a2 + 8,
                      0);
  v6 = NameSpaceObject;
  if ( NameSpaceObject )
  {
    if ( NameSpaceObject == -1073741771 && g_SimulatorCallbackObject )
    {
      v6 = 0;
      *(_QWORD *)(a1 + 120) = a2[5];
    }
  }
  else
  {
    *(_WORD *)(*v2 + 66) = 8;
    *(_DWORD *)(*v2 + 88) = *((_DWORD *)a2 + 10) - *(_DWORD *)(a1 + 120) + 194;
    v7 = HeapAlloc(*(_QWORD *)(a1 + 320), 1413827912, *(_DWORD *)(*v2 + 88));
    *(_QWORD *)(*v2 + 96) = v7;
    if ( v7 )
    {
      v8 = *(_QWORD *)(*v2 + 96);
      AddObjSymbol(v8 + 194, *v2);
      memset(*(void **)(*v2 + 96), 0, *(unsigned int *)(*v2 + 88));
      *(_BYTE *)(v8 + 193) = *(_BYTE *)(*(_QWORD *)(a1 + 120) - 1LL);
      memmove((void *)(v8 + 194), *(const void **)(a1 + 120), a2[5] - *(_QWORD *)(a1 + 120));
      *(_QWORD *)(a1 + 120) = a2[5];
      KeInitializeSpinLock((PKSPIN_LOCK)(v8 + 184));
      *(_QWORD *)(v8 + 24) = v8 + 16;
      *(_QWORD *)(v8 + 16) = v8 + 16;
    }
    else
    {
      v6 = -1073741670;
      LogError(-1073741670);
      AcpiDiagTraceAmlError(a1, -1073741670);
      PrintDebugMessage(104, 0LL, 0LL, 0LL, 0LL);
    }
  }
  return v6;
}
