/*
 * XREFs of SymCryptEcpointSetValue @ 0x140406B10
 * Callers:
 *     SymCryptEcurveAllocate @ 0x1403FF93C (SymCryptEcurveAllocate.c)
 *     SymCryptEckeySetValue @ 0x140400318 (SymCryptEckeySetValue.c)
 * Callees:
 *     SymCryptFdefSizeofModElementFromModulus @ 0x14040009C (SymCryptFdefSizeofModElementFromModulus.c)
 *     SymCryptEcurveSizeofFieldElement @ 0x1404000F0 (SymCryptEcurveSizeofFieldElement.c)
 *     SymCryptIntCreate @ 0x140400BBC (SymCryptIntCreate.c)
 *     SymCryptIntFromModulus @ 0x140400C30 (SymCryptIntFromModulus.c)
 *     SymCryptIntIsLessThan @ 0x140400CA8 (SymCryptIntIsLessThan.c)
 *     SymCryptIntSetValue @ 0x140400D10 (SymCryptIntSetValue.c)
 *     SymCryptModElementSetValue @ 0x140400FE0 (SymCryptModElementSetValue.c)
 *     SymCryptSizeofIntFromDigits @ 0x140401350 (SymCryptSizeofIntFromDigits.c)
 *     SymCryptEcpointCreateEx @ 0x140406900 (SymCryptEcpointCreateEx.c)
 *     SymCryptEcpointTransform @ 0x140406D14 (SymCryptEcpointTransform.c)
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
  unsigned __int64 v12; // rsi
  __int64 result; // rax
  __int64 v14; // r15
  int v15; // ebx
  __int64 v16; // r14
  __int64 v17; // r12
  int v18; // esi
  __int64 v19; // rbx
  __int64 v20; // r15
  __int64 v21; // rax
  unsigned __int64 v22; // [rsp+90h] [rbp+18h]

  SymCryptFdefSizeofModElementFromModulus(a1);
  v12 = *((unsigned int *)SymCryptEcpointFormatNumberofElements + (int)a5);
  if ( a3 != (_DWORD)v12 * (unsigned int)SymCryptEcurveSizeofFieldElement(a1) )
    return 209715725LL;
  v22 = a3 / v12;
  SymCryptSizeofIntFromDigits();
  v14 = a8;
  SymCryptIntCreate();
  v15 = 0;
  if ( !*((_DWORD *)SymCryptEcpointFormatNumberofElements + (int)a5) )
  {
LABEL_7:
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
        v21 = (unsigned int)(v18 * *(_DWORD *)(a1 + 36));
        if ( !(v21 + v17 + 32) )
          break;
        v20 = v16 + v14;
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
        v14 = a8;
      }
    }
    return 209715724LL;
  }
  while ( 1 )
  {
    result = SymCryptIntSetValue();
    if ( (_DWORD)result )
      return result;
    SymCryptIntFromModulus();
    if ( !(unsigned int)SymCryptIntIsLessThan() )
      return 209715726LL;
    if ( (unsigned int)++v15 >= *((_DWORD *)SymCryptEcpointFormatNumberofElements + (int)a5) )
      goto LABEL_7;
  }
}
