/*
 * XREFs of VfDriverLoadImage @ 0x140A7C1B8
 * Callers:
 *     MmLoadSystemImageEx @ 0x14075FC44 (MmLoadSystemImageEx.c)
 *     VfInitBootDriversLoaded @ 0x140B0DBD4 (VfInitBootDriversLoaded.c)
 *     VfDriverLoadBootDrivers @ 0x140B0DDAC (VfDriverLoadBootDrivers.c)
 * Callees:
 *     MiSectionControlArea @ 0x140287970 (MiSectionControlArea.c)
 *     VfTargetDriversAdd @ 0x1402D8104 (VfTargetDriversAdd.c)
 *     RtlEqualUnicodeString @ 0x1407CD6A0 (RtlEqualUnicodeString.c)
 *     VfSuspectDriversLoadCallback @ 0x140A9A8F8 (VfSuspectDriversLoadCallback.c)
 */

BOOLEAN __fastcall VfDriverLoadImage(__int64 a1, __int64 a2, unsigned __int8 a3)
{
  unsigned int v4; // edi
  __int64 v5; // rcx
  char v6; // al
  BOOLEAN result; // al

  v4 = a3;
  if ( !VfDifRunningWithoutReboot
    || !a1
    || VfXdvEnabled
    || (result = RtlEqualUnicodeString((PCUNICODE_STRING)(a1 + 88), &XdvName, 1u)) == 0 )
  {
    v5 = *(_QWORD *)(a1 + 112);
    if ( v5 )
      v6 = *(_BYTE *)(*(_QWORD *)MiSectionControlArea(v5) + 15LL) >> 4;
    else
      v6 = 12;
    if ( (_QWORD)ViVerifierDriverAddedThunkListHead )
    {
      LOBYTE(a2) = v6;
      return VfSuspectDriversLoadCallback(a1, a2, v4);
    }
    else
    {
      return VfTargetDriversAdd(*(_QWORD *)(a1 + 48), *(_DWORD *)(a1 + 64), v6, 0LL);
    }
  }
  return result;
}
