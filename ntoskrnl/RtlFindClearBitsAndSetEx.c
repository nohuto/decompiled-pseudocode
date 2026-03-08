/*
 * XREFs of RtlFindClearBitsAndSetEx @ 0x14020C1E0
 * Callers:
 *     ExpSaPageGroupAllocateMemory @ 0x14029661C (ExpSaPageGroupAllocateMemory.c)
 *     RtlpHpFixedVsAllocate @ 0x14029A450 (RtlpHpFixedVsAllocate.c)
 *     MiObtainRelocationBits @ 0x1406A1D10 (MiObtainRelocationBits.c)
 *     MiAllocateFromSubAllocatedRegion @ 0x1406A3620 (MiAllocateFromSubAllocatedRegion.c)
 * Callees:
 *     RtlSetBitsEx @ 0x14034CE90 (RtlSetBitsEx.c)
 */

unsigned __int64 __fastcall RtlFindClearBitsAndSetEx(unsigned __int64 *a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // r15
  unsigned __int64 v5; // r14
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // r10
  unsigned __int64 v10; // rbp
  unsigned __int64 v11; // rdi
  unsigned __int64 *v12; // r8
  __int64 v13; // r9
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rbx
  __int64 v18; // rdx
  unsigned __int64 *v19; // rsi
  bool v20; // zf
  __int64 v21; // rax
  unsigned int v22; // r10d
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // r10
  __int64 v25; // rax
  unsigned __int64 v26; // r10
  __int64 v27; // rax
  unsigned int v28; // ecx
  unsigned int v29; // r9d
  __int64 v30; // rcx
  unsigned __int64 *v31; // rax
  __int64 v32; // rdx
  unsigned __int64 *v33; // r9
  unsigned __int64 v34; // rax
  __int64 v35; // rcx
  unsigned int v36; // eax
  unsigned __int64 v37; // rcx

  v3 = *a1;
  v5 = a1[1];
  v8 = a3 & -(__int64)(a3 < *a1);
  v9 = *a1 - 1;
  if ( a2 )
  {
    while ( 1 )
    {
      if ( v9 - v8 + 1 < a2 )
      {
LABEL_27:
        v15 = -1LL;
        goto LABEL_28;
      }
      v10 = v9 - a2 + 1;
      v11 = v5 + 8 * (v10 >> 6);
      v12 = (unsigned __int64 *)(v5 + 8 * (v8 >> 6));
      v13 = *v12 | ((1LL << (v8 & 0x3F)) - 1);
      if ( a2 > 0x7F )
      {
        v26 = v11 + 8;
        if ( (v10 & 0x3F) == 0 )
          v26 = v5 + 8 * (v10 >> 6);
        if ( v13 )
        {
          if ( *++v12 )
            goto LABEL_49;
          v20 = !_BitScanReverse64((unsigned __int64 *)&v27, v13);
          if ( v20 )
            v28 = 64;
          else
            v28 = 63 - v27;
        }
        else
        {
          v28 = 0;
        }
        while ( 1 )
        {
          v15 = ((__int64)((__int64)v12 - v5) >> 3 << 6) - v28;
          if ( v15 > v10 )
            goto LABEL_27;
          v33 = &v12[(a2 - v28) >> 6];
          while ( ++v12 != v33 )
          {
            if ( *v12 )
              goto LABEL_49;
          }
          v29 = ((_BYTE)a2 - (_BYTE)v28) & 0x3F;
          if ( (((_BYTE)a2 - (_BYTE)v28) & 0x3F) == 0 )
            goto LABEL_11;
          v20 = !_BitScanForward64((unsigned __int64 *)&v30, *v12);
          if ( v20 )
            LODWORD(v30) = 64;
          if ( (unsigned int)v30 >= v29 )
            goto LABEL_11;
          do
          {
LABEL_49:
            v31 = v12;
            if ( (unsigned __int64)v12 > v26 )
              goto LABEL_27;
            ++v12;
          }
          while ( *v12 );
          v20 = !_BitScanReverse64((unsigned __int64 *)&v32, *v31);
          if ( v20 )
            v28 = 64;
          else
            v28 = 63 - v32;
        }
      }
      if ( a2 >= 0x40 )
        break;
      if ( a2 > 1 )
      {
        v18 = 0LL;
        v19 = (unsigned __int64 *)(v5 + 8 * (v9 >> 6));
        while ( v13 != -1 )
        {
LABEL_18:
          v20 = !_BitScanForward64((unsigned __int64 *)&v21, v13);
          if ( v20 )
            LODWORD(v21) = 64;
          if ( (unsigned int)(v18 + v21) >= a2 )
          {
            v23 = -v18;
LABEL_25:
            v15 = ((__int64)((__int64)v12 - v5) >> 3 << 6) + v23;
            goto LABEL_10;
          }
          v22 = a2;
          v23 = ~v13;
          while ( 1 )
          {
            v23 &= v23 >> (v22 >> 1);
            if ( !v23 )
              break;
            v22 -= v22 >> 1;
            if ( v22 <= 1 )
            {
              _BitScanForward64(&v23, v23);
              goto LABEL_25;
            }
          }
          if ( v12 == v19 )
            goto LABEL_27;
          v20 = !_BitScanReverse64((unsigned __int64 *)&v25, v13);
          if ( v20 )
            v18 = 64LL;
          else
            v18 = (unsigned int)(63 - v25);
          v13 = *++v12;
        }
        while ( 1 )
        {
          if ( (unsigned __int64)++v12 > v11 )
            goto LABEL_27;
          v13 = *v12;
          if ( *v12 != -1LL )
          {
            v18 = 0LL;
            goto LABEL_18;
          }
        }
      }
      while ( v13 == -1 )
      {
        if ( (unsigned __int64)++v12 > v11 )
          goto LABEL_27;
        v13 = *v12;
      }
      _BitScanForward64(&v14, ~v13);
      v15 = v14 + ((__int64)((__int64)v12 - v5) >> 3 << 6);
LABEL_10:
      if ( v15 > v10 )
        goto LABEL_27;
LABEL_11:
      if ( v15 != -1LL )
      {
LABEL_12:
        v16 = v15;
        goto LABEL_13;
      }
LABEL_28:
      if ( !v8 )
        goto LABEL_12;
      v24 = a2 + a3;
      if ( a2 + a3 > v3 )
        v24 = v3;
      v9 = v24 - 1;
      v8 = 0LL;
    }
    while ( 1 )
    {
      while ( 1 )
      {
        while ( v13 < 0 )
        {
          if ( (unsigned __int64)++v12 > v11 )
            goto LABEL_27;
          v13 = *v12;
        }
        v20 = !_BitScanReverse64((unsigned __int64 *)&v35, v13);
        if ( v20 )
          v36 = 64;
        else
          v36 = 63 - v35;
        v15 = ((((__int64)((__int64)v12 - v5) >> 3) + 1) << 6) - v36;
        if ( v15 > v10 )
          goto LABEL_27;
        v37 = a2 - v36;
        if ( a2 == v36 )
          goto LABEL_11;
        v13 = *++v12;
        if ( v37 >= 0x40 )
          break;
LABEL_58:
        v20 = !_BitScanForward64(&v34, v13);
        if ( v20 )
          v34 = 64LL;
        if ( v34 >= v37 )
          goto LABEL_11;
      }
      if ( !*v12 )
      {
        v37 -= 64LL;
        if ( !v37 )
          goto LABEL_11;
        v13 = *++v12;
        goto LABEL_58;
      }
    }
  }
  v16 = v8 & 0xFFFFFFFFFFFFFFF8uLL;
LABEL_13:
  if ( v16 != -1LL )
    RtlSetBitsEx(a1, v16, a2);
  return v16;
}
