void __fastcall MiDereferencePageChains(volatile signed __int32 *a1)
{
  if ( _InterlockedExchangeAdd(a1 + 20, 0xFFFFFFFF) == 1 )
    ExFreePoolWithTag((PVOID)a1, 0);
}
