/*
 * XREFs of HT_HalftoneBitmap @ 0x1C001AA8C
 * Callers:
 *     EngHTBlt @ 0x1C0019F38 (EngHTBlt.c)
 * Callees:
 *     SanityCheckDimension @ 0x1C001AD38 (SanityCheckDimension.c)
 *     AAHalftoneBitmap @ 0x1C001AD68 (AAHalftoneBitmap.c)
 *     pDCIAdjClr @ 0x1C001C210 (pDCIAdjClr.c)
 *     CheckABInfo @ 0x1C026106C (CheckABInfo.c)
 */

__int64 HT_HalftoneBitmap(int a1, int a2, __int64 a3, __int64 a4, __int64 a5, ...)
{
  __int64 v5; // r9
  _WORD *v6; // rdi
  __int16 v9; // si
  __int16 v10; // r15
  int v11; // ebx
  unsigned __int16 v12; // r13
  __int64 v13; // r8
  __int64 v14; // r8
  __int64 v15; // r8
  __int64 v16; // r8
  int v17; // r9d
  int v18; // r11d
  __int64 v19; // r8
  __int64 v20; // rax
  __int64 v21; // r14
  char *v22; // rbx
  char *v23; // r12
  __int64 result; // rax
  __int64 v25; // rax
  __int64 v26; // r8
  PVOID v27; // rax
  char v28; // [rsp+40h] [rbp-20h]
  int v29; // [rsp+44h] [rbp-1Ch] BYREF
  unsigned int v30; // [rsp+48h] [rbp-18h] BYREF
  int v31; // [rsp+4Ch] [rbp-14h]
  PVOID pv; // [rsp+50h] [rbp-10h] BYREF
  char v34; // [rsp+B0h] [rbp+50h]
  _WORD *v36; // [rsp+C8h] [rbp+68h] BYREF
  va_list va; // [rsp+C8h] [rbp+68h]
  va_list va1; // [rsp+D0h] [rbp+70h] BYREF

  va_start(va1, a5);
  va_start(va, a5);
  v36 = va_arg(va1, _WORD *);
  v5 = *(unsigned __int8 *)(a3 + 10);
  v6 = v36;
  pv = 0LL;
  v30 = 0;
  v9 = 0;
  v10 = *v36;
  v11 = *(unsigned __int8 *)(a5 + 10);
  v12 = 0;
  v28 = *(_BYTE *)(a5 + 10);
  v34 = v5;
  LOWORD(v29) = 0;
  LOWORD(v36) = 0;
  v31 = 0;
  if ( (_BYTE)v5 )
  {
    v12 = 0;
    if ( (unsigned __int8)v5 <= 3u )
    {
      v25 = *(_QWORD *)(a3 + 32);
      v12 = 1 << byte_1C02EBEE4[v5];
      if ( !v25 )
        return 4294967278LL;
      v31 = *(_DWORD *)(v25 + 8);
      if ( !v31 )
        return 4294967278LL;
    }
  }
  if ( !(unsigned int)SanityCheckDimension(*((unsigned int *)v6 + 4), *((unsigned int *)v6 + 6), 0LL)
    || !(unsigned int)SanityCheckDimension(*((unsigned int *)v6 + 5), *((unsigned int *)v6 + 7), v13)
    || !(unsigned int)SanityCheckDimension(*((unsigned int *)v6 + 8), *((unsigned int *)v6 + 10), v14)
    || !(unsigned int)SanityCheckDimension(*((unsigned int *)v6 + 9), *((unsigned int *)v6 + 11), v15)
    || (v10 & 1) != 0
    && (!(unsigned int)SanityCheckDimension(*((unsigned int *)v6 + 12), *((unsigned int *)v6 + 14), v16)
     || !(unsigned int)SanityCheckDimension(*((unsigned int *)v6 + 13), *((unsigned int *)v6 + 15), v26))
    || (v10 & 0x10) != 0
    && (!(unsigned int)SanityCheckDimension(*((unsigned int *)v6 + 16), *((unsigned int *)v6 + 18), v16)
     || !(unsigned int)SanityCheckDimension(*((unsigned int *)v6 + 17), *((unsigned int *)v6 + 19), v19)) )
  {
    return 4294967294LL;
  }
  if ( (v10 & 0x200) == 0 )
  {
LABEL_12:
    BYTE2(v29) = *((_BYTE *)v6 + 3);
    LOWORD(v29) = 1024;
    HIBYTE(v29) = v11;
    if ( (v10 & 2) != 0 )
      v9 |= 4u;
    if ( (v10 & 4) != 0 )
      v9 |= 2u;
    if ( (v10 & 0x20) != 0 || (_BYTE)v11 == 1 )
      v9 |= 1u;
    if ( (v10 & 0x80u) != 0 )
      v9 |= 8u;
    if ( (v10 & 0x100) != 0 )
      v9 |= 0x20u;
    v20 = pDCIAdjClr(
            v18,
            a2,
            (unsigned int)&pv,
            4 * (v12 + (unsigned int)(unsigned __int16)v16) + 688,
            v9,
            v29,
            (__int64)&v30);
    v21 = v20;
    if ( !v20 )
      return v30;
    v22 = (char *)pv + 312;
    *((_QWORD *)pv + 39) = v20;
    *((_QWORD *)v22 + 1) = pv;
    *((_QWORD *)v22 + 4) = a4;
    *((_QWORD *)v22 + 5) = a5;
    *((_QWORD *)v22 + 3) = a3;
    v23 = v22 + 688;
    *((_QWORD *)v22 + 6) = v22 + 88;
    *((_QWORD *)v22 + 2) = v6;
    if ( v12 )
    {
      *((_WORD *)v22 + 49) = v31;
      *((_QWORD *)v22 + 22) = v23;
      v23 += 4 * v12;
    }
    if ( (v9 & 0x80u) == 0 )
    {
LABEL_26:
      v22[161] = v34;
      v22[249] = v28;
      if ( (v10 & 0x40) != 0 )
        *((_QWORD *)v22 + 4) = 0LL;
      v30 = AAHalftoneBitmap(v22, 0LL);
      EngFreeMem(pv);
      return v30;
    }
    if ( *(_QWORD *)(v20 + 7064) || (v27 = EngAllocMem(1u, 0xB00u, 0x35345448u), (*(_QWORD *)(v21 + 7064) = v27) != 0LL) )
    {
      if ( (v9 & 0x100) != 0 )
      {
        *(_WORD *)(v21 + 7056) = *(_WORD *)(v21 + 7058);
        *(_WORD *)(v21 + 7058) = *(unsigned __int8 *)(*((_QWORD *)v6 + 1) + 1LL);
      }
      if ( (_WORD)v36 )
      {
        *((_QWORD *)v22 + 33) = v23;
        *((_WORD *)v22 + 93) = *(_WORD *)(*((_QWORD *)v6 + 1) + 2LL);
      }
      goto LABEL_26;
    }
    EngReleaseSemaphore(*(HSEMAPHORE *)(v21 + 8));
    return 4294967294LL;
  }
  result = CheckABInfo((_DWORD)v6, v17, v11, (unsigned int)&v29, (__int64)va);
  v30 = result;
  if ( (int)result > 0 )
  {
    v9 = v29;
    LOWORD(v16) = (_WORD)v36;
    v18 = a1;
    goto LABEL_12;
  }
  return result;
}
