__int64 __fastcall UpcaseUnicodeToSingleByteNHelper(
        _BYTE *a1,
        unsigned int a2,
        unsigned int *a3,
        unsigned __int16 *a4,
        unsigned int a5,
        __int64 a6,
        __int64 a7)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 Blink; // rcx
  __int64 EffectiveServerSilo; // rax
  _QWORD *v14; // rcx
  __int64 v15; // r15
  unsigned int v16; // eax
  __int64 v17; // r10
  unsigned __int64 v18; // r8
  __int64 result; // rax

  if ( !KeGetPcr()->Prcb.NestingLevel
    && ((CurrentThread = KeGetCurrentThread(),
         Blink = (__int64)CurrentThread[1].WaitBlock[3].WaitListEntry.Blink,
         Blink != -3)
      ? (EffectiveServerSilo = PsGetEffectiveServerSilo(Blink))
      : (EffectiveServerSilo = *(_QWORD *)&CurrentThread->Process[2].Header.Lock),
        EffectiveServerSilo) )
  {
    v14 = *(_QWORD **)(EffectiveServerSilo + 1488);
  }
  else
  {
    v14 = &PspHostSiloGlobals;
  }
  v15 = v14[154];
  v16 = a5;
  if ( a5 >= a2 )
    v16 = a2;
  if ( a3 )
    *a3 = v16;
  if ( v16 )
  {
    v17 = v16;
    do
    {
      v18 = *(unsigned __int16 *)(a7 + 2LL * *(unsigned __int8 *)(*a4 + a6));
      if ( (unsigned int)v18 >= 0x61 )
      {
        if ( (unsigned int)v18 > 0x7A )
        {
          if ( v15 && (unsigned __int16)v18 >= 0xC0u )
            LOWORD(v18) = *(_WORD *)(v15
                                   + 2
                                   * ((v18 & 0xF)
                                    + *(unsigned __int16 *)(v15
                                                          + 2LL
                                                          * (((unsigned __int8)v18 >> 4)
                                                           + (unsigned int)*(unsigned __int16 *)(v15 + 2 * (v18 >> 8))))))
                        + v18;
        }
        else
        {
          LOWORD(v18) = v18 - 32;
        }
      }
      ++a4;
      *a1++ = *(_BYTE *)((unsigned __int16)v18 + a6);
      --v17;
    }
    while ( v17 );
  }
  result = 2147483653LL;
  if ( a5 <= a2 )
    return 0LL;
  return result;
}
