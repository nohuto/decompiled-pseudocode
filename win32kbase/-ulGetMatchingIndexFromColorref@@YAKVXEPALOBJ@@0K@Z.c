/*
 * XREFs of ?ulGetMatchingIndexFromColorref@@YAKVXEPALOBJ@@0K@Z @ 0x1C00281CC
 * Callers:
 *     ?vInitBrush@EBRUSHOBJ@@QEAAXPEAVDC@@PEAVBRUSH@@VXEPALOBJ@@2PEAVSURFACE@@H@Z @ 0x1C0027D30 (-vInitBrush@EBRUSHOBJ@@QEAAXPEAVDC@@PEAVBRUSH@@VXEPALOBJ@@2PEAVSURFACE@@H@Z.c)
 * Callees:
 *     ?bIsPalDefault@XEPALOBJ@@QEBAHXZ @ 0x1C000A328 (-bIsPalDefault@XEPALOBJ@@QEBAHXZ.c)
 *     ?ulDispatchGFPEFunction@XEPALOBJ@@QEAAKW4GFPE_FUNCTION_ID@@K@Z @ 0x1C0028270 (-ulDispatchGFPEFunction@XEPALOBJ@@QEAAKW4GFPE_FUNCTION_ID@@K@Z.c)
 */

__int64 __fastcall ulGetMatchingIndexFromColorref(_DWORD *a1, __int64 a2, unsigned int a3)
{
  __int64 v6; // rax
  __int64 v7; // rbp
  __int64 v8; // r8
  __int64 result; // rax
  unsigned int v10; // ebx
  __int64 v11; // rdx
  __int64 v12; // rcx
  _DWORD *v13; // [rsp+40h] [rbp+8h] BYREF
  __int64 v14; // [rsp+48h] [rbp+10h] BYREF
  unsigned int v15; // [rsp+50h] [rbp+18h]

  v14 = a2;
  v13 = a1;
  v6 = SGDGetSessionState(a1);
  v15 = a3;
  v7 = *(_QWORD *)(v6 + 24);
  if ( !a1 || (a1[6] & 0x800) != 0 )
  {
    if ( (a3 & 0x3000000) == 0 )
    {
LABEL_25:
      if ( (a3 & 0x10FF0000) != 0x10FF0000 )
      {
        HIBYTE(v15) = 0;
        result = v15;
        if ( v15 == 0xFFFFFF )
        {
          LODWORD(result) = 19;
        }
        else
        {
          if ( v15 )
          {
            v14 = *(_QWORD *)(v7 + 6000);
            result = XEPALOBJ::ulDispatchGFPEFunction(&v14, *(unsigned int *)(v14 + 100), v15);
          }
          if ( (unsigned int)(result - 10) > 0xFFFFFFF4 )
            return result;
        }
        return (unsigned int)(result + 236);
      }
      return (unsigned __int8)a3;
    }
    if ( (a3 & 0x1000000) != 0 )
    {
      v15 = (unsigned int)(unsigned __int16)a3 < *(_DWORD *)(a2 + 28) ? (unsigned __int16)a3 : 0;
      v10 = v15;
    }
    else
    {
      v11 = *(unsigned int *)(a2 + 96);
      HIBYTE(v15) = 0;
      v10 = XEPALOBJ::ulDispatchGFPEFunction(&v14, v11, v15);
    }
    if ( XEPALOBJ::bIsPalDefault((XEPALOBJ *)&v14) )
    {
      result = v10 + 236;
      if ( v10 < 0xA )
        return v10;
      return result;
    }
    if ( a1 )
    {
      v12 = *(_QWORD *)(a2 + 80);
      if ( !v12 )
      {
LABEL_22:
        a3 = *(_DWORD *)(*(_QWORD *)(a2 + 112) + 4LL * v10);
        v15 = a3;
        if ( HIBYTE(a3) == 2 )
          return (unsigned __int8)a3;
        goto LABEL_25;
      }
    }
    else
    {
      v12 = *(_QWORD *)(a2 + 72);
      if ( !v12 )
        goto LABEL_22;
    }
    return *(unsigned __int8 *)(v10 + v12 + 4);
  }
  if ( (a3 & 0x1000000) != 0 )
  {
    v8 = *(unsigned int *)(*(_QWORD *)(a2 + 112)
                         + 4LL
                         * ((unsigned __int16)a3 & (unsigned int)-((unsigned int)(unsigned __int16)a3 < *(_DWORD *)(a2 + 28))));
  }
  else
  {
    if ( (a3 & 0x10FF0000) == 0x10FF0000 )
      return (unsigned __int8)a3 & (unsigned int)-((unsigned int)(unsigned __int8)a3 < a1[7]);
    HIBYTE(v15) = 0;
    v8 = v15;
  }
  return XEPALOBJ::ulDispatchGFPEFunction(&v13, (unsigned int)a1[25], v8);
}
