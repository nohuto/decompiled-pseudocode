/*
 * XREFs of WmipGetSMBiosFromLoaderBlock @ 0x140A74D6C
 * Callers:
 *     WMIInitialize @ 0x140A3DB54 (WMIInitialize.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x1402C1550 (ExInitializeResourceLite.c)
 */

unsigned __int8 __fastcall WmipGetSMBiosFromLoaderBlock(__int64 a1)
{
  __int64 v1; // rbx
  unsigned __int8 result; // al
  __int64 v3; // rcx

  v1 = *(_QWORD *)(a1 + 240);
  result = ExInitializeResourceLite(&WmipSMBiosLock);
  if ( *(_DWORD *)v1 >= 0xE38u )
  {
    v3 = *(_QWORD *)(v1 + 56);
    if ( v3 )
    {
      WmipSMBiosTablePhysicalAddress = *(_QWORD *)(v3 + 16);
      LODWORD(WmipSMBiosTableLength) = *(_DWORD *)(v3 + 12);
      BYTE1(WmipSMBiosVersionInfo) = *(_BYTE *)(v3 + 7);
      result = *(_BYTE *)(v3 + 8);
      LOBYTE(WmipSMBiosVersionInfo) = 0;
      HIWORD(WmipSMBiosVersionInfo) = result;
    }
  }
  return result;
}
