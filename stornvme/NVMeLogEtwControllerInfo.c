__int64 __fastcall NVMeLogEtwControllerInfo(__int64 a1)
{
  __int64 result; // rax
  _DWORD v3[170]; // [rsp+D0h] [rbp-2B8h] BYREF

  memset(v3, 0, sizeof(v3));
  result = FillControllerConfiguration(a1, v3);
  if ( *(_BYTE *)(a1 + 22) )
    result = StorPortExtendedFunction(105LL, a1, 0LL, 1LL);
  if ( *(_BYTE *)(a1 + 4032) )
  {
    if ( *(_BYTE *)(a1 + 22) )
      return StorPortExtendedFunction(87LL, a1, 0LL, 1LL);
  }
  return result;
}
