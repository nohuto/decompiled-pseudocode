/*
 * XREFs of ?SendSettingsUpdateToContainer@Settings@IVRootDeliver@@YAXAEBUCONTAINER_ID@@@Z @ 0x1C01E98C4
 * Callers:
 *     BroadcastSettingsUpdateToAllContainers @ 0x1C0095820 (BroadcastSettingsUpdateToAllContainers.c)
 *     ?ivOnChildPartitionConnected@@YAXPEBXUCONTAINER_ID@@@Z @ 0x1C01EE3A0 (-ivOnChildPartitionConnected@@YAXPEBXUCONTAINER_ID@@@Z.c)
 * Callees:
 *     GetMouseSensitivity @ 0x1C01E7F70 (GetMouseSensitivity.c)
 *     ??0CIVGenericSerializer@@QEAA@W4IVPacketType@@@Z @ 0x1C01E95EC (--0CIVGenericSerializer@@QEAA@W4IVPacketType@@@Z.c)
 *     PackTouchpadSettings @ 0x1C01E9648 (PackTouchpadSettings.c)
 *     ?ivrIVBroadcast@@YAJAEBVCIVSerializer@@KAEBUCONTAINER_ID@@@Z @ 0x1C01EE7B8 (-ivrIVBroadcast@@YAJAEBVCIVSerializer@@KAEBUCONTAINER_ID@@@Z.c)
 *     ?ivrIVSend@@YAJAEBVCIVSerializer@@KAEBUCONTAINER_ID@@@Z @ 0x1C01EE8A4 (-ivrIVSend@@YAJAEBVCIVSerializer@@KAEBUCONTAINER_ID@@@Z.c)
 *     ??1CIVSerializer@@UEAA@XZ @ 0x1C01FD0B8 (--1CIVSerializer@@UEAA@XZ.c)
 */

void __fastcall IVRootDeliver::Settings::SendSettingsUpdateToContainer(
        IVRootDeliver::Settings *this,
        const struct CONTAINER_ID *a2)
{
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  _DWORD *v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  _QWORD v10[2]; // [rsp+20h] [rbp-38h] BYREF
  _DWORD *v11; // [rsp+30h] [rbp-28h]

  CIVGenericSerializer::CIVGenericSerializer(v10);
  v6 = v11;
  if ( v11 )
  {
    PackTouchpadSettings(v11, v3, v4, v5);
    v7 = *((unsigned int *)gpsi + 497);
    *v6 = v7;
    v6[1] = GetMouseSensitivity(0LL, v7, v8, v9);
    v6[2] = *((_DWORD *)gpsi + 1247);
    v6[3] = dword_1C0289AE0;
    v6[4] = dword_1C0289AB0;
    v6[5] = dword_1C0289AF0;
    if ( *(_WORD *)this || *((_WORD *)this + 1) )
      ivrIVSend((const struct CIVSerializer *)v10, 3u, this);
    else
      ivrIVBroadcast((const struct CIVSerializer *)v10, 3u, this);
  }
  v10[0] = &CIVGenericSerializer::`vftable';
  CIVSerializer::~CIVSerializer((CIVSerializer *)v10);
}
