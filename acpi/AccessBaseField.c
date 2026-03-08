/*
 * XREFs of AccessBaseField @ 0x1C00517B0
 * Callers:
 *     AccessFieldData @ 0x1C0051AD8 (AccessFieldData.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0001DE0 (_guard_dispatch_icall_nop.c)
 *     ReadSystemMem @ 0x1C0005CC0 (ReadSystemMem.c)
 *     WriteSystemIO @ 0x1C000624C (WriteSystemIO.c)
 *     AcpiDiagTraceAmlError @ 0x1C0007768 (AcpiDiagTraceAmlError.c)
 *     FindRSAccess @ 0x1C004B438 (FindRSAccess.c)
 *     LogError @ 0x1C004E224 (LogError.c)
 *     PrintDebugMessage @ 0x1C004EB7C (PrintDebugMessage.c)
 *     ReadSystemIO @ 0x1C0052EDC (ReadSystemIO.c)
 *     WriteSystemMem @ 0x1C0053424 (WriteSystemMem.c)
 *     PushFrame @ 0x1C0053C34 (PushFrame.c)
 */

__int64 __fastcall AccessBaseField(__int64 a1, __int64 a2, unsigned int *a3, unsigned int *a4, char a5)
{
  __int64 v5; // rbp
  __int64 v7; // rdx
  const void *v8; // rbx
  unsigned int v11; // r8d
  void *v12; // rbp
  unsigned int v13; // edi
  unsigned int v14; // ecx
  char v15; // r11
  __int64 v16; // r14
  __int64 v17; // rcx
  bool v18; // r10
  int v19; // ecx
  __int64 RSAccess; // rax
  __int64 v21; // r13
  char v22; // r14
  int v23; // eax
  __int64 v24; // rcx
  __int64 SystemIO; // rax
  bool v28; // [rsp+B0h] [rbp+18h]
  __int64 v29; // [rsp+B8h] [rbp+20h] BYREF

  v5 = *a3;
  v7 = *(_QWORD *)(a2 + 96);
  LODWORD(v8) = 0;
  v29 = v7;
  v11 = a3[3];
  v12 = (void *)(*(_QWORD *)v7 + v5);
  v13 = 1;
  v14 = (v11 & 0xF) - 1;
  if ( v14 <= 3 )
    v13 = 1 << v14;
  v15 = a5;
  v16 = (((1LL << a3[2]) & -(__int64)(a3[2] < 0x20)) - 1) << a3[1];
  v17 = *(_QWORD *)a4 & v16;
  v18 = (v11 & 0x60) == 0 && (~v16 & (((1LL << (8 * (unsigned __int8)v13)) & -(__int64)(8 * v13 < 0x20)) - 1)) != 0;
  *(_QWORD *)a4 = v17;
  v28 = v18;
  if ( !v15 && (a3[3] & 0x60) == 0x20 )
    *(_QWORD *)a4 = v17 | ~v16;
  v19 = *(unsigned __int8 *)(v7 + 12);
  if ( *(_BYTE *)(v7 + 12) )
  {
    if ( v19 != 1 )
    {
      RSAccess = FindRSAccess(v19);
      v21 = RSAccess;
      if ( RSAccess && *(_QWORD *)(RSAccess + 16) )
      {
        if ( a5 )
        {
          v22 = 0;
          if ( (gDebugger & 0x100) != 0 )
          {
            _m_prefetchw(&gDebugger);
            v22 = _InterlockedAnd(&gDebugger, 0xFFFFFFEF);
          }
          v23 = (*(__int64 (__fastcall **)(_QWORD, __int64, void *, _QWORD, unsigned int *, _QWORD, __int64 (__fastcall *)(__int64), __int64))(RSAccess + 16))(
                  0LL,
                  a2 + 120,
                  v12,
                  v13,
                  a4,
                  *(_QWORD *)(RSAccess + 24),
                  RestartCtxtCallback,
                  a1 + 328);
          v8 = (const void *)v23;
          if ( (v22 & 0x10) != 0 )
            _InterlockedOr(&gDebugger, 0x10u);
          if ( v23 == 259 )
          {
            LODWORD(v8) = 32772;
          }
          else if ( v23 )
          {
            LogError(-1072431080);
            AcpiDiagTraceAmlError(a1, -1072431080);
            PrintDebugMessage(2, (const void *)*(unsigned __int8 *)(v29 + 12), v8, 0LL, 0LL);
            LODWORD(v8) = -1072431080;
          }
        }
        else
        {
          v29 = 0LL;
          LODWORD(v8) = PushFrame(a1, 1094931031, 96, (unsigned int)WriteCookAccess, (__int64)&v29);
          if ( !(_DWORD)v8 )
          {
            v24 = v29;
            *(_QWORD *)(v29 + 32) = a2;
            *(_QWORD *)(v24 + 40) = v21;
            *(_QWORD *)(v24 + 48) = v12;
            *(_DWORD *)(v24 + 56) = v13;
            *(_QWORD *)(v24 + 64) = *(_QWORD *)a4;
            *(_QWORD *)(v24 + 72) = v16;
            *(_BYTE *)(v24 + 88) = v28;
          }
        }
      }
      else
      {
        LODWORD(v8) = -1072431088;
        LogError(-1072431088);
        AcpiDiagTraceAmlError(a1, -1072431088);
        PrintDebugMessage(1, (const void *)*(unsigned __int8 *)(v29 + 12), 0LL, 0LL, 0LL);
      }
      return (unsigned int)v8;
    }
    if ( v15 )
    {
      SystemIO = (unsigned int)ReadSystemIO((unsigned int)v12, v13, (unsigned int)v16);
LABEL_29:
      *(_QWORD *)a4 = SystemIO;
      return (unsigned int)v8;
    }
    if ( v18 )
      *(_QWORD *)a4 |= (unsigned int)ReadSystemIO((unsigned int)v12, v13, (unsigned int)~(_DWORD)v16);
    WriteSystemIO((unsigned int)v12, v13, *a4);
  }
  else
  {
    if ( v15 )
    {
      SystemIO = ReadSystemMem((unsigned __int64)v12, v13, v16);
      goto LABEL_29;
    }
    if ( v18 )
      *(_QWORD *)a4 |= ReadSystemMem((unsigned __int64)v12, v13, ~v16);
    WriteSystemMem(v12, v13);
  }
  return (unsigned int)v8;
}
