/*
 * XREFs of sub_1801286F0 @ 0x1801286F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180109778 @ 0x180109778 (sub_180109778.c)
 */

__int64 __fastcall sub_1801286F0(__int64 a1, __int128 *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbp
  unsigned int v5; // ebx
  __int64 v6; // r8
  __int64 v7; // r9
  __int128 v8; // xmm0
  __int64 v10; // [rsp+60h] [rbp+8h] BYREF
  __int64 v11; // [rsp+68h] [rbp+10h] BYREF
  __int64 v12; // [rsp+70h] [rbp+18h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)(a1 + 64);
  v5 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 64));
  if ( v2 )
    LeaveCriticalSection(v2);
  if ( a2 )
  {
    if ( *(_DWORD *)(a1 + 432) )
    {
      if ( *(_DWORD *)(a1 + 512) )
        v8 = *(_OWORD *)(a1 + 444);
      else
        v8 = *(_OWORD *)(a1 + 108);
    }
    else
    {
      v8 = xmmword_18015B730;
    }
    *a2 = v8;
  }
  else
  {
    if ( (unsigned int)dword_18019C480 > 2 )
    {
      LODWORD(v10) = -2147024809;
      v12 = (__int64)"SpatialAudioDevicePropertyReader::GetUserSelectedSpatialAudioEncoderId";
      LODWORD(v11) = 893;
      sub_180109778(
        (__int64)&dword_18019C480,
        byte_18016C12C,
        v6,
        v7,
        (const CHAR **)&v12,
        (__int64)&v11,
        (__int64)&v10);
    }
    return (unsigned int)-2147024809;
  }
  return v5;
}
