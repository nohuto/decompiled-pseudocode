/*
 * XREFs of ?RtlStringCbCopyNW@@YAJPEAG_KPEBG1@Z @ 0x1C0011E10
 * Callers:
 *     ?DxgkQueryAdapterInfoImpl@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x1C018DC00 (-DxgkQueryAdapterInfoImpl@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 *     _lambda_b5f01eb3f4b149c357ab2eab84592b3f_::operator() @ 0x1C01AA250 (_lambda_b5f01eb3f4b149c357ab2eab84592b3f_--operator().c)
 *     ?CopyUmdFileName@ADAPTER_RENDER@@QEBAJPEAU_D3DKMT_UMDFILENAMEINFO@@@Z @ 0x1C01D05D8 (-CopyUmdFileName@ADAPTER_RENDER@@QEBAJPEAU_D3DKMT_UMDFILENAMEINFO@@@Z.c)
 *     ?CopyDListFileName@ADAPTER_RENDER@@QEBAJPEAGI@Z @ 0x1C02BB968 (-CopyDListFileName@ADAPTER_RENDER@@QEBAJPEAGI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlStringCbCopyNW(char *a1, __int64 a2, char *a3, unsigned __int64 a4)
{
  unsigned __int64 v4; // r9
  __int64 v5; // rdx
  unsigned int v6; // r11d
  signed __int64 v7; // r8
  unsigned __int16 v8; // ax
  __int64 result; // rax

  v4 = a4 >> 1;
  if ( v4 > 0x7FFFFFFE )
  {
    result = 3221225485LL;
  }
  else
  {
    v5 = 260LL;
    v6 = 0;
    v7 = a3 - a1;
    while ( v5 + v4 - 260 )
    {
      v8 = *(_WORD *)&a1[v7];
      if ( !v8 )
        break;
      *(_WORD *)a1 = v8;
      a1 += 2;
      if ( !--v5 )
      {
        a1 -= 2;
        v6 = -2147483643;
        break;
      }
    }
    result = v6;
  }
  *(_WORD *)a1 = 0;
  return result;
}
