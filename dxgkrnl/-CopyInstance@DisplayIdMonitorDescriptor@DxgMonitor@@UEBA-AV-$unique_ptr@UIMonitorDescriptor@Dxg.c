/*
 * XREFs of ?CopyInstance@DisplayIdMonitorDescriptor@DxgMonitor@@UEBA?AV?$unique_ptr@UIMonitorDescriptor@DxgMonitor@@U?$default_delete@UIMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@XZ @ 0x1C03CBBD0
 * Callers:
 *     ?CopyWithoutOverrides@DisplayIdMonitorDescriptor@DxgMonitor@@UEBA?AV?$unique_ptr@UIMonitorDescriptor@DxgMonitor@@U?$default_delete@UIMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@XZ @ 0x1C03CBCA0 (-CopyWithoutOverrides@DisplayIdMonitorDescriptor@DxgMonitor@@UEBA-AV-$unique_ptr@UIMonitorDescri.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C00077E0 (--3@YAXPEAX@Z.c)
 *     memmove @ 0x1C0027340 (memmove.c)
 *     ??0DisplayIdMonitorDescriptor@DxgMonitor@@QEAA@$$QEAV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@wistd@@@wistd@@K@Z @ 0x1C03CB8C0 (--0DisplayIdMonitorDescriptor@DxgMonitor@@QEAA@$$QEAV-$unique_ptr@$$BY0A@EU-$default_delete@$$BY.c)
 */

__int64 *__fastcall DxgMonitor::DisplayIdMonitorDescriptor::CopyInstance(__int64 a1, __int64 *a2)
{
  void *v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rax
  void *v8; // rcx
  void *v10; // [rsp+30h] [rbp+8h] BYREF

  v4 = (void *)operator new[](*(unsigned int *)(a1 + 8), 0x4D677844u, 256LL);
  v10 = v4;
  v5 = (__int64)v4;
  if ( v4 )
  {
    memmove(v4, *(const void **)(a1 + 24), *(unsigned int *)(a1 + 8));
    v6 = operator new[](0x30uLL, 0x4D677844u, 256LL);
    if ( v6 )
    {
      v7 = DxgMonitor::DisplayIdMonitorDescriptor::DisplayIdMonitorDescriptor(v6, (__int64 *)&v10, *(_DWORD *)(a1 + 8));
      if ( v7 )
      {
        v8 = v10;
        *a2 = v7;
        if ( !v8 )
          return a2;
LABEL_10:
        operator delete(v8);
        return a2;
      }
      v5 = (__int64)v10;
    }
    *a2 = 0LL;
    if ( !v5 )
      return a2;
    v8 = (void *)v5;
    goto LABEL_10;
  }
  *a2 = 0LL;
  return a2;
}
