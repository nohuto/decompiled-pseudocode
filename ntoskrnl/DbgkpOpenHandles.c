/*
 * XREFs of DbgkpOpenHandles @ 0x1409345C0
 * Callers:
 *     NtWaitForDebugEvent @ 0x140935E70 (NtWaitForDebugEvent.c)
 * Callees:
 *     ObDuplicateObject @ 0x1406ED5C0 (ObDuplicateObject.c)
 *     ObOpenObjectByPointer @ 0x1407C93D0 (ObOpenObjectByPointer.c)
 *     ObCloseHandle @ 0x1407F0D20 (ObCloseHandle.c)
 */

void __fastcall DbgkpOpenHandles(__int64 a1, void *a2, void *a3)
{
  void *v5; // rsi
  _KPROCESS *v6; // r8
  _QWORD *v7; // rsi
  _KPROCESS *Process; // r8
  _QWORD *v9; // rdi

  switch ( *(_DWORD *)a1 )
  {
    case 2:
      v9 = (_QWORD *)(a1 + 24);
      if ( ObOpenObjectByPointer(a3, 0, 0LL, 0x12007Bu, (POBJECT_TYPE)PsThreadType, 0, (PHANDLE)(a1 + 24)) < 0 )
        *v9 = 0LL;
      break;
    case 3:
      v7 = (_QWORD *)(a1 + 32);
      if ( ObOpenObjectByPointer(a3, 0, 0LL, 0x12007Bu, (POBJECT_TYPE)PsThreadType, 0, (PHANDLE)(a1 + 32)) < 0 )
        *v7 = 0LL;
      if ( ObOpenObjectByPointer(a2, 0, 0LL, 0x12067Bu, (POBJECT_TYPE)PsProcessType, 0, (PHANDLE)(a1 + 24)) < 0 )
        *(_QWORD *)(a1 + 24) = 0LL;
      v5 = *(void **)(a1 + 48);
      if ( v5 )
      {
        Process = KeGetCurrentThread()->ApcState.Process;
        if ( (int)ObDuplicateObject(
                    (ULONG_PTR)Process,
                    v5,
                    (ULONG_PTR)Process,
                    (unsigned __int64 *)(a1 + 48),
                    0,
                    0,
                    2,
                    0) < 0 )
          *(_QWORD *)(a1 + 48) = 0LL;
        goto LABEL_14;
      }
      break;
    case 9:
      v5 = *(void **)(a1 + 24);
      if ( v5 )
      {
        v6 = KeGetCurrentThread()->ApcState.Process;
        if ( (int)ObDuplicateObject((ULONG_PTR)v6, v5, (ULONG_PTR)v6, (unsigned __int64 *)(a1 + 24), 0, 0, 2, 0) < 0 )
          *(_QWORD *)(a1 + 24) = 0LL;
LABEL_14:
        ObCloseHandle(v5, 0);
      }
      break;
  }
}
