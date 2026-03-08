/*
 * XREFs of _lambda_58ec37c2392282bb0e6e3e53197351b6_::operator() @ 0x1C03BBCD4
 * Callers:
 *     ?_ConstructDefault@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEAI@Z @ 0x1C03BD220 (-_ConstructDefault@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEAI@Z.c)
 * Callees:
 *     ?D3DKMDT_VPPR_GET_CONTENT_ROTATION@@YA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z @ 0x1C000A260 (-D3DKMDT_VPPR_GET_CONTENT_ROTATION@@YA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C01B1660 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 */

__int64 __fastcall lambda_58ec37c2392282bb0e6e3e53197351b6_::operator()(CCD_TOPOLOGY **a1, __int64 a2, unsigned int a3)
{
  __int64 result; // rax
  __int64 v5; // r10
  __int64 v6; // r11
  unsigned int v7; // ecx
  unsigned int v8; // edx
  unsigned int v9; // r8d

  result = (__int64)CCD_TOPOLOGY::GetPathDescriptor(*a1, a3);
  if ( _bittest64((const signed __int64 *)a2, 0x32u)
    && (*(_QWORD *)result & 0x4000000000000LL) != 0
    && *(_DWORD *)(a2 + 184) == *(_DWORD *)(result + 184)
    && (*(_QWORD *)result & 0x20000LL) != 0 )
  {
    if ( (((unsigned int)D3DKMDT_VPPR_GET_CONTENT_ROTATION(*(_DWORD *)(result + 132)) - 1) & 0xFFFFFFFD) != 0 )
    {
      v7 = *(_DWORD *)(v5 + 156);
      result = *(unsigned int *)(v5 + 152);
    }
    else
    {
      v7 = *(_DWORD *)(v5 + 152);
      result = *(unsigned int *)(v5 + 156);
    }
    if ( (v8 = *(_DWORD *)(v5 + 96), v7 > v8)
      || (v9 = *(_DWORD *)(v5 + 100), (unsigned int)result > v9)
      || (v7 != v8 || (_DWORD)result != v9 ? (result = 0xFFFFFFFFLL) : (result = 0LL),
          (v6 & 0x400) == 0 && (int)result < 0) )
    {
      *(_QWORD *)v5 = v6 & 0xFFFFFFFFFF7DFE78uLL;
    }
  }
  return result;
}
