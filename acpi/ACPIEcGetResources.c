/*
 * XREFs of ACPIEcGetResources @ 0x1C0083774
 * Callers:
 *     ACPIEcStartDeviceWorker @ 0x1C00256A0 (ACPIEcStartDeviceWorker.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ACPIEcGetResources(_DWORD *a1, _DWORD *a2, __int64 a3)
{
  int v3; // r9d
  unsigned int v6; // r11d
  _DWORD *v7; // rdx
  __int64 v8; // r10
  unsigned int v9; // ecx
  _DWORD *i; // rax

  v3 = 0;
  if ( !a1 )
    return 2147483674LL;
  if ( !*a1 )
    return 3221225473LL;
  v6 = 0;
  if ( a1[4] )
  {
    v7 = a1 + 5;
    do
    {
      if ( *(_BYTE *)v7 == 1 )
      {
        v8 = (unsigned int)v7[1];
        if ( v6 )
        {
          if ( v6 == 1 )
          {
            *(_QWORD *)(a3 + 32) = v8;
            *(_QWORD *)(a3 + 40) = v8;
          }
        }
        else
        {
          *(_QWORD *)(a3 + 24) = v8;
        }
      }
      if ( *(_BYTE *)v7 == 2 && !*(_DWORD *)(a3 + 900) )
      {
        *(_DWORD *)(a3 + 900) = v7[2];
        *(_BYTE *)(a3 + 804) = 1;
      }
      ++v6;
      v7 += 5;
    }
    while ( v6 < a1[4] );
  }
  if ( *a2 )
  {
    if ( *(_BYTE *)(a3 + 804) )
    {
      v9 = a2[4];
      if ( v9 )
      {
        for ( i = a2 + 5; *(_BYTE *)i != 2; i += 5 )
        {
          if ( ++v3 >= v9 )
            return 0LL;
        }
        *(_OWORD *)(a3 + 880) = *(_OWORD *)i;
        *(_DWORD *)(a3 + 896) = i[4];
      }
    }
  }
  return 0LL;
}
