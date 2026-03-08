/*
 * XREFs of EtwpBuildMdlForTraceBuffer @ 0x1409EA424
 * Callers:
 *     EtwpPreserveLogger @ 0x1409EA82C (EtwpPreserveLogger.c)
 * Callees:
 *     IoAllocateMdl @ 0x14020CAD0 (IoAllocateMdl.c)
 *     MmBuildMdlForNonPagedPool @ 0x1402B5DB0 (MmBuildMdlForNonPagedPool.c)
 *     MmGetPhysicalAddress @ 0x14030C850 (MmGetPhysicalAddress.c)
 */

__int64 __fastcall EtwpBuildMdlForTraceBuffer(__int64 a1, char *a2, struct _MDL **a3)
{
  unsigned int v3; // edi
  char *v4; // r14
  unsigned int v7; // ebx
  struct _MDL *Mdl; // rax
  struct _MDL *v9; // rsi
  __int64 v10; // rdi
  struct _MDL *v11; // r15
  PHYSICAL_ADDRESS PhysicalAddress; // rax

  v3 = *(_DWORD *)a2;
  v4 = a2;
  v7 = 0;
  Mdl = IoAllocateMdl(a2, *(_DWORD *)a2, 0, 0, 0LL);
  v9 = Mdl;
  if ( Mdl )
  {
    if ( (*(_DWORD *)(a1 + 816) & 0x20000000) != 0 )
    {
      v10 = v3 >> 12;
      v11 = Mdl + 1;
      if ( (_DWORD)v10 )
      {
        do
        {
          PhysicalAddress = MmGetPhysicalAddress(v4);
          v4 += 4096;
          v11->Next = (struct _MDL *)((unsigned __int64)PhysicalAddress.QuadPart >> 12);
          v11 = (struct _MDL *)((char *)v11 + 8);
          --v10;
        }
        while ( v10 );
      }
    }
    else
    {
      MmBuildMdlForNonPagedPool(Mdl);
    }
    *a3 = v9;
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v7;
}
