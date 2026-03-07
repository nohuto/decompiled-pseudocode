__int64 __fastcall MiConvertHiberPhasePte(__int64 a1, unsigned __int64 *a2, int a3)
{
  __int64 v3; // r14
  __int64 v6; // rbx
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // rbx
  BOOL HasShadow; // edi
  __int64 v10; // r8
  __int64 v11; // rdx
  unsigned __int64 v12; // rbx
  int v13; // ebp
  unsigned __int64 v14; // rdi
  unsigned __int64 v16; // [rsp+40h] [rbp+8h] BYREF

  v3 = *(_QWORD *)(a1 + 168);
  v6 = MI_READ_PTE_LOCK_FREE((unsigned __int64)a2);
  v16 = v6;
  if ( v3 )
  {
    if ( (v6 & 1) != 0 && !a3 )
    {
      v7 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v16) >> 12) & 0xFFFFFFFFFFLL;
      if ( (unsigned int)MiIsPfn(v7) )
      {
        if ( v7 != qword_140C69390
          && v7 != qword_140C69378
          && !_bittest64(*(const signed __int64 **)(v3 + 8), (unsigned int)v7) )
        {
          v8 = v6 & 0xFFFFFFFFFFFFFBFAuLL | 0x404;
          HasShadow = 0;
          v16 = v8;
          if ( MiPteInShadowRange((unsigned __int64)a2) )
            HasShadow = MiPteHasShadow();
          *a2 = v8;
          if ( HasShadow )
          {
            v11 = v8;
LABEL_23:
            MiWritePteShadow((__int64)a2, v11, v10);
            return 0LL;
          }
        }
      }
    }
    return 0LL;
  }
  if ( (v6 & 1) != 0 || (v6 & 0x400) == 0 || (v6 & 4) == 0 )
    return 0LL;
  v12 = v6 & 0xFFFFFFFFFFFFFBFAuLL | 1;
  v13 = 0;
  v16 = v12;
  v14 = v12;
  if ( MiPteInShadowRange((unsigned __int64)a2) )
  {
    if ( MiPteHasShadow() )
    {
      v13 = 1;
      if ( HIBYTE(word_140C6697C) )
        goto LABEL_21;
    }
    else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
    {
      goto LABEL_21;
    }
    v14 = v12 | 0x8000000000000000uLL;
  }
LABEL_21:
  *a2 = v14;
  if ( v13 )
  {
    v11 = v14;
    goto LABEL_23;
  }
  return 0LL;
}
