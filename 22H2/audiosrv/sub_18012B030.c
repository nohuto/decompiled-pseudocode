/*
 * XREFs of sub_18012B030 @ 0x18012B030
 * Callers:
 *     <none>
 * Callees:
 *     sub_180109778 @ 0x180109778 (sub_180109778.c)
 */

__int64 __fastcall sub_18012B030(__int64 a1, int a2, _DWORD *a3, _DWORD *a4, _DWORD *a5, _DWORD *a6)
{
  struct _RTL_CRITICAL_SECTION *v6; // rsi
  unsigned int v11; // ebx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  _DWORD *v15; // rcx
  int v16; // r12d
  __int64 v18; // [rsp+40h] [rbp-10h] BYREF
  __int64 v19; // [rsp+48h] [rbp-8h] BYREF
  __int64 v20; // [rsp+80h] [rbp+30h] BYREF

  v6 = (struct _RTL_CRITICAL_SECTION *)(a1 + 56);
  v11 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 56));
  if ( v6 )
    LeaveCriticalSection(v6);
  v14 = *(_QWORD *)(a1 + 48);
  if ( v14 )
  {
    if ( a3 && a4 && (v15 = a5) != 0LL )
    {
      v16 = a2 & 0x3FFFD | 2;
      *(double *)&v20 = (double)v16;
      *a3 = *(_OWORD *)(v14 + 16LL * (((unsigned int)HIDWORD(COERCE_UNSIGNED_INT64((double)v16)) >> 20) - 1024));
      *a4 = *(_DWORD *)(*(_QWORD *)(a1 + 48)
                      + 16LL * (((unsigned int)HIDWORD(COERCE_UNSIGNED_INT64((double)v16)) >> 20) - 1024)
                      + 4);
      *v15 = *(_DWORD *)(*(_QWORD *)(a1 + 48)
                       + 16LL * (((unsigned int)HIDWORD(COERCE_UNSIGNED_INT64((double)v16)) >> 20) - 1024)
                       + 8);
      if ( a6 )
        *a6 = *(_DWORD *)(*(_QWORD *)(a1 + 48)
                        + 16LL * (((unsigned int)HIDWORD(COERCE_UNSIGNED_INT64((double)v16)) >> 20) - 1024)
                        + 12);
    }
    else
    {
      if ( (unsigned int)dword_18019C480 > 2 )
      {
        LODWORD(v20) = -2147024809;
        v19 = (__int64)"SpatialAudioEncoderProperties::GetEncoderStaticObjectPositionAndVolume";
        LODWORD(v18) = 479;
        sub_180109778(
          (__int64)&dword_18019C480,
          byte_18016C12C,
          v12,
          v13,
          (const CHAR **)&v19,
          (__int64)&v18,
          (__int64)&v20);
      }
      return (unsigned int)-2147024809;
    }
  }
  else
  {
    if ( (unsigned int)dword_18019C480 > 2 )
    {
      LODWORD(v20) = -2147418113;
      v19 = (__int64)"SpatialAudioEncoderProperties::GetEncoderStaticObjectPositionAndVolume";
      LODWORD(v18) = 478;
      sub_180109778(
        (__int64)&dword_18019C480,
        byte_18016C12C,
        v12,
        v13,
        (const CHAR **)&v19,
        (__int64)&v18,
        (__int64)&v20);
    }
    return (unsigned int)-2147418113;
  }
  return v11;
}
