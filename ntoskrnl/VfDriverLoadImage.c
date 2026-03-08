/*
 * XREFs of VfDriverLoadImage @ 0x140AB9ED8
 * Callers:
 *     MmLoadSystemImageEx @ 0x14072E4EC (MmLoadSystemImageEx.c)
 *     VfInitBootDriversLoaded @ 0x140B4EE44 (VfInitBootDriversLoaded.c)
 *     VfDriverLoadBootDrivers @ 0x140B4F21C (VfDriverLoadBootDrivers.c)
 * Callees:
 *     VfTargetDriversAdd @ 0x140303834 (VfTargetDriversAdd.c)
 *     MiSectionControlArea @ 0x1403349C0 (MiSectionControlArea.c)
 *     RtlEqualUnicodeString @ 0x1406EA560 (RtlEqualUnicodeString.c)
 *     VfSuspectDriversLoadCallback @ 0x140AD7704 (VfSuspectDriversLoadCallback.c)
 */

void __fastcall VfDriverLoadImage(__int64 a1, __int64 a2, unsigned __int8 a3)
{
  unsigned int v3; // edi
  __int64 v5; // rcx
  char v6; // al

  v3 = a3;
  if ( !_bittest16((const signed __int16 *)(a1 + 110), 9u)
    && (!VfDifRunningWithoutReboot || VfXdvEnabled || !RtlEqualUnicodeString((PCUNICODE_STRING)(a1 + 88), &XdvName, 1u)) )
  {
    v5 = *(_QWORD *)(a1 + 112);
    if ( v5 )
      v6 = *(_BYTE *)(*(_QWORD *)MiSectionControlArea(v5) + 15LL) >> 4;
    else
      v6 = 12;
    if ( (_QWORD)ViVerifierDriverAddedThunkListHead )
    {
      LOBYTE(a2) = v6;
      VfSuspectDriversLoadCallback(a1, a2, v3);
    }
    else
    {
      VfTargetDriversAdd(*(_QWORD *)(a1 + 48), *(_DWORD *)(a1 + 64), v6, 0LL);
    }
  }
}
