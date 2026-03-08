/*
 * XREFs of HalpVerifyHmatEntryValidity @ 0x140B8E6F0
 * Callers:
 *     HalpNumaParseHmat @ 0x140B8E1C4 (HalpNumaParseHmat.c)
 * Callees:
 *     <none>
 */

bool __fastcall HalpVerifyHmatEntryValidity(unsigned __int16 *a1)
{
  signed int v1; // edx
  int v3; // ecx
  unsigned int v4; // r8d
  int v5; // ecx
  int v6; // eax
  unsigned __int64 v7; // rax
  __int64 v8; // rdx
  unsigned int v9; // eax
  unsigned int v10; // ecx
  __int64 v11; // rax
  int v12; // r10d
  unsigned int v13; // r11d
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rcx
  unsigned int v16; // ecx

  v1 = 0;
  v3 = *a1;
  v4 = 8;
  if ( !v3 )
  {
    v4 = 40;
    goto LABEL_24;
  }
  v5 = v3 - 1;
  if ( v5 )
  {
    if ( v5 == 1 )
    {
      v4 = 32;
      if ( *((_DWORD *)a1 + 1) >= 0x20u )
      {
        v6 = a1[15];
        v4 = 2 * v6 + 32;
        if ( (unsigned int)(2 * v6) < 0xFFFFFFE0 )
        {
          if ( *((_QWORD *)a1 + 2) >> 12 > (unsigned __int64)HalpNumaPageCount
            || (v7 = a1[13], *((_QWORD *)a1 + 2) < v7)
            || !(_WORD)v7 )
          {
            v1 = -1073741216;
            return v1 >= 0;
          }
          goto LABEL_24;
        }
LABEL_22:
        v1 = -1073741675;
        return v1 >= 0;
      }
    }
    goto LABEL_24;
  }
  v4 = 32;
  if ( *((_DWORD *)a1 + 1) < 0x20u )
    goto LABEL_24;
  v8 = *((unsigned int *)a1 + 3);
  v4 = -1;
  v9 = 4 * v8;
  if ( (unsigned __int64)(4 * v8) > 0xFFFFFFFF )
    goto LABEL_22;
  v10 = v9 + 32;
  if ( v9 >= 0xFFFFFFE0 )
    goto LABEL_22;
  v11 = *((unsigned int *)a1 + 4);
  v12 = 4 * v11;
  if ( (unsigned __int64)(4 * v11) > 0xFFFFFFFF )
    goto LABEL_22;
  v13 = v10 + v12;
  if ( v10 + v12 < v10 )
    goto LABEL_22;
  v14 = v8 * v11;
  if ( v14 > 0xFFFFFFFF )
    goto LABEL_22;
  v1 = -1073741675;
  v15 = 2LL * (unsigned int)v14;
  if ( v15 <= 0xFFFFFFFF )
  {
    v16 = v13 + v15;
    if ( v16 >= v13 )
      v4 = v16;
    v1 = v16 < v13 ? 0xC0000095 : 0;
    if ( v16 >= v13 )
    {
LABEL_24:
      if ( *((_DWORD *)a1 + 1) < v4 )
        v1 = -1073741811;
    }
  }
  return v1 >= 0;
}
