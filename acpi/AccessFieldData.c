/*
 * XREFs of AccessFieldData @ 0x1C0051AD8
 * Callers:
 *     WriteFieldObj @ 0x1C0006080 (WriteFieldObj.c)
 *     ReadFieldObj @ 0x1C0052CB0 (ReadFieldObj.c)
 * Callees:
 *     GetFieldUnitRegionObj @ 0x1C004B944 (GetFieldUnitRegionObj.c)
 *     DereferenceObjectEx @ 0x1C004F6A8 (DereferenceObjectEx.c)
 *     AccessBaseField @ 0x1C00517B0 (AccessBaseField.c)
 *     PushAccFieldObj @ 0x1C00525E8 (PushAccFieldObj.c)
 *     PushPreserveWriteObj @ 0x1C00526F4 (PushPreserveWriteObj.c)
 *     ReadBuffField @ 0x1C0052A14 (ReadBuffField.c)
 *     WriteBuffField @ 0x1C0052FBC (WriteBuffField.c)
 */

__int64 __fastcall AccessFieldData(__int64 a1, __int64 a2, unsigned int *a3, unsigned int *a4, char a5)
{
  __int64 v5; // rbx
  __int64 v9; // rdx
  __int64 *v11; // rcx
  __int64 v12; // r8
  __int64 (__fastcall *v13)(__int64, __int64, unsigned int); // rdx
  __int64 v14; // rcx
  unsigned int v15; // r10d
  int v16; // edx
  unsigned int v17; // ecx
  unsigned int FieldUnitRegionObj; // edi
  __int64 v20; // [rsp+58h] [rbp+10h] BYREF

  v5 = 0LL;
  if ( *(_WORD *)(a2 + 2) == 14 )
  {
    v9 = *(_QWORD *)(a2 + 32);
    if ( a5 )
      return (unsigned int)ReadBuffField(a1, v9);
    else
      return (unsigned int)WriteBuffField(a1, v9, a3, *(_QWORD *)a4);
  }
  v11 = *(__int64 **)(a2 + 32);
  v20 = 0LL;
  if ( *(_WORD *)(*v11 + 66) == 132 )
  {
    v12 = *(_QWORD *)(*v11 + 96);
    if ( a5 )
    {
      v13 = (__int64 (__fastcall *)(__int64, __int64, unsigned int))ReadFieldObj;
      v14 = a1;
    }
    else
    {
      v15 = a3[3];
      LOBYTE(v16) = 1;
      v17 = (v15 & 0xF) - 1;
      if ( v17 > 3 || (v16 = 1 << v17, 8 * (1 << v17) < 64) )
        v5 = 1LL << (8 * (unsigned __int8)v16);
      v14 = a1;
      if ( ((v5 - 1) & ~((((1LL << a3[2]) & -(__int64)(a3[2] < 0x40)) - 1) << a3[1])) != 0 && (v15 & 0x60) == 0 )
        return (unsigned int)PushPreserveWriteObj(a1, *(_QWORD *)(v12 + 8) + 64LL, *(_QWORD *)a4);
      v13 = WriteFieldObj;
    }
    return (unsigned int)PushAccFieldObj(
                           v14,
                           v13,
                           *(_QWORD *)(v12 + 8) + 64LL,
                           *(_QWORD *)(*(_QWORD *)(v12 + 8) + 96LL) + 8LL,
                           a4,
                           4);
  }
  FieldUnitRegionObj = GetFieldUnitRegionObj(v11, &v20);
  if ( !FieldUnitRegionObj && v20 )
  {
    FieldUnitRegionObj = AccessBaseField(a1, v20, a3, a4, a5);
    DereferenceObjectEx(v20);
  }
  return FieldUnitRegionObj;
}
