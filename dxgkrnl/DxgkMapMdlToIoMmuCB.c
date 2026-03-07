__int64 __fastcall DxgkMapMdlToIoMmuCB(__int64 a1, __int64 *a2)
{
  struct SYSMM_ADAPTER *SysMmAdapterFromDevice; // rax
  __int64 result; // rax
  __int64 v5; // [rsp+68h] [rbp+10h] BYREF
  __int64 v6; // [rsp+70h] [rbp+18h] BYREF
  __int64 v7; // [rsp+78h] [rbp+20h] BYREF

  v5 = 0LL;
  SysMmAdapterFromDevice = (struct SYSMM_ADAPTER *)DpiGetSysMmAdapterFromDevice();
  v6 = *a2;
  result = SmmCreatePhysicalObject(
             SysMmAdapterFromDevice,
             2,
             *(_DWORD *)(v6 + 40),
             (int)&v6,
             3,
             1,
             0LL,
             0,
             (ULONG_PTR **)&v5,
             (ULONG_PTR **)&v7);
  a2[1] = v5;
  return result;
}
