void __noreturn RtlpHeapHandleError()
{
  if ( dword_140C0C178 == 22 )
    KeBugCheckEx(0xC2u, 0x46uLL, qword_140C0C180, 0LL, 0LL);
  KeBugCheckEx(0x13Au, dword_140C0C178, qword_140C0C180, qword_140C0C188, 0LL);
}
