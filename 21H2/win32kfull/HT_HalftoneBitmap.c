/*
 * XREFs of HT_HalftoneBitmap @ 0x1C0092FAC
 * Callers:
 *     EngHTBlt @ 0x1C009247C (EngHTBlt.c)
 * Callees:
 *     SanityCheckDimension @ 0x1C0093250 (SanityCheckDimension.c)
 *     AAHalftoneBitmap @ 0x1C0093280 (AAHalftoneBitmap.c)
 *     pDCIAdjClr @ 0x1C0094724 (pDCIAdjClr.c)
 *     CheckABInfo @ 0x1C025DCD8 (CheckABInfo.c)
 */

__int64 HT_HalftoneBitmap(int a1, int a2, __int64 a3, __int64 a4, __int64 a5, ...)
{
  _WORD *v5; // rdi
  __int64 v6; // r13
  unsigned __int16 v7; // bx
  __int16 v9; // r15
  __int16 v10; // si
  int v11; // r14d
  __int64 v12; // r8
  __int64 v13; // r8
  __int64 v14; // r8
  __int64 v15; // r8
  int v16; // r10d
  int v17; // r11d
  __int64 v18; // r8
  __int64 v19; // rax
  __int64 v20; // r14
  char *v21; // rbx
  unsigned __int16 v22; // ax
  char *v23; // r12
  __int64 result; // rax
  __int64 v25; // rax
  __int16 v26; // cx
  __int64 v27; // r8
  PVOID v28; // rax
  int v29; // [rsp+40h] [rbp-28h] BYREF
  unsigned int v30; // [rsp+44h] [rbp-24h] BYREF
  int v31; // [rsp+48h] [rbp-20h]
  int v32; // [rsp+4Ch] [rbp-1Ch]
  PVOID pv; // [rsp+50h] [rbp-18h] BYREF
  char v36; // [rsp+C0h] [rbp+58h]
  _WORD *v38; // [rsp+D8h] [rbp+70h] BYREF
  va_list va; // [rsp+D8h] [rbp+70h]
  va_list va1; // [rsp+E0h] [rbp+78h] BYREF

  va_start(va1, a5);
  va_start(va, a5);
  v38 = va_arg(va1, _WORD *);
  v5 = v38;
  v6 = *(unsigned __int8 *)(a3 + 10);
  v7 = 0;
  pv = 0LL;
  v9 = *v38;
  v30 = 0;
  v10 = 0;
  v11 = *(unsigned __int8 *)(a5 + 10);
  v36 = *(_BYTE *)(a5 + 10);
  LOWORD(v29) = 0;
  LOWORD(v38) = 0;
  v32 = 0;
  v31 = 0;
  if ( (_BYTE)v6 )
  {
    v7 = 0;
    v31 = 0;
    if ( (unsigned __int8)v6 <= 3u )
    {
      v25 = *(_QWORD *)(a3 + 32);
      v7 = 1 << byte_1C02E8864[v6];
      v31 = v7;
      if ( !v25 )
        return 4294967278LL;
      v32 = *(_DWORD *)(v25 + 8);
      if ( !v32 )
        return 4294967278LL;
    }
  }
  if ( !(unsigned int)SanityCheckDimension(*((unsigned int *)v5 + 4), *((unsigned int *)v5 + 6), 0LL)
    || !(unsigned int)SanityCheckDimension(*((unsigned int *)v5 + 5), *((unsigned int *)v5 + 7), v12)
    || !(unsigned int)SanityCheckDimension(*((unsigned int *)v5 + 8), *((unsigned int *)v5 + 10), v13)
    || !(unsigned int)SanityCheckDimension(*((unsigned int *)v5 + 9), *((unsigned int *)v5 + 11), v14)
    || (v9 & 1) != 0
    && (!(unsigned int)SanityCheckDimension(*((unsigned int *)v5 + 12), *((unsigned int *)v5 + 14), v15)
     || !(unsigned int)SanityCheckDimension(*((unsigned int *)v5 + 13), *((unsigned int *)v5 + 15), v27))
    || (v9 & 0x10) != 0
    && (!(unsigned int)SanityCheckDimension(*((unsigned int *)v5 + 16), *((unsigned int *)v5 + 18), v15)
     || !(unsigned int)SanityCheckDimension(*((unsigned int *)v5 + 17), *((unsigned int *)v5 + 19), v18)) )
  {
    return 4294967294LL;
  }
  if ( (v9 & 0x200) == 0 )
  {
LABEL_12:
    BYTE2(v29) = *((_BYTE *)v5 + 3);
    LOWORD(v29) = 1024;
    HIBYTE(v29) = v11;
    if ( (v9 & 2) != 0 )
      v10 |= 4u;
    if ( (v9 & 4) != 0 )
      v10 |= 2u;
    if ( (v9 & 0x20) != 0 || (_BYTE)v11 == 1 )
      v10 |= 1u;
    if ( (v9 & 0x80u) != 0 )
      v10 |= 8u;
    if ( (v9 & 0x100) != 0 )
      v10 |= 0x20u;
    v19 = pDCIAdjClr(
            v17,
            v16,
            (unsigned int)&pv,
            4 * (v7 + (unsigned int)(unsigned __int16)v15) + 688,
            v10,
            v29,
            (__int64)&v30);
    v20 = v19;
    if ( !v19 )
      return v30;
    v21 = (char *)pv + 312;
    *((_QWORD *)pv + 39) = v19;
    *((_QWORD *)v21 + 1) = pv;
    *((_QWORD *)v21 + 4) = a4;
    *((_QWORD *)v21 + 5) = a5;
    *((_QWORD *)v21 + 6) = v21 + 88;
    v22 = v31;
    *((_QWORD *)v21 + 3) = a3;
    v23 = v21 + 688;
    *((_QWORD *)v21 + 2) = v5;
    if ( v22 )
    {
      v26 = v32;
      *((_QWORD *)v21 + 22) = v23;
      *((_WORD *)v21 + 49) = v26;
      v23 += 4 * v22;
    }
    if ( (v10 & 0x80u) == 0 )
    {
LABEL_26:
      v21[249] = v36;
      v21[161] = v6;
      if ( (v9 & 0x40) != 0 )
        *((_QWORD *)v21 + 4) = 0LL;
      v30 = AAHalftoneBitmap(v21, 0LL);
      EngFreeMem(pv);
      return v30;
    }
    if ( *(_QWORD *)(v20 + 7064) || (v28 = EngAllocMem(1u, 0xB00u, 0x35345448u), (*(_QWORD *)(v20 + 7064) = v28) != 0LL) )
    {
      if ( (v10 & 0x100) != 0 )
      {
        *(_WORD *)(v20 + 7056) = *(_WORD *)(v20 + 7058);
        *(_WORD *)(v20 + 7058) = *(unsigned __int8 *)(*((_QWORD *)v5 + 1) + 1LL);
      }
      if ( (_WORD)v38 )
      {
        *((_QWORD *)v21 + 33) = v23;
        *((_WORD *)v21 + 93) = *(_WORD *)(*((_QWORD *)v5 + 1) + 2LL);
      }
      goto LABEL_26;
    }
    EngReleaseSemaphore(*(HSEMAPHORE *)(v20 + 8));
    return 4294967294LL;
  }
  result = CheckABInfo((_DWORD)v5, v6, v11, (unsigned int)&v29, (__int64)va);
  v30 = result;
  if ( (int)result > 0 )
  {
    v10 = v29;
    LOWORD(v15) = (_WORD)v38;
    v16 = a2;
    v17 = a1;
    goto LABEL_12;
  }
  return result;
}
