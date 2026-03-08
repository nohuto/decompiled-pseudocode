/*
 * XREFs of _CmGetDevicePanelMappedProperty @ 0x140A63830
 * Callers:
 *     _PnpDispatchDevicePanel @ 0x140823890 (_PnpDispatchDevicePanel.c)
 * Callees:
 *     _CmSplitDevicePanelId @ 0x14082509C (_CmSplitDevicePanelId.c)
 */

__int64 __fastcall CmGetDevicePanelMappedProperty(
        __int64 a1,
        const wchar_t *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        _DWORD *a6,
        GUID *a7,
        unsigned int a8,
        _DWORD *a9)
{
  __int64 result; // rax
  int v11; // r8d
  __int64 v12; // rdx
  GUID *v13; // rdx
  unsigned int *v14; // r9
  unsigned int *p_Data1; // r8

  result = 3221225494LL;
  *a9 = 0;
  if ( !a4 )
  {
    v11 = *(_DWORD *)(a5 + 16);
    switch ( v11 )
    {
      case 2:
        v12 = *(_QWORD *)a5 - DEVPKEY_DevicePanel_ContainerId;
        if ( *(_QWORD *)a5 == DEVPKEY_DevicePanel_ContainerId )
          v12 = *(_QWORD *)(a5 + 8) + 0x488426EC2804D35ALL;
        if ( !v12 )
        {
          *a6 = 13;
          *a9 = 16;
          if ( a8 < 0x10 )
            return 3221225507LL;
          v13 = a7;
          v14 = 0LL;
          goto LABEL_21;
        }
        break;
      case 3:
        v13 = (GUID *)(*(_QWORD *)a5 - DEVPKEY_DevicePanel_Group);
        if ( *(_QWORD *)a5 == DEVPKEY_DevicePanel_Group )
          v13 = (GUID *)(*(_QWORD *)(a5 + 8) + 0x488426EC2804D35ALL);
        if ( !v13 )
        {
          *a6 = 7;
          *a9 = 4;
          if ( a8 < 4 )
            return 3221225507LL;
          p_Data1 = &a7->Data1;
          v14 = 0LL;
          return CmSplitDevicePanelId(a2, v13, p_Data1, v14);
        }
        break;
      case 4:
        v13 = (GUID *)(*(_QWORD *)a5 - DEVPKEY_DevicePanel_Side);
        if ( *(_QWORD *)a5 == DEVPKEY_DevicePanel_Side )
          v13 = (GUID *)(*(_QWORD *)(a5 + 8) + 0x488426EC2804D35ALL);
        if ( !v13 )
        {
          *a6 = 7;
          *a9 = 4;
          if ( a8 < 4 )
            return 3221225507LL;
          v14 = &a7->Data1;
LABEL_21:
          p_Data1 = 0LL;
          return CmSplitDevicePanelId(a2, v13, p_Data1, v14);
        }
        break;
    }
  }
  return result;
}
