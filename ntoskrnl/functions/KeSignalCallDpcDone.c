void __fastcall KeSignalCallDpcDone(volatile signed __int32 *a1)
{
  _InterlockedDecrement(a1);
}
