/*
 * XREFs of NtGdiGetAndSetDCDword @ 0x1C02AC920
 * Callers:
 *     <none>
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004FFBC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0050C40 (--1DCOBJ@@QEAA@XZ.c)
 *     ?iSetMapMode@DC@@QEAAHH@Z @ 0x1C02D18C8 (-iSetMapMode@DC@@QEAAHH@Z.c)
 */

__int64 __fastcall NtGdiGetAndSetDCDword(HDC a1, int a2, int a3, _DWORD *a4)
{
  int v7; // ebx
  unsigned int v8; // r14d
  int v10; // edi
  int v11; // edi
  int v12; // edi
  int v13; // edi
  int v14; // edi
  int v15; // edi
  int v16; // ecx
  unsigned int v17; // ecx
  __int64 v18; // rax
  __int64 v19; // rax
  DC *v20[3]; // [rsp+20h] [rbp-18h] BYREF

  v7 = 0;
  v8 = 1;
  DCOBJ::DCOBJ((DCOBJ *)v20, a1);
  if ( !v20[0] )
  {
    if ( a2 == 5 )
    {
      if ( (unsigned __int64)a4 >= MmUserProbeAddress )
        a4 = (_DWORD *)MmUserProbeAddress;
      *a4 = 0x80000000;
    }
    DCOBJ::~DCOBJ((DCOBJ *)v20);
    return 0LL;
  }
  v10 = a2 - 1;
  if ( !v10 )
  {
    v7 = *((_DWORD *)v20[0] + 9) & 0x400;
    *((_DWORD *)v20[0] + 9) &= ~0x400u;
    goto LABEL_32;
  }
  v11 = v10 - 1;
  if ( !v11 )
  {
    v7 = *((_DWORD *)v20[0] + 523);
    *((_DWORD *)v20[0] + 523) = a3;
    goto LABEL_32;
  }
  v12 = v11 - 2;
  if ( !v12 )
  {
    v19 = *((_QWORD *)v20[0] + 122);
    v7 = *(_DWORD *)(v19 + 352);
    *(_DWORD *)(v19 + 352) = a3;
    goto LABEL_32;
  }
  v13 = v12 - 2;
  if ( v13 )
  {
    v14 = v13 - 1;
    if ( !v14 )
    {
      if ( (a3 & 0xFFFFFFFE) != 0 )
      {
        EngSetLastError(0x57u);
        v7 = -1;
      }
      else
      {
        v18 = *((_QWORD *)v20[0] + 122);
        v7 = *(_DWORD *)(v18 + 236);
        *(_DWORD *)(v18 + 236) = a3;
      }
      goto LABEL_32;
    }
    v15 = v14 - 1;
    if ( !v15 )
    {
      v7 = *(_DWORD *)(*((_QWORD *)v20[0] + 122) + 104LL);
      if ( v7 != a3 )
        v7 = DC::iSetMapMode(v20[0], a3);
      goto LABEL_32;
    }
    if ( v15 != 1 )
    {
      v8 = 0;
      goto LABEL_32;
    }
    v16 = *((_DWORD *)v20[0] + 62);
    if ( (*(_DWORD *)(*((_QWORD *)v20[0] + 122) + 108LL) & 1) != 0 )
    {
      v7 = 2 - ((v16 & 4) != 0);
      if ( a3 == 2 )
      {
LABEL_17:
        v17 = v16 & 0xFFFFFFFB;
LABEL_18:
        *((_DWORD *)v20[0] + 62) = v17;
        goto LABEL_32;
      }
      if ( a3 == 1 )
      {
LABEL_20:
        v17 = v16 | 4;
        goto LABEL_18;
      }
    }
    else
    {
      v7 = ((v16 & 4) != 0) + 1;
      if ( a3 == 2 )
        goto LABEL_20;
      if ( a3 == 1 )
        goto LABEL_17;
    }
    EngSetLastError(0x57u);
    v7 = 0;
  }
LABEL_32:
  if ( v8 )
  {
    if ( (unsigned __int64)a4 >= MmUserProbeAddress )
      a4 = (_DWORD *)MmUserProbeAddress;
    *a4 = v7;
  }
  DCOBJ::~DCOBJ((DCOBJ *)v20);
  return v8;
}
