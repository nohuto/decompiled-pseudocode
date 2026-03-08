/*
 * XREFs of ?xxxAdjustPushStateForKL@@YAXPEAUtagTHREADINFO@@PEAEPEAUtagKL@@22@Z @ 0x1C0214388
 * Callers:
 *     ?xxxManageKeyboardModifiers@@YAXPEAUtagKL@@0@Z @ 0x1C0214488 (-xxxManageKeyboardModifiers@@YAXPEAUtagKL@@0@Z.c)
 * Callees:
 *     ?xxxAdjustPushState@@YAXPEAUtagTHREADINFO@@EEPEAUtagKL@@1@Z @ 0x1C021419C (-xxxAdjustPushState@@YAXPEAUtagTHREADINFO@@EEPEAUtagKL@@1@Z.c)
 */

void __fastcall xxxAdjustPushStateForKL(
        struct tagTHREADINFO *a1,
        unsigned __int8 *a2,
        struct tagKL *a3,
        struct tagKL *a4,
        struct tagKL *a5)
{
  __int64 v5; // rax
  unsigned __int8 *v9; // rbx
  unsigned __int8 i; // r9
  __int64 v11; // rdx
  char v12; // r10
  char v13; // r11
  __int64 v14; // r8

  v5 = *((_QWORD *)a3 + 6);
  if ( v5 )
  {
    if ( *((_QWORD *)a4 + 6) )
    {
      v9 = ***(unsigned __int8 ****)(v5 + 32);
      for ( i = *v9; *v9; i = *v9 )
      {
        v11 = (unsigned int)(1 << (i & 7));
        v12 = 0;
        v13 = 0;
        if ( ((unsigned __int8)v11 & a2[(unsigned __int64)i >> 3]) == 0 )
        {
          v14 = (unsigned int)i - 16;
          if ( i == 16 )
          {
            v12 = -96;
            v13 = -95;
          }
          else
          {
            v14 = (unsigned int)i - 17;
            if ( i == 17 )
            {
              v12 = -94;
              v13 = -93;
            }
            else if ( i == 18 )
            {
              v12 = -92;
              v13 = -91;
            }
          }
          LOBYTE(v14) = v13;
          LOBYTE(v11) = v12;
          xxxAdjustPushState(a1, v11, v14, a4, a5);
          a2[(unsigned __int64)*v9 >> 3] |= 1 << (*v9 & 7);
        }
        v9 += 2;
      }
    }
  }
}
