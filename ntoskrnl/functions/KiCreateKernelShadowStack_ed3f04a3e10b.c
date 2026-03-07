__int64 __fastcall KiCreateKernelShadowStack(
        unsigned __int64 a1,
        int a2,
        unsigned int a3,
        unsigned int a4,
        _QWORD *a5,
        _QWORD *a6)
{
  return MmCreateKernelShadowStack(a1, a2, a3, a4, a5, a6);
}
