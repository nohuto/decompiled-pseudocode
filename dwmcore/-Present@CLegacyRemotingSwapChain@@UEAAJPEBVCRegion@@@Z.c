__int64 __fastcall CLegacyRemotingSwapChain::Present(CD3DDevice **this, const struct CRegion *a2)
{
  HGDIOBJ v2; // rsi
  _DWORD **v5; // rbx
  int updated; // eax
  __int64 v7; // rcx
  unsigned int v8; // edi
  int HRGN; // eax
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rcx
  int v14; // eax
  __int64 v15; // rcx
  HGDIOBJ ho; // [rsp+50h] [rbp+8h] BYREF

  v2 = 0LL;
  ho = 0LL;
  if ( *((int *)g_pComposition + 276) > 3 )
  {
    v8 = -2003304309;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, -2003304309, 0xF3u, 0LL);
    v5 = (_DWORD **)(this + 16);
  }
  else
  {
    CD3DDevice::Flush(this[9]);
    v5 = (_DWORD **)(this + 16);
    if ( *(_DWORD *)this[16] )
    {
      updated = CLegacyRemotingSwapChain::UpdateSectionBits((CLegacyRemotingSwapChain *)this);
      v8 = updated;
      if ( updated < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, updated, 0xE1u, 0LL);
        goto LABEL_10;
      }
    }
    if ( a2 )
    {
      HRGN = CRegion::CreateHRGN(a2, (HRGN *)&ho);
      v8 = HRGN;
      if ( HRGN >= 0 )
        goto LABEL_6;
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, HRGN, 0xE7u, 0LL);
    }
    else
    {
      v14 = CRegion::CreateHRGN((CRegion *)(this + 16), (HRGN *)&ho);
      v8 = v14;
      if ( v14 >= 0 )
      {
LABEL_6:
        v2 = ho;
        v11 = (*(__int64 (__fastcall **)(CD3DDevice *, HGDIOBJ, _QWORD, _QWORD))(*(_QWORD *)this[13] + 24LL))(
                this[13],
                ho,
                0LL,
                0LL);
        v8 = v11;
        if ( v11 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0xEEu, 0LL);
        goto LABEL_8;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0xEBu, 0LL);
    }
    v2 = ho;
  }
LABEL_8:
  if ( v2 )
    DeleteObject(v2);
LABEL_10:
  **v5 = 0;
  return v8;
}
