/*
 * XREFs of ?ObtainSupportedFrequencyRanges@EDID_MODES@MonDescParser@@QEAAJPEAGPEAU_FrequencyRangeDescriptor@@@Z @ 0x1C001DCE8
 * Callers:
 *     ?EDID_V1_GetSupportedMonitorFrequencyRanges@@YAJW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@KPEBEPEAGPEAU_FrequencyRangeDescriptor@@@Z @ 0x1C001DB1C (-EDID_V1_GetSupportedMonitorFrequencyRanges@@YAJW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@KPEBEPEA.c)
 * Callees:
 *     ?Is18ByteDispDesc@EDID_PARSER@MonDescParser@@QEBA_NH@Z @ 0x1C001ECFC (-Is18ByteDispDesc@EDID_PARSER@MonDescParser@@QEBA_NH@Z.c)
 */

__int64 __fastcall MonDescParser::EDID_MODES::ObtainSupportedFrequencyRanges(
        MonDescParser::EDID_PARSER **this,
        unsigned __int16 *a2,
        struct _FrequencyRangeDescriptor *a3)
{
  MonDescParser::EDID_PARSER *v4; // rcx
  unsigned __int16 v5; // r9
  unsigned __int16 v6; // r9
  _WORD *v7; // r10
  __int64 v8; // r11
  __int64 v9; // rdx
  int v10; // eax
  int v11; // ecx
  __int64 v12; // rdx
  int v13; // eax
  int v14; // ecx
  __int64 v15; // rdx
  int v16; // eax
  int v17; // ecx
  __int64 v18; // rdx
  int v19; // eax
  int v20; // ecx
  int v21; // ecx
  __int64 result; // rax

  if ( !a2 || !a3 && *a2 )
    return 3221225485LL;
  v4 = *this;
  v5 = 0;
  while ( !MonDescParser::EDID_PARSER::Is18ByteDispDesc(v4, v5) || *(_BYTE *)(*(_QWORD *)v4 + 18LL * v6 + 57) != 0xFD )
  {
    v5 = v6 + 1;
    if ( v5 >= 4u )
      return 3221226021LL;
  }
  if ( *v7 )
  {
    *(_BYTE *)v8 = *((_BYTE *)this + 8);
    *(_DWORD *)(v8 + 36) = 2;
    v9 = *(_QWORD *)*this;
    v10 = *(unsigned __int8 *)(v9 + 18LL * v6 + 59);
    v11 = -((*(_BYTE *)(v9 + 18LL * v6 + 58) & 1) != 0);
    *(_DWORD *)(v8 + 8) = 1;
    *(_DWORD *)(v8 + 4) = v10 + (unsigned __int8)v11;
    v12 = *(_QWORD *)*this;
    v13 = *(unsigned __int8 *)(v12 + 18LL * v6 + 60);
    v14 = -((*(_BYTE *)(v12 + 18LL * v6 + 58) & 2) != 0);
    *(_DWORD *)(v8 + 16) = 1;
    *(_DWORD *)(v8 + 12) = v13 + (unsigned __int8)v14;
    v15 = *(_QWORD *)*this;
    v16 = *(unsigned __int8 *)(v15 + 18LL * v6 + 61);
    v17 = -((*(_BYTE *)(v15 + 18LL * v6 + 58) & 4) != 0);
    *(_DWORD *)(v8 + 24) = 1;
    *(_DWORD *)(v8 + 20) = 1000 * (v16 + (unsigned __int8)v17);
    v18 = *(_QWORD *)*this;
    v19 = *(unsigned __int8 *)(v18 + 18LL * v6 + 62);
    v20 = -((*(_BYTE *)(v18 + 18LL * v6 + 58) & 8) != 0);
    *(_DWORD *)(v8 + 32) = 1;
    *(_DWORD *)(v8 + 28) = 1000 * (v19 + (unsigned __int8)v20);
    v21 = 10000000 * *(unsigned __int8 *)(*(_QWORD *)*this + 18LL * v6 + 63);
    *(_QWORD *)(v8 + 40) = 0LL;
    result = 0LL;
    *(_DWORD *)(v8 + 48) = v21;
  }
  else
  {
    *v7 = 1;
    return 3221225507LL;
  }
  return result;
}
