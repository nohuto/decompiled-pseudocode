__int64 HalpHpetQueryCounter()
{
  return *(unsigned int *)(HalpHpetBaseAddress + 240);
}
