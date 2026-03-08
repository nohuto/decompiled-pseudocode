/*
 * XREFs of RtlpInternEntryHash @ 0x14070351C
 * Callers:
 *     RtlInternTableIntern @ 0x1407015D8 (RtlInternTableIntern.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpInternEntryHash(__int64 *a1, __int64 *a2)
{
  __int64 v2; // rsi
  __int64 v3; // r11
  __int64 v4; // r8
  __int64 v5; // rbx
  __int64 v6; // r9
  unsigned __int8 *v7; // r10
  unsigned __int64 v8; // rdi
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 result; // rax
  int v12; // r9d
  int v13; // r9d
  int v14; // r9d
  int v15; // r9d
  int v16; // r9d
  int v17; // r9d

  v2 = a1[2];
  v3 = *a1;
  v4 = 314159LL;
  if ( v2 )
  {
    v5 = a1[1];
    do
    {
      v6 = *(_QWORD *)(v5 + 16);
      v7 = *(unsigned __int8 **)v5;
      v3 = v6 + *(_QWORD *)(v5 + 24) - ((*(_QWORD *)(v5 + 24) - 1LL) & (*(_QWORD *)(v5 + 24) + v3 - 1)) + v3 - 1;
      if ( v6 >= 8 )
      {
        v8 = (unsigned __int64)v6 >> 3;
        v6 -= 8 * ((unsigned __int64)v6 >> 3);
        do
        {
          v9 = v7[6] + 37 * (v7[5] + 37 * (v7[4] + 37 * (v7[3] + 37 * (v7[2] + 37 * (v7[1] + 37 * (*v7 + 37 * v4))))));
          v10 = v7[7];
          v7 += 8;
          v4 = v10 + 37 * v9;
          --v8;
        }
        while ( v8 );
      }
      if ( (unsigned __int64)(v6 - 1) > 6 )
        goto LABEL_7;
      v12 = v6 - 1;
      if ( v12 )
      {
        v13 = v12 - 1;
        if ( v13 )
        {
          v14 = v13 - 1;
          if ( v14 )
          {
            v15 = v14 - 1;
            if ( v15 )
            {
              v16 = v15 - 1;
              if ( v16 )
              {
                v17 = v16 - 1;
                if ( v17 )
                {
                  if ( v17 != 1 )
                    goto LABEL_7;
                  v4 = *v7++ + 37 * v4;
                }
                v4 = *v7++ + 37 * v4;
              }
              v4 = *v7++ + 37 * v4;
            }
            v4 = *v7++ + 37 * v4;
          }
          v4 = *v7++ + 37 * v4;
        }
        v4 = *v7++ + 37 * v4;
      }
      v4 = *v7 + 37 * v4;
LABEL_7:
      v5 += 32LL;
      --v2;
    }
    while ( v2 );
  }
  result = v3 + v4;
  *a2 = v3;
  return result;
}
