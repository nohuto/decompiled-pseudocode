/*
 * XREFs of ?_GetDpiInfo@DXGMONITOR@@QEBAXAEAUDISPLAY_PREFERRED_MODE_INFO@@AEAI1AEA_N2@Z @ 0x1C016892C
 * Callers:
 *     MonitorGetDpiInfoFromDescriptor @ 0x1C0168844 (MonitorGetDpiInfoFromDescriptor.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DXGMONITOR::_GetDpiInfo(
        DXGMONITOR *this,
        struct DISPLAY_PREFERRED_MODE_INFO *a2,
        unsigned int *a3,
        unsigned int *a4,
        bool *a5,
        bool *a6)
{
  __int64 v10; // r14
  unsigned int v11; // eax
  unsigned int v12; // ecx

  v10 = *(_QWORD *)(*((_QWORD *)this + 27) + 160LL);
  *(_QWORD *)a2 = 0LL;
  *((_DWORD *)a2 + 2) = 0;
  *a3 = 0;
  *a4 = 0;
  *a5 = 0;
  *a6 = 0;
  if ( v10 )
  {
    *a6 = 1;
    (*(void (__fastcall **)(__int64, unsigned int *, unsigned int *))(*(_QWORD *)v10 + 208LL))(v10, a3, a4);
    *a5 = (*(int (__fastcall **)(__int64, struct DISPLAY_PREFERRED_MODE_INFO *))(*(_QWORD *)v10 + 184LL))(v10, a2) >= 0;
  }
  v11 = *((_DWORD *)this + 118);
  if ( v11 )
  {
    v12 = *((_DWORD *)this + 119);
    if ( v12 )
    {
      *a3 = v11;
      *a4 = v12;
    }
  }
}
