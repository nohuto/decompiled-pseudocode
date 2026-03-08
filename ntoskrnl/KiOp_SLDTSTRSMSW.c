/*
 * XREFs of KiOp_SLDTSTRSMSW @ 0x14057D870
 * Callers:
 *     <none>
 * Callees:
 *     KiOpRetrieveRegMemAddress @ 0x14057D26C (KiOpRetrieveRegMemAddress.c)
 */

__int64 __fastcall KiOp_SLDTSTRSMSW(__int64 a1)
{
  int v2; // ecx
  unsigned int v3; // esi
  __int64 v4; // r14
  int v5; // eax
  unsigned int v6; // ecx
  __int64 v7; // r8
  unsigned __int64 v8; // rdx
  char v10; // [rsp+58h] [rbp+10h] BYREF
  int v11; // [rsp+60h] [rbp+18h] BYREF
  _WORD *v12; // [rsp+68h] [rbp+20h] BYREF

  v12 = 0LL;
  v10 = 0;
  v11 = 0;
  if ( (KiBugCheckActive & 3) == 0 && !PopHibernateHvMinloopEnabled )
  {
    v2 = 0;
    goto LABEL_5;
  }
  v2 = 1;
  if ( !VslVsmEnabled )
  {
LABEL_5:
    if ( !KiNPIEPEnabled && (KeFeatureBits2 & 4) == 0 || *(_BYTE *)(a1 + 81) != 1 && !v2 )
      return 0LL;
  }
  if ( (*(_BYTE *)(a1 + 65) & 0x38) != 0 )
  {
    if ( (*(_BYTE *)(a1 + 65) & 0x38) == 8 )
      v3 = 64;
    else
      v3 = __readcr0();
  }
  else
  {
    v3 = 0;
  }
  v4 = *(_QWORD *)(a1 + 32);
  *(_DWORD *)v4 = -1073741819;
  if ( (int)KiOpRetrieveRegMemAddress(a1, (__int64 *)&v12, &v10, &v11) < 0 )
  {
    v7 = -1LL;
  }
  else
  {
    v5 = *(_DWORD *)(a1 + 48) & 0x40;
    if ( *(_BYTE *)(a1 + 58) )
      v6 = v5 != 0 ? 2 : 4;
    else
      v6 = v5 != 0 ? 2 : 8;
    v7 = (__int64)v12;
    if ( v10 == 1 )
    {
      v8 = (unsigned __int64)v12 + v6;
      if ( v8 > 0x7FFFFFFF0000LL || v8 < (unsigned __int64)v12 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    if ( !v11 || v6 == 2 )
    {
      *v12 = v3;
    }
    else if ( v6 == 4 )
    {
      *(_DWORD *)v12 = v3;
    }
    else
    {
      *(_QWORD *)v12 = v3;
    }
    *(_QWORD *)(*(_QWORD *)(a1 + 24) + 248LL) += (unsigned int)(*(_DWORD *)(a1 + 16) - *(_DWORD *)a1);
    ++KiOpDescriptorTableStoreSkip;
    *(_BYTE *)(a1 + 96) = 1;
  }
  if ( !*(_BYTE *)(a1 + 96) )
  {
    *(_DWORD *)v4 = -1073741819;
    *(_QWORD *)(v4 + 32) = 1LL;
    *(_QWORD *)(v4 + 40) = v7;
    *(_BYTE *)(a1 + 97) = 1;
  }
  return 0LL;
}
