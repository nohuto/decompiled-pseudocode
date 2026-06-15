/*
 * XREFs of sub_180045300 @ 0x180045300
 * Callers:
 *     <none>
 * Callees:
 *     sub_180109778 @ 0x180109778 (sub_180109778.c)
 */

__int64 __fastcall sub_180045300(__int64 a1, _DWORD *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // r14
  unsigned int v5; // ebx
  __int64 v7; // [rsp+70h] [rbp+30h] BYREF
  __int64 v8; // [rsp+80h] [rbp+40h] BYREF
  __int64 v9; // [rsp+88h] [rbp+48h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)(a1 + 64);
  v5 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 64));
  if ( v2 )
    LeaveCriticalSection(v2);
  if ( *(_DWORD *)(a1 + 512) )
  {
    if ( a2 )
    {
      *a2 = *(_DWORD *)(a1 + 424);
    }
    else
    {
      if ( (unsigned int)dword_18019C480 > 2 )
      {
        LODWORD(v7) = -2147024809;
        v9 = (__int64)"SpatialAudioDevicePropertyReader::GetSpatialAudioEncoderDescriptorCount";
        LODWORD(v8) = 672;
        sub_180109778((int)&dword_18019C480, (__int64)&v9, (__int64)&v8, (__int64)&v7);
      }
      return (unsigned int)-2147024809;
    }
  }
  else
  {
    if ( (unsigned int)dword_18019C480 > 2 )
    {
      LODWORD(v7) = -2147418113;
      v9 = (__int64)"SpatialAudioDevicePropertyReader::GetSpatialAudioEncoderDescriptorCount";
      LODWORD(v8) = 671;
      sub_180109778((int)&dword_18019C480, (__int64)&v9, (__int64)&v8, (__int64)&v7);
    }
    return (unsigned int)-2147418113;
  }
  return v5;
}
