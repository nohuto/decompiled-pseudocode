__int64 __fastcall RawFieldAccess(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rdi
  unsigned int v8; // ebx
  const void *v9; // rdx
  int v10; // ecx
  _QWORD *v11; // r12
  __int64 RSAccess; // rax
  __int64 v13; // r15
  char v14; // al
  _DWORD *v15; // r13
  unsigned int v16; // ebx
  void *v17; // rax
  __int64 v18; // rbp
  const void *v19; // rdx
  int v20; // ecx
  __int64 v21; // rax
  char v24; // [rsp+90h] [rbp+18h]

  v7 = **(_QWORD **)(a3 + 32);
  if ( *(_WORD *)(v7 + 66) != 131 )
  {
    v8 = -1072431101;
    LogError(-1072431101);
    AcpiDiagTraceAmlError(a1, -1072431101);
    v9 = (const void *)*(unsigned __int16 *)(v7 + 66);
    v10 = 157;
LABEL_23:
    PrintDebugMessage(v10, v9, 0LL, 0LL, 0LL);
    return v8;
  }
  v11 = *(_QWORD **)(**(_QWORD **)(v7 + 96) + 96LL);
  RSAccess = FindRSAccess(*((unsigned __int8 *)v11 + 12));
  v13 = RSAccess;
  if ( !RSAccess || !*(_QWORD *)(RSAccess + 32) )
  {
    v8 = -1072431088;
    LogError(-1072431088);
    AcpiDiagTraceAmlError(a1, -1072431088);
    v9 = (const void *)*((unsigned __int8 *)v11 + 12);
    v10 = 158;
    goto LABEL_23;
  }
  _m_prefetchw(&gDebugger);
  v14 = _InterlockedAnd(&gDebugger, 0xFFFFFFEF);
  v15 = *(_DWORD **)(a3 + 32);
  v16 = 40;
  v24 = v14;
  if ( v15[7] )
    v16 = v15[9] + 40;
  v17 = (void *)HeapAlloc(*(_QWORD *)(a1 + 320), 1430537800, v16);
  v18 = (__int64)v17;
  if ( !v17 )
  {
    v8 = -1073741670;
    LogError(-1073741670);
    AcpiDiagTraceAmlError(a1, -1073741670);
    v19 = 0LL;
    v20 = 155;
LABEL_12:
    PrintDebugMessage(v20, v19, 0LL, 0LL, 0LL);
    goto LABEL_14;
  }
  memmove(v17, v15, v16);
  v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64, _QWORD, __int64 (__fastcall *)(__int64), __int64))(v13 + 32))(
         a2,
         *v11,
         v18,
         a4,
         *(_QWORD *)(v13 + 40),
         RestartCtxtCallback,
         a1 + 328);
  if ( v8 == -1073741789 )
  {
    v21 = HeapAlloc(gpheapGlobal, 1179992648, *(_DWORD *)(a4 + 16));
    *(_QWORD *)(a4 + 32) = v21;
    if ( v21 )
    {
      *(_DWORD *)(a4 + 24) = *(_DWORD *)(a4 + 16);
      *(_WORD *)(a4 + 2) = 3;
      v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64, _QWORD, __int64 (__fastcall *)(__int64), __int64))(v13 + 32))(
             a2,
             *v11,
             v18,
             a4,
             *(_QWORD *)(v13 + 40),
             RestartCtxtCallback,
             a1 + 328);
      goto LABEL_14;
    }
    v8 = -1073741670;
    LogError(-1073741670);
    AcpiDiagTraceAmlError(a1, -1073741670);
    v19 = (const void *)*(unsigned int *)(a4 + 16);
    v20 = 156;
    goto LABEL_12;
  }
LABEL_14:
  if ( (v24 & 0x10) != 0 )
    _InterlockedOr(&gDebugger, 0x10u);
  if ( v8 == 259 )
  {
    v8 = 32772;
  }
  else if ( v8 )
  {
    LogError(-1072431080);
    AcpiDiagTraceAmlError(a1, -1072431080);
    PrintDebugMessage(159, (const void *)*((unsigned __int8 *)v11 + 12), (const void *)(int)v8, 0LL, 0LL);
    v8 = -1072431080;
  }
  if ( v18 )
    HeapFree(v18);
  return v8;
}
