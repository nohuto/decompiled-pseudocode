__int64 __fastcall COREDEVICEACCESS::COREDEVICEACCESS(__int64 a1, __int64 a2, int a3, __int64 a4, char a5)
{
  char v7; // di
  __int64 v8; // rcx
  __int64 *v9; // rsi
  __int64 v10; // rax
  int v12; // edx
  int v13; // ecx
  int v14; // r8d

  v7 = 1;
  v8 = *(_QWORD *)(*(_QWORD *)(a2 + 16) + 16LL);
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 24) = v8;
  *(_BYTE *)(a1 + 32) = 0;
  if ( v8 )
  {
    _InterlockedAdd64((volatile signed __int64 *)(v8 + 24), 1uLL);
    *(_QWORD *)(a1 + 16) = -1LL;
  }
  v9 = (__int64 *)(a2 + 1880);
  if ( !a3 || (v10 = *v9) == 0 )
    v10 = *(_QWORD *)(*(_QWORD *)(a2 + 16) + 16LL);
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(a1 + 88) = v10;
  *(_BYTE *)(a1 + 96) = 0;
  if ( v10 )
  {
    _InterlockedAdd64((volatile signed __int64 *)(v10 + 24), 1uLL);
    *(_QWORD *)(a1 + 80) = -1LL;
  }
  *(_QWORD *)(a1 + 136) = a2;
  if ( a3 != 1 || a5 )
  {
    if ( !a3 )
    {
LABEL_10:
      v7 = 0;
      goto LABEL_11;
    }
  }
  else if ( !*v9 || !*(_QWORD *)(*v9 + 2920) )
  {
    WdLogSingleEntry1(1LL, 1363LL);
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
      McTemplateK0zqqzxxxxx_EtwWriteTransfer(
        v13,
        v12,
        v14,
        0,
        2,
        -1,
        (__int64)L"(AccessType != DXGDEVICEACCESS_RENDERANDDISPLAY) || ((pDevice->GetDisplayAdapter(VidPnSourceId) != NULL"
                  ") && pDevice->GetDisplayAdapter(VidPnSourceId)->IsDisplayAdapter())",
        83,
        0,
        0,
        0,
        0);
  }
  if ( *v9 == *(_QWORD *)(*(_QWORD *)(a2 + 16) + 16LL) || !*v9 )
    goto LABEL_10;
LABEL_11:
  *(_BYTE *)(a1 + 144) = v7;
  return a1;
}
