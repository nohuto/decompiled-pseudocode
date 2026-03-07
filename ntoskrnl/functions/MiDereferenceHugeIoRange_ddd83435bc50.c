void __fastcall MiDereferenceHugeIoRange(volatile signed __int32 *a1)
{
  if ( _InterlockedExchangeAdd(a1 + 25, 0xFFFFFFFF) == 1 )
    ExFreePoolWithTag((PVOID)a1, 0);
}
