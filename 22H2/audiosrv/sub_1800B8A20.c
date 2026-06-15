/*
 * XREFs of sub_1800B8A20 @ 0x1800B8A20
 * Callers:
 *     <none>
 * Callees:
 *     sub_18006D2A4 @ 0x18006D2A4 (sub_18006D2A4.c)
 *     sub_180104DB8 @ 0x180104DB8 (sub_180104DB8.c)
 */

// Hidden C++ exception states: #wind=1
_BOOL8 __fastcall sub_1800B8A20(__int64 a1, _QWORD *a2)
{
  BOOL v3; // ebx

  RtlAcquireResourceExclusive(&Resource, 1u);
  _InterlockedAdd((volatile signed __int32 *)lpBaseAddress + 1, 1u);
  _InterlockedAdd((volatile signed __int32 *)lpMem + 1, 1u);
  RtlReleaseResource(&Resource);
  v3 = (int)MMDevAPI_15() < 0;
  sub_180104DB8(*a2 + 28LL);
  if ( sub_18006D2A4(dword_18019EBA0) && (int)MMDevAPI_15() < 0 )
    v3 = 1;
  _o_free(*a2);
  *a2 = 0LL;
  return v3;
}
