/*
 * XREFs of ?ReportGetAsyncKeyStateAnomaly@CAsyncKeyEventMonitor@@AEAAXK@Z @ 0x1C00AB554
 * Callers:
 *     ?OnKeyEvent@CAsyncKeyEventMonitor@@QEAAXXZ @ 0x1C004E99C (-OnKeyEvent@CAsyncKeyEventMonitor@@QEAAXXZ.c)
 * Callees:
 *     McTemplateK0qqq_EtwWriteTransfer @ 0x1C01253A4 (McTemplateK0qqq_EtwWriteTransfer.c)
 */

void __fastcall CAsyncKeyEventMonitor::ReportGetAsyncKeyStateAnomaly(
        CAsyncKeyEventMonitor *this,
        unsigned int a2,
        int a3)
{
  int *v4; // rbx
  unsigned int i; // edi
  int v6; // r9d
  unsigned int v7; // ecx
  int v8; // eax

  v4 = (int *)((char *)this + 12);
  for ( i = 0; i < 0xA; ++i )
  {
    v6 = *(v4 - 1);
    if ( v6 == -1 )
      break;
    v7 = *v4;
    if ( (unsigned int)*v4 >= 2 )
    {
      v8 = *v4;
      if ( a2 )
        v8 = v7 / a2;
      if ( v8 )
      {
        if ( (Microsoft_Windows_Win32kEnableBits & 0x800000000LL) != 0 )
          McTemplateK0qqq_EtwWriteTransfer(v7, (unsigned int)&AuditApiGetAsyncKeyState, a3, v6, a2, *v4);
      }
    }
    *(v4 - 1) = -1;
    *v4 = -1;
    v4 += 2;
  }
}
