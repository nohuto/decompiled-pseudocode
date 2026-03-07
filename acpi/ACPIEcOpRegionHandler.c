__int64 __fastcall ACPIEcOpRegionHandler(
        int a1,
        __int64 a2,
        int a3,
        unsigned int a4,
        void *a5,
        int a6,
        void (__fastcall *a7)(__int64),
        __int64 a8)
{
  if ( (int)ACPIEcQueueEcIrp(a6, (a1 != 0) + 0x80, a3, a4, (__int64)a5, (__int64)a7, a8) < 0 )
  {
    memset(a5, 255, a4);
    a7(a8);
  }
  return 259LL;
}
