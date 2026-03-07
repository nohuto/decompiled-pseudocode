char __fastcall ObCleanupSiloState(volatile __int64 *a1)
{
  char result; // al
  __int64 v2; // rcx

  result = (char)a1;
  v2 = _InterlockedExchange64(a1, 0LL);
  if ( v2 )
    return ObDereferenceDeviceMap((volatile signed __int64 *)(v2 & 0xFFFFFFFFFFFFFFF0uLL), (v2 & 0xF) + 1);
  return result;
}
