__int64 __fastcall DXGTRACKEDWORKLOAD::GetAvailableIndex(
        DXGTRACKEDWORKLOAD *this,
        struct DXGDEVICE *a2,
        struct COREDEVICEACCESS *a3,
        __int64 a4,
        unsigned __int64 *a5,
        unsigned int *a6,
        int *a7)
{
  DXGTRACKEDWORKLOAD *v8; // rcx
  __int64 v9; // rdi
  struct COREDEVICEACCESS *v10; // r8
  unsigned __int64 v11; // r10
  struct DXGDEVICE *v12; // r11
  int IndexHelper; // eax

  *a7 = 0;
  LODWORD(v9) = DXGTRACKEDWORKLOAD::GetIndexHelper(this, a6);
  if ( (int)v9 < 0 )
  {
    LODWORD(v9) = DXGTRACKEDWORKLOAD::ProcessActiveInstancePairs(v8, v12, v10, v11, a5);
    if ( (int)v9 >= 0 )
    {
      *a7 = 1;
      IndexHelper = DXGTRACKEDWORKLOAD::GetIndexHelper(this, a6);
      v9 = IndexHelper;
      if ( IndexHelper < 0 )
      {
        WdLogSingleEntry3(2LL, this, IndexHelper, 1426LL);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"TrackedWorkload 0x%I64x: Unable to find available entry, returning 0x%I64x",
          (__int64)this,
          v9,
          1426LL,
          0LL,
          0LL);
      }
    }
  }
  return (unsigned int)v9;
}
