/*
 * XREFs of sub_18012CD20 @ 0x18012CD20
 * Callers:
 *     sub_180074F90 @ 0x180074F90 (sub_180074F90.c)
 * Callees:
 *     sub_180109778 @ 0x180109778 (sub_180109778.c)
 */

__int64 __fastcall sub_18012CD20(__int64 a1, _OWORD *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  unsigned int v5; // ebx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v9; // [rsp+60h] [rbp+8h] BYREF
  __int64 v10; // [rsp+68h] [rbp+10h] BYREF
  __int64 v11; // [rsp+70h] [rbp+18h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)(a1 + 56);
  v5 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 56));
  if ( v2 )
    LeaveCriticalSection(v2);
  if ( a2 )
  {
    *a2 = *(_OWORD *)(a1 + 104);
  }
  else
  {
    if ( (unsigned int)dword_18019C480 > 2 )
    {
      LODWORD(v9) = -2147024809;
      v11 = (__int64)"SpatialAudioMetadataDictionary::GetDictionaryMetadataFormatId";
      LODWORD(v10) = 304;
      sub_180109778((__int64)&dword_18019C480, byte_18016C12C, v6, v7, (const CHAR **)&v11, (__int64)&v10, (__int64)&v9);
    }
    return (unsigned int)-2147024809;
  }
  return v5;
}
