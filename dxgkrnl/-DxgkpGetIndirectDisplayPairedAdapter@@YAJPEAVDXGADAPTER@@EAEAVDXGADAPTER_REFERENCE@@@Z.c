__int64 __fastcall DxgkpGetIndirectDisplayPairedAdapter(ADAPTER_DISPLAY **this, char a2, DXGADAPTER **a3)
{
  const struct _GUID *v6; // rdi
  struct _LUID *v7; // rdx
  bool IsAdapterSessionized; // al
  unsigned int *v9; // r8
  int DefaultRenderAdapterForSession; // eax
  __int64 v11; // rbp
  struct _LUID v13; // [rsp+50h] [rbp-28h] BYREF
  unsigned __int8 v14; // [rsp+80h] [rbp+8h] BYREF
  unsigned int v15; // [rsp+98h] [rbp+20h] BYREF

  DXGADAPTER_REFERENCE::Assign(a3, 0LL);
  v6 = 0LL;
  if ( this && (*((_DWORD *)this + 109) & 0x100) != 0 )
  {
    ADAPTER_DISPLAY::GetPairedRenderAdapter(this[365], a3, 0LL);
    if ( *a3 && a2 && (*((_DWORD *)*a3 + 50) != 1 || *((_BYTE *)*a3 + 2833)) )
      DXGADAPTER_REFERENCE::Assign(a3, 0LL);
    if ( !*a3 )
    {
      v13 = 0LL;
      v14 = 0;
      v15 = 0;
      IsAdapterSessionized = DXGADAPTER::IsAdapterSessionized((DXGADAPTER *)this, v7, &v15, 0LL);
      v9 = &v15;
      if ( !IsAdapterSessionized )
        v9 = 0LL;
      DefaultRenderAdapterForSession = DxgkpFindDefaultRenderAdapterForSession(&v13, a3, v9, (bool *)&v14);
      v11 = DefaultRenderAdapterForSession;
      if ( DefaultRenderAdapterForSession < 0 )
      {
        WdLogSingleEntry2(2LL, this, DefaultRenderAdapterForSession);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Failed to find the render adapter for display only adapter 0x%I64x (Status = 0x%I64x).",
          (__int64)this,
          v11,
          0LL,
          0LL,
          0LL);
        return (unsigned int)v11;
      }
      if ( v14 )
        v6 = (const struct _GUID *)((char *)*a3 + 308);
      ADAPTER_DISPLAY::SetPairedRenderAdapter(this[365], *a3, v6);
    }
    return 0LL;
  }
  else
  {
    WdLogSingleEntry2(2LL, this, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Caller specified adapter 0x%I64x is not an Indirect Display Adapter, returning 0x%I64x.",
      (__int64)this,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
}
