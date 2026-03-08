/*
 * XREFs of ?GetDisplayPlaneConfigHead@@YAPEAU_DISPLAY_PLANE_CONFIG@@PEAU_DISPLAY_PLANE_CONFIG_QUEUE@@PEAH@Z @ 0x1C0166A40
 * Callers:
 *     ?ReplaceDisplayedAllocation@ADAPTER_DISPLAY@@QEAAXPEBVDXGALLOCATION@@0@Z @ 0x1C01D7A84 (-ReplaceDisplayedAllocation@ADAPTER_DISPLAY@@QEAAXPEBVDXGALLOCATION@@0@Z.c)
 *     ?IsAllocationDisplayed@ADAPTER_DISPLAY@@QEAAEPEBVDXGALLOCATION@@@Z @ 0x1C02B9058 (-IsAllocationDisplayed@ADAPTER_DISPLAY@@QEAAEPEBVDXGALLOCATION@@@Z.c)
 * Callees:
 *     <none>
 */

struct _DISPLAY_PLANE_CONFIG *__fastcall GetDisplayPlaneConfigHead(struct _DISPLAY_PLANE_CONFIG_QUEUE *a1, int *a2)
{
  __int64 v2; // rax

  v2 = *(int *)a1;
  if ( (_DWORD)v2 == -1 )
    return 0LL;
  *a2 = v2;
  return (struct _DISPLAY_PLANE_CONFIG_QUEUE *)((char *)a1 + 80 * v2 + 8);
}
