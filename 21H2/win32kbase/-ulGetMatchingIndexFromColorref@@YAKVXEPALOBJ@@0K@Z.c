/*
 * XREFs of ?ulGetMatchingIndexFromColorref@@YAKVXEPALOBJ@@0K@Z @ 0x1C00800F4
 * Callers:
 *     ?vInitBrush@EBRUSHOBJ@@QEAAXPEAVDC@@PEAVBRUSH@@VXEPALOBJ@@2PEAVSURFACE@@H@Z @ 0x1C007FCA0 (-vInitBrush@EBRUSHOBJ@@QEAAXPEAVDC@@PEAVBRUSH@@VXEPALOBJ@@2PEAVSURFACE@@H@Z.c)
 * Callees:
 *     ?ulDispatchGFPEFunction@XEPALOBJ@@QEAAKW4GFPE_FUNCTION_ID@@K@Z @ 0x1C0080180 (-ulDispatchGFPEFunction@XEPALOBJ@@QEAAKW4GFPE_FUNCTION_ID@@K@Z.c)
 */

__int64 __fastcall ulGetMatchingIndexFromColorref(struct PALETTE *a1, __int64 a2, unsigned int a3)
{
  __int64 v5; // r8
  unsigned int v7; // eax
  __int64 v8; // rdx
  unsigned int v9; // ecx
  __int64 v10; // rdx
  struct PALETTE *v11; // [rsp+30h] [rbp+8h] BYREF
  __int64 v12; // [rsp+38h] [rbp+10h] BYREF
  unsigned int v13; // [rsp+40h] [rbp+18h]

  v12 = a2;
  v11 = a1;
  v13 = a3;
  if ( !a1 || (*((_DWORD *)a1 + 6) & 0x800) != 0 )
  {
    if ( (a3 & 0x3000000) == 0 )
      goto LABEL_24;
    if ( (a3 & 0x1000000) != 0 )
    {
      v7 = (unsigned int)(unsigned __int16)a3 < *(_DWORD *)(a2 + 28) ? (unsigned __int16)a3 : 0;
    }
    else
    {
      v8 = *(unsigned int *)(a2 + 96);
      HIBYTE(v13) = 0;
      v7 = XEPALOBJ::ulDispatchGFPEFunction(&v12, v8, v13);
    }
    if ( (struct PALETTE *)a2 == ppalDefault )
    {
      v9 = v7 + 236;
      if ( v7 < 0xA )
        return v7;
      return v9;
    }
    if ( a1 )
      v10 = *(_QWORD *)(a2 + 80);
    else
      v10 = *(_QWORD *)(a2 + 72);
    if ( v10 )
      return *(unsigned __int8 *)(v7 + v10 + 4);
    a3 = *(_DWORD *)(*(_QWORD *)(a2 + 112) + 4LL * v7);
    v13 = a3;
    if ( HIBYTE(a3) != 2 )
    {
LABEL_24:
      if ( (a3 & 0x10FF0000) != 0x10FF0000 )
      {
        HIBYTE(v13) = 0;
        v9 = v13;
        if ( v13 == 0xFFFFFF )
        {
          v9 = 19;
        }
        else
        {
          if ( v13 )
          {
            v11 = ppalDefault;
            v9 = XEPALOBJ::ulDispatchGFPEFunction(&v11, *((unsigned int *)ppalDefault + 25), v13);
          }
          if ( v9 - 10 > 0xFFFFFFF4 )
            return v9;
        }
        v9 += 236;
        return v9;
      }
    }
    return (unsigned __int8)a3;
  }
  if ( (a3 & 0x1000000) != 0 )
  {
    v5 = *(unsigned int *)(*(_QWORD *)(a2 + 112)
                         + 4LL * ((unsigned int)(unsigned __int16)a3 < *(_DWORD *)(a2 + 28) ? a3 : 0));
    return XEPALOBJ::ulDispatchGFPEFunction(&v11, *((unsigned int *)a1 + 25), v5);
  }
  if ( (a3 & 0x10FF0000) != 0x10FF0000 )
  {
    HIBYTE(v13) = 0;
    v5 = v13;
    return XEPALOBJ::ulDispatchGFPEFunction(&v11, *((unsigned int *)a1 + 25), v5);
  }
  return (unsigned __int8)a3 & (unsigned int)-((unsigned int)(unsigned __int8)a3 < *((_DWORD *)a1 + 7));
}
