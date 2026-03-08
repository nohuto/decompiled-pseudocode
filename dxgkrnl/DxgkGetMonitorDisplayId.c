/*
 * XREFs of DxgkGetMonitorDisplayId @ 0x1C02F7E00
 * Callers:
 *     <none>
 * Callees:
 *     ?DxgkGetMonitorDescriptor@@YAJU_LUID@@IEIPEAIPEAE@Z @ 0x1C01D9AB0 (-DxgkGetMonitorDescriptor@@YAJU_LUID@@IEIPEAIPEAE@Z.c)
 */

__int64 __fastcall DxgkGetMonitorDisplayId(
        struct _LUID a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int *a4,
        unsigned __int8 *a5)
{
  return DxgkGetMonitorDescriptor(a1, a2, 0LL, a3, a4, a5);
}
