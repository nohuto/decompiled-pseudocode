/*
 * XREFs of sub_18012BF30 @ 0x18012BF30
 * Callers:
 *     <none>
 * Callees:
 *     memcpy @ 0x18007443F (memcpy.c)
 *     sub_180109778 @ 0x180109778 (sub_180109778.c)
 */

__int64 __fastcall sub_18012BF30(__int64 a1, void *a2, unsigned int a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rbp
  size_t v4; // r14
  unsigned int v7; // ebx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v11; // [rsp+70h] [rbp+8h] BYREF
  __int64 v12; // [rsp+78h] [rbp+10h] BYREF
  __int64 v13; // [rsp+88h] [rbp+20h] BYREF

  v3 = (struct _RTL_CRITICAL_SECTION *)(a1 + 48);
  v4 = a3;
  v7 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 48));
  if ( v3 )
    LeaveCriticalSection(v3);
  if ( a2 && (v8 = v4, v4 == 2LL * *(unsigned int *)(a1 + 96)) )
  {
    memcpy(a2, *(const void **)(a1 + 88), v4);
  }
  else
  {
    if ( (unsigned int)dword_18019C480 > 2 )
    {
      LODWORD(v11) = -2147024809;
      v13 = (__int64)"SpatialAudioMetadataDictionaryData::CopyDictionaryData";
      LODWORD(v12) = 194;
      sub_180109778(
        (__int64)&dword_18019C480,
        byte_18016C12C,
        v8,
        v9,
        (const CHAR **)&v13,
        (__int64)&v12,
        (__int64)&v11);
    }
    return (unsigned int)-2147024809;
  }
  return v7;
}
