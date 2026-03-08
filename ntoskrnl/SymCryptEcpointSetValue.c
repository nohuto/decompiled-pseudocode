/*
 * XREFs of SymCryptEcpointSetValue @ 0x1403F96E0
 * Callers:
 *     SymCryptEcurveAllocate @ 0x1403F252C (SymCryptEcurveAllocate.c)
 *     SymCryptEckeySetValue @ 0x1403F2F18 (SymCryptEckeySetValue.c)
 * Callees:
 *     SymCryptFdefSizeofModElementFromModulus @ 0x1403F2C88 (SymCryptFdefSizeofModElementFromModulus.c)
 *     SymCryptEcurveSizeofFieldElement @ 0x1403F2CDC (SymCryptEcurveSizeofFieldElement.c)
 *     SymCryptIntCreate @ 0x1403F37C8 (SymCryptIntCreate.c)
 *     SymCryptIntFromModulus @ 0x1403F383C (SymCryptIntFromModulus.c)
 *     SymCryptIntIsLessThan @ 0x1403F38B4 (SymCryptIntIsLessThan.c)
 *     SymCryptIntSetValue @ 0x1403F391C (SymCryptIntSetValue.c)
 *     SymCryptModElementSetValue @ 0x1403F3B80 (SymCryptModElementSetValue.c)
 *     SymCryptSizeofIntFromDigits @ 0x1403F3EF0 (SymCryptSizeofIntFromDigits.c)
 *     SymCryptEcpointCreateEx @ 0x1403F94C0 (SymCryptEcpointCreateEx.c)
 *     SymCryptEcpointTransform @ 0x1403F98E4 (SymCryptEcpointTransform.c)
 */

__int64 __fastcall SymCryptEcpointSetValue(
        __int64 a1,
        int a2,
        unsigned __int64 a3,
        int a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 a8,
        __int64 a9)
{
  unsigned __int64 v12; // rdi
  __int64 result; // rax
  int v14; // ebx
  __int64 v15; // rbp
  __int64 v16; // r14
  __int64 v17; // r13
  int v18; // edi
  __int64 v19; // rbx
  __int64 v20; // rbp
  __int64 v21; // rax
  unsigned __int64 v22; // [rsp+90h] [rbp+18h]

  SymCryptFdefSizeofModElementFromModulus(a1);
  v12 = *((unsigned int *)SymCryptEcpointFormatNumberofElements + (int)a5);
  if ( a3 != (_DWORD)v12 * (unsigned int)SymCryptEcurveSizeofFieldElement(a1) )
    return 32781LL;
  v22 = a3 / v12;
  SymCryptSizeofIntFromDigits();
  SymCryptIntCreate();
  v14 = 0;
  if ( !*((_DWORD *)SymCryptEcpointFormatNumberofElements + (int)a5) )
  {
LABEL_7:
    v15 = a8;
    v16 = (unsigned int)(4 * *(_DWORD *)(a1 + 36) + 32);
    v17 = SymCryptEcpointCreateEx(a8, v16, a1, 4u);
    if ( v17 )
    {
      v18 = 0;
      if ( !*((_DWORD *)SymCryptEcpointFormatNumberofElements + (int)a5) )
      {
        v19 = a9 - v16;
        v20 = v16 + a8;
        return SymCryptEcpointTransform(a1, v17, a6, a5, 1, a7, v20, v19);
      }
      while ( 1 )
      {
        v21 = (unsigned int)(*(_DWORD *)(a1 + 36) * v18);
        if ( !(v21 + v17 + 32) )
          break;
        v20 = v16 + v15;
        v19 = a9 - v16;
        result = SymCryptModElementSetValue(
                   a2,
                   v22,
                   a4,
                   *(_DWORD **)(a1 + 616),
                   (void *)(v21 + v17 + 32),
                   v20,
                   a9 - v16);
        if ( (_DWORD)result )
          return result;
        a2 += v22;
        if ( (unsigned int)++v18 >= *((_DWORD *)SymCryptEcpointFormatNumberofElements + (int)a5) )
          return SymCryptEcpointTransform(a1, v17, a6, a5, 1, a7, v20, v19);
        v15 = a8;
      }
    }
    return 32780LL;
  }
  while ( 1 )
  {
    result = SymCryptIntSetValue();
    if ( (_DWORD)result )
      return result;
    SymCryptIntFromModulus();
    if ( !(unsigned int)SymCryptIntIsLessThan() )
      return 32782LL;
    if ( (unsigned int)++v14 >= *((_DWORD *)SymCryptEcpointFormatNumberofElements + (int)a5) )
      goto LABEL_7;
  }
}
