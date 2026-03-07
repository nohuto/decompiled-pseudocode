void __fastcall SmmDestroyPhysicalObject(_DWORD *RegionSize, char a2)
{
  _DWORD *v2; // rsi
  PVOID *v5; // rdi
  unsigned __int64 v6; // rcx
  volatile signed __int64 *v7; // rax
  void *v8; // rcx

  v2 = RegionSize + 11;
  v5 = (PVOID *)(RegionSize + 2);
  if ( (Microsoft_Windows_DxgKrnl_SysMmEnableBits & 1) != 0 )
    McTemplateK0xxqqtpqp_EtwWriteTransfer(
      *((_QWORD *)RegionSize + 2),
      (unsigned int)&DestroyPhysicalObject,
      (*v2 >> 5) & 0xF,
      *(_QWORD *)RegionSize,
      *((_QWORD *)RegionSize + 1),
      (*v2 >> 1) & 0xF,
      (*v2 >> 10) & 3,
      (*v2 & 0x200) != 0,
      *((_QWORD *)RegionSize + 2),
      (*v2 >> 5) & 0xF,
      (char)RegionSize);
  if ( a2 )
  {
    v6 = (unsigned int)*v2;
    if ( (v6 & 0x200) == 0 )
    {
      if ( (((unsigned int)v6 >> 1) & 0xF) == 1 )
      {
        ObfDereferenceObject(*v5);
      }
      else if ( (((unsigned int)v6 >> 1) & 0xF) == 2 )
      {
        MmFreePagesFromMdl((PMDL)*v5);
      }
      else if ( (((unsigned int)v6 >> 1) & 0xF) != 3 )
      {
        if ( (((unsigned int)v6 >> 1) & 0xF) == 4 )
        {
          ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v5, (PSIZE_T)RegionSize, 0x8000u);
        }
        else if ( (((unsigned int)v6 >> 1) & 0xF) == 5 )
        {
          MmFreeContiguousMemory(*v5);
        }
        else
        {
          WdLogSingleEntry5(0LL, 484LL, 1LL, RegionSize, (v6 >> 1) & 0xF, 0LL);
        }
      }
    }
  }
  _InterlockedExchangeAdd64(&qword_1C013BCE8, -*(_QWORD *)RegionSize);
  v7 = (volatile signed __int64 *)&unk_1C013BCF8;
  if ( (*v2 & 1) == 0 )
    v7 = (volatile signed __int64 *)&unk_1C013BCF0;
  _InterlockedExchangeAdd64(v7, -*(_QWORD *)RegionSize);
  v8 = (void *)*((_QWORD *)RegionSize + 3);
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
  ExFreePoolWithTag(RegionSize, 0);
}
