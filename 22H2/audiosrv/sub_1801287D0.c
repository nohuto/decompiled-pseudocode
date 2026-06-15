/*
 * XREFs of sub_1801287D0 @ 0x1801287D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180109778 @ 0x180109778 (sub_180109778.c)
 *     sub_1801272EC @ 0x1801272EC (sub_1801272EC.c)
 */

__int64 __fastcall sub_1801287D0(__int64 a1, _DWORD *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbp
  unsigned int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 *v9; // rcx
  __int64 v11; // [rsp+60h] [rbp+8h] BYREF
  __int64 v12; // [rsp+68h] [rbp+10h] BYREF
  __int64 v13; // [rsp+70h] [rbp+18h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)(a1 + 64);
  v5 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 64));
  if ( v2 )
    LeaveCriticalSection(v2);
  if ( a2 )
  {
    if ( *(_DWORD *)(a1 + 432) )
    {
      v9 = (__int64 *)(a1 + 444);
      if ( !*(_DWORD *)(a1 + 512) )
        v9 = (__int64 *)(a1 + 108);
      *a2 = sub_1801272EC(v9, v6, v7, v8);
    }
    else
    {
      *a2 = 0;
    }
  }
  else
  {
    if ( (unsigned int)dword_18019C480 > 2 )
    {
      LODWORD(v11) = -2147024809;
      v13 = (__int64)"SpatialAudioDevicePropertyReader::GetUserSelectedSpatialAudioRenderingMode";
      LODWORD(v12) = 869;
      sub_180109778(
        (__int64)&dword_18019C480,
        byte_18016C12C,
        v7,
        v8,
        (const CHAR **)&v13,
        (__int64)&v12,
        (__int64)&v11);
    }
    return (unsigned int)-2147024809;
  }
  return v5;
}
