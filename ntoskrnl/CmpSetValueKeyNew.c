/*
 * XREFs of CmpSetValueKeyNew @ 0x1407A5CB0
 * Callers:
 *     CmSetValueKey @ 0x1407A9870 (CmSetValueKey.c)
 * Callees:
 *     CmpFreeValue @ 0x1406BAA4C (CmpFreeValue.c)
 *     CmpAddValueToListEx @ 0x1407A5A94 (CmpAddValueToListEx.c)
 *     CmpAddValueKeyNew @ 0x1407A5F18 (CmpAddValueKeyNew.c)
 *     HvpMarkCellDirty @ 0x1407D2460 (HvpMarkCellDirty.c)
 */

__int64 __fastcall CmpSetValueKeyNew(
        ULONG_PTR a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        int a5,
        __int64 a6,
        int a7,
        int a8)
{
  unsigned int *v8; // rbx
  int v11; // edi
  int v12; // ebp
  unsigned int v13; // ebx
  int v15; // [rsp+20h] [rbp-38h]
  unsigned int *v16; // [rsp+20h] [rbp-38h]
  unsigned int v17; // [rsp+68h] [rbp+10h] BYREF

  v17 = -1;
  v8 = (unsigned int *)(a2 + 36);
  if ( !*(_DWORD *)(a2 + 36) || (v11 = HvpMarkCellDirty(a1, *(unsigned int *)(a2 + 40)), v11 >= 0) )
  {
    v12 = a8;
    v15 = a7;
    v11 = CmpAddValueKeyNew(a1, v15, a8, (__int64)&v17);
    if ( v11 < 0 )
    {
      v13 = v17;
    }
    else
    {
      v16 = v8;
      v13 = v17;
      v11 = CmpAddValueToListEx(a1, v17, a4, v12, v16, 1);
      if ( v11 >= 0 )
      {
        v13 = -1;
        v11 = 0;
      }
    }
    if ( v13 != -1 )
      CmpFreeValue(a1, v13);
  }
  return (unsigned int)v11;
}
