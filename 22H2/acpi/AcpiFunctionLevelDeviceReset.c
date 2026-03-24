/*
 * XREFs of AcpiFunctionLevelDeviceReset @ 0x1C00AE568
 * Callers:
 *     AcpiDeviceReset @ 0x1C00AE4C0 (AcpiDeviceReset.c)
 * Callees:
 *     AMLIAsyncEvalObject @ 0x1C001467C (AMLIAsyncEvalObject.c)
 *     AcpiFunctionLevelDeviceResetComplete @ 0x1C00AE650 (AcpiFunctionLevelDeviceResetComplete.c)
 */

__int64 __fastcall AcpiFunctionLevelDeviceReset(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rsi
  _QWORD *v4; // rdi
  unsigned int v6; // ebx
  __int64 *v7; // rcx
  _QWORD *PoolWithTag; // rax

  v3 = *(_QWORD *)(a1 + 8);
  v4 = 0LL;
  if ( !*(_QWORD *)(v3 + 728) )
  {
    v6 = -1073741810;
LABEL_12:
    AcpiFunctionLevelDeviceResetComplete(0LL, 0LL, 0LL, v4);
    return v6;
  }
  v7 = *(__int64 **)(v3 + 456);
  if ( !v7 )
  {
    v6 = -1073741637;
    goto LABEL_12;
  }
  if ( a3 )
  {
    if ( *(_DWORD *)a3 < 0x18u )
    {
      v6 = -1073741811;
      goto LABEL_12;
    }
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x18uLL, 0x51706341u);
    v4 = PoolWithTag;
    if ( !PoolWithTag )
    {
      v6 = -1073741670;
      goto LABEL_12;
    }
    *(_OWORD *)PoolWithTag = *(_OWORD *)a3;
    PoolWithTag[2] = *(_QWORD *)(a3 + 16);
    v7 = *(__int64 **)(v3 + 456);
  }
  v6 = AMLIAsyncEvalObject(v7, 0LL, 0, 0LL, AcpiFunctionLevelDeviceResetComplete, v4);
  if ( v6 != 259 )
    goto LABEL_12;
  return v6;
}
