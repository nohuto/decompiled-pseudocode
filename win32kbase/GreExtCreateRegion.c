/*
 * XREFs of GreExtCreateRegion @ 0x1C0019830
 * Callers:
 *     NtGdiExtCreateRegion @ 0x1C0019720 (NtGdiExtCreateRegion.c)
 * Callees:
 *     vConvertXformToMatrix @ 0x1C000DEE0 (vConvertXformToMatrix.c)
 *     ?vTighten@RGNOBJ@@QEAAXXZ @ 0x1C0019490 (-vTighten@RGNOBJ@@QEAAXXZ.c)
 *     ?bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z @ 0x1C0019558 (-bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z.c)
 *     ?hrgnAssociate@RGNOBJ@@QEAAPEAUHRGN__@@XZ @ 0x1C001C658 (-hrgnAssociate@RGNOBJ@@QEAAPEAUHRGN__@@XZ.c)
 *     ?vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ @ 0x1C0044250 (-vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ.c)
 *     PopThreadGuardedObject @ 0x1C00453C0 (PopThreadGuardedObject.c)
 *     ?iComplexity@RGNCOREOBJ@@QEBAJXZ @ 0x1C004832C (-iComplexity@RGNCOREOBJ@@QEBAJXZ.c)
 *     ?vInitialize@RGNMEMOBJ@@QEAAXK@Z @ 0x1C0053220 (-vInitialize@RGNMEMOBJ@@QEAAXK@Z.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0055304 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C00558E0 (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     ?vComputeAccelFlags@EXFORMOBJ@@QEAAXK@Z @ 0x1C0059750 (-vComputeAccelFlags@EXFORMOBJ@@QEAAXK@Z.c)
 *     EngSetLastError @ 0x1C00BAB10 (EngSetLastError.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 *     ??0PATHMEMOBJ@@QEAA@XZ @ 0x1C0180450 (--0PATHMEMOBJ@@QEAA@XZ.c)
 *     ?vUnlock@EPATHOBJ@@QEAAXXZ @ 0x1C0181920 (-vUnlock@EPATHOBJ@@QEAAXXZ.c)
 *     ?bCreate@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEAVEXFORMOBJ@@@Z @ 0x1C0183370 (-bCreate@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEAVEXFORMOBJ@@@Z.c)
 *     ?iReduce@RGNMEMOBJ@@QEAAJAEAVRGNOBJ@@@Z @ 0x1C0184084 (-iReduce@RGNMEMOBJ@@QEAAJAEAVRGNOBJ@@@Z.c)
 *     ?vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z @ 0x1C0184190 (-vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z.c)
 */

