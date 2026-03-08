/*
 * XREFs of ACPIGetProcessorStatus @ 0x1C002B0A4
 * Callers:
 *     ACPIGetConvertToDevicePresence @ 0x1C0029F4C (ACPIGetConvertToDevicePresence.c)
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C0047B40 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNamedChild @ 0x1C0048698 (AMLIGetNamedChild.c)
 */

__int64 __fastcall ACPIGetProcessorStatus(__int64 a1, __int64 a2, int *a3)
{
  unsigned int v3; // ebx
  __int64 *v5; // rcx
  __int64 v7; // r14
  int v8; // edi
  __int64 v9; // rax
  int v10; // r8d
  __int64 v11; // rax
  __int64 v12; // r8
  __int16 v13; // ax
  const char *v14; // rcx
  __int64 v15; // rcx
  char *v16; // r10
  unsigned __int64 v17; // r11
  unsigned __int64 i; // rax
  __int64 v19; // rcx
  char *v20; // r9
  char *v21; // rdx
  char v22; // al
  __int16 v23; // ax
  char v24; // al
  __int16 v25; // ax
  __int64 result; // rax

  v3 = 0;
  v5 = *(__int64 **)(a1 + 760);
  dword_1C00703C0 = 0;
  v7 = 0LL;
  v8 = 15;
  if ( !v5 || !_bittest64((const signed __int64 *)(a1 + 8), 0x24u) )
    goto LABEL_49;
  v9 = *v5;
  if ( *(_WORD *)(*v5 + 66) == 12 )
  {
    if ( *(_QWORD *)(v9 + 96) )
    {
      v10 = *(unsigned __int8 *)(*(_QWORD *)(v9 + 96) + 8LL);
      goto LABEL_14;
    }
LABEL_49:
    v3 = -1073741808;
    goto LABEL_50;
  }
  v11 = AMLIGetNamedChild(v5, 1145656671LL);
  v7 = v11;
  if ( !v11 )
    goto LABEL_46;
  v12 = *(_QWORD *)v11;
  v13 = *(_WORD *)(*(_QWORD *)v11 + 66LL);
  if ( v13 == 1 )
  {
    v10 = *(_DWORD *)(v12 + 80);
  }
  else
  {
    if ( v13 != 8 )
      goto LABEL_46;
    if ( !_bittest64((const signed __int64 *)(a1 + 8), 0x2Eu) || (v14 = *(const char **)(a1 + 616)) == 0LL )
    {
      v3 = -1073741808;
LABEL_48:
      AMLIDereferenceHandleEx(v7);
      goto LABEL_50;
    }
    v10 = _strtoui64(v14, 0LL, 16);
  }
LABEL_14:
  *(_DWORD *)(a1 + 196) = v10;
  v15 = *((_QWORD *)AcpiInformation + 4);
  if ( v15 )
  {
    v16 = (char *)(v15 + 44);
    v17 = v15 + *(unsigned int *)(v15 + 4);
    for ( i = v15 + 46; ; i = (unsigned __int64)(v20 + 2) )
    {
      if ( i > v17 )
        goto LABEL_46;
      v19 = (unsigned __int8)v16[1];
      if ( (unsigned __int8)v19 < 2u )
        goto LABEL_46;
      v20 = &v16[v19];
      if ( (unsigned __int64)&v16[v19] > v17 )
        goto LABEL_46;
      v21 = v16;
      v16 += v19;
      v22 = *v21;
      if ( *v21 )
      {
        if ( v22 == 11 )
        {
          if ( (unsigned __int8)v19 >= 0x28u )
          {
            v25 = *(_WORD *)(**(_QWORD **)(a1 + 760) + 66LL);
            if ( (v25 == 12 || v25 == 6 && _bittest64((const signed __int64 *)(a1 + 8), 0x24u))
              && *((_DWORD *)v21 + 2) == v10 )
            {
              v24 = v21[12];
              goto LABEL_29;
            }
          }
        }
        else if ( v22 == 9
               && (unsigned __int8)v19 >= 0x10u
               && *(_WORD *)(**(_QWORD **)(a1 + 760) + 66LL) == 6
               && _bittest64((const signed __int64 *)(a1 + 8), 0x24u)
               && *((_DWORD *)v21 + 3) == v10 )
        {
          if ( (v21[8] & 1) == 0 )
            goto LABEL_46;
          goto LABEL_47;
        }
      }
      else if ( (unsigned __int8)v19 >= 8u )
      {
        v23 = *(_WORD *)(**(_QWORD **)(a1 + 760) + 66LL);
        if ( (v23 == 12 || v23 == 6 && _bittest64((const signed __int64 *)(a1 + 8), 0x24u))
          && (unsigned __int8)v21[2] == v10 )
        {
          v24 = v21[4];
LABEL_29:
          v8 = (v24 & 1) != 0 ? 0xF : 0;
          goto LABEL_47;
        }
      }
    }
  }
  if ( dword_1C00703C0 )
  {
    if ( dword_1C00703C4 != v10 )
LABEL_46:
      v8 = 0;
  }
  else
  {
    dword_1C00703C4 = v10;
    dword_1C00703C0 = 1;
  }
LABEL_47:
  if ( v7 )
    goto LABEL_48;
LABEL_50:
  result = v3;
  *a3 = v8;
  return result;
}
