/*
 * XREFs of sub_180127C10 @ 0x180127C10
 * Callers:
 *     <none>
 * Callees:
 *     sub_180109778 @ 0x180109778 (sub_180109778.c)
 */

__int64 __fastcall sub_180127C10(__int64 a1, int a2, _DWORD *a3, _DWORD *a4, _DWORD *a5)
{
  struct _RTL_CRITICAL_SECTION *v5; // rdi
  unsigned int v10; // ebx
  __int64 v11; // r8
  __int64 v12; // r9
  _DWORD *v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v17; // [rsp+40h] [rbp-38h] BYREF
  __int64 v18; // [rsp+80h] [rbp+8h] BYREF
  __int64 v19; // [rsp+90h] [rbp+18h] BYREF

  v5 = (struct _RTL_CRITICAL_SECTION *)(a1 + 64);
  v10 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 64));
  if ( v5 )
    LeaveCriticalSection(v5);
  if ( a3 && a4 && (v13 = a5) != 0LL && (unsigned int)(a2 - 2) <= 0x1FFFE )
  {
    v14 = *(_QWORD *)(a1 + 56);
    *(double *)&v18 = (double)(a2 & 0x3FFFD | 2u);
    v15 = 2LL * (unsigned int)((HIDWORD(v18) >> 20) - 1024);
    *a3 = *(_OWORD *)(v14 + 16LL * (unsigned int)((HIDWORD(v18) >> 20) - 1024));
    *a4 = *(_DWORD *)(v14 + 8 * v15 + 8);
    *v13 = *(_DWORD *)(v14 + 8 * v15 + 4);
  }
  else
  {
    if ( (unsigned int)dword_18019C480 > 2 )
    {
      LODWORD(v18) = -2147024809;
      v17 = (__int64)"SpatialAudioDevicePropertyReader::GetEncoderStaticObjectPosition";
      LODWORD(v19) = 595;
      sub_180109778(
        (__int64)&dword_18019C480,
        byte_18016C12C,
        v11,
        v12,
        (const CHAR **)&v17,
        (__int64)&v19,
        (__int64)&v18);
    }
    return (unsigned int)-2147024809;
  }
  return v10;
}
