__int64 __fastcall EditionQueryInertiaWorker(struct tagPOINT a1, __int64 a2)
{
  unsigned int v4; // edi
  const struct tagWND *v5; // rsi
  const struct _D3DMATRIX *v6; // rdx
  const struct tagRECT *v7; // rcx
  struct tagPOINT v9; // [rsp+38h] [rbp+10h] BYREF

  v4 = 0;
  v5 = (const struct tagWND *)ValidateHwnd(*(_QWORD *)(a2 + 120));
  if ( (*(_DWORD *)(a2 + 184) & 4) != 0 )
  {
    v9 = a1;
    if ( !DCEHitTestWindow((const struct tagRECT *)(a2 + 40), (const struct _D3DMATRIX *)(a2 + 56), &v9, 0LL) )
      return 0LL;
  }
  if ( v5 && !(unsigned int)IsCompositionInputWindow(v5) )
    goto LABEL_16;
  if ( (*(_DWORD *)(a2 + 184) & 4) == 0 )
  {
    v9.x = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 147);
  }
  if ( v5 )
  {
LABEL_16:
    if ( !(unsigned int)IsCompositionInputWindow(v5) )
    {
      v6 = (const struct _D3DMATRIX *)*((_QWORD *)v5 + 27);
      v7 = (const struct tagRECT *)(*((_QWORD *)v5 + 5) + 88LL);
      v9 = a1;
      if ( !v6 )
      {
        LOBYTE(v4) = DCEPtInRect(v7, a1);
        return v4;
      }
      if ( !DCEHitTestWindow(v7, v6, &v9, 0LL) )
        return 0LL;
    }
  }
  return 1LL;
}
