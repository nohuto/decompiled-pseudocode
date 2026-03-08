/*
 * XREFs of ?redloop@INVCMAP@@QEAAHXZ @ 0x1C02A667C
 * Callers:
 *     ?inv_cmap@INVCMAP@@QEAAXHPEAURGBX@@HPEAKPEAE@Z @ 0x1C02A64DC (-inv_cmap@INVCMAP@@QEAAXHPEAURGBX@@HPEAKPEAE@Z.c)
 * Callees:
 *     ?greenloop@INVCMAP@@QEAAHH@Z @ 0x1C02A627C (-greenloop@INVCMAP@@QEAAHH@Z.c)
 */

__int64 __fastcall INVCMAP::redloop(INVCMAP *this)
{
  unsigned int v1; // edi
  int v3; // esi
  int v4; // ebp
  int v5; // edx
  __int64 v6; // rcx
  int v7; // eax
  int v8; // esi
  int v9; // ecx
  __int64 v10; // rdx
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rax
  int i; // edx
  __int64 v15; // rdx

  v1 = 0;
  v3 = *((_DWORD *)this + 4);
  v4 = 2 * *((_DWORD *)this + 27);
  *((_DWORD *)this + 6) = *((_DWORD *)this + 7);
  *((_DWORD *)this + 48) = *((_DWORD *)this + 10);
  v5 = 1;
  *((_QWORD *)this + 7) = *((_QWORD *)this + 8);
  for ( *((_QWORD *)this + 10) = *((_QWORD *)this + 11); v3 < *((_DWORD *)this + 28); *((_DWORD *)this + 48) = v4 + v7 )
  {
    if ( (unsigned int)INVCMAP::greenloop(this, v5) )
    {
      v1 = 1;
    }
    else if ( v1 )
    {
      break;
    }
    v6 = *((int *)this + 25);
    ++v3;
    *((_QWORD *)this + 10) += v6;
    v5 = 0;
    *((_QWORD *)this + 7) += 4 * v6;
    v7 = *((_DWORD *)this + 48);
    *((_DWORD *)this + 6) += v7;
  }
  v8 = *((_DWORD *)this + 4);
  v9 = *((_DWORD *)this + 10) - v4;
  *((_DWORD *)this + 48) = v9;
  v10 = *((int *)this + 25);
  v11 = *((_DWORD *)this + 7) - v9;
  v12 = *((_QWORD *)this + 8);
  *((_DWORD *)this + 6) = v11;
  v13 = *((_QWORD *)this + 11) - v10;
  *((_QWORD *)this + 7) = v12 - 4 * v10;
  *((_QWORD *)this + 10) = v13;
  for ( i = 1; --v8 >= 0; i = 0 )
  {
    if ( (unsigned int)INVCMAP::greenloop(this, i) )
    {
      v1 = 1;
    }
    else if ( v1 )
    {
      return v1;
    }
    v15 = *((int *)this + 25);
    *((_QWORD *)this + 10) -= v15;
    *((_QWORD *)this + 7) += -4 * v15;
    *((_DWORD *)this + 48) -= v4;
    *((_DWORD *)this + 6) -= *((_DWORD *)this + 48);
  }
  return v1;
}
