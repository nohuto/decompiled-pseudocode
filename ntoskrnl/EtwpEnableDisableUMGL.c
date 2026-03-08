/*
 * XREFs of EtwpEnableDisableUMGL @ 0x1409E4568
 * Callers:
 *     EtwpEnableDisableSpecialGuids @ 0x14068FF34 (EtwpEnableDisableSpecialGuids.c)
 * Callees:
 *     KeReleaseMutex @ 0x1402046C0 (KeReleaseMutex.c)
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 *     PsLookupProcessByProcessId @ 0x1406AC100 (PsLookupProcessByProcessId.c)
 *     EtwpUpdateProcessTracingCallback @ 0x1409E4CA0 (EtwpUpdateProcessTracingCallback.c)
 */

__int64 __fastcall EtwpEnableDisableUMGL(
        __int64 a1,
        char a2,
        unsigned __int16 a3,
        char a4,
        unsigned int a5,
        unsigned int *a6,
        unsigned int a7)
{
  __int64 v7; // rsi
  char v9; // r14
  NTSTATUS v11; // ebx
  __int64 v13; // rdi
  char v15; // al
  PEPROCESS Process; // [rsp+38h] [rbp-30h] BYREF
  __int16 v17; // [rsp+78h] [rbp+10h]

  v7 = a7;
  v9 = a3;
  v11 = 0;
  if ( !a2 && a7 && a5 >= 2 )
    return 3221225659LL;
  if ( a1 == EtwpHostSiloState )
    v13 = MmWriteableSharedUserData + 896;
  else
    v13 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1320LL) + 550LL;
  if ( (unsigned int)a3 < *(_DWORD *)(a1 + 16) && a3 )
  {
    KeWaitForSingleObject(&EtwpGlobalMutex, Executive, 0, 0, 0LL);
    if ( a2 )
    {
      Process = 0LL;
      if ( a7 )
      {
        do
        {
          v11 = PsLookupProcessByProcessId((HANDLE)*a6, &Process);
          if ( v11 >= 0 )
          {
            EtwpUpdateProcessTracingCallback(Process);
            ObfDereferenceObjectWithTag(Process, 0x746C6644u);
          }
          ++a6;
          --v7;
        }
        while ( v7 );
      }
      LOBYTE(v17) = v9;
      HIBYTE(v17) = a4;
      *(_WORD *)(v13 + 2LL * a5) = v17;
    }
    else
    {
      v15 = *(_BYTE *)(v13 + 2LL * a5);
      if ( v15 == v9 )
        *(_WORD *)(v13 + 2LL * a5) = 0;
      else
        v11 = v15 != 0 ? -1073741734 : -1073741054;
    }
    KeReleaseMutex(&EtwpGlobalMutex, 0);
  }
  else
  {
    return (unsigned int)-1073741816;
  }
  return (unsigned int)v11;
}
