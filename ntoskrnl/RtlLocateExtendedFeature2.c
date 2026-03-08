/*
 * XREFs of RtlLocateExtendedFeature2 @ 0x14045BC40
 * Callers:
 *     KiInitializeContextThread @ 0x140237E9C (KiInitializeContextThread.c)
 *     RtlpWalkFrameChain @ 0x14027FF40 (RtlpWalkFrameChain.c)
 *     RtlpUnwindPrologue @ 0x140281BF0 (RtlpUnwindPrologue.c)
 *     RtlpVirtualPopShadowStack @ 0x140302EB0 (RtlpVirtualPopShadowStack.c)
 *     KeVerifyContextXStateCetU @ 0x1403649C8 (KeVerifyContextXStateCetU.c)
 *     RtlLocateExtendedFeature @ 0x14045BC10 (RtlLocateExtendedFeature.c)
 *     KiUnwindUserSspForApcContextCopyBypass @ 0x14057E274 (KiUnwindUserSspForApcContextCopyBypass.c)
 * Callees:
 *     <none>
 */

char *__fastcall RtlLocateExtendedFeature2(_DWORD *a1, unsigned int a2, __int64 a3, _DWORD *a4)
{
  __int64 v4; // r10
  __int64 v6; // rbx
  int v7; // esi
  __int64 v8; // r9
  char *v9; // rdx
  unsigned int v10; // ecx
  int v11; // eax
  __int64 v12; // rdi
  __int64 v13; // r11
  __int64 v14; // rax
  _DWORD *v15; // r8

  v4 = a2;
  if ( a2 - 2 <= 0x3D )
  {
    v6 = 1LL << a2;
    if ( ((*(_QWORD *)a3 | *(_QWORD *)(a3 + 816)) & (1LL << a2)) != 0 )
    {
      v7 = *(_DWORD *)(a3 + 20);
      if ( (v7 & 0xFFFFFFF8) == 0 )
      {
        v8 = (int)a1[4];
        if ( *a1 <= (int)v8 && a1[1] + *a1 >= (int)v8 + a1[5] )
        {
          v9 = (char *)a1 + v8;
          if ( (_DWORD *)((char *)a1 + v8) )
          {
            v10 = 2;
            if ( a4 )
            {
              if ( (v7 & 2) != 0 )
                v11 = *(_DWORD *)(a3 + 4 * v4 + 556);
              else
                v11 = *(_DWORD *)(a3 + 8 * v4 + 28);
              *a4 = v11;
            }
            if ( (*(_DWORD *)(a3 + 20) & 2) == 0 )
            {
              v14 = *(unsigned int *)(a3 + 8 * v4 + 24);
              return &v9[v14 - 512];
            }
            v12 = *((_QWORD *)v9 + 1);
            if ( (v6 & v12) != 0 )
            {
              v13 = *(_QWORD *)(a3 + 544);
              v14 = 576LL;
              if ( (unsigned int)v4 > 2 )
              {
                v15 = (_DWORD *)(a3 + 564);
                do
                {
                  if ( ((1LL << v10) & v12) != 0 )
                  {
                    if ( ((1LL << v10) & v13) != 0 )
                      LODWORD(v14) = (v14 + 63) & 0xFFFFFFC0;
                    v14 = (unsigned int)(*v15 + v14);
                  }
                  ++v10;
                  ++v15;
                }
                while ( v10 < (unsigned int)v4 );
              }
              if ( (v6 & v13) != 0 )
                v14 = ((_DWORD)v14 + 63) & 0xFFFFFFC0;
              return &v9[v14 - 512];
            }
          }
        }
      }
    }
  }
  return 0LL;
}
