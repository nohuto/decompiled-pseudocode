__int64 __fastcall PnpiGrowResourceList(const void **a1, int *a2, int a3)
{
  int *v3; // rbx
  int v5; // eax
  unsigned int v6; // ebp
  unsigned int v7; // r14d
  int v8; // esi
  __int64 result; // rax
  __int64 Pool2; // rax

  v3 = a2;
  if ( *a1 && (v5 = *a2) != 0 )
  {
    v6 = 8 * v5;
    v7 = 8 * v5 + 64;
    v8 = v5 + 8;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_ddL(WPP_GLOBAL_Control->DeviceExtension, 4, a3, 32);
    result = ACPIInternalGrowBuffer(a1, v6, v7);
    if ( (int)result < 0 )
      v8 = 0;
  }
  else
  {
    v8 = 8;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 4;
      WPP_RECORDER_SF_dL(WPP_GLOBAL_Control->DeviceExtension, (_DWORD)a2, 14, 31);
    }
    Pool2 = ExAllocatePool2(256LL, 64LL, 1383097153LL);
    *a1 = (const void *)Pool2;
    if ( !Pool2 )
      return 3221225626LL;
    result = 0LL;
  }
  *v3 = v8;
  return result;
}
