/*
 * XREFs of KeGetBugMessageText @ 0x140567014
 * Callers:
 *     KiDisplayBlueScreen @ 0x140567D34 (KiDisplayBlueScreen.c)
 *     CmpCreateHwProfileFriendlyName @ 0x140A0DD5C (CmpCreateHwProfileFriendlyName.c)
 * Callees:
 *     <none>
 */

char __fastcall KeGetBugMessageText(unsigned int a1, __int64 a2)
{
  char v4; // r8
  _DWORD *v5; // rax
  __int64 i; // rcx
  unsigned __int16 *v7; // rcx
  __int64 j; // rdx
  unsigned __int16 *v9; // rcx
  __int64 v10; // rax

  v4 = 0;
  if ( KiBugCodeMessages )
  {
    v5 = (char *)KiBugCodeMessages + 4;
    for ( i = *(unsigned int *)KiBugCodeMessages; i; --i )
    {
      if ( a1 >= *v5 && a1 <= v5[1] )
      {
        v7 = (unsigned __int16 *)((char *)KiBugCodeMessages + (unsigned int)v5[2]);
        for ( j = a1 - *v5; j; --j )
          v7 = (unsigned __int16 *)((char *)v7 + *v7);
        v9 = v7 + 2;
        v10 = -1LL;
        do
          ++v10;
        while ( *((_BYTE *)v9 + v10) );
        *(_QWORD *)(a2 + 8) = v9;
        *(_WORD *)a2 = v10;
        *(_WORD *)(a2 + 2) = v10;
        return 1;
      }
      v5 += 3;
    }
  }
  return v4;
}
