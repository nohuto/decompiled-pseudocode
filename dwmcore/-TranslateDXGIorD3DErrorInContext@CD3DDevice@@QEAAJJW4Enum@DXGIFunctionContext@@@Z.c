__int64 __fastcall CD3DDevice::TranslateDXGIorD3DErrorInContext(__int64 a1, int a2, int a3)
{
  int v4; // ebx
  unsigned int v6; // ecx
  int v8; // eax
  int v9; // [rsp+48h] [rbp+10h] BYREF

  v4 = a2;
  if ( *(_DWORD *)(a1 + 1088) || a2 != -2005532292 && a2 != -2147024882 && a2 != -2005270523 || !*(_DWORD *)(a1 + 448) )
  {
LABEL_5:
    if ( v4 >= 0 )
      goto LABEL_6;
    goto LABEL_14;
  }
  if ( a2 != -2005270523
    || (v8 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 552) + 312LL))(*(_QWORD *)(a1 + 552)),
        *(_DWORD *)(a1 + 1088) = -2003304307,
        v8 == -2005270480) )
  {
    CD2DContext::TempDisableHardwareProtection((CD2DContext *)(a1 + 16));
    goto LABEL_5;
  }
LABEL_14:
  if ( *(int *)(a1 + 1088) < 0 )
    return *(unsigned int *)(a1 + 1088);
LABEL_6:
  if ( TranslateDXGIorD3DErrorInContext(v4, a3, &v9) )
  {
    v4 = v9;
    if ( v9 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v9, 0xB38u, 0LL);
  }
  if ( v4 == -2003304307 )
    *(_DWORD *)(a1 + 1088) = -2003304307;
  return (unsigned int)v4;
}
