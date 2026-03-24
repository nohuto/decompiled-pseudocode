/*
 * XREFs of WheapAddErrorSource @ 0x1403BA9C4
 * Callers:
 *     WheaAddErrorSource @ 0x1407AF700 (WheaAddErrorSource.c)
 *     WheapInitializeErrorSourceTable @ 0x140A6378C (WheapInitializeErrorSourceTable.c)
 * Callees:
 *     KeSetEvent @ 0x1402C3C30 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x1402C5E00 (KeWaitForSingleObject.c)
 */

LONG __fastcall WheapAddErrorSource(__int64 a1, __int64 a2)
{
  __int64 *v3; // rax

  KeWaitForSingleObject(&stru_140CDB138, Executive, 0, 0, 0LL);
  *(_DWORD *)(a2 + 124) = dword_140CDB120;
  v3 = (__int64 *)qword_140CDB130;
  if ( *(__int64 **)qword_140CDB130 != &qword_140CDB128 )
    __fastfail(3u);
  *(_QWORD *)a2 = &qword_140CDB128;
  *(_QWORD *)(a2 + 8) = v3;
  *v3 = a2;
  qword_140CDB130 = a2;
  _InterlockedIncrement(&dword_140CDB11C);
  _InterlockedIncrement(&dword_140CDB120);
  return KeSetEvent(&stru_140CDB138, 0, 0);
}
