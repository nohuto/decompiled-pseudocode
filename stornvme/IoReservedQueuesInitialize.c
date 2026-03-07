char __fastcall IoReservedQueuesInitialize(__int64 a1)
{
  int v1; // eax
  void **v3; // rbx
  void **v4; // rsi
  __int64 v5; // r9
  void *v6; // r8

  v1 = *(unsigned __int16 *)(a1 + 918);
  if ( (_WORD)v1 )
  {
    v3 = (void **)(a1 + 904);
    StorPortExtendedFunction(0LL, a1, (unsigned int)(48 * v1), 1701672526LL);
    v4 = (void **)(a1 + 896);
    StorPortExtendedFunction(0LL, a1, 48 * (unsigned int)*(unsigned __int16 *)(a1 + 918), 1701672526LL);
    v6 = *v3;
    if ( *v3 )
    {
      if ( *v4 )
      {
        NVMeZeroMemory(*v3, 48 * *(unsigned __int16 *)(a1 + 918));
        NVMeZeroMemory(*v4, 48 * *(unsigned __int16 *)(a1 + 918));
        return 1;
      }
      if ( v6 )
        StorPortExtendedFunction(1LL, a1, v6, v5);
    }
    if ( *v4 )
      StorPortExtendedFunction(1LL, a1, *v4, v5);
  }
  return 0;
}
