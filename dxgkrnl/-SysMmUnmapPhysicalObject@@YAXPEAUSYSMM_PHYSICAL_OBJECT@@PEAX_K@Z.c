void __fastcall SysMmUnmapPhysicalObject(struct _MDL **a1, PVOID BaseAddress, SIZE_T NumberOfBytes)
{
  char v3; // si
  char v4; // di
  int v6; // edx
  int v7; // r8d
  int v8; // edx
  int v9; // ecx
  int v10; // r8d

  v3 = NumberOfBytes;
  v4 = (char)BaseAddress;
  switch ( (*((_DWORD *)a1 + 11) >> 1) & 0xF )
  {
    case 1:
      SmmUnmapSection(BaseAddress);
      break;
    case 2:
      SmmUnmapMdl((__int64)a1, a1[1], BaseAddress);
      break;
    case 3:
      MmUnmapIoSpace(BaseAddress, NumberOfBytes);
      break;
    default:
      if ( ((*((_DWORD *)a1 + 11) >> 1) & 0xFu) - 4 >= 2 )
      {
        WdLogSingleEntry1(1LL, 813LL);
        if ( bTracingEnabled )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
            McTemplateK0zqqzxxxxx_EtwWriteTransfer(0, v6, v7, 0LL, 2, -1, L"0", 813LL, 0LL, 0LL, 0LL, 0LL);
        }
      }
      break;
  }
  SysMmUnreferencePhysicalObject((struct SYSMM_PHYSICAL_OBJECT *)a1);
  if ( (Microsoft_Windows_DxgKrnl_SysMmEnableBits & 1) != 0 )
    McTemplateK0ppx_EtwWriteTransfer(v9, v8, v10, (_DWORD)a1, v4, v3);
}
