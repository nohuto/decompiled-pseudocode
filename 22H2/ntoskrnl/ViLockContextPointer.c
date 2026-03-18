/*
 * XREFs of ViLockContextPointer @ 0x140AC50BC
 * Callers:
 *     VfInsertContext @ 0x1405CE4D0 (VfInsertContext.c)
 *     VfRemoveContext @ 0x1405CE660 (VfRemoveContext.c)
 *     ViQueryObjectContext @ 0x140AC5104 (ViQueryObjectContext.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140242E20 (KeYieldProcessorEx.c)
 */

char __fastcall ViLockContextPointer(signed __int64 *a1)
{
  signed __int64 v2; // rax
  signed __int64 v3; // rtt
  int v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = 0;
  do
  {
    while ( 1 )
    {
      _m_prefetchw(a1);
      v2 = *a1;
      if ( (*a1 & 1) != 0 )
        break;
      if ( !v2 )
        return v2;
      KeYieldProcessorEx(&v5);
    }
    v3 = *a1;
  }
  while ( v3 != _InterlockedCompareExchange64(a1, v2 - 1, v2) );
  LOBYTE(v2) = 1;
  return v2;
}
