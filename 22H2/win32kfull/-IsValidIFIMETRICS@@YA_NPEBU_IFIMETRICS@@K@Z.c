/*
 * XREFs of ?IsValidIFIMETRICS@@YA_NPEBU_IFIMETRICS@@K@Z @ 0x1C02A89E0
 * Callers:
 *     ?ProbeAndReadIFIMETRICS@@YAPEAU_IFIMETRICS@@PEAU1@H_K@Z @ 0x1C02A8CCC (-ProbeAndReadIFIMETRICS@@YAPEAU_IFIMETRICS@@PEAU1@H_K@Z.c)
 * Callees:
 *     ?IsValidAXESLISTW@@YA_NPEBXKJ@Z @ 0x1C02A888C (-IsValidAXESLISTW@@YA_NPEBXKJ@Z.c)
 *     ?IsValidDESIGNVECTOR@@YA_NPEBXKJ@Z @ 0x1C02A88E0 (-IsValidDESIGNVECTOR@@YA_NPEBXKJ@Z.c)
 *     ?IsValidFONTSIM@@YA_NPEBXKJ@Z @ 0x1C02A896C (-IsValidFONTSIM@@YA_NPEBXKJ@Z.c)
 *     ?IsValidString@@YA_NPEBXKJ@Z @ 0x1C02A8B44 (-IsValidString@@YA_NPEBXKJ@Z.c)
 */

char __fastcall IsValidIFIMETRICS(struct _IFIMETRICS *a1, unsigned int a2)
{
  unsigned __int64 v2; // rdi
  int *v4; // rcx
  int *v5; // rcx
  int *v6; // rcx
  __int64 v7; // rcx
  unsigned __int64 dpCharSets; // rax
  _BYTE *v9; // rdx
  int v10; // ecx
  unsigned __int64 cjIfiExtra; // rdx
  ULONG v12; // eax
  unsigned __int64 v13; // rdx

  v2 = a2;
  if ( a2 >= 0xC0
    && a1->cjThis == a2
    && IsValidString(a1, a2, a1->dpwszFamilyName)
    && IsValidString(v4, v2, v4[3])
    && IsValidString(v5, v2, v5[4])
    && IsValidString(v6, v2, v6[5])
    && IsValidFONTSIM((char *)v7, v2, *(_DWORD *)(v7 + 24)) )
  {
    dpCharSets = a1->dpCharSets;
    if ( (_DWORD)dpCharSets )
    {
      if ( (dpCharSets & 0x80000000) == 0LL && dpCharSets < v2 )
      {
        v9 = (char *)a1 + dpCharSets;
        v10 = 0;
        while ( a1->dpCharSets + (__int64)v10 < v2 )
        {
          if ( *v9 != 1 )
          {
            ++v10;
            ++v9;
            if ( v10 < 16 )
              continue;
          }
          goto LABEL_15;
        }
      }
    }
    else
    {
LABEL_15:
      cjIfiExtra = a1->cjIfiExtra;
      if ( !(_DWORD)cjIfiExtra )
        return 1;
      if ( cjIfiExtra <= v2 - 192 )
      {
        v12 = 20;
        if ( (unsigned int)cjIfiExtra < 0x14 )
          v12 = a1->cjIfiExtra;
        if ( v12 == 4 )
          return 1;
        if ( v12 == 8
          || v12 == 12
          || (v12 == 16 || v12 == 20 && IsValidAXESLISTW((char *)a1, v2, a1[1].dpwszFaceName))
          && IsValidDESIGNVECTOR((char *)a1, v2, a1[1].dpwszStyleName) )
        {
          v13 = a1[1].cjIfiExtra;
          if ( !(_DWORD)v13
            || (int)v13 > 0 && v13 < v2 && v2 > 0x18 && v13 < v2 - 24 && (((_BYTE)a1 + (_BYTE)v13) & 3) == 0 )
          {
            return 1;
          }
        }
      }
    }
  }
  return 0;
}
