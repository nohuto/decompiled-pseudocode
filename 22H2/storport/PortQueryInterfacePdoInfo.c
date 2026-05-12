/*
 * XREFs of PortQueryInterfacePdoInfo @ 0x1C007D384
 * Callers:
 *     RaUnitQueryInterfaceIrp @ 0x1C001D17C (RaUnitQueryInterfaceIrp.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PortQueryInterfacePdoInfo(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4,
        _OWORD *a5,
        char a6,
        int a7)
{
  __int64 v7; // rax
  unsigned int v8; // ecx
  __int64 v10; // rdx
  _BYTE *v11; // r9
  _BYTE *v12; // r8
  __int64 v13; // rax
  __int64 v14; // rax

  v7 = *(_QWORD *)(a2 + 184);
  v8 = 0;
  v10 = *(_QWORD *)(v7 + 24);
  if ( v10 && *(_WORD *)(v7 + 16) >= 0x38u )
  {
    if ( *(_WORD *)v10 < 0x38u )
    {
      *(_WORD *)v10 = 56;
      return (unsigned int)-2147483643;
    }
    else
    {
      v11 = (_BYTE *)(v10 + 24);
      *(_BYTE *)(v10 + 16) = a6;
      *(_DWORD *)(v10 + 20) = a7;
      *(_QWORD *)(v10 + 8) = a3;
      v12 = (_BYTE *)(v10 + 33);
      *(_QWORD *)(v10 + 24) = 0LL;
      *(_BYTE *)(v10 + 32) = 0;
      *(_QWORD *)(v10 + 24) = *a4;
      *(_OWORD *)(v10 + 33) = 0LL;
      *(_BYTE *)(v10 + 49) = 0;
      v13 = 8LL;
      *(_OWORD *)(v10 + 33) = *a5;
      do
      {
        if ( !*v11 )
          *v11 = 32;
        ++v11;
        --v13;
      }
      while ( v13 );
      *(_BYTE *)(v10 + 32) = 0;
      v14 = 16LL;
      do
      {
        if ( !*v12 )
          *v12 = 32;
        ++v12;
        --v14;
      }
      while ( v14 );
      *(_BYTE *)(v10 + 49) = 0;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v8;
}
