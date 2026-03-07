__int64 __fastcall SysMmTestCreatePhysicalObjectForExistingPhysicalMemory(
        struct SYSMM_ADAPTER *a1,
        __int64 a2,
        int a3,
        __int64 a4,
        ULONG_PTR **a5,
        ULONG_PTR **a6)
{
  __int64 v7; // [rsp+68h] [rbp+10h] BYREF

  v7 = a2;
  return SmmCreatePhysicalObject(a1, 3, a3, (int)&v7, 3, 1, a4, 9, a5, a6);
}
