__int64 VidSchiInitGlobals()
{
  qword_1C0076918 = (__int64)&gAdapterListHead;
  gAdapterListHead = &gAdapterListHead;
  return 0LL;
}
