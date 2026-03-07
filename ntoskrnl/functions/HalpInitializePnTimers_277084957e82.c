__int64 HalpInitializePnTimers()
{
  ULONG_PTR *v0; // rdi
  int v1; // ecx
  ULONG_PTR v2; // rbx
  __int64 InternalData; // rax

  v0 = (ULONG_PTR *)HalpRegisteredTimers;
  v1 = 0;
  v2 = 0LL;
  while ( v0 != &HalpRegisteredTimers )
  {
    v2 = (ULONG_PTR)v0;
    v0 = (ULONG_PTR *)*v0;
    if ( (*(_DWORD *)(v2 + 184) & 4) != 0 && (*(_DWORD *)(v2 + 224) & 1) != 0 )
    {
      InternalData = HalpTimerGetInternalData(v2);
      v1 = (*(__int64 (__fastcall **)(__int64))(v2 + 104))(InternalData);
      if ( v1 < 0 )
      {
        *(_DWORD *)(v2 + 256) = v1;
        HalpTimerLastProblem = 15;
        *(_DWORD *)(v2 + 252) = 15;
        *(_QWORD *)(v2 + 264) = "minkernel\\hals\\lib\\timers\\common\\timer.c";
        *(_DWORD *)(v2 + 272) = 1736;
        break;
      }
    }
  }
  HalpTimerLoaderBlock = 0LL;
  HalpTimerRegistrationAllowed = 0;
  if ( v1 < 0 )
    KeBugCheckEx(0x5Cu, 0x110uLL, v2, HalpTimerLastProblem, v1);
  return (unsigned int)v1;
}
