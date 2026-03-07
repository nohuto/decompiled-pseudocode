__int64 __fastcall DpiGetVgaStatus(__int64 a1)
{
  __int64 v1; // rbx
  __int64 result; // rax
  char v3; // dl

  v1 = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 1112LL);
  result = DpiFdoDetectVgaDeviceInCapabilities();
  if ( (int)result >= 0 )
  {
    v3 = *(_BYTE *)(v1 + 11);
    if ( (v3 || *(_BYTE *)(v1 + 10) != 1) && (v3 != 3 || *(_BYTE *)(v1 + 10)) )
      return 3221225473LL;
  }
  return result;
}
