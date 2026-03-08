/*
 * XREFs of ?vSrcAlphaCopyS8D32@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@@Z @ 0x1C0002F80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vSrcAlphaCopyS8D32(
        const unsigned __int8 *a1,
        int a2,
        int a3,
        unsigned __int8 *a4,
        int a5,
        int a6,
        int a7,
        int a8)
{
  int v8; // ebp
  __int64 v10; // rcx
  const unsigned __int8 *v11; // rdi
  unsigned __int8 *v12; // rbx
  __int64 v13; // rax
  __int64 v14; // r13
  unsigned __int8 *v15; // r12
  const unsigned __int8 *v16; // r14
  unsigned __int8 *v17; // rsi
  __int64 v18; // r15
  __int64 v19; // rax

  v8 = a8;
  v10 = (unsigned int)(a6 - a5);
  v11 = &a1[a2];
  v12 = &a4[4 * a5];
  if ( a8 )
  {
    v13 = a7;
    v14 = a3;
    do
    {
      v15 = &v12[4 * v10];
      v16 = v11;
      v17 = v12;
      if ( v12 < v15 )
      {
        do
        {
          v18 = *v16;
          if ( (_BYTE)v18 )
          {
            if ( (unsigned __int8)v18 >= 0x72u )
            {
              *(_DWORD *)v17 = 0xFFFFFF;
            }
            else
            {
              _mm_lfence();
              v19 = SGDGetSessionState();
              *(_DWORD *)v17 = dword_1C0318430[*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v19 + 32) + 8592LL)
                                                                  + 4 * v18
                                                                  + 2)] | ((dword_1C0318430[*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v19 + 32) + 8592LL) + 4 * v18 + 1)] | (dword_1C0318430[*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v19 + 32) + 8592LL) + 4 * v18)] << 8)) << 8);
            }
          }
          ++v16;
          v17 += 4;
        }
        while ( v17 < v15 );
        v13 = a7;
        v10 = (unsigned int)(a6 - a5);
      }
      v11 += v14;
      v12 += v13;
      --v8;
    }
    while ( v8 );
  }
}
