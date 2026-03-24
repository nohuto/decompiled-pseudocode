/*
 * XREFs of PsQueryProcessCommandLine @ 0x1402BEE10
 * Callers:
 *     NtQueryInformationProcess @ 0x1406212A0 (NtQueryInformationProcess.c)
 *     SeAuditProcessCreation @ 0x1407BC598 (SeAuditProcessCreation.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140207000 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14025C2E0 (KiStackAttachProcess.c)
 *     ExReleaseRundownProtection_0 @ 0x14027C4F0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14027C9B0 (ExAcquireRundownProtection_0.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     MmCopyVirtualMemory @ 0x1405F6DB0 (MmCopyVirtualMemory.c)
 *     ExRaiseDatatypeMisalignment @ 0x14077BDF0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall PsQueryProcessCommandLine(
        ULONG_PTR BugCheckParameter1,
        __int64 a2,
        unsigned int a3,
        char a4,
        unsigned int *a5)
{
  _DWORD *v7; // r9
  __int64 v8; // rax
  __int64 *v9; // rcx
  __int64 v10; // rax
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // r12
  unsigned __int64 v13; // r14
  unsigned __int64 v14; // rbx
  int v15; // esi
  unsigned __int64 v16; // rcx
  unsigned int v17; // eax
  BOOLEAN v19; // [rsp+40h] [rbp-D8h]
  int v20[4]; // [rsp+48h] [rbp-D0h]
  __int64 v21; // [rsp+80h] [rbp-98h] BYREF
  PEX_RUNDOWN_REF RunRef; // [rsp+88h] [rbp-90h]
  __int64 v23; // [rsp+90h] [rbp-88h]
  __int64 v24; // [rsp+98h] [rbp-80h]
  _BYTE v25[48]; // [rsp+A0h] [rbp-78h] BYREF

  memset(v25, 0, sizeof(v25));
  v21 = 0LL;
  RunRef = (PEX_RUNDOWN_REF)(BugCheckParameter1 + 1112);
  v19 = ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(BugCheckParameter1 + 1112));
  if ( v19 )
  {
    *(_OWORD *)v20 = 0LL;
    KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0LL, (__int64)v25, v7);
    v8 = 0LL;
    v9 = *(__int64 **)(BugCheckParameter1 + 1408);
    if ( v9 )
      v8 = *v9;
    if ( v8 )
    {
      v23 = *(unsigned int *)(v8 + 16);
      v14 = *(_QWORD *)(v23 + 64);
      v20[0] = v14;
      v13 = v14 >> 16;
      v12 = HIDWORD(v14);
      *(_QWORD *)&v20[2] = HIDWORD(v14);
      v15 = 0;
    }
    else
    {
      v10 = *(_QWORD *)(BugCheckParameter1 + 1360);
      v24 = v10;
      if ( v10 )
      {
        v11 = *(_QWORD *)(v10 + 32) + 112LL;
        if ( v11 >= 0x7FFFFFFF0000LL )
          v11 = 0x7FFFFFFF0000LL;
        v20[0] = *(_DWORD *)v11;
        v12 = *(_QWORD *)(v11 + 8);
        v20[2] = v12;
        LOWORD(v13) = HIWORD(*(_DWORD *)v11);
        LOWORD(v14) = *(_DWORD *)v11;
        v15 = 0;
      }
      else
      {
        v15 = -1073741275;
        v12 = 0LL;
        LOWORD(v13) = 0;
        LOWORD(v14) = 0;
      }
    }
    if ( HIWORD(v20[0]) )
    {
      if ( (v20[2] & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      v16 = v12 + (unsigned __int16)v13;
      if ( v16 > 0x7FFFFFFF0000LL || v16 < v12 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    KiUnstackDetachProcess((__int64)v25, 0);
    if ( v15 >= 0 )
    {
      if ( !(_WORD)v14
        || (unsigned __int16)v14 > (unsigned __int16)v13
        || (v20[0] & 1) != 0
        || (v20[0] & 0x10000) != 0
        || !v12 )
      {
        v15 = -1073741275;
      }
      else
      {
        v17 = (unsigned __int16)v13 + 16;
        if ( a5 )
          *a5 = v17;
        if ( a3 < v17 )
        {
          v15 = -1073741820;
        }
        else
        {
          *(_WORD *)a2 = v14;
          *(_WORD *)(a2 + 2) = v13;
          if ( (_WORD)v13 )
            *(_QWORD *)(a2 + 8) = a2 + 16;
          else
            *(_QWORD *)(a2 + 8) = 0LL;
          v15 = MmCopyVirtualMemory(
                  BugCheckParameter1,
                  v20[2],
                  (int)KeGetCurrentThread()->ApcState.Process,
                  (int)a2 + 16,
                  HIWORD(v20[0]),
                  a4,
                  (__int64)&v21);
          if ( v15 >= 0 )
            v15 = 0;
        }
      }
    }
  }
  else
  {
    v15 = -1073741558;
  }
  if ( v19 )
    ExReleaseRundownProtection_0(RunRef);
  return (unsigned int)v15;
}
