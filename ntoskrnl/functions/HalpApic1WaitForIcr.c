__int64 HalpApic1WaitForIcr()
{
  __int64 result; // rax

  do
    result = HalpLocalApic;
  while ( (*(_DWORD *)(HalpLocalApic + 768) & 0x1000) != 0 );
  return result;
}
