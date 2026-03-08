/*
 * XREFs of WheapAddErrorSource @ 0x14037D97C
 * Callers:
 *     WheaAddErrorSource @ 0x14080C450 (WheaAddErrorSource.c)
 *     WheapInitializeErrorSourceTable @ 0x140B3E058 (WheapInitializeErrorSourceTable.c)
 * Callees:
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 */

LONG __fastcall WheapAddErrorSource(__int64 a1, __int64 a2)
{
  __int64 *v3; // rax

  KeWaitForSingleObject(&stru_140CF76F8, Executive, 0, 0, 0LL);
  *(_DWORD *)(a2 + 124) = dword_140CF76E0;
  v3 = (__int64 *)qword_140CF76F0;
  if ( *(__int64 **)qword_140CF76F0 != &qword_140CF76E8 )
    __fastfail(3u);
  *(_QWORD *)a2 = &qword_140CF76E8;
  *(_QWORD *)(a2 + 8) = v3;
  *v3 = a2;
  qword_140CF76F0 = a2;
  _InterlockedIncrement(&dword_140CF76DC);
  _InterlockedIncrement(&dword_140CF76E0);
  return KeSetEvent(&stru_140CF76F8, 0, 0);
}
