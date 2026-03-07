__int64 __fastcall SysMmCreatePhysicalObjectForExistingMdl(
        struct SYSMM_ADAPTER *a1,
        __int64 a2,
        __int64 a3,
        int a4,
        ULONG_PTR **a5,
        ULONG_PTR **a6)
{
  int v7; // r8d
  __int64 v9; // [rsp+68h] [rbp+10h] BYREF

  v7 = *(_DWORD *)(a2 + 40);
  v9 = a2;
  return SmmCreatePhysicalObject(a1, 2, v7, (int)&v9, 3, 1, a3, a4, a5, a6);
}
