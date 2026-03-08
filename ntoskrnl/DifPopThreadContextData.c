/*
 * XREFs of DifPopThreadContextData @ 0x1405D22E0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

char __fastcall DifPopThreadContextData(int a1, void *a2, unsigned int a3)
{
  char v3; // si
  _QWORD *v4; // rbx
  _QWORD *v5; // rax
  const void **v6; // rdi

  v3 = 0;
  if ( DifPluginStates[a1] )
  {
    v4 = *(_QWORD **)&KeGetCurrentThread()[1].WaitBlockFill11[64];
    if ( v4 )
    {
      if ( *(int *)v4 >= 1 )
      {
        v5 = (_QWORD *)v4[1];
        if ( v5 )
        {
          v6 = (const void **)(v5 - 2);
          if ( v5 != (_QWORD *)16 && a1 == *(_DWORD *)v6 )
          {
            v3 = 1;
            v4[1] = *v5;
            --*(_DWORD *)v4;
            if ( a2 && a3 )
              memmove(a2, v6[1], a3);
            ExFreePoolWithTag((PVOID)v6[1], 0x4E666944u);
            ExFreePoolWithTag(v6, 0x4E666944u);
            if ( !*(_DWORD *)v4 )
            {
              ExFreePoolWithTag(v4, 0x4E666944u);
              *(_QWORD *)&KeGetCurrentThread()[1].WaitBlockFill11[64] = 0LL;
            }
          }
        }
      }
    }
  }
  return v3;
}
