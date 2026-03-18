/*
 * XREFs of ?size@?$pointer_buffer_impl@PEAVIDeviceResource@@@detail@@AEBA_KXZ @ 0x18007BB14
 * Callers:
 *     ??_GCDrawListCache@@EEAAPEAXI@Z @ 0x18007B920 (--_GCDrawListCache@@EEAAPEAXI@Z.c)
 *     ?last@?$pointer_buffer_impl@PEAVIDeviceResource@@@detail@@QEBAPEAPEAVIDeviceResource@@XZ @ 0x1800A9F64 (-last@-$pointer_buffer_impl@PEAVIDeviceResource@@@detail@@QEBAPEAPEAVIDeviceResource@@XZ.c)
 *     ?ensure_extra_capacity@?$pointer_buffer_impl@PEAVIDeviceResource@@@detail@@QEAAX_K@Z @ 0x1800A9FEC (-ensure_extra_capacity@-$pointer_buffer_impl@PEAVIDeviceResource@@@detail@@QEAAX_K@Z.c)
 * Callees:
 *     ?first@?$pointer_buffer_impl@PEAVIDeviceResource@@@detail@@QEBAPEAPEAVIDeviceResource@@XZ @ 0x18007BA9C (-first@-$pointer_buffer_impl@PEAVIDeviceResource@@@detail@@QEBAPEAPEAVIDeviceResource@@XZ.c)
 *     ModuleFailFastForHRESULT @ 0x18026FE48 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall detail::pointer_buffer_impl<IDeviceResource *>::size(_QWORD *a1)
{
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( (*(_DWORD *)a1 & 3) == 0 )
    return 1LL;
  if ( (*(_DWORD *)a1 & 3) == 1 )
    return *(_QWORD *)(detail::pointer_buffer_impl<IDeviceResource *>::first(a1) - 16);
  if ( (*(_DWORD *)a1 & 3u) - 2 > 1 )
    ModuleFailFastForHRESULT(2147549183LL, retaddr);
  return 0LL;
}
