/*
 * XREFs of ?UpdateIntObjUsage@@YAXPEAUtagWND@@UtagINTERACTIVECTRL_INFO@@IW4tagINTERACTIVECTRL_PROMOTION_TYPE@@_K@Z @ 0x1C0249D74
 * Callers:
 *     ?HandleIntObjUsageTelemetry@@YAXPEAURawInputManagerDeviceObject@@PEAUtagWND@@UtagINTERACTIVECTRL_INFO@@IW4tagINTERACTIVECTRL_PROMOTION_TYPE@@@Z @ 0x1C0249910 (-HandleIntObjUsageTelemetry@@YAXPEAURawInputManagerDeviceObject@@PEAUtagWND@@UtagINTERACTIVECTRL.c)
 * Callees:
 *     sqrt_0 @ 0x1C0130AD0 (sqrt_0.c)
 */

__int64 __fastcall UpdateIntObjUsage(__int64 a1, __int64 a2, __int16 a3, int a4, __int64 a5)
{
  int v6; // r12d
  __int64 result; // rax
  __int64 v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // rsi
  _BOOL8 v14; // r14
  unsigned int v15; // ebp
  __int64 v16; // rcx
  unsigned __int64 v17; // rbx
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rbx
  __int64 v21; // rcx
  unsigned int v22; // eax
  __int64 v23; // r8
  double v24; // xmm1_8
  double v25; // xmm2_8
  unsigned int v26; // eax
  double i; // xmm0_8
  double j; // xmm0_8
  __int64 v29; // rbp
  __int64 v30; // rcx
  unsigned __int64 v31; // rbx
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // rbx
  __int64 v35; // rcx
  __int64 v36; // rcx
  unsigned __int64 v37; // rbx
  __int64 v38; // rcx
  __int64 v39; // rcx
  __int64 v40; // rbx
  __int64 v41; // rcx
  __int64 v42; // rdi
  __int64 v43; // rcx
  unsigned __int64 v44; // rbx
  __int64 v45; // rcx
  __int64 v46; // rbx
  __int64 v47; // rcx
  int v48; // ebp
  __int64 v49; // xmm1_8
  __int64 v50; // [rsp+20h] [rbp-38h]
  __int64 v51; // [rsp+28h] [rbp-30h]
  __int64 v52; // [rsp+68h] [rbp+10h]

  v6 = *(_DWORD *)(a2 + 20) & 2;
  result = SGDGetUserSessionState(a1);
  v12 = result + 16904;
  v52 = result + 16904;
  v13 = result + 17160;
  if ( (unsigned int)(a4 - 1) <= 1 )
  {
    if ( (a3 & 0x80u) != 0 )
    {
      v42 = 0LL;
      if ( *(_DWORD *)(result + 17304) )
      {
        *(_QWORD *)(SGDGetUserSessionState(v11) + 17272) = a5;
        v44 = *(_QWORD *)(SGDGetUserSessionState(v43) + 17272);
        if ( v44 > *(_QWORD *)(SGDGetUserSessionState(v45) + 17264) )
        {
          if ( *(_QWORD *)(SGDGetUserSessionState(v11) + 17264) )
          {
            v46 = *(_QWORD *)(SGDGetUserSessionState(v11) + 17272);
            *(_QWORD *)(v13 + 48LL * (v6 != 0) + 40) += v46 - *(_QWORD *)(SGDGetUserSessionState(v47) + 17264);
          }
        }
      }
      *(_QWORD *)(SGDGetUserSessionState(v11) + 17264) = a5;
      v48 = a4 - 1;
      if ( v48 )
      {
        if ( v48 == 1 )
        {
          LOBYTE(v42) = v6 != 0;
          *(_DWORD *)(v13 + 48 * v42 + 20) += abs32(*(_DWORD *)(a2 + 24));
        }
      }
      else
      {
        LOBYTE(v42) = v6 != 0;
        *(_DWORD *)(v13 + 48 * v42 + 16) += abs32(*(_DWORD *)(a2 + 24));
      }
    }
  }
  else
  {
    if ( !a1 )
      return result;
    v14 = v6 != 0;
    if ( (a3 & 1) != 0 )
    {
      *(_QWORD *)(SGDGetUserSessionState(v11) + 17264) = a5;
      ++*(_DWORD *)(v13 + 48 * v14);
    }
    v15 = 2;
    if ( (a3 & 2) != 0 )
    {
      *(_QWORD *)(SGDGetUserSessionState(v11) + 17272) = a5;
      v17 = *(_QWORD *)(SGDGetUserSessionState(v16) + 17272);
      if ( v17 > *(_QWORD *)(SGDGetUserSessionState(v18) + 17264) && *(_QWORD *)(SGDGetUserSessionState(v19) + 17264) )
      {
        v20 = *(_QWORD *)(SGDGetUserSessionState(v19) + 17272);
        *(_QWORD *)(v13 + 48 * v14 + 40) += v20 - *(_QWORD *)(SGDGetUserSessionState(v21) + 17264);
      }
      v12 = v52;
      *(_QWORD *)(SGDGetUserSessionState(v19) + 17264) = a5;
    }
    if ( (a3 & 0x80u) != 0 )
    {
      v11 = *(unsigned int *)(a2 + 20);
      v22 = abs32(*(_DWORD *)(a2 + 24));
      v23 = v13 + 48 * v14;
      if ( (v11 & 4) != 0 )
        *(_DWORD *)(v23 + 28) += v22;
      else
        *(_DWORD *)(v23 + 4) += v22;
    }
    if ( (a3 & 0x2000) != 0 && !*(_DWORD *)(SGDGetUserSessionState(v11) + 17340) )
    {
      *(_DWORD *)(SGDGetUserSessionState(v11) + 17340) = 1;
      ++*(_DWORD *)(v13 + 48 * v14 + 24);
    }
    LOBYTE(v11) = (*(_BYTE *)(a2 + 20) & 4) != 0;
    if ( ((unsigned __int8)v11 & ((a3 & 0x1000) != 0)) != 0 )
    {
      v24 = DOUBLE_1_0;
      v50 = *(_QWORD *)(a2 + 12);
      v25 = DOUBLE_1_0;
      v51 = *(_QWORD *)(v12 + 388);
      v26 = 2;
      for ( i = (double)((int)v50 - (int)v51); ; i = i * i )
      {
        if ( (v26 & 1) != 0 )
          v25 = v25 * i;
        v26 >>= 1;
        if ( !v26 )
          break;
      }
      for ( j = (double)(HIDWORD(v50) - HIDWORD(v51)); ; j = j * j )
      {
        if ( (v15 & 1) != 0 )
          v24 = v24 * j;
        v15 >>= 1;
        if ( !v15 )
          break;
      }
      v29 = 48 * v14;
      *(double *)(v13 + 48 * v14 + 32) = sqrt_0(v24 + v25) + *(double *)(v13 + 48 * v14 + 32);
    }
    else
    {
      v29 = 48 * v14;
    }
    if ( (a3 & 0x100) != 0 )
    {
      ++*(_DWORD *)(v13 + v29 + 8);
      *(_DWORD *)(SGDGetUserSessionState(v11) + 17340) = 0;
    }
    if ( (a3 & 0x400) != 0 )
    {
      *(_QWORD *)(SGDGetUserSessionState(v11) + 17272) = a5;
      v31 = *(_QWORD *)(SGDGetUserSessionState(v30) + 17272);
      if ( v31 > *(_QWORD *)(SGDGetUserSessionState(v32) + 17264) && *(_QWORD *)(SGDGetUserSessionState(v33) + 17264) )
      {
        v34 = *(_QWORD *)(SGDGetUserSessionState(v33) + 17272);
        *(_QWORD *)(v13 + 40) += v34 - *(_QWORD *)(SGDGetUserSessionState(v35) + 17264);
      }
      *(_QWORD *)(SGDGetUserSessionState(v33) + 17264) = a5;
      ++*(_DWORD *)(v13 + v29 + 12);
    }
    if ( (a3 & 0x800) != 0 )
    {
      *(_QWORD *)(SGDGetUserSessionState(v11) + 17272) = a5;
      v37 = *(_QWORD *)(SGDGetUserSessionState(v36) + 17272);
      if ( v37 > *(_QWORD *)(SGDGetUserSessionState(v38) + 17264) )
      {
        if ( *(_QWORD *)(SGDGetUserSessionState(v39) + 17264) )
        {
          v40 = *(_QWORD *)(SGDGetUserSessionState(v39) + 17272);
          *(_QWORD *)(v13 + 88) += v40 - *(_QWORD *)(SGDGetUserSessionState(v41) + 17264);
        }
      }
      *(_QWORD *)(SGDGetUserSessionState(v39) + 17264) = a5;
    }
  }
  v49 = *(_QWORD *)(a2 + 16);
  result = *(unsigned int *)(a2 + 24);
  *(_OWORD *)(v52 + 376) = *(_OWORD *)a2;
  *(_QWORD *)(v52 + 392) = v49;
  *(_DWORD *)(v52 + 400) = result;
  return result;
}
