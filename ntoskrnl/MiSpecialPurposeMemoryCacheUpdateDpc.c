/*
 * XREFs of MiSpecialPurposeMemoryCacheUpdateDpc @ 0x14065E3C0
 * Callers:
 *     <none>
 * Callees:
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 */

__int64 __fastcall MiSpecialPurposeMemoryCacheUpdateDpc(
        __int64 a1,
        __int64 *a2,
        volatile signed __int32 *a3,
        __int64 a4)
{
  __int64 v4; // rcx
  signed __int32 v7; // eax
  unsigned int v8; // edi
  _QWORD *v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // r8
  _QWORD *v14; // rcx
  __int64 result; // rax
  unsigned int v16; // edi
  int v17; // [rsp+48h] [rbp+10h] BYREF
  int i; // [rsp+58h] [rbp+20h] BYREF

  v4 = *a2;
  v7 = _InterlockedDecrement((volatile signed __int32 *)a4);
  v8 = ~v7 & 0x80000000;
  if ( (v7 & 0x7FFFFFFF) != 0 )
  {
    v17 = 0;
    while ( (*(_DWORD *)a4 & 0x80000000) != v8 )
      KeYieldProcessorEx(&v17);
    goto LABEL_12;
  }
  *(_DWORD *)a4 = *(_DWORD *)(a4 + 4) | v8;
  if ( *((_DWORD *)a2 + 4) )
  {
    v9 = (_QWORD *)(v4 + 72);
    v10 = a2[1] + 16960;
    v11 = *(_QWORD *)v10;
    if ( *(_QWORD *)(*(_QWORD *)v10 + 8LL) == v10 )
    {
      *v9 = v11;
      v9[1] = v10;
      *(_QWORD *)(v11 + 8) = v9;
      *(_QWORD *)v10 = v9;
      goto LABEL_12;
    }
LABEL_8:
    __fastfail(3u);
  }
  v12 = *a2 + 72;
  v13 = *(_QWORD *)v12;
  if ( *(_QWORD *)(*(_QWORD *)v12 + 8LL) != v12 )
    goto LABEL_8;
  v14 = *(_QWORD **)(*a2 + 80);
  if ( *v14 != v12 )
    goto LABEL_8;
  *v14 = v13;
  *(_QWORD *)(v13 + 8) = v14;
  *(_QWORD *)(*a2 + 72) = 0LL;
LABEL_12:
  result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)a4);
  v16 = ~(_DWORD)result & 0x80000000;
  if ( (result & 0x7FFFFFFF) != 0 )
  {
    for ( i = 0; ; KeYieldProcessorEx(&i) )
    {
      result = *(_DWORD *)a4 & 0x80000000;
      if ( (_DWORD)result == v16 )
        break;
    }
  }
  else
  {
    *(_DWORD *)a4 = *(_DWORD *)(a4 + 4) | v16;
  }
  _InterlockedDecrement(a3);
  return result;
}
