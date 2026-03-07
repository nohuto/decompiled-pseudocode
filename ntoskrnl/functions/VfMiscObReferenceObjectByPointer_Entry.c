unsigned __int64 __fastcall VfMiscObReferenceObjectByPointer_Entry(__int64 a1)
{
  unsigned __int64 result; // rax
  ULONG_PTR v3; // r8

  result = VfMiscCheckKernelAddress(*(_QWORD *)(a1 + 32), 8uLL);
  v3 = *(_QWORD *)(a1 + 32);
  if ( !*(_QWORD *)(v3 - 48) )
    return VerifierBugCheckIfAppropriate(0xC4u, 0x3FuLL, v3, 1uLL, 0LL);
  return result;
}
