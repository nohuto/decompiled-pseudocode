BOOLEAN __fastcall VfMiscIoInitializeWorkItem_Entry(__int64 a1)
{
  ULONG v2; // eax
  ULONG_PTR v3; // rdi
  void *v4; // rbx
  BOOLEAN result; // al

  v2 = IoSizeofWorkItem();
  VfMiscCheckKernelAddress(*(_QWORD *)(a1 + 8), v2);
  v3 = *(_QWORD *)(a1 + 8);
  if ( MmIsSessionAddress(v3) )
    VerifierBugCheckIfAppropriate(0xC4u, 0x130uLL, v3, 0LL, 0LL);
  v4 = *(void **)(a1 + 8);
  result = MmIsNonPagedSystemAddressValid(v4);
  if ( !result )
    return VerifierBugCheckIfAppropriate(0xC4u, 0x131uLL, (ULONG_PTR)v4, 0LL, 0LL);
  return result;
}
