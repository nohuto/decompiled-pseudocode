/*
 * XREFs of ?SetTestControl@RAPID_HPD_MANAGER@@QEAAXW4RAPID_HPD_TEST_OVERRIDE@@@Z @ 0x1C004C5D0
 * Callers:
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x1C030302C (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 * Callees:
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x1C0042014 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 */

void __fastcall RAPID_HPD_MANAGER::SetTestControl(__int64 a1, int a2)
{
  int v4; // edx
  int v5; // ecx
  int v6; // r8d

  if ( a2 )
  {
    if ( a2 == 1 && *(_DWORD *)(a1 + 88) != 1 )
    {
      *(_QWORD *)(a1 + 56) = MEMORY[0xFFFFF78000000014];
      if ( ExUuidCreate((UUID *)(a1 + 36)) < 0 )
      {
        WdLogSingleEntry1(2LL, 34LL);
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
          McTemplateK0zqqzxxxxx_EtwWriteTransfer(
            v5,
            v4,
            v6,
            0LL,
            0,
            -1,
            L"Failed to create new activity ID, hack to just increment current Id to make new",
            34LL,
            0LL,
            0LL,
            0LL,
            0LL);
        ++*(_BYTE *)(a1 + 44);
      }
      *(_QWORD *)(a1 + 72) = *(_QWORD *)(a1 + 56);
      *(_DWORD *)(a1 + 52) = 1;
      *(_DWORD *)(a1 + 80) = 4;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 52) = 0;
    *(_QWORD *)(a1 + 56) = 0LL;
    *(_OWORD *)(a1 + 36) = 0LL;
  }
  *(_DWORD *)(a1 + 88) = a2;
}
