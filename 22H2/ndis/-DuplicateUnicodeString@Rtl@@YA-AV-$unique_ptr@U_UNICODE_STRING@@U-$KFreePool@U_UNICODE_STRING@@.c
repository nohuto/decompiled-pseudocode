/*
 * XREFs of ?DuplicateUnicodeString@Rtl@@YA?AV?$unique_ptr@U_UNICODE_STRING@@U?$KFreePool@U_UNICODE_STRING@@@@@wistd@@AEBU_UNICODE_STRING@@K@Z @ 0x1C010A330
 * Callers:
 *     ?ndisCreateAdapterInstanceName@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAPEAU_UNICODE_STRING@@1@Z @ 0x1C010A04C (-ndisCreateAdapterInstanceName@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAPEAU_UNICODE_STRING@@1@Z.c)
 *     ndisMiniportQueryInterfaceProperty @ 0x1C01175A0 (ndisMiniportQueryInterfaceProperty.c)
 * Callees:
 *     memmove @ 0x1C0040840 (memmove.c)
 *     ??$MakeSizedPoolPtr@U_UNICODE_STRING@@@@YA?AV?$unique_ptr@U_UNICODE_STRING@@U?$KFreePool@U_UNICODE_STRING@@@@@wistd@@K_K@Z @ 0x1C010A3B8 (--$MakeSizedPoolPtr@U_UNICODE_STRING@@@@YA-AV-$unique_ptr@U_UNICODE_STRING@@U-$KFreePool@U_UNICO.c)
 */

_QWORD *__fastcall Rtl::DuplicateUnicodeString(_QWORD *a1, const void **a2)
{
  __int64 v4; // rbx
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  if ( (unsigned __int64)*((unsigned __int16 *)a2 + 1) + 16 < *((unsigned __int16 *)a2 + 1) )
  {
    *a1 = 0LL;
  }
  else
  {
    MakeSizedPoolPtr<_UNICODE_STRING>(&v6);
    v4 = v6;
    if ( v6 )
    {
      *(_QWORD *)(v6 + 8) = v6 + 16;
      *(_WORD *)v4 = *(_WORD *)a2;
      *(_WORD *)(v4 + 2) = *((_WORD *)a2 + 1);
      memmove(*(void **)(v4 + 8), a2[1], *(unsigned __int16 *)a2);
      *a1 = v4;
    }
    else
    {
      *a1 = 0LL;
    }
  }
  return a1;
}
