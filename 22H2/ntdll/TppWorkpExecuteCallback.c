/*
 * XREFs of TppWorkpExecuteCallback @ 0x1800635F0
 * Callers:
 *     <none>
 * Callees:
 *     TppWorkCallbackPrologRelease @ 0x18001FEF8 (TppWorkCallbackPrologRelease.c)
 *     _guard_dispatch_icall_nop @ 0x1800A1000 (_guard_dispatch_icall_nop.c)
 *     TppETWCallbackDequeue @ 0x1801124BC (TppETWCallbackDequeue.c)
 *     RtlpTpETWCallbackStart @ 0x1801125F4 (RtlpTpETWCallbackStart.c)
 *     RtlpTpETWCallbackStop @ 0x180112690 (RtlpTpETWCallbackStop.c)
 */

struct _PEB *__fastcall TppWorkpExecuteCallback(_QWORD *Instance, __int64 a2)
{
  _QWORD *v2; // rbx
  int v3; // ebp
  __int64 v5; // rdi
  _DWORD *SharedData; // r8
  __int64 v7; // rcx
  struct _PEB *result; // rax
  _DWORD *v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r10
  __int64 v13; // rdx
  _DWORD *ThreadPoolData; // rcx
  int v15; // eax
  unsigned int v16; // eax
  __int64 v17; // r9
  _QWORD *v18; // rsi
  _DWORD *v19; // rcx

  v2 = (_QWORD *)(a2 - 200);
  v3 = a2;
  v5 = 2147353478LL;
  SharedData = NtCurrentPeb()->SharedData;
  if ( SharedData && *SharedData )
    v7 = (__int64)NtCurrentPeb()->SharedData + 556;
  else
    v7 = 2147353478LL;
  if ( *(_BYTE *)v7 )
    TppETWCallbackDequeue(v2[18], a2, v2[10], v2[11], v2[13]);
  result = (struct _PEB *)TppWorkCallbackPrologRelease(Instance, (__int64)v2, 0);
  if ( (_DWORD)result )
  {
    v9 = NtCurrentPeb()->SharedData;
    if ( v9 && *v9 )
      v10 = (__int64)NtCurrentPeb()->SharedData + 556;
    else
      v10 = 2147353478LL;
    if ( *(_BYTE *)v10 )
      RtlpTpETWCallbackStart(v2[18], v3, v2[10], v2[11], v2[13]);
    v11 = v2[13];
    v12 = v2[11];
    v13 = v2[10];
    ThreadPoolData = NtCurrentTeb()->ThreadPoolData;
    if ( ThreadPoolData )
    {
      v15 = ThreadPoolData[3];
      ++*((_QWORD *)ThreadPoolData + 2);
      v16 = ((_BYTE)v15 - 1) & 1;
      ThreadPoolData[3] = v16;
      v17 = 8LL * v16;
      v18 = &ThreadPoolData[v17 + 8];
      *(_QWORD *)&ThreadPoolData[v17 + 10] = v12;
      *v18 = v13;
      *(_QWORD *)&ThreadPoolData[v17 + 12] = v11;
      *(_QWORD *)&ThreadPoolData[v17 + 14] = MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0];
      v13 = v2[10];
    }
    else
    {
      v18 = 0LL;
    }
    Instance[11] = v13;
    Instance[12] = v2[11];
    ((void (__fastcall *)(_QWORD *, _QWORD, _QWORD *))v2[10])(Instance, v2[11], v2);
    result = NtCurrentPeb();
    v19 = result->SharedData;
    if ( v19 && *v19 )
    {
      result = NtCurrentPeb();
      v5 = (__int64)result->SharedData + 556;
    }
    if ( *(_BYTE *)v5 )
      result = (struct _PEB *)RtlpTpETWCallbackStop(v2[18], v3, v2[10], v2[11], v2[13]);
    if ( v18 )
    {
      result = (struct _PEB *)(MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0]);
      if ( MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0] >= v18[3] )
      {
        result = (struct _PEB *)((char *)result - v18[3]);
        v18[3] = result;
      }
    }
  }
  return result;
}
