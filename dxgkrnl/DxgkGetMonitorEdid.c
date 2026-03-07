__int64 __fastcall DxgkGetMonitorEdid(
        struct _LUID a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int *a4,
        unsigned __int8 *a5)
{
  return DxgkGetMonitorDescriptor(a1, a2, 1u, a3, a4, a5);
}
