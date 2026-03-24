/*
 * XREFs of RtlpUnwindEpilogue @ 0x14032B464
 * Callers:
 *     RtlpxVirtualUnwind @ 0x14021E130 (RtlpxVirtualUnwind.c)
 * Callees:
 *     RtlpUnwindOpSlots @ 0x14032B620 (RtlpUnwindOpSlots.c)
 *     RtlpPopUserShadowStack @ 0x14032B65C (RtlpPopUserShadowStack.c)
 *     ExRaiseDatatypeMisalignment @ 0x14077BCF0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall RtlpUnwindEpilogue(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __int64 a6)
{
  unsigned int v7; // r13d
  int v9; // ebp
  _BYTE *v10; // r14
  unsigned int v11; // esi
  __int64 v12; // rbx
  __int64 v13; // rcx
  unsigned int v14; // r8d
  unsigned int v15; // r10d
  unsigned __int64 v16; // r8
  __int64 v17; // rax
  unsigned __int64 v18; // r8
  __int64 v19; // rax
  __int64 v21; // r9
  unsigned __int64 v22; // r8
  unsigned __int64 v23; // r9
  unsigned __int64 *v24; // r10
  __int16 v25; // [rsp+50h] [rbp+8h]

  v7 = a3;
  v9 = 0;
  while ( 1 )
  {
    v10 = (_BYTE *)(a1 + *(unsigned int *)(a4 + 8));
    if ( a2 <= 0x7FFFFFFEFFFFLL && ((unsigned __int8)v10 & 3) != 0 )
      goto LABEL_55;
    v11 = (unsigned __int8)v10[2];
    v12 = 0LL;
    if ( v10[2] )
    {
      do
      {
        v13 = *(unsigned __int16 *)&v10[2 * v12 + 4];
        if ( (v13 & 0xF00) == 0 )
          break;
        if ( (BYTE1(v13) & 0xF) == 0xA )
          break;
        v12 = (unsigned int)RtlpUnwindOpSlots(v13, a2, a3, a4) + (unsigned int)v12;
      }
      while ( (unsigned int)v12 < v11 );
      if ( (unsigned int)v12 < v11 )
        goto LABEL_8;
    }
    if ( (*v10 & 0x20) == 0 )
    {
LABEL_8:
      v14 = 0;
      if ( (unsigned int)v12 >= v11 )
        goto LABEL_18;
      while ( 1 )
      {
        v15 = v14;
        v25 = *(_WORD *)&v10[2 * v12 + 4];
        a4 = HIBYTE(v25) >> 4;
        if ( (v25 & 0xF00) != 0 )
          break;
        if ( v14 >= v7 )
        {
          v16 = *(_QWORD *)(a5 + 152);
          if ( a2 <= 0x7FFFFFFEFFFFLL && (v16 & 3) != 0 )
            goto LABEL_55;
          if ( *(_QWORD *)a6 && (v16 < **(_QWORD **)a6 || v16 > **(_QWORD **)(a6 + 8) - 8LL) )
            return 3221225512LL;
          *(_QWORD *)(a5 + 152) += 8LL;
          *(_QWORD *)(a5 + 8 * a4 + 120) = *(_QWORD *)v16;
          v17 = *(_QWORD *)(a6 + 16);
          if ( v17 )
            *(_QWORD *)(v17 + 8 * a4 + 128) = v16;
        }
        v12 = (unsigned int)(v12 + 1);
        v14 = v15 + 2 - ((unsigned int)a4 < 8);
        if ( (unsigned int)v12 >= v11 )
          goto LABEL_18;
      }
      if ( (HIBYTE(v25) & 0xF) == 2 && !(_DWORD)a4 )
      {
        if ( v14 >= v7 )
          *(_QWORD *)(a5 + 152) += 8LL;
        v12 = (unsigned int)(v12 + 1);
      }
      if ( (unsigned int)v12 < v11 && (v10[2 * v12 + 5] & 0xF) == 0xA )
      {
        v22 = *(_QWORD *)(a5 + 152);
        v23 = v22 + 24;
        if ( a2 > 0x7FFFFFFEFFFFLL || (v22 & 3) == 0 )
        {
          v24 = *(unsigned __int64 **)a6;
          if ( *(_QWORD *)a6 && (v22 < *v24 || v22 > **(_QWORD **)(a6 + 8) - 8LL) )
            return 3221225512LL;
          if ( a2 > 0x7FFFFFFEFFFFLL )
            goto LABEL_50;
          if ( (v23 & 3) == 0 )
          {
            v24 = *(unsigned __int64 **)a6;
LABEL_50:
            if ( !v24 || v23 >= *v24 && v23 <= **(_QWORD **)(a6 + 8) - 8LL )
            {
              *(_QWORD *)(a5 + 248) = *(_QWORD *)v22;
              *(_QWORD *)(a5 + 152) = *(_QWORD *)v23;
              return 0LL;
            }
            return 3221225512LL;
          }
        }
      }
      else
      {
LABEL_18:
        v18 = *(_QWORD *)(a5 + 152);
        if ( a2 > 0x7FFFFFFEFFFFLL || (v18 & 3) == 0 )
        {
          if ( !*(_QWORD *)a6 || v18 >= **(_QWORD **)a6 && v18 <= **(_QWORD **)(a6 + 8) - 8LL )
          {
            v19 = *(_QWORD *)v18;
            *(_QWORD *)(a5 + 152) += 8LL;
            *(_QWORD *)(a5 + 248) = v19;
            RtlpPopUserShadowStack(a5, a5, v18, a4);
            return 0LL;
          }
          return 3221225512LL;
        }
      }
LABEL_55:
      ExRaiseDatatypeMisalignment();
    }
    if ( (unsigned int)++v9 > 0x20 )
      return 3221225727LL;
    v21 = v11 + 1;
    if ( (v11 & 1) == 0 )
      v21 = v11;
    a4 = (unsigned __int64)&v10[2 * v21 + 4];
  }
}
