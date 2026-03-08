/*
 * XREFs of MiCheckPteReserve @ 0x14065CFD4
 * Callers:
 *     MiReservePtes @ 0x1403274D0 (MiReservePtes.c)
 * Callees:
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 */

__int64 __fastcall MiCheckPteReserve(__int64 a1, ULONG_PTR a2)
{
  ULONG_PTR v3; // r10
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // r8
  unsigned __int64 v6; // r11
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // rdx
  volatile signed __int32 *v10; // r9
  unsigned int v11; // eax
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // r10
  volatile signed __int32 *v14; // r9
  __int64 result; // rax
  int v16; // r8d
  unsigned __int64 v17; // rcx

  v3 = a1 << 25 >> 16;
  if ( !a2 )
    KeBugCheckEx(0xDAu, 0x200uLL, a1 << 25 >> 16, 0LL, 0LL);
  v4 = 2LL * (unsigned int)((a1 - qword_140C695D0) >> 3);
  v5 = v4;
  LOBYTE(v6) = 2;
  v7 = v4 + 2 * (a2 - 1);
  if ( v4 < v7 )
  {
    do
    {
      if ( !_bittest64((const signed __int64 *)qword_140C68020, v5) )
        KeBugCheckEx(0xDAu, 0x201uLL, v3, v3 + (((v5 - v4) << 11) & 0xFFFFFFFFFFFFF000uLL), a2);
      v8 = v5 & 0x1F;
      LOBYTE(v9) = 1;
      v10 = (volatile signed __int32 *)(qword_140C68020 + 4 * (v5 >> 5));
      if ( v8 + 1 > 0x20 )
      {
        if ( (v5 & 0x1F) != 0 )
        {
          _InterlockedAnd(v10++, ~(((1 << (32 - (v5 & 0x1F))) - 1) << v8));
          v9 = 1LL - (32 - (unsigned int)(v5 & 0x1F));
          if ( v9 >= 0x20 )
          {
            v12 = v9 >> 5;
            v9 += -32LL * (v9 >> 5);
            do
            {
              *v10++ = 0;
              --v12;
            }
            while ( v12 );
          }
          if ( !v9 )
            goto LABEL_14;
        }
        v11 = -1 << v9;
      }
      else
      {
        v11 = ~(1 << v8);
      }
      _InterlockedAnd(v10, v11);
LABEL_14:
      v5 += 2LL;
    }
    while ( v5 < v7 );
  }
  v13 = v5 & 0x1F;
  v14 = (volatile signed __int32 *)(qword_140C68020 + 4 * (v5 >> 5));
  result = v13 + 2;
  if ( v13 + 2 > 0x20 )
  {
    if ( (v5 & 0x1F) == 0 )
      goto LABEL_23;
    v16 = v5 & 0x1F;
    _InterlockedAnd(v14, ~(((1 << (32 - v16)) - 1) << v13));
    result = (unsigned int)(32 - v16);
    ++v14;
    v6 = 2 - result;
    if ( (unsigned __int64)(2 - result) >= 0x20 )
    {
      v17 = v6 >> 5;
      result = -32LL * (v6 >> 5);
      v6 += result;
      do
      {
        *v14++ = 0;
        --v17;
      }
      while ( v17 );
    }
    if ( v6 )
LABEL_23:
      _InterlockedAnd(v14, -1 << v6);
  }
  else
  {
    result = (unsigned int)~(3 << v13);
    _InterlockedAnd(v14, result);
  }
  return result;
}
