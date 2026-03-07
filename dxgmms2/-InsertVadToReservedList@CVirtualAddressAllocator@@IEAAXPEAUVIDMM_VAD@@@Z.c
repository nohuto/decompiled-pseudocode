void __fastcall CVirtualAddressAllocator::InsertVadToReservedList(
        CVirtualAddressAllocator *this,
        struct VIDMM_VAD *a2,
        __int64 a3)
{
  struct _RTL_BALANCED_NODE *v3; // rdi
  char v4; // bl
  struct _RTL_BALANCED_NODE *v7; // rax
  __int64 v8; // r8
  __int64 v9; // rcx

  v3 = (struct _RTL_BALANCED_NODE *)*((_QWORD *)this + 6);
  v4 = 0;
  if ( !v3 )
    goto LABEL_8;
  while ( (int)CompareVadRangeAvl(a2, v3) < 0 )
  {
    v7 = v3->Children[0];
    if ( !v3->Children[0] )
      goto LABEL_8;
LABEL_4:
    v3 = v7;
  }
  v7 = v3->Children[1];
  if ( v7 )
    goto LABEL_4;
  v4 = 1;
LABEL_8:
  LOBYTE(a3) = v4;
  RtlAvlInsertNodeEx((char *)this + 48, v3, a3, a2);
  v9 = *((_DWORD *)a2 + 18) & 0xFFFFFFF0 | 2;
  *((_DWORD *)a2 + 18) = v9;
  if ( (byte_1C00769C2 & 0x20) != 0 )
    McTemplateK0pqxx_EtwWriteTransfer(
      v9,
      &CreateGpuVirtualAddressRange,
      v8,
      this,
      v9,
      *((_QWORD *)a2 + 3),
      *((_QWORD *)a2 + 4));
}
