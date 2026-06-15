/*
 * XREFs of sub_180127AF0 @ 0x180127AF0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180109778 @ 0x180109778 (sub_180109778.c)
 */

__int64 __fastcall sub_180127AF0(__int64 a1, _OWORD *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // r14
  unsigned int v5; // ebx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v9; // [rsp+70h] [rbp+30h] BYREF
  __int64 v10; // [rsp+80h] [rbp+40h] BYREF
  __int64 v11; // [rsp+88h] [rbp+48h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)(a1 + 64);
  v5 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 64));
  if ( v2 )
    LeaveCriticalSection(v2);
  if ( *(_DWORD *)(a1 + 512) )
  {
    if ( a2 )
    {
      *a2 = *(_OWORD *)(a1 + 476);
    }
    else
    {
      if ( (unsigned int)dword_18019C480 > 2 )
      {
        LODWORD(v9) = -2147024809;
        v11 = (__int64)"SpatialAudioDevicePropertyReader::GetDefaultSpatialAudioEncoderId";
        LODWORD(v10) = 837;
        sub_180109778(
          (__int64)&dword_18019C480,
          byte_18016C12C,
          v6,
          v7,
          (const CHAR **)&v11,
          (__int64)&v10,
          (__int64)&v9);
      }
      return (unsigned int)-2147024809;
    }
  }
  else
  {
    if ( (unsigned int)dword_18019C480 > 2 )
    {
      LODWORD(v9) = -2147418113;
      v11 = (__int64)"SpatialAudioDevicePropertyReader::GetDefaultSpatialAudioEncoderId";
      LODWORD(v10) = 836;
      sub_180109778((__int64)&dword_18019C480, byte_18016C12C, v6, v7, (const CHAR **)&v11, (__int64)&v10, (__int64)&v9);
    }
    return (unsigned int)-2147418113;
  }
  return v5;
}
