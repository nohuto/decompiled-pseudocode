/*
 * XREFs of HT_HalftoneBitmap @ 0x1C025325C
 * Callers:
 *     EngHTBlt @ 0x1C02E0A38 (EngHTBlt.c)
 * Callees:
 *     SanityCheckDimension @ 0x1C014AEB8 (SanityCheckDimension.c)
 *     CheckABInfo @ 0x1C02523FC (CheckABInfo.c)
 *     AAHalftoneBitmap @ 0x1C0253604 (AAHalftoneBitmap.c)
 *     pDCIAdjClr @ 0x1C02583A8 (pDCIAdjClr.c)
 */

__int64 __fastcall HT_HalftoneBitmap(int a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int16 *a6)
{
  __int64 v6; // rdx
  __int16 v8; // si
  unsigned __int16 v9; // r15
  __int16 v10; // r12
  int v11; // ebx
  int v12; // r14d
  unsigned __int16 v13; // r13
  __int64 v14; // rax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  __int64 result; // rax
  __int64 v24; // rax
  __int64 v25; // r14
  char *v26; // rbx
  char *v27; // r15
  PVOID v28; // rax
  char v29; // [rsp+40h] [rbp-28h]
  unsigned __int16 v30; // [rsp+44h] [rbp-24h] BYREF
  int v31; // [rsp+48h] [rbp-20h] BYREF
  unsigned int v32; // [rsp+4Ch] [rbp-1Ch] BYREF
  int v33; // [rsp+50h] [rbp-18h]
  PVOID pv; // [rsp+58h] [rbp-10h] BYREF
  char v39; // [rsp+D8h] [rbp+70h]

  v6 = *(unsigned __int8 *)(a3 + 10);
  v8 = 0;
  pv = 0LL;
  v9 = 0;
  v32 = 0;
  v10 = *a6;
  v11 = v6;
  v12 = *(unsigned __int8 *)(a5 + 10);
  v13 = 0;
  v39 = v6;
  v29 = *(_BYTE *)(a5 + 10);
  LOWORD(v31) = 0;
  v30 = 0;
  v33 = 0;
  if ( (_DWORD)v6 != 1 && (unsigned int)(v6 - 2) > 1
    || (v14 = *(_QWORD *)(a3 + 32), v13 = 1 << byte_1C0324CE8[v6], v14) && (v33 = *(_DWORD *)(v14 + 8)) != 0 )
  {
    LOBYTE(v15) = SanityCheckDimension(*((unsigned int *)a6 + 4), *((_DWORD *)a6 + 6));
    if ( !v15 )
      return 4294967294LL;
    LOBYTE(v16) = SanityCheckDimension(*((unsigned int *)a6 + 5), *((_DWORD *)a6 + 7));
    if ( !v16 )
      return 4294967294LL;
    LOBYTE(v17) = SanityCheckDimension(*((unsigned int *)a6 + 8), *((_DWORD *)a6 + 10));
    if ( !v17 )
      return 4294967294LL;
    LOBYTE(v18) = SanityCheckDimension(*((unsigned int *)a6 + 9), *((_DWORD *)a6 + 11));
    if ( !v18 )
      return 4294967294LL;
    if ( (*(_BYTE *)a6 & 1) != 0 )
    {
      LOBYTE(v19) = SanityCheckDimension(*((unsigned int *)a6 + 12), *((_DWORD *)a6 + 14));
      if ( !v19 )
        return 4294967294LL;
      LOBYTE(v20) = SanityCheckDimension(*((unsigned int *)a6 + 13), *((_DWORD *)a6 + 15));
      if ( !v20 )
        return 4294967294LL;
    }
    if ( (*(_BYTE *)a6 & 0x10) != 0 )
    {
      LOBYTE(v21) = SanityCheckDimension(*((unsigned int *)a6 + 16), *((_DWORD *)a6 + 18));
      if ( !v21 )
        return 4294967294LL;
      LOBYTE(v22) = SanityCheckDimension(*((unsigned int *)a6 + 17), *((_DWORD *)a6 + 19));
      if ( !v22 )
        return 4294967294LL;
    }
    if ( (v10 & 0x200) != 0 )
    {
      result = CheckABInfo((__int64)a6, v11, v12, (__int16 *)&v31, &v30);
      v32 = result;
      if ( (int)result <= 0 )
        return result;
      v8 = v31;
      v9 = v30;
    }
    BYTE2(v31) = *((_BYTE *)a6 + 3);
    LOWORD(v31) = 1024;
    HIBYTE(v31) = v12;
    if ( (v10 & 2) != 0 )
      v8 |= 4u;
    if ( (v10 & 4) != 0 )
      v8 |= 2u;
    if ( (v10 & 0x20) != 0 || (_BYTE)v12 == 1 )
      v8 |= 1u;
    if ( (v10 & 0x80u) != 0 )
      v8 |= 8u;
    if ( (v10 & 0x100) != 0 )
      v8 |= 0x20u;
    v24 = pDCIAdjClr(a1, a2, (unsigned int)&pv, 4 * (v13 + (unsigned int)v9) + 688, v8, v31, (__int64)&v32);
    v25 = v24;
    if ( !v24 )
      return v32;
    v26 = (char *)pv + 312;
    *((_QWORD *)pv + 39) = v24;
    v27 = v26 + 688;
    *((_QWORD *)v26 + 1) = pv;
    *((_QWORD *)v26 + 3) = a3;
    *((_QWORD *)v26 + 4) = a4;
    *((_QWORD *)v26 + 5) = a5;
    *((_QWORD *)v26 + 6) = v26 + 88;
    *((_QWORD *)v26 + 2) = a6;
    if ( v13 )
    {
      *((_WORD *)v26 + 49) = v33;
      *((_QWORD *)v26 + 22) = v27;
      v27 += 4 * v13;
    }
    if ( (v8 & 0x80u) != 0 )
    {
      if ( !*(_QWORD *)(v24 + 7064) )
      {
        v28 = EngAllocMem(1u, 0xB00u, 0x35345448u);
        *(_QWORD *)(v25 + 7064) = v28;
        if ( !v28 )
        {
          EngReleaseSemaphore(*(HSEMAPHORE *)(v25 + 8));
          return 4294967294LL;
        }
      }
      if ( (v8 & 0x100) != 0 )
      {
        *(_WORD *)(v25 + 7056) = *(_WORD *)(v25 + 7058);
        *(_WORD *)(v25 + 7058) = *(unsigned __int8 *)(*((_QWORD *)a6 + 1) + 1LL);
      }
      if ( v30 )
      {
        *((_QWORD *)v26 + 33) = v27;
        *((_WORD *)v26 + 93) = *(_WORD *)(*((_QWORD *)a6 + 1) + 2LL);
      }
    }
    v26[161] = v39;
    v26[249] = v29;
    if ( (v10 & 0x40) != 0 )
      *((_QWORD *)v26 + 4) = 0LL;
    v32 = AAHalftoneBitmap(v26, 0LL);
    EngFreeMem(pv);
    return v32;
  }
  return 4294967278LL;
}
