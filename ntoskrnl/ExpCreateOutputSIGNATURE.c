/*
 * XREFs of ExpCreateOutputSIGNATURE @ 0x1409F9388
 * Callers:
 *     ExpTranslateEfiPath @ 0x14083EF60 (ExpTranslateEfiPath.c)
 *     ExpTranslateNtPath @ 0x1409FB67C (ExpTranslateNtPath.c)
 * Callees:
 *     swprintf_s @ 0x1403D8840 (swprintf_s.c)
 *     wcscat_s @ 0x1403DA170 (wcscat_s.c)
 *     wcscpy_s @ 0x1403DA210 (wcscpy_s.c)
 *     RtlStringFromGUIDEx @ 0x140733E90 (RtlStringFromGUIDEx.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExpCreateOutputSIGNATURE(
        __int64 a1,
        unsigned int *a2,
        unsigned int *a3,
        unsigned int *a4,
        _QWORD *a5,
        _QWORD *a6,
        wchar_t *a7,
        char a8)
{
  unsigned int v8; // edi
  __int64 v10; // rsi
  unsigned int v11; // ebx
  __int64 v12; // rbp
  unsigned int v13; // r12d
  __int64 v14; // r15
  __int64 v15; // r14
  __int64 result; // rax
  __int64 v17; // rax
  __int64 v18; // r14
  __int64 v19; // rsi
  __int128 v20; // [rsp+30h] [rbp-48h] BYREF
  unsigned int *v21; // [rsp+88h] [rbp+10h]

  v21 = a2;
  v8 = 93;
  v20 = 0LL;
  if ( a8 != 1 )
    v8 = 63;
  v10 = -1LL;
  v11 = 0;
  if ( a7 )
  {
    v12 = -1LL;
    do
      ++v12;
    while ( a7[v12] );
    v8 += v12;
  }
  else
  {
    LODWORD(v12) = 0;
  }
  v13 = 2 * v8 + 12;
  if ( *a2 >= v13 )
  {
    v14 = a1 + 12;
    *(_DWORD *)a1 = 1;
    *(_DWORD *)(a1 + 4) = v13;
    *(_DWORD *)(a1 + 8) = 2;
    wcscpy_s((wchar_t *)(a1 + 12), v8, L"signature(");
    v15 = -1LL;
    do
      ++v15;
    while ( *(_WORD *)(v14 + 2 * v15) );
    if ( a8 == 1 )
    {
      result = RtlStringFromGUIDEx(a3, (__int64)&v20, 1);
      if ( (int)result < 0 )
        return result;
      wcscat_s((wchar_t *)(v14 + 2LL * (unsigned int)v15), v8 - (unsigned int)v15, *((const wchar_t **)&v20 + 1));
      ExFreePoolWithTag(*((PVOID *)&v20 + 1), 0);
      LODWORD(v17) = (unsigned __int16)v20 >> 1;
    }
    else
    {
      swprintf_s((wchar_t *)(v14 + 2LL * (unsigned int)v15), v8 - (unsigned int)v15, L"%08x", *a3);
      v17 = -1LL;
      do
        ++v17;
      while ( *(_WORD *)(v14 + 2LL * (unsigned int)v15 + 2 * v17) );
    }
    v18 = (unsigned int)(v17 + v15);
    swprintf_s((wchar_t *)(v14 + 2 * v18), v8 - (unsigned int)v18, L"-%08x-%016I64x-%016I64x)", *a4, *a5, *a6);
    do
      ++v10;
    while ( *(_WORD *)(v14 + 2 * v18 + 2 * v10) );
    v19 = (unsigned int)(v18 + v10);
    if ( (_DWORD)v12 )
      wcscpy_s((wchar_t *)(v14 + 2 * v19), v8 - (unsigned int)v19, a7);
    a2 = v21;
  }
  else
  {
    v11 = -1073741789;
  }
  *a2 = v13;
  return v11;
}
