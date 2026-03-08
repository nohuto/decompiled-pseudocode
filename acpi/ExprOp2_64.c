/*
 * XREFs of ExprOp2_64 @ 0x1C00569E0
 * Callers:
 *     ExprOp2 @ 0x1C00569A0 (ExprOp2.c)
 * Callees:
 *     ValidateArgTypes @ 0x1C004CEEC (ValidateArgTypes.c)
 *     ValidateTarget @ 0x1C004D4F0 (ValidateTarget.c)
 *     WriteObject @ 0x1C00532A0 (WriteObject.c)
 */

__int64 __fastcall ExprOp2_64(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rdx
  __int64 v4; // rdi
  __int64 result; // rax
  unsigned int v7; // ecx
  unsigned int v8; // ecx
  unsigned int v9; // ecx
  unsigned int v10; // ecx
  unsigned int v11; // ecx
  __int64 v12; // rax
  unsigned __int64 v13; // rcx
  __int64 v14; // rax
  unsigned __int64 v15; // rcx
  __int64 v16; // rcx
  unsigned __int64 v17; // rdx
  unsigned int v18; // ecx
  unsigned int v19; // ecx
  unsigned int v20; // ecx
  unsigned int v21; // ecx
  __int64 v22; // rax
  unsigned __int64 v23; // rcx
  __int64 v24; // [rsp+38h] [rbp+10h] BYREF

  v3 = a2[10];
  v4 = 0LL;
  v24 = 0LL;
  result = ValidateArgTypes(a1, v3, 0, "II");
  if ( (int)result >= 0 )
  {
    result = ValidateTarget(a1, a2[10] + 80LL, 135, (__int64)&v24);
    if ( (int)result >= 0 )
    {
      *(_WORD *)(a2[11] + 2LL) = 1;
      v7 = *(_DWORD *)(a2[7] + 8LL);
      if ( v7 > 0x7B )
      {
        v18 = v7 - 124;
        if ( !v18 )
        {
          v16 = ~(*(_QWORD *)(a2[10] + 16LL) & *(_QWORD *)(a2[10] + 56LL));
          goto LABEL_31;
        }
        v19 = v18 - 1;
        if ( v19 )
        {
          v20 = v19 - 1;
          if ( v20 )
          {
            v21 = v20 - 1;
            if ( v21 )
            {
              if ( v21 != 6 )
                return WriteObject(a1, v24, a2[11]);
              v22 = a2[10];
              v23 = *(_QWORD *)(v22 + 56);
              if ( !v23 )
                goto LABEL_14;
              v17 = *(_QWORD *)(v22 + 16) % v23;
            }
            else
            {
              v17 = *(_QWORD *)(a2[10] + 16LL) ^ *(_QWORD *)(a2[10] + 56LL);
            }
          }
          else
          {
            v17 = ~(*(_QWORD *)(a2[10] + 16LL) | *(_QWORD *)(a2[10] + 56LL));
          }
        }
        else
        {
          v17 = *(_QWORD *)(a2[10] + 16LL) | *(_QWORD *)(a2[10] + 56LL);
        }
      }
      else
      {
        if ( v7 == 123 )
        {
          v16 = *(_QWORD *)(a2[10] + 16LL) & *(_QWORD *)(a2[10] + 56LL);
          goto LABEL_31;
        }
        v8 = v7 - 114;
        if ( !v8 )
        {
          v16 = *(_QWORD *)(a2[10] + 16LL) + *(_QWORD *)(a2[10] + 56LL);
          goto LABEL_31;
        }
        v9 = v8 - 2;
        if ( v9 )
        {
          v10 = v9 - 3;
          if ( v10 )
          {
            v11 = v10 - 2;
            if ( v11 )
            {
              if ( v11 != 1 )
                return WriteObject(a1, v24, a2[11]);
              v12 = a2[10];
              v13 = *(_QWORD *)(v12 + 56);
              if ( v13 < 0x40 )
                v4 = *(_QWORD *)(v12 + 16) >> v13;
            }
            else
            {
              v14 = a2[10];
              v15 = *(_QWORD *)(v14 + 56);
              if ( v15 < 0x40 )
                v4 = *(_QWORD *)(v14 + 16) << v15;
            }
LABEL_14:
            *(_QWORD *)(a2[11] + 16LL) = v4;
            return WriteObject(a1, v24, a2[11]);
          }
          v16 = *(_QWORD *)(a2[10] + 16LL) * *(_QWORD *)(a2[10] + 56LL);
LABEL_31:
          *(_QWORD *)(a2[11] + 16LL) = v16;
          return WriteObject(a1, v24, a2[11]);
        }
        v17 = *(_QWORD *)(a2[10] + 16LL) - *(_QWORD *)(a2[10] + 56LL);
      }
      *(_QWORD *)(a2[11] + 16LL) = v17;
      return WriteObject(a1, v24, a2[11]);
    }
  }
  return result;
}
