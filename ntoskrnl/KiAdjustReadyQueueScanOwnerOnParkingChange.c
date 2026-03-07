void __fastcall KiAdjustReadyQueueScanOwnerOnParkingChange(__int64 a1, __int64 a2, char a3, char *a4)
{
  __int64 v4; // rdi
  __int64 v6; // rcx
  char v7; // r11
  __int64 v8; // rbx
  unsigned __int64 v9; // rax
  char v10; // al
  __int64 v11; // rax

  v4 = *(_QWORD *)(a1 + 200);
  v6 = *(_QWORD *)(a1 + 34880);
  v7 = 0;
  if ( !v6 )
    goto LABEL_10;
  v8 = *(_QWORD *)(a1 + 34888);
  v9 = v6 & *(_QWORD *)(a2 + 80);
  if ( v9 )
  {
    if ( v9 == v4 )
    {
      *(_DWORD *)(KiProcessorBlock[KiProcessorNumberToIndexMappingTable[64
                                                                      * (unsigned __int64)*(unsigned __int8 *)(a1 + 208)
                                                                      + *(unsigned __int8 *)(v8 + 661)]]
                + 34896) = 0;
      v10 = *(_BYTE *)(a1 + 209);
      *(_DWORD *)(a1 + 34896) = 1;
    }
    else
    {
      if ( !*(_DWORD *)(a1 + 34896) || !a3 )
        goto LABEL_10;
      _BitScanReverse64(&v9, v9);
      v11 = KiProcessorBlock[KiProcessorNumberToIndexMappingTable[64 * *(unsigned __int8 *)(a1 + 208) + (unsigned int)v9]];
      *(_DWORD *)(a1 + 34896) = 0;
      *(_DWORD *)(v11 + 34896) = 1;
      v10 = *(_BYTE *)(v11 + 209);
    }
    *(_BYTE *)(v8 + 661) = v10;
  }
  else
  {
    v7 = 1;
  }
LABEL_10:
  if ( a4 )
    *a4 = v7;
}
