BOOL __stdcall EngAssociateSurface(HSURF hsurf, HDEV hdev, FLONG flHooks)
{
  BOOL v3; // edi
  FLONG v4; // esi
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rax

  v3 = 0;
  v4 = flHooks & 0xFFFFB7EF;
  if ( hdev )
  {
    v6 = HmgShareLockCheckIgnoreStockBit((unsigned int)hsurf, 5);
    v7 = v6;
    if ( v6 )
    {
      v8 = *(unsigned int *)(v6 + 112);
      if ( (v8 & 0x200000) != 0 )
      {
        *(_QWORD *)(v7 + 136) = 0LL;
        SURFACE::hdev((SURFACE *)v7, hdev);
        SURFACE::dhpdev((SURFACE *)v7, *((struct DHPDEV__ **)hdev + 221));
        *(_DWORD *)(v7 + 112) |= v4;
        v3 = 1;
LABEL_5:
        HmgDecrementShareReferenceCountEx((int *)v7, 0LL);
        return v3;
      }
      TraceLoggingWriteUnsupportedGdiUsage(3LL, v8, 0LL);
    }
    if ( !v7 )
      return v3;
    goto LABEL_5;
  }
  return v3;
}
