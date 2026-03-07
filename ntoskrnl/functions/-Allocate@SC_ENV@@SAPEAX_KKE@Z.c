PVOID __fastcall SC_ENV::Allocate(SIZE_T NumberOfBytes)
{
  return ExAllocatePoolWithTag(NonPagedPoolNx, NumberOfBytes, 0x54506F49u);
}
