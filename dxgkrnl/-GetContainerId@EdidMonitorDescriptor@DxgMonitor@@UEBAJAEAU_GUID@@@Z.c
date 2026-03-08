/*
 * XREFs of ?GetContainerId@EdidMonitorDescriptor@DxgMonitor@@UEBAJAEAU_GUID@@@Z @ 0x1C0219520
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C00077E0 (--3@YAXPEAX@Z.c)
 *     ?EDID_V1_GetContainerID@@YAJKPEBEPEAU_GUID@@@Z @ 0x1C0023DB8 (-EDID_V1_GetContainerID@@YAJKPEBEPEAU_GUID@@@Z.c)
 *     ?GetRawDescriptor@EdidMonitorDescriptor@DxgMonitor@@UEBA?AV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@wistd@@@wistd@@PEAI@Z @ 0x1C01CFB00 (-GetRawDescriptor@EdidMonitorDescriptor@DxgMonitor@@UEBA-AV-$unique_ptr@$$BY0A@EU-$default_delet.c)
 */

__int64 __fastcall DxgMonitor::EdidMonitorDescriptor::GetContainerId(
        DxgMonitor::EdidMonitorDescriptor *this,
        struct _GUID *a2)
{
  struct _GUID *v3; // r8
  unsigned __int8 *v4; // rbx
  unsigned int ContainerID; // edi
  unsigned int v7; // [rsp+40h] [rbp+18h] BYREF
  unsigned __int8 *v8; // [rsp+48h] [rbp+20h] BYREF

  v7 = 0;
  DxgMonitor::EdidMonitorDescriptor::GetRawDescriptor(this, &v8, &v7);
  v3 = a2;
  v4 = v8;
  ContainerID = EDID_V1_GetContainerID(v7, v8, v3);
  if ( v4 )
    operator delete(v4);
  return ContainerID;
}
