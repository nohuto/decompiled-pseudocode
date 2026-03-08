/*
 * XREFs of AcquireASLMutex @ 0x1C0054268
 * Callers:
 *     ParseAcquire @ 0x1C005A0F0 (ParseAcquire.c)
 * Callees:
 *     AcpiDiagTraceAmlError @ 0x1C0007768 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C004E224 (LogError.c)
 *     PrintDebugMessage @ 0x1C004EB7C (PrintDebugMessage.c)
 *     HeapAlloc @ 0x1C004EC38 (HeapAlloc.c)
 *     QueueContext @ 0x1C0054D1C (QueueContext.c)
 */

__int64 __fastcall AcquireASLMutex(__int64 a1, KSPIN_LOCK *a2, unsigned __int16 a3)
{
  int v3; // eax
  unsigned int v4; // esi
  KSPIN_LOCK *v8; // rbp
  KIRQL v9; // r15
  int v10; // edi
  int v11; // ecx
  int v12; // ecx
  __int64 v13; // rax
  _QWORD *v14; // rdx
  _QWORD *v15; // rcx
  __int64 v16; // r8
  int v17; // eax

  v3 = *(_DWORD *)(a1 + 64);
  v4 = 0;
  if ( (v3 & 4) == 0 )
  {
    v8 = a2 + 23;
    v9 = KeAcquireSpinLockRaiseToDpc(a2 + 23);
    if ( *(_DWORD *)a2 >= *(_DWORD *)(a1 + 112) )
    {
      v12 = *((_DWORD *)a2 + 1);
      if ( v12 )
      {
        if ( *(_QWORD *)(a2[1] + 8) == a1 )
        {
          *((_DWORD *)a2 + 1) = v12 + 1;
        }
        else
        {
          QueueContext(a1, a3, a2 + 2);
          v4 = 32772;
        }
        goto LABEL_15;
      }
      v13 = HeapAlloc(*(_QWORD *)(a1 + 320), 1380865871, 0x28u);
      if ( v13 )
      {
        v14 = (_QWORD *)(a1 + 48);
        *(_QWORD *)(v13 + 8) = a1;
        *(_QWORD *)(v13 + 16) = a2;
        v15 = (_QWORD *)(v13 + 24);
        *(_DWORD *)v13 = 1;
        v16 = *(_QWORD *)(a1 + 48);
        if ( *(_QWORD *)(v16 + 8) != a1 + 48 )
          __fastfail(3u);
        *v15 = v16;
        *(_QWORD *)(v13 + 32) = v14;
        *(_QWORD *)(v16 + 8) = v15;
        *v14 = v15;
        a2[1] = v13;
        v17 = *(_DWORD *)a2;
        *((_DWORD *)a2 + 1) = 1;
        *(_DWORD *)(a1 + 112) = v17;
        goto LABEL_15;
      }
      v10 = -1073741670;
      LogError(-1073741670);
      AcpiDiagTraceAmlError(a1, -1073741670);
      v11 = 4;
    }
    else
    {
      v10 = -1072431083;
      LogError(-1072431083);
      AcpiDiagTraceAmlError(a1, -1072431083);
      v11 = 5;
    }
    PrintDebugMessage(v11, 0LL, 0LL, 0LL, 0LL);
    v4 = v10;
LABEL_15:
    KeReleaseSpinLock(v8, v9);
    return v4;
  }
  v4 = 32773;
  *(_DWORD *)(a1 + 64) = v3 & 0xFFFFFFFB;
  return v4;
}
