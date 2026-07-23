/*
 * XREFs of ViThunkFindAllExportAddresses @ 0x140A4FF6C
 * Callers:
 *     VfThunkFindExportAddressAllTables @ 0x140A4FED0 (VfThunkFindExportAddressAllTables.c)
 * Callees:
 *     ViThunkFindExportAddress @ 0x140A50010 (ViThunkFindExportAddress.c)
 */

__int64 __fastcall ViThunkFindAllExportAddresses(__int64 a1, __int64 *a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // edi
  __int64 result; // rax
  _QWORD *v9; // rbx
  __int64 ExportAddress; // rax
  __int64 *v11; // rdx
  int v12; // [rsp+48h] [rbp+10h] BYREF

  v12 = 0;
  v4 = 0;
  result = *a2;
  if ( *a2 )
  {
    v9 = a2 + 3;
    do
    {
      ExportAddress = ViThunkFindExportAddress(a1, result, &v12);
      v11 = (__int64 *)v9[1];
      if ( v11 )
      {
        if ( *v11 )
        {
          if ( *v11 == 1 && ExportAddress != 1 )
            *v11 = 0LL;
        }
        else
        {
          *v11 = ExportAddress;
        }
      }
      if ( v12 )
      {
        _bittestandreset(*(signed __int32 **)(a4 + 8), v4);
        *(_DWORD *)v9 |= 2u;
        ExportAddress = 0LL;
      }
      *(v9 - 1) = ExportAddress;
      ++v4;
      v9 = (_QWORD *)((char *)v9 + a3);
      result = *(v9 - 3);
    }
    while ( result );
  }
  return result;
}
