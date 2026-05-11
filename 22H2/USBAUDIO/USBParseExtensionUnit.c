/*
 * XREFs of USBParseExtensionUnit @ 0x1C00302A0
 * Callers:
 *     <none>
 * Callees:
 *     BusApiBuildFunctionUnit @ 0x1C002B4B4 (BusApiBuildFunctionUnit.c)
 *     USBParseCountOutputChannelsForUnit @ 0x1C002F5D8 (USBParseCountOutputChannelsForUnit.c)
 *     USBParseGetChannelConfigForUnit @ 0x1C002F680 (USBParseGetChannelConfigForUnit.c)
 *     USBParseGetUnitString @ 0x1C002F724 (USBParseGetUnitString.c)
 *     USBParseBuildSourceIdArray @ 0x1C002F884 (USBParseBuildSourceIdArray.c)
 */

__int64 __fastcall USBParseExtensionUnit(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  __int64 v4; // rax
  int v5; // esi
  __int64 v7; // rdx
  __int64 v8; // r13
  unsigned __int8 *v9; // rcx
  int v10; // eax
  int UnitString; // ebx
  int *v12; // r14
  int v13; // r12d
  unsigned int v14; // edi
  int ChannelConfigForUnit; // ebx
  int v16; // eax
  int v17; // edx
  __int64 v18; // rax
  PCWSTR SourceString; // [rsp+90h] [rbp+8h] BYREF
  __int64 v21; // [rsp+98h] [rbp+10h] BYREF

  v2 = *(unsigned __int8 *)(a2 + 6);
  v4 = *(_QWORD *)(a1 + 16);
  v5 = 0;
  SourceString = 0LL;
  v7 = *(unsigned __int8 *)(v2 + a2 + 11);
  v8 = *(_QWORD *)(v4 + 72);
  if ( (_DWORD)v7 )
  {
    v9 = (unsigned __int8 *)(v7 + v2 + a2 + 12);
    do
    {
      v10 = *v9--;
      v5 = v10 | (v5 << 8);
      LODWORD(v7) = v7 - 1;
    }
    while ( (_DWORD)v7 );
  }
  UnitString = USBParseGetUnitString(a1, (unsigned __int8 *)a2, &SourceString);
  if ( UnitString >= 0 )
  {
    v12 = USBParseBuildSourceIdArray(*(unsigned __int8 *)(a2 + 6), (unsigned __int8 *)(a2 + 7));
    if ( v12 )
    {
      v13 = *(unsigned __int16 *)(a2 + 4);
      v14 = *(unsigned __int8 *)(a2 + 6);
      ChannelConfigForUnit = USBParseGetChannelConfigForUnit(
                               *(unsigned __int16 **)(v8 + 40),
                               *(char **)(v8 + 48),
                               *(unsigned __int8 *)(a2 + 3));
      v16 = USBParseCountOutputChannelsForUnit(
              *(unsigned __int16 **)(v8 + 40),
              *(char **)(v8 + 48),
              *(unsigned __int8 *)(a2 + 3));
      v17 = *(unsigned __int8 *)(a2 + 3);
      v21 = 0LL;
      UnitString = BusApiBuildFunctionUnit(a1, v17, 7, v16, ChannelConfigForUnit, v14, v12, SourceString, 0, &v21);
      if ( UnitString >= 0 )
      {
        v18 = v21;
        if ( v21 )
        {
          *(_DWORD *)(v21 + 64) = v13;
          *(_DWORD *)(v18 + 68) = v5;
        }
      }
      ExFreePool(v12);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return (unsigned int)UnitString;
}
