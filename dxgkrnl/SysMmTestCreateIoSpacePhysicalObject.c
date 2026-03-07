__int64 __fastcall SysMmTestCreateIoSpacePhysicalObject(
        struct SYSMM_ADAPTER *a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  return SysMmCreateIoSpacePhysicalObject(a1, a2, a3, a4, a5, 9, a6, a7);
}
