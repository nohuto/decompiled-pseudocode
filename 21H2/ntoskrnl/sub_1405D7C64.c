/*
 * XREFs of sub_1405D7C64 @ 0x1405D7C64
 * Callers:
 *     WbGetInitializedEncryptionSegment @ 0x1405D702C (WbGetInitializedEncryptionSegment.c)
 * Callees:
 *     sub_1403F9834 @ 0x1403F9834 (sub_1403F9834.c)
 *     RtlCompareMemory @ 0x140408390 (RtlCompareMemory.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     sub_1405E6550 @ 0x1405E6550 (sub_1405E6550.c)
 *     sub_1405E6C44 @ 0x1405E6C44 (sub_1405E6C44.c)
 *     WbAlloc @ 0x140642A24 (WbAlloc.c)
 */

__int64 __fastcall sub_1405D7C64(int *a1, __int64 a2, __int64 a3)
{
  int v6; // r14d
  unsigned __int64 v7; // r9
  unsigned int v8; // ecx
  signed int v9; // ebx
  unsigned int v10; // eax
  unsigned int v11; // esi
  unsigned __int64 v12; // rax
  unsigned int v13; // ecx
  unsigned int v14; // eax
  void **v15; // r14
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rdx
  _DWORD *v18; // rdx
  unsigned int v19; // ecx
  int v20; // eax
  unsigned int v21; // eax
  const void *v22; // r14
  unsigned __int64 v23; // rax
  unsigned int v24; // esi
  unsigned __int64 v25; // rcx
  SIZE_T Length; // [rsp+30h] [rbp-58h]
  unsigned int *Source1; // [rsp+38h] [rbp-50h]

  v6 = *a1;
  if ( *a1 == 1 )
  {
    Source1 = (unsigned int *)*((_QWORD *)a1 + 1);
    v7 = 16LL * Source1[60];
    v8 = -1;
    if ( v7 <= 0xFFFFFFFF )
      v8 = 16 * Source1[60];
    v9 = v7 > 0xFFFFFFFF ? 0xC0000095 : 0;
    if ( v7 > 0xFFFFFFFF )
      goto LABEL_45;
    v10 = v8 + 248;
    v11 = -1;
    if ( v8 + 248 >= v8 )
      v11 = v8 + 248;
    v9 = v10 < v8 ? 0xC0000095 : 0;
    if ( v10 < v8 )
      goto LABEL_45;
    Length = 248LL;
  }
  else
  {
    sub_1403F9834();
    if ( v6 )
    {
      v9 = -1073741811;
      goto LABEL_45;
    }
    Source1 = (unsigned int *)*((_QWORD *)a1 + 1);
    v12 = 12LL * Source1[60];
    v13 = -1;
    if ( v12 <= 0xFFFFFFFF )
      v13 = 12 * Source1[60];
    v9 = v12 > 0xFFFFFFFF ? 0xC0000095 : 0;
    if ( v12 > 0xFFFFFFFF )
      goto LABEL_45;
    v14 = v13 + 244;
    v11 = -1;
    if ( v13 + 244 >= v13 )
      v11 = v13 + 244;
    v9 = v14 < v13 ? 0xC0000095 : 0;
    if ( v14 < v13 )
      goto LABEL_45;
    Length = 244LL;
  }
  *(_DWORD *)(a3 + 48) = v6;
  *(_DWORD *)(a3 + 52) = a1[1];
  v15 = (void **)(a3 + 56);
  v9 = WbAlloc(v11);
  if ( v9 >= 0 )
  {
    if ( v11 )
    {
      v16 = *(_QWORD *)(a2 + 8);
      v17 = v16 + v11;
      if ( v17 > 0x7FFFFFFF0000LL || v17 < v16 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    memmove(*v15, *(const void **)(a2 + 8), v11);
    v9 = sub_1405E6550(*(PVOID *)(a2 + 8));
    if ( v9 >= 0 )
    {
      v9 = sub_1405E6C44(*v15);
      if ( v9 >= 0 )
      {
        if ( RtlCompareMemory(Source1, *v15, Length) != Length )
        {
          v9 = -1073741811;
          goto LABEL_45;
        }
        if ( *(_DWORD *)(a3 + 48) == 1 )
        {
          v18 = *v15;
          *(_QWORD *)(a3 + 32) = *(_QWORD *)(a2 + 8) - (*((_DWORD *)*v15 + 10) & 0xFFFFFFF);
          v19 = v18[12];
          v20 = v18[11];
        }
        else
        {
          sub_1403F9834();
          if ( *(_DWORD *)(a3 + 48) )
          {
            v9 = -1073741811;
            goto LABEL_45;
          }
          *(_QWORD *)(a3 + 32) = *(_QWORD *)(a2 + 8) - (*((_DWORD *)*v15 + 10) & 0xFFFFFFF);
          sub_1403F9834();
          if ( *(_DWORD *)(a3 + 48) )
          {
            v9 = -1073741811;
            goto LABEL_45;
          }
          v19 = *((_DWORD *)*v15 + 12);
          v20 = *((_DWORD *)*v15 + 11);
        }
        v21 = v20 & 0xFFFFFFF;
        if ( !v19 )
        {
LABEL_41:
          *(_DWORD *)(a3 + 16) = 1;
          goto LABEL_45;
        }
        v22 = (const void *)(*(_QWORD *)(a3 + 32) + v21);
        v23 = 4LL * v19;
        v24 = -1;
        if ( v23 <= 0xFFFFFFFF )
          v24 = 4 * v19;
        v9 = v23 > 0xFFFFFFFF ? 0xC0000095 : 0;
        if ( v23 <= 0xFFFFFFFF )
        {
          if ( v24 )
          {
            v25 = (unsigned __int64)v22 + v24;
            if ( v25 > 0x7FFFFFFF0000LL || v25 < (unsigned __int64)v22 )
              MEMORY[0x7FFFFFFF0000] = 0;
          }
          v9 = WbAlloc(v24);
          if ( v9 >= 0 )
          {
            memmove(*(void **)(a3 + 40), v22, v24);
            goto LABEL_41;
          }
        }
      }
    }
  }
LABEL_45:
  *(_DWORD *)(a3 + 20) = v9;
  return (unsigned int)v9;
}
