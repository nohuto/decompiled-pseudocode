/*
 * XREFs of SymCryptEcpointGetValue @ 0x1403F9550
 * Callers:
 *     SymCryptEcDsaVerify @ 0x1403F4010 (SymCryptEcDsaVerify.c)
 * Callees:
 *     SymCryptEcurveSizeofFieldElement @ 0x1403F2CDC (SymCryptEcurveSizeofFieldElement.c)
 *     SymCryptModElementGetValue @ 0x1403F3B04 (SymCryptModElementGetValue.c)
 *     SymCryptEcpointCreateEx @ 0x1403F94C0 (SymCryptEcpointCreateEx.c)
 *     SymCryptEcpointTransform @ 0x1403F98E4 (SymCryptEcpointTransform.c)
 */

__int64 __fastcall SymCryptEcpointGetValue(
        __int64 a1,
        int a2,
        int a3,
        int a4,
        __int64 a5,
        unsigned __int64 a6,
        int a7,
        __int64 a8,
        __int64 a9)
{
  __int64 v11; // rbp
  unsigned __int64 v12; // rdi
  __int64 result; // rax
  unsigned __int64 v14; // rax
  __int64 v15; // rdi
  int v16; // r15d
  __int64 v17; // r12
  __int64 v18; // r13
  __int64 v19; // r14
  int v20; // ebx
  int v21; // edi
  __int64 v22; // rdx

  v11 = a4;
  v12 = *((unsigned int *)SymCryptEcpointFormatNumberofElements + a4);
  if ( a6 != (_DWORD)v12 * (unsigned int)SymCryptEcurveSizeofFieldElement(a1) )
    return 32781LL;
  v14 = a6 / v12;
  v15 = (unsigned int)(4 * *(_DWORD *)(a1 + 36) + 32);
  v16 = v14;
  v17 = SymCryptEcpointCreateEx(a8, v15, a1, 4u);
  if ( !v17 )
    return 32780LL;
  v18 = v15 + a8;
  v19 = a9 - v15;
  result = SymCryptEcpointTransform(a1, a2, v17, a4, 0, a7, v15 + a8, a9 - v15);
  if ( !(_DWORD)result )
  {
    v20 = 0;
    if ( *((_DWORD *)SymCryptEcpointFormatNumberofElements + v11) )
    {
      v21 = a5;
      while ( 1 )
      {
        v22 = (unsigned int)(*(_DWORD *)(a1 + 36) * v20) + v17 + 32;
        if ( !v22 )
          break;
        result = SymCryptModElementGetValue(*(_QWORD *)(a1 + 616), v22, v21, v16, a3, v18, v19);
        if ( !(_DWORD)result )
        {
          v21 += v16;
          if ( (unsigned int)++v20 < *((_DWORD *)SymCryptEcpointFormatNumberofElements + v11) )
            continue;
        }
        return result;
      }
      return 32780LL;
    }
  }
  return result;
}
