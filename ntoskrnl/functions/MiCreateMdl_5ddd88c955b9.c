struct _MDL *__fastcall MiCreateMdl(__int64 a1, unsigned int a2, SIZE_T a3, int a4)
{
  ULONG v4; // edi
  SIZE_T v5; // rbp
  PMDL Mdl; // rax
  struct _MDL *v9; // rdi
  SIZE_T v10; // rsi
  _QWORD *p_Next; // r14
  unsigned __int64 PageForHeader; // rax
  PVOID MappedSystemVa; // rax
  PVOID Pool; // rax
  void *v16; // rbx
  struct _MDL *v17; // rax

  v4 = a3;
  v5 = a3 >> 12;
  if ( a4 )
  {
    Mdl = IoAllocateMdl(0LL, a3, 0, 0, 0LL);
    v9 = Mdl;
    if ( Mdl )
    {
      v10 = 0LL;
      p_Next = &Mdl[1].Next;
      if ( v5 )
      {
        while ( 1 )
        {
          PageForHeader = MiGetPageForHeader(a1, a2);
          if ( PageForHeader == -1LL )
            break;
          if ( !v10 )
            v9->MdlFlags |= 0x4002u;
          *p_Next = PageForHeader;
          ++v10;
          ++p_Next;
          if ( v10 >= v5 )
            goto LABEL_8;
        }
        v9->ByteCount = (_DWORD)v10 << 12;
        goto LABEL_17;
      }
LABEL_8:
      if ( (v9->MdlFlags & 5) != 0 )
        MappedSystemVa = v9->MappedSystemVa;
      else
        MappedSystemVa = MmMapLockedPagesSpecifyCache(v9, 0, MmCached, 0LL, 0, 0x40000020u);
      if ( !MappedSystemVa )
      {
LABEL_17:
        MiDeleteImageCreationMdls(v9, 1);
        return 0LL;
      }
      return v9;
    }
  }
  else
  {
    Pool = MiAllocatePool(64, a3, 0x78786D4Du);
    v16 = Pool;
    if ( Pool )
    {
      v17 = IoAllocateMdl(Pool, v4, 0, 0, 0LL);
      v9 = v17;
      if ( !v17 )
      {
        ExFreePoolWithTag(v16, 0);
        return 0LL;
      }
      MmBuildMdlForNonPagedPool(v17);
      v9->MdlFlags |= 0x4000u;
      return v9;
    }
  }
  return 0LL;
}
