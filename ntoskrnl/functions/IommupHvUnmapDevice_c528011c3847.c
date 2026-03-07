__int64 __fastcall IommupHvUnmapDevice(ULONG_PTR BugCheckParameter2)
{
  if ( (unsigned int)((__int64 (*)(void))qword_140C62278)() == 3473497 )
    KeBugCheckEx(0x159u, 0x3000uLL, BugCheckParameter2, 0LL, 0LL);
  ((void (__fastcall *)(ULONG_PTR))qword_140C62228)(BugCheckParameter2);
  return ((__int64 (__fastcall *)(ULONG_PTR, __int64))qword_140C62268)(BugCheckParameter2, 5LL);
}
