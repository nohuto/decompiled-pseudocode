/*
 * XREFs of ?GetDeviceDescriptor@DXGADAPTER@@QEBAXKPEAG@Z @ 0x1C0046958
 * Callers:
 *     ?DxgkQueryAdapterInfoImpl@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x1C018FB80 (-DxgkQueryAdapterInfoImpl@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 *     ?FillInternalAdapterInfo@DXGADAPTER@@QEBAXPEAUDXGKVMB_COMMAND_GETINTERNALADAPTERINFO_RETURN@@@Z @ 0x1C03757C0 (-FillInternalAdapterInfo@DXGADAPTER@@QEBAXPEAUDXGKVMB_COMMAND_GETINTERNALADAPTERINFO_RETURN@@@Z.c)
 * Callees:
 *     ?RtlStringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x1C00408CC (-RtlStringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 */

void __fastcall DXGADAPTER::GetDeviceDescriptor(DXGADAPTER *this, unsigned int a2, unsigned __int16 *a3)
{
  size_t *v4; // r8

  v4 = (size_t *)*((_QWORD *)this + 217);
  if ( v4 )
  {
    RtlStringCbCopyW(a3, a2, v4);
  }
  else if ( a2 >= 2 )
  {
    if ( a3 )
      *a3 = 0;
  }
}
