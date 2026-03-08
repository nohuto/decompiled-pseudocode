/*
 * XREFs of KiOpPciConfigSpaceAccessCommon @ 0x14057D12C
 * Callers:
 *     KiOp_Mov @ 0x1402EE9B0 (KiOp_Mov.c)
 * Callees:
 *     VslAccessPciDevice @ 0x1405485A0 (VslAccessPciDevice.c)
 *     KiOpGetPciConfigSpaceAccessInfoFromPhysicalAddress @ 0x14057CF34 (KiOpGetPciConfigSpaceAccessInfoFromPhysicalAddress.c)
 */

__int64 __fastcall KiOpPciConfigSpaceAccessCommon(char a1, __int64 a2, unsigned int a3, char *a4)
{
  __int64 v4; // r14
  __int64 v6; // rcx
  __int64 result; // rax
  _BYTE *v10; // rbx
  char *v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rsi
  __int64 v14; // rcx
  size_t Size; // [rsp+30h] [rbp-20h]
  unsigned __int8 v16; // [rsp+40h] [rbp-10h] BYREF
  _BYTE v17[3]; // [rsp+41h] [rbp-Fh] BYREF
  unsigned __int16 v18; // [rsp+44h] [rbp-Ch] BYREF
  int v19; // [rsp+48h] [rbp-8h] BYREF
  unsigned __int8 v20; // [rsp+88h] [rbp+38h] BYREF

  v4 = a3;
  v19 = 0;
  v6 = *(_QWORD *)(a2 + 104);
  v17[0] = 0;
  v16 = 0;
  v20 = 0;
  v18 = 0;
  if ( v6 == -1 )
    return 3221225473LL;
  result = KiOpGetPciConfigSpaceAccessInfoFromPhysicalAddress(
             v6,
             (__int64)&v18,
             (__int64)v17,
             (__int64)&v16,
             (__int64)&v20,
             &v19);
  if ( (int)result >= 0 )
  {
    v10 = (_BYTE *)(*(_QWORD *)(a2 + 24) + 120LL + 8 * (((unsigned __int64)*(unsigned __int8 *)(a2 + 65) >> 3) & 7));
    if ( a1 && (_DWORD)v4 )
    {
      v11 = a4;
      v12 = v4;
      do
      {
        *v11 = v11[v10 - a4];
        ++v11;
        --v12;
      }
      while ( v12 );
    }
    LODWORD(Size) = v4;
    result = VslAccessPciDevice(a1, v18, v17[0], v16, v20, v19, Size, a4);
    if ( (int)result >= 0 )
    {
      if ( !a1 && (_DWORD)v4 )
      {
        v13 = a4 - v10;
        v14 = v4;
        do
        {
          *v10 = v10[v13];
          ++v10;
          --v14;
        }
        while ( v14 );
      }
      *(_QWORD *)(*(_QWORD *)(a2 + 24) + 248LL) += (unsigned int)(*(_DWORD *)(a2 + 16) - *(_DWORD *)a2);
      result = 0LL;
      *(_BYTE *)(a2 + 96) = 1;
    }
  }
  return result;
}
