/*
 * XREFs of ?SetAdapterLuidInRemoteSession@DXGSESSIONDATA@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C001B734
 * Callers:
 *     DxgkReleaseAdapter @ 0x1C01E4CE0 (DxgkReleaseAdapter.c)
 *     DxgkGetAdapter @ 0x1C01E4D40 (DxgkGetAdapter.c)
 * Callees:
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x1C0042014 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 *     ?RemoveAdapterFromSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@@Z @ 0x1C01C5874 (-RemoveAdapterFromSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@@Z.c)
 *     ?AddAdapterToSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@PEAVDXGADAPTER@@PEAPEAVSESSION_ADAPTER@@@Z @ 0x1C01DAD84 (-AddAdapterToSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@PEAVDXGADAPTER@@PEAPEAVSESSION_ADAPTER@@@Z.c)
 */

void __fastcall DXGSESSIONDATA::SetAdapterLuidInRemoteSession(DXGSESSIONDATA *this, struct DXGADAPTER *a2)
{
  int v4; // edx
  int v5; // ecx
  int v6; // r8d

  if ( a2 )
  {
    if ( *((_DWORD *)this + 4627) == *((_DWORD *)a2 + 101) && *((_DWORD *)this + 4628) == *((_DWORD *)a2 + 102) )
    {
      ++*((_DWORD *)this + 4629);
    }
    else
    {
      *(_QWORD *)((char *)this + 18508) = *(_QWORD *)((char *)a2 + 404);
      *((_DWORD *)this + 4629) = 1;
      DXGSESSIONDATA::AddAdapterToSession(this, (const struct _LUID *)((char *)this + 18508), a2, 0LL);
    }
  }
  else
  {
    if ( !*((_DWORD *)this + 4629) )
    {
      WdLogSingleEntry1(1LL, 251LL);
      if ( bTracingEnabled )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
          McTemplateK0zqqzxxxxx_EtwWriteTransfer(
            v5,
            v4,
            v6,
            0,
            2,
            -1,
            (__int64)L"(m_NumOutputsInRemoteSession > 0)",
            251LL,
            0LL,
            0LL,
            0LL,
            0LL);
      }
    }
    if ( (*((_DWORD *)this + 4629))-- == 1 )
    {
      DXGSESSIONDATA::RemoveAdapterFromSession(this, (const struct _LUID *)((char *)this + 18508));
      *(_QWORD *)((char *)this + 18508) = 0LL;
    }
  }
}
