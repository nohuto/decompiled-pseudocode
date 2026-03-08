/*
 * XREFs of MiFindFreePageFileSpaceForward @ 0x1406373A0
 * Callers:
 *     MiFindFreePageFileSpace @ 0x140209F7C (MiFindFreePageFileSpace.c)
 * Callees:
 *     RtlFindNextClearRunUlong @ 0x1402DF69C (RtlFindNextClearRunUlong.c)
 */

__int64 __fastcall MiFindFreePageFileSpaceForward(__int64 a1, unsigned int *a2, __int64 a3, char a4)
{
  unsigned int v4; // r12d
  unsigned int v5; // ebx
  unsigned int v8; // edi
  unsigned int v9; // r14d
  unsigned int NextClearRunUlong; // eax
  unsigned int v11; // r10d
  int v12; // esi
  unsigned int v13; // edx
  unsigned int v14; // eax
  __int64 result; // rax
  unsigned int v16[2]; // [rsp+30h] [rbp-20h] BYREF
  __int64 v17; // [rsp+38h] [rbp-18h]
  __int64 v18; // [rsp+40h] [rbp-10h] BYREF
  unsigned __int64 v19; // [rsp+48h] [rbp-8h]
  unsigned int v20; // [rsp+90h] [rbp+40h]
  int v22; // [rsp+A8h] [rbp+58h] BYREF

  v4 = *a2;
  v22 = 0;
  v5 = 0;
  v16[1] = 0;
  v8 = a3;
  v18 = 0LL;
  v9 = 0;
  LODWORD(v19) = 0;
  v16[0] = *(_DWORD *)a1;
  v17 = *(_QWORD *)(*(_QWORD *)(a1 + 112) + 32LL);
  while ( 1 )
  {
    NextClearRunUlong = RtlFindNextClearRunUlong(v16, v4, a3, 0xFFFFFFFF, &v22);
    a3 = NextClearRunUlong;
    if ( !NextClearRunUlong )
      break;
    v4 = v22 + NextClearRunUlong;
    if ( NextClearRunUlong >= v5 && (NextClearRunUlong >= v8 || a4 >= 0) )
    {
      v11 = v22 & 0x1F;
      v12 = v22 - v11;
      v13 = v8;
      v19 = *(_QWORD *)(*(_QWORD *)(a1 + 112) + 16LL) + 4 * ((unsigned __int64)(v22 - v11) >> 5);
      LODWORD(v18) = v11 + NextClearRunUlong;
      if ( v8 <= 0x20 )
        v13 = 32;
      v20 = v13;
      while ( 1 )
      {
        v14 = RtlFindNextClearRunUlong((unsigned int *)&v18, v11, a3, v13, &v22);
        if ( !v14 )
          break;
        v13 = v20;
        v11 = v22 + v14;
        if ( v14 > v5 )
        {
          v9 = v12 + v22;
          v5 = v14;
          if ( v14 > v8 )
            v5 = v8;
          if ( v5 == v8 )
            goto LABEL_16;
        }
      }
      if ( v5 == v8 )
        break;
    }
  }
LABEL_16:
  if ( a4 < 0 && v5 < v8 )
  {
    v5 = 0;
    v9 = 0;
  }
  result = v5;
  *a2 = v9;
  return result;
}
