PMDL __stdcall MmCreateMdl(PMDL MemoryDescriptorList, PVOID Base, SIZE_T Length)
{
  struct _MDL *Pool; // r9
  __int16 v6; // di
  PMDL result; // rax

  Pool = MemoryDescriptorList;
  if ( Length > 0xFFFFFFFF )
    return 0LL;
  v6 = (__int16)Base;
  if ( !MemoryDescriptorList )
  {
    Pool = (struct _MDL *)MiAllocatePool(
                            64,
                            8 * ((((unsigned __int16)Base & 0xFFF) + Length + 4095) >> 12) + 48,
                            0x6C646D4Du);
    if ( !Pool )
      return 0LL;
  }
  Pool->Next = 0LL;
  Pool->MdlFlags = 0;
  Pool->ByteCount = Length;
  Pool->StartVa = (PVOID)((unsigned __int64)Base & 0xFFFFFFFFFFFFF000uLL);
  result = Pool;
  Pool->Size = 8 * ((((v6 & 0xFFF) + Length + 4095) >> 12) + 6);
  Pool->ByteOffset = v6 & 0xFFF;
  return result;
}
