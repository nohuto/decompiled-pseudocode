/*
 * XREFs of WheapAddErrorSource @ 0x1403BB194
 * Callers:
 *     WheaAddErrorSource @ 0x1407AF4C0 (WheaAddErrorSource.c)
 *     WheapInitializeErrorSourceTable @ 0x140A6478C (WheapInitializeErrorSourceTable.c)
 * Callees:
 *     KeSetEvent @ 0x14034E2F0 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x1403504C0 (KeWaitForSingleObject.c)
 */

LONG __fastcall WheapAddErrorSource(__int64 a1, __int64 a2)
{
  __int64 *v3; // rax

  KeWaitForSingleObject(&stru_140CDB170, Executive, 0, 0, 0LL);
  *(_DWORD *)(a2 + 124) = dword_140CDB158;
  v3 = (__int64 *)qword_140CDB168;
  if ( *(__int64 **)qword_140CDB168 != &qword_140CDB160 )
    __fastfail(3u);
  *(_QWORD *)a2 = &qword_140CDB160;
  *(_QWORD *)(a2 + 8) = v3;
  *v3 = a2;
  qword_140CDB168 = a2;
  _InterlockedIncrement(&dword_140CDB154);
  _InterlockedIncrement(&dword_140CDB158);
  return KeSetEvent(&stru_140CDB170, 0, 0);
}
