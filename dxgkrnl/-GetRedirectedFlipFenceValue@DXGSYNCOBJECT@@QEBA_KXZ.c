/*
 * XREFs of ?GetRedirectedFlipFenceValue@DXGSYNCOBJECT@@QEBA_KXZ @ 0x1C0057E68
 * Callers:
 *     ?WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N4444@Z @ 0x1C0188F60 (-WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N4444@Z.c)
 * Callees:
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x1C0042014 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 */

unsigned __int64 __fastcall DXGSYNCOBJECT::GetRedirectedFlipFenceValue(DXGSYNCOBJECT *this)
{
  int v2; // edx
  int v3; // r8d

  if ( *((_DWORD *)this + 50) != 3 )
  {
    WdLogSingleEntry1(1LL, 351LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          0,
          v2,
          v3,
          0LL,
          2,
          -1,
          L"GetSyncObjectType() == D3DDDI_FENCE",
          351LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  return *((_QWORD *)this + 15);
}
