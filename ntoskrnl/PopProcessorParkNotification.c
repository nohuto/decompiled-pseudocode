/*
 * XREFs of PopProcessorParkNotification @ 0x14058A8F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PopProcessorParkNotification(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v4; // rsi
  unsigned int i; // r9d
  __int64 v6; // r8
  char v7; // al

  v2 = *(_QWORD *)(a1 + 64);
  v4 = *(_QWORD *)(a1 + 72);
  if ( !v2 || !*(_QWORD *)(v2 + 104) )
    return 3221225474LL;
  for ( i = 0;
        i < *(_DWORD *)(a2 + 4);
        *(_QWORD *)(*(_QWORD *)(a2 + 8) + 16 * v6) = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 8) + 16 * v6) + 72LL) )
  {
    v6 = i++;
  }
  if ( PopFxParkingFallback )
    goto LABEL_9;
  v7 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(v2 + 104))(v4, 31LL, a2);
  if ( !v7 )
    PopFxParkingFallback = 1;
  if ( PopFxParkingFallback )
LABEL_9:
    v7 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(v2 + 104))(v4, 14LL, a2);
  return v7 == 0 ? 0xC00000BB : 0;
}
