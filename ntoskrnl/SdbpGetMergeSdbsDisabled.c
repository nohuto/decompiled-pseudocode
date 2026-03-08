/*
 * XREFs of SdbpGetMergeSdbsDisabled @ 0x14066B714
 * Callers:
 *     SdbpGetManifestedMergeStubAlloc @ 0x140A4BEA8 (SdbpGetManifestedMergeStubAlloc.c)
 * Callees:
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     AslLogCallPrintf @ 0x14079CA00 (AslLogCallPrintf.c)
 *     AslRegistryGetKey @ 0x14084BF1C (AslRegistryGetKey.c)
 *     AslRegistryGetUInt32 @ 0x140A51820 (AslRegistryGetUInt32.c)
 */

__int64 __fastcall SdbpGetMergeSdbsDisabled(_DWORD *a1)
{
  int Key; // eax
  char *v3; // rdi
  unsigned int v4; // ebx
  int UInt32; // eax
  int v7; // [rsp+48h] [rbp+10h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp+18h] BYREF

  v7 = 0;
  Handle = 0LL;
  Key = AslRegistryGetKey(
          &Handle,
          L"Software\\Microsoft\\Windows NT\\CurrentVersion\\AppCompatFlags\\SdbUpdates",
          2147483904LL,
          1LL);
  v3 = (char *)Handle;
  v4 = Key;
  if ( Key >= 0 )
  {
    UInt32 = AslRegistryGetUInt32(&v7, Handle, L"DisableDoubleQuerySdbs");
    v4 = UInt32;
    if ( UInt32 == -1073741772 )
    {
      v4 = 0;
      *a1 = 0;
    }
    else if ( UInt32 >= 0 )
    {
      v4 = 0;
      *a1 = v7 != 0;
    }
    else
    {
      AslLogCallPrintf(1, (unsigned int)"SdbpGetMergeSdbsDisabled", 974, (unsigned int)"Failed to query reg value.");
    }
  }
  else if ( Key != -1073741772 )
  {
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbpGetMergeSdbsDisabled",
      962,
      (unsigned int)"AslRegistryGetKey failed to open SdbUpdates key [%x]");
  }
  if ( (unsigned __int64)(v3 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    ZwClose(v3);
  return v4;
}
