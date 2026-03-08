/*
 * XREFs of PnpiValidateSidebandResources @ 0x1C0092548
 * Callers:
 *     PnpiAddSidebandResources @ 0x1C008FF78 (PnpiAddSidebandResources.c)
 * Callees:
 *     <none>
 */

char __fastcall PnpiValidateSidebandResources(__int64 a1, __int64 a2)
{
  unsigned int v2; // r12d
  __int64 v3; // r8
  unsigned int v4; // ebx
  __int64 v5; // r9
  _QWORD *i; // rax
  unsigned int v7; // r10d
  unsigned int v8; // esi
  __int64 v9; // rcx
  unsigned int v10; // r13d
  __int64 v11; // r11
  unsigned int v12; // r15d
  unsigned int v13; // edi
  unsigned int v14; // r14d
  _QWORD *v15; // r9
  bool v16; // zf
  __int16 v18; // dx
  unsigned int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx

  v2 = *(_DWORD *)(a2 + 28);
  v3 = a2 + 32;
  v4 = 0;
  v5 = a1;
  if ( v2 )
  {
    for ( i = AcpiInformation; ; i = AcpiInformation )
    {
      v7 = *(_DWORD *)(v3 + 4);
      v8 = 0;
      if ( v7 )
        break;
LABEL_33:
      if ( v7 <= 1 )
        v21 = v3;
      else
        v21 = v3 + 32LL * (v7 - 1);
      ++v4;
      v3 = v21 + 40;
      if ( v4 >= v2 )
        return 1;
    }
    v9 = v3 + 9;
    while ( 1 )
    {
      if ( ((AcpiGlobalFlags & 2) != 0 || *(_BYTE *)(i[1] + 8LL) >= 5u) && *(_BYTE *)v9 != 2
        || *(_DWORD *)(v9 + 7) == *(_DWORD *)(v9 + 11) )
      {
        v10 = *(_DWORD *)(v5 + 28);
        v11 = v5 + 32;
        v12 = 0;
        if ( v10 )
          break;
      }
LABEL_32:
      i = AcpiInformation;
      ++v8;
      v9 += 32LL;
      if ( v8 >= v7 )
        goto LABEL_33;
    }
    while ( 1 )
    {
      v13 = *(_DWORD *)(v11 + 4);
      v14 = 0;
      if ( v13 )
        break;
LABEL_27:
      if ( v13 <= 1 )
        v20 = v11;
      else
        v20 = v11 + 32LL * (v13 - 1);
      ++v12;
      v11 = v20 + 40;
      if ( v12 >= v10 )
      {
        v5 = a1;
        goto LABEL_32;
      }
    }
    v15 = (_QWORD *)(v11 + 24);
    while ( 1 )
    {
      if ( *((_BYTE *)v15 - 15) == 2 )
      {
        if ( *(_BYTE *)v9 == 2 )
        {
          v18 = *(_WORD *)(v9 + 3);
          if ( (v18 & 2) == 0 )
          {
            v19 = *(_DWORD *)(v9 + 7);
            if ( v19 >= *((_DWORD *)v15 - 2) && v19 <= *((_DWORD *)v15 - 1) && (v18 & 0x20) == 0 )
              return 0;
          }
        }
      }
      else
      {
        if ( *((_BYTE *)v15 - 15) == 3 )
        {
          v16 = *(_BYTE *)v9 == 3;
        }
        else
        {
          if ( *((_BYTE *)v15 - 15) != 7 )
            goto LABEL_26;
          v16 = *(_BYTE *)v9 == 7;
        }
        if ( v16 && (*(_QWORD *)(v9 + 15) <= *v15 || *(_QWORD *)(v9 + 23) >= *v15) )
          return 0;
      }
LABEL_26:
      ++v14;
      v15 += 4;
      if ( v14 >= v13 )
        goto LABEL_27;
    }
  }
  return 1;
}
