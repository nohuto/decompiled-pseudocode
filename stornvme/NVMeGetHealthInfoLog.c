int __fastcall NVMeGetHealthInfoLog(__int64 a1)
{
  _UNKNOWN **v1; // rax
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+0h] BYREF

  v1 = &retaddr;
  if ( !*(_BYTE *)(a1 + 20) )
    LODWORD(v1) = NVMeAllocateDmaBuffer(a1, 0x200u);
  return (int)v1;
}
