/*
 * XREFs of SdbpQueryAppCompatFlagsByExeID @ 0x14084BE9C
 * Callers:
 *     SdbGetEntryFlags @ 0x14084BDEC (SdbGetEntryFlags.c)
 * Callees:
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     AslLogCallPrintf @ 0x14079CA00 (AslLogCallPrintf.c)
 *     AslRegistryGetKey @ 0x14084BF1C (AslRegistryGetKey.c)
 *     AslRegistryGetUInt32 @ 0x140A51820 (AslRegistryGetUInt32.c)
 */

__int64 __fastcall SdbpQueryAppCompatFlagsByExeID(__int64 a1, __int64 a2, unsigned int a3, _DWORD *a4)
{
  int Key; // eax
  unsigned int v7; // ebx
  bool v8; // zf
  int UInt32; // eax
  int v11; // [rsp+50h] [rbp+8h] BYREF
  int v12; // [rsp+54h] [rbp+Ch]
  HANDLE Handle; // [rsp+68h] [rbp+20h] BYREF

  v12 = HIDWORD(a1);
  v11 = 0;
  Handle = 0LL;
  Key = AslRegistryGetKey(
          &Handle,
          L"\\Software\\Microsoft\\Windows NT\\CurrentVersion\\AppCompatFlags",
          2147483904LL,
          a3);
  v7 = Key;
  if ( Key < 0 )
  {
    if ( Key == -1073741772 )
      goto LABEL_4;
    goto LABEL_3;
  }
  UInt32 = AslRegistryGetUInt32(&v11, Handle, a2);
  v7 = UInt32;
  if ( UInt32 >= 0 )
  {
    v7 = 0;
  }
  else if ( UInt32 != -1073741772 )
  {
LABEL_3:
    AslLogCallPrintf(1LL);
  }
LABEL_4:
  v8 = Handle == 0LL;
  *a4 = v11;
  if ( !v8 )
    ZwClose(Handle);
  return v7;
}
