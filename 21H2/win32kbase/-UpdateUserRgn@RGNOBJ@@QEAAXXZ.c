/*
 * XREFs of ?UpdateUserRgn@RGNOBJ@@QEAAXXZ @ 0x1C0066670
 * Callers:
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C00348A0 (--1RGNOBJAPI@@QEAA@XZ.c)
 * Callees:
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C002FDB0 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x1C00302E8 (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 */

void __fastcall RGNOBJ::UpdateUserRgn(RGNOBJ *this)
{
  _DWORD *v2; // r14
  unsigned int v3; // ebx
  __int64 v4; // rsi
  unsigned int v5; // edx
  __int64 v6; // rdi
  unsigned int v7; // ecx
  __int64 v8; // r8
  unsigned int v9; // r9d
  __int64 v10; // r15
  unsigned int v11; // r8d
  unsigned int v12; // ecx
  __int64 v13; // rdx
  _DWORD *v14; // rdx
  _DWORD *v15; // r8
  int v16; // eax
  __int64 v17; // r8

  v2 = *(_DWORD **)this;
  if ( *(_QWORD *)this )
  {
    v3 = (unsigned __int16)*v2 | (*v2 >> 8) & 0xFF0000;
    if ( v3 >= 0x10000 )
    {
      if ( *(_DWORD *)gpHandleManager > 0x10000u )
      {
        if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                    *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                    (unsigned __int16)*v2,
                                    1)
             + 13) == HIWORD(v3) )
          v3 = (unsigned __int16)v3;
      }
      else
      {
        v3 = (unsigned __int16)*v2;
      }
    }
    v4 = *((_QWORD *)gpHandleManager + 2);
    v5 = *(_DWORD *)(v4 + 2056);
    if ( v3 >= v5 + ((*(unsigned __int16 *)(v4 + 2) + 0xFFFF) << 16) )
    {
      v6 = 0LL;
      v10 = 0LL;
    }
    else
    {
      if ( v3 >= v5 )
      {
        v7 = ((v3 - v5) >> 16) + 1;
        v6 = 0LL;
      }
      else
      {
        v6 = 0LL;
        v7 = 0;
      }
      v8 = *(_QWORD *)(v4 + 8LL * v7 + 8);
      if ( v7 )
        v9 = v3 + ((1 - v7) << 16) - v5;
      else
        v9 = v3;
      v10 = 0LL;
      if ( v9 < *(_DWORD *)(v8 + 20)
        && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v8 + 24) + 8LL * (v9 >> 8)) + 16LL * (unsigned __int8)v9 + 8) )
      {
        v10 = *(_QWORD *)v8 + 24LL * v9;
      }
    }
    if ( v3 >= 0x10000 )
    {
      if ( *(_DWORD *)gpHandleManager > 0x10000u )
      {
        if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                    (GdiHandleEntryDirectory *)v4,
                                    (unsigned __int16)v3,
                                    1)
             + 13) == HIWORD(v3) )
          v3 = (unsigned __int16)v3;
      }
      else
      {
        v3 = (unsigned __int16)v3;
      }
    }
    v11 = *(_DWORD *)(v4 + 2056);
    if ( v3 >= v11 + ((*(unsigned __int16 *)(v4 + 2) + 0xFFFF) << 16) )
      goto LABEL_40;
    if ( v3 >= v11 )
      v12 = ((v3 - v11) >> 16) + 1;
    else
      v12 = 0;
    v13 = *(_QWORD *)(v4 + 8LL * v12 + 8);
    if ( v12 )
      v3 += ((1 - v12) << 16) - v11;
    if ( v3 >= *(_DWORD *)(v13 + 20) )
LABEL_40:
      v14 = 0LL;
    else
      v14 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v13 + 24) + 8LL * (v3 >> 8)) + 16LL * (unsigned __int8)v3 + 8);
    if ( v14 == v2 )
      v6 = v10;
    v15 = *(_DWORD **)(v6 + 16);
    if ( v15 )
    {
      if ( (*v15 & 0x10) != 0 )
      {
        v16 = RGNOBJ::iComplexity(this);
        *(_DWORD *)(v17 + 4) = v16;
        *(_OWORD *)(v17 + 8) = *(_OWORD *)(*(_QWORD *)this + 96LL);
      }
    }
  }
}
