/*
 * XREFs of ?vRealizeLineAttrs@DC@@QEAAXAEAVEXFORMOBJ@@@Z @ 0x1C0032358
 * Callers:
 *     ?vInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@KH@Z @ 0x1C0031540 (-vInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@KH@Z.c)
 *     GreDCSelectPen @ 0x1C0098770 (GreDCSelectPen.c)
 * Callees:
 *     ?bOldPenNominal@DC@@QEAAHAEAVEXFORMOBJ@@J@Z @ 0x1C009C840 (-bOldPenNominal@DC@@QEAAHAEAVEXFORMOBJ@@J@Z.c)
 */

void __fastcall DC::vRealizeLineAttrs(DC *this, struct EXFORMOBJ *a2)
{
  __int64 v2; // rsi
  int v4; // r8d
  int v5; // ecx
  __int64 v6; // rax
  int v7; // eax
  int v8; // ebp
  int v9; // eax
  __int64 v10; // rax
  int v11; // eax

  v2 = *((_QWORD *)this + 18);
  if ( (*(_DWORD *)(v2 + 40) & 0x800) != 0 )
  {
    v4 = *(_DWORD *)(v2 + 168);
    if ( (*(_DWORD *)(*(_QWORD *)a2 + 32LL) & 0x43) == 0x43 && v4 <= 1 || !v4 || DC::bOldPenNominal(this, a2, v4) )
    {
      *((_DWORD *)this + 55) = 1;
      if ( *(_QWORD *)(v2 + 152) )
      {
        v5 = 8;
        *((_DWORD *)this + 57) = *(_DWORD *)(v2 + 180);
        v6 = *(_QWORD *)(v2 + 152);
      }
      else
      {
        *((_DWORD *)this + 57) = 0;
        v5 = 0;
        v6 = 0LL;
      }
      *((_QWORD *)this + 29) = v6;
      *((_DWORD *)this + 52) = v5;
    }
    else
    {
      *((_DWORD *)this + 52) = 1;
      v11 = *(_DWORD *)(v2 + 172);
      *((_DWORD *)this + 57) = 0;
      *((_QWORD *)this + 29) = 0LL;
      *((_DWORD *)this + 55) = v11;
    }
    *((_DWORD *)this + 60) = 0;
  }
  else
  {
    v7 = *(_DWORD *)(v2 + 176);
    if ( (v7 & 0xF0000) != 0 )
    {
      v8 = 1;
      *((_DWORD *)this + 52) = 1;
      v9 = *(_DWORD *)(v2 + 172);
    }
    else
    {
      v8 = 0;
      if ( (v7 & 0xF) == 8 )
        v8 = 2;
      *((_DWORD *)this + 52) = v8;
      v9 = *(_DWORD *)(v2 + 168);
    }
    *((_DWORD *)this + 60) = 0;
    *((_DWORD *)this + 55) = v9;
    *((_DWORD *)this + 57) = *(_DWORD *)(v2 + 180);
    v10 = *(_QWORD *)(v2 + 152);
    *((_QWORD *)this + 29) = v10;
    if ( v10 )
      *((_DWORD *)this + 52) = v8 | 8;
  }
  *((_DWORD *)this + 53) = *(unsigned __int8 *)(v2 + 184);
  *((_DWORD *)this + 54) = *(unsigned __int8 *)(v2 + 185);
}
