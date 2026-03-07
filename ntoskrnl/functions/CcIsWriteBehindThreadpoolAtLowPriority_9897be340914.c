bool __fastcall CcIsWriteBehindThreadpoolAtLowPriority(__int64 a1)
{
  return (unsigned int)CcNumberNumaNodes <= 1
      && !CcEnablePerVolumeLazyWriter
      && *(_DWORD *)(a1 + 1288) < *(_DWORD *)(a1 + 840);
}
