void __fastcall DC::vRealizeLineAttrs(DC *this, struct EXFORMOBJ *a2)
{
  __int64 v2; // rsi
  int v4; // r8d
  int v5; // ecx
  __int64 v6; // rax
  int v7; // eax
  int v8; // eax
  int v9; // ebp
  int v10; // eax
  __int64 v11; // rax

  v2 = *((_QWORD *)this + 18);
  if ( (*(_DWORD *)(v2 + 40) & 0x800) != 0 )
  {
    if ( (*(_BYTE *)(*(_QWORD *)a2 + 32LL) & 0x43) == 0x43 && *(int *)(v2 + 168) <= 1
      || (v4 = *(_DWORD *)(v2 + 168)) == 0
      || DC::bOldPenNominal(this, a2, v4) )
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
      v7 = *(_DWORD *)(v2 + 172);
      *((_DWORD *)this + 57) = 0;
      *((_QWORD *)this + 29) = 0LL;
      *((_DWORD *)this + 55) = v7;
    }
    *((_DWORD *)this + 60) = 0;
  }
  else
  {
    v8 = *(_DWORD *)(v2 + 176);
    if ( (v8 & 0xF0000) != 0 )
    {
      v9 = 1;
      *((_DWORD *)this + 52) = 1;
      v10 = *(_DWORD *)(v2 + 172);
    }
    else
    {
      v9 = 0;
      if ( (v8 & 0xF) == 8 )
        v9 = 2;
      *((_DWORD *)this + 52) = v9;
      v10 = *(_DWORD *)(v2 + 168);
    }
    *((_DWORD *)this + 60) = 0;
    *((_DWORD *)this + 55) = v10;
    *((_DWORD *)this + 57) = *(_DWORD *)(v2 + 180);
    v11 = *(_QWORD *)(v2 + 152);
    *((_QWORD *)this + 29) = v11;
    if ( v11 )
      *((_DWORD *)this + 52) = v9 | 8;
  }
  *((_DWORD *)this + 53) = *(unsigned __int8 *)(v2 + 184);
  *((_DWORD *)this + 54) = *(unsigned __int8 *)(v2 + 185);
}