HRGN __fastcall GreExtCreateRegion(float *a1, unsigned int a2, struct _RECTL *a3)
{
  unsigned int right; // ebx
  PVOID v6; // rcx
  __int64 v7; // rsi
  _DWORD *v8; // rbx
  HRGN v9; // rdi
  HRGN v10; // rdi
  int v12; // edi
  PVOID Entry; // [rsp+20h] [rbp-99h] BYREF
  PVOID v14; // [rsp+28h] [rbp-91h] BYREF
  __int64 v15; // [rsp+30h] [rbp-89h] BYREF
  __m128 *v16; // [rsp+38h] [rbp-81h] BYREF
  int v17; // [rsp+44h] [rbp-75h]
  _BYTE v18[8]; // [rsp+50h] [rbp-69h] BYREF
  __int64 v19; // [rsp+58h] [rbp-61h]
  _BYTE v20[32]; // [rsp+A0h] [rbp-19h] BYREF
  int v21; // [rsp+C0h] [rbp+7h]
  __m128 v22; // [rsp+D0h] [rbp+17h] BYREF
  __int128 v23; // [rsp+E0h] [rbp+27h]
  int v24; // [rsp+F0h] [rbp+37h]

  right = a3->right;
  if ( a3->left == 32 && right <= 0xFFFFFFD && 16 * (right + 2) <= a2 )
  {
    RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&Entry, 0x70u);
    v6 = Entry;
    v7 = 0LL;
    if ( Entry )
    {
      if ( (unsigned int)RGNOBJ::bSet((RGNOBJ *)&Entry, right, a3 + 2) )
      {
        v8 = Entry;
        if ( !a1
          || (v16 = (__m128 *)(((unsigned __int64)Entry + 24) & ((unsigned __int128)-(__int128)(unsigned __int64)Entry >> 64)),
              (unsigned int)RGNCOREOBJ::iComplexity((RGNCOREOBJ *)&v16) == 1) )
        {
          RGNOBJ::vTighten((RGNOBJ *)&Entry);
          if ( (((v8[14] & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0
            || (((v8[17] & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0
            || (((v8[16] & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0
            || (((v8[15] & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0 )
          {
            REGION::vDeleteREGION(v8);
            return 0LL;
          }
          else
          {
            v9 = RGNOBJ::hrgnAssociate((RGNOBJ *)&Entry);
            if ( !v9 )
              REGION::vDeleteREGION(v8);
          }
          return v9;
        }
        v22 = 0LL;
        v24 = 0;
        v23 = 0LL;
        vConvertXformToMatrix(a1, &v22);
        DWORD2(v23) *= 16;
        HIDWORD(v23) *= 16;
        v16 = &v22;
        v17 = 0;
        v22 = _mm_mul_ps(v22, (__m128)_xmm);
        *((float *)&v23 + 1) = *((float *)&v23 + 1) * 16.0;
        *(float *)&v23 = *(float *)&v23 * 16.0;
        EXFORMOBJ::vComputeAccelFlags((EXFORMOBJ *)&v16, 8u);
        if ( (v24 & 0x43) == 0x43 )
        {
          RGNOBJ::vTighten((RGNOBJ *)&Entry);
          if ( ((v8[14] & 0xF8000000) == 0 || (v8[14] & 0xF8000000) == -134217728)
            && ((v8[17] & 0xF8000000) == 0 || (v8[17] & 0xF8000000) == -134217728)
            && ((v8[16] & 0xF8000000) == 0 || (v8[16] & 0xF8000000) == -134217728)
            && ((v8[15] & 0xF8000000) == 0 || (v8[15] & 0xF8000000) == -134217728) )
          {
            v10 = RGNOBJ::hrgnAssociate((RGNOBJ *)&Entry);
            if ( !v10 )
              REGION::vDeleteREGION(v8);
            return v10;
          }
          REGION::vDeleteREGION(v8);
          return (HRGN)v7;
        }
        PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v18);
        if ( !v19 )
        {
          EngSetLastError(8u);
          REGION::vDeleteREGION(v8);
LABEL_31:
          v10 = 0LL;
          goto LABEL_45;
        }
        v12 = RGNOBJ::bCreate((RGNOBJ *)&Entry, (struct EPATHOBJ *)v18, (struct EXFORMOBJ *)&v16);
        REGION::vDeleteREGION(v8);
        if ( !v12 )
          goto LABEL_31;
        RGNMEMOBJ::vCreate((RGNMEMOBJ *)&v15, (struct EPATHOBJ *)v18, 1u, 0LL);
        RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v15);
        if ( v15 && (RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v14, 0x70u), v14) )
        {
          RGNMEMOBJ::iReduce((RGNMEMOBJ *)&v14, (struct RGNOBJ *)&v15);
          RGNOBJ::vTighten((RGNOBJ *)&v14);
          if ( ((*((_DWORD *)v14 + 14) & 0xF8000000) == 0 || (*((_DWORD *)v14 + 14) & 0xF8000000) == -134217728)
            && ((*((_DWORD *)v14 + 17) & 0xF8000000) == 0 || (*((_DWORD *)v14 + 17) & 0xF8000000) == -134217728)
            && ((*((_DWORD *)v14 + 16) & 0xF8000000) == 0 || (*((_DWORD *)v14 + 16) & 0xF8000000) == -134217728)
            && ((*((_DWORD *)v14 + 15) & 0xF8000000) == 0 || (*((_DWORD *)v14 + 15) & 0xF8000000) == -134217728) )
          {
            v10 = RGNOBJ::hrgnAssociate((RGNOBJ *)&v14);
            if ( !v10 )
            {
              REGION::vDeleteREGION(v14);
              v14 = 0LL;
            }
            goto LABEL_44;
          }
          REGION::vDeleteREGION(v14);
          v14 = 0LL;
        }
        else
        {
          EngSetLastError(8u);
        }
        v10 = 0LL;
LABEL_44:
        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v15);
LABEL_45:
        EPATHOBJ::vUnlock((EPATHOBJ *)v18);
        if ( v21 )
          PopThreadGuardedObject(v20);
        return v10;
      }
      v6 = Entry;
    }
    REGION::vDeleteREGION(v6);
    EngSetLastError(8u);
    return (HRGN)v7;
  }
  return 0LL;
}
