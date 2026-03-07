__int64 __fastcall DirectComposition::CGenericTable<unsigned int,DirectComposition::CChannel,1952662340,1>::InsertObject(
        struct _RTL_GENERIC_TABLE *a1,
        int a2,
        __int64 a3)
{
  _DWORD Buffer[2]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v5; // [rsp+28h] [rbp-10h]

  Buffer[0] = a2;
  v5 = a3;
  Buffer[1] = 0;
  return RtlInsertElementGenericTable(a1, Buffer, 0x10u, 0LL) == 0LL ? 0xC0000017 : 0;
}
