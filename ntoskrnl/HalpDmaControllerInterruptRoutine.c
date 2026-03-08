/*
 * XREFs of HalpDmaControllerInterruptRoutine @ 0x1405252A0
 * Callers:
 *     <none>
 * Callees:
 *     KiInsertQueueDpc @ 0x1402302B0 (KiInsertQueueDpc.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

char __fastcall HalpDmaControllerInterruptRoutine(__int64 a1, __int64 a2)
{
  char v3; // bl
  __int64 v4; // rcx
  bool v5; // zf
  unsigned int v7; // [rsp+48h] [rbp+10h] BYREF
  int v8; // [rsp+50h] [rbp+18h] BYREF

  v7 = 0;
  v8 = 0;
  v3 = 0;
  while ( (*(unsigned __int8 (__fastcall **)(_QWORD, unsigned int *, int *))(a2 + 128))(*(_QWORD *)(a2 + 64), &v7, &v8) )
  {
    v3 = 1;
    v4 = *(_QWORD *)(a2 + 56) + 160LL * v7;
    v5 = *(_QWORD *)(v4 + 8) == 0LL;
    *(_DWORD *)(v4 + 32) = v8;
    *(_BYTE *)(v4 + 6) = 1;
    if ( !v5 )
      KiInsertQueueDpc(v4 + 40, 0LL, 0LL, 0LL, 0);
  }
  return v3;
}
