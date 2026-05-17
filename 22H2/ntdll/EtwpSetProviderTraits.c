/*
 * XREFs of EtwpSetProviderTraits @ 0x180042B48
 * Callers:
 *     EtwEventSetInformation @ 0x180042AF0 (EtwEventSetInformation.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 *     EtwpUpdateEnableInfoAndCallback @ 0x180043554 (EtwpUpdateEnableInfoAndCallback.c)
 *     RtlSetLastWin32Error @ 0x1800518D0 (RtlSetLastWin32Error.c)
 *     RtlNtStatusToDosError @ 0x180051950 (RtlNtStatusToDosError.c)
 *     __security_check_cookie @ 0x18008C910 (__security_check_cookie.c)
 *     NtTraceControl @ 0x1800A0D70 (NtTraceControl.c)
 *     memset @ 0x1800A4600 (memset.c)
 */

__int64 __fastcall EtwpSetProviderTraits(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  __int16 v4; // r14
  __int64 v6; // rbx
  int v7; // r15d
  __int64 v8; // rax
  _BYTE *v9; // rsi
  int v10; // r14d
  NTSTATUS v11; // eax
  NTSTATUS v12; // edi
  ULONG v13; // edi
  __int64 Heap; // rax
  unsigned int v16; // [rsp+30h] [rbp-79h] BYREF
  _QWORD v17[2]; // [rsp+38h] [rbp-71h] BYREF
  __int16 v18; // [rsp+48h] [rbp-61h]
  _BYTE v19[120]; // [rsp+50h] [rbp-59h] BYREF

  v4 = a3;
  if ( !HIWORD(a1)
    || (v6 = a1 & 0xFFFFFFFFFFFFLL, (a1 & 1) != 0)
    || HIWORD(a1) != *(_WORD *)((a1 & 0xFFFFFFFFFFFFLL) + 0x60) )
  {
    v13 = 6;
LABEL_15:
    RtlSetLastWin32Error(v13);
    return v13;
  }
  RtlAcquireSRWLockExclusive(v6 + 64, a2, a3, a4);
  v7 = 120;
  *(_DWORD *)(v6 + 80) = NtCurrentTeb()->ClientId.UniqueThread;
  memset(v19, 0, sizeof(v19));
  v8 = *(_QWORD *)(v6 + 88);
  v9 = v19;
  v18 = v4;
  v10 = 0;
  v17[0] = v8;
  v17[1] = a2;
  while ( 1 )
  {
    v11 = NtTraceControl(30LL, v17, 24LL, v9, v7, &v16);
    v12 = v11;
    if ( v11 != -1073741789 )
      break;
    if ( v9 != v19 )
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)v9);
    Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, v16);
    v7 = v16;
    v9 = (_BYTE *)Heap;
    if ( !Heap )
    {
      v12 = -1073741801;
      goto LABEL_22;
    }
    if ( (unsigned int)++v10 >= 0x10 )
      goto LABEL_22;
  }
  if ( !v11 )
  {
    v13 = 0;
    goto LABEL_8;
  }
LABEL_22:
  v13 = RtlNtStatusToDosError(v12);
  if ( v13 )
    goto LABEL_10;
LABEL_8:
  *(_WORD *)(v6 + 98) |= 0x4000u;
  if ( v16 )
    EtwpUpdateEnableInfoAndCallback(v6, v9);
LABEL_10:
  *(_DWORD *)(v6 + 80) = 0;
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)(v6 + 64));
  if ( v9 && v9 != v19 )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)v9);
  if ( v13 )
    goto LABEL_15;
  return v13;
}
