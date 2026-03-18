/*
 * XREFs of ?consume@?$pointer_buffer_impl@PEAVIDeviceResource@@@detail@@QEAAX_J@Z @ 0x1800A9F9C
 * Callers:
 *     ?ReleaseDrawListEntries@CDrawListCache@@AEAAXXZ @ 0x180079760 (-ReleaseDrawListEntries@CDrawListCache@@AEAAXXZ.c)
 *     ?clear_region@?$vector_facade@PEAVIDeviceResource@@V?$pointer_buffer_impl@PEAVIDeviceResource@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800A9C30 (-clear_region@-$vector_facade@PEAVIDeviceResource@@V-$pointer_buffer_impl@PEAVIDeviceResource@@@.c)
 *     ?reserve_region@?$vector_facade@PEAVIDeviceResource@@V?$pointer_buffer_impl@PEAVIDeviceResource@@@detail@@@detail@@IEAAPEAPEAVIDeviceResource@@_K0@Z @ 0x1800A9C90 (-reserve_region@-$vector_facade@PEAVIDeviceResource@@V-$pointer_buffer_impl@PEAVIDeviceResource@.c)
 * Callees:
 *     ?first@?$pointer_buffer_impl@PEAVIDeviceResource@@@detail@@QEBAPEAPEAVIDeviceResource@@XZ @ 0x18007BA9C (-first@-$pointer_buffer_impl@PEAVIDeviceResource@@@detail@@QEBAPEAPEAVIDeviceResource@@XZ.c)
 *     ModuleFailFastForHRESULT @ 0x18026FE48 (ModuleFailFastForHRESULT.c)
 */

void __fastcall detail::pointer_buffer_impl<IDeviceResource *>::consume(_QWORD *a1, __int64 a2)
{
  unsigned __int64 v3; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 )
  {
    if ( (*(_DWORD *)a1 & 3) == 0 )
      goto LABEL_8;
    if ( (*(_DWORD *)a1 & 3) == 1 )
    {
      v3 = detail::pointer_buffer_impl<IDeviceResource *>::first(a1);
      *(_QWORD *)(v3 - 16) += a2;
      return;
    }
    if ( (*(_DWORD *)a1 & 3) != 2 )
    {
      if ( (*(_DWORD *)a1 & 3) != 3 )
        ModuleFailFastForHRESULT(2147549183LL, retaddr);
      if ( a2 != 1 )
LABEL_8:
        *a1 = 2LL;
    }
  }
}
