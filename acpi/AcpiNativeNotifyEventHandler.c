__int64 __fastcall AcpiNativeNotifyEventHandler(__int64 a1)
{
  int v1; // edx
  volatile signed __int32 *v2; // rbx

  v1 = *(_DWORD *)(a1 + 8);
  v2 = *(volatile signed __int32 **)a1;
  if ( v1 == 0xFFFF )
  {
    AcpiHandleInternalNotify(*(volatile signed __int32 **)a1);
    v1 = 0;
  }
  return NotifyHandler(2LL, v1, (__int64)v2);
}
