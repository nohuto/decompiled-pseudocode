/*
 * XREFs of StorEtwMiniportBugAbortBrokenEvent @ 0x1C004FE44
 * Callers:
 *     RaidUnitAbortSrbCompletion @ 0x1C004A500 (RaidUnitAbortSrbCompletion.c)
 * Callees:
 *     McTemplateK0zquuujqqbr7_EtwWriteTransfer @ 0x1C004EFA4 (McTemplateK0zquuujqqbr7_EtwWriteTransfer.c)
 */

NTSTATUS __fastcall StorEtwMiniportBugAbortBrokenEvent(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  int v3; // r9d
  __int64 v4; // r14
  __int64 v6; // rbp
  char v7; // r10
  int v8; // r15d
  __int64 v9; // r12
  NTSTATUS result; // eax
  char v11; // di
  unsigned int v12; // esi
  unsigned int v13; // ebx
  __int64 v14; // rdx
  unsigned __int64 v15; // r11
  __int64 v16; // r10
  int v17; // edx
  int v18; // edx
  __int64 v19; // rdx
  unsigned __int64 v20; // rdx
  unsigned __int8 v21; // r11
  char v22; // si
  unsigned int v23; // r14d
  unsigned int v24; // edi
  __int64 v25; // rdx
  unsigned __int64 v26; // rbx
  __int64 v27; // r10
  int v28; // edx
  int v29; // edx
  __int64 v30; // rcx
  unsigned __int64 v31; // rdx

  v2 = *(_QWORD *)(a1 + 168);
  v3 = 0;
  v4 = a2;
  v6 = 0LL;
  v7 = *(_BYTE *)(v2 + 2);
  if ( v7 == 40 )
    v8 = *(_DWORD *)(v2 + 20);
  else
    v8 = *(unsigned __int8 *)(v2 + 2);
  v9 = *(_QWORD *)(a1 + 224);
  result = *(_DWORD *)(v9 + 96);
  if ( !v8 )
  {
    if ( v7 != 40 )
    {
      v6 = v2 + 72;
      goto LABEL_26;
    }
    v11 = 0;
    if ( !*(_DWORD *)(v2 + 20) )
    {
      v12 = *(_DWORD *)(v2 + 56);
      v13 = 0;
      if ( v12 )
      {
        while ( 1 )
        {
          v14 = *(unsigned int *)(v2 + 4LL * v13 + 120);
          if ( (unsigned int)v14 >= 0x80 )
          {
            v15 = *(unsigned int *)(v2 + 16);
            if ( (unsigned int)v14 < (unsigned int)v15 )
              break;
          }
LABEL_23:
          if ( ++v13 >= v12 )
            goto LABEL_26;
        }
        v16 = (unsigned int)v14;
        v17 = *(_DWORD *)(v14 + v2) - 64;
        if ( v17 )
        {
          v18 = v17 - 1;
          if ( v18 )
          {
            if ( v18 == 1 && v16 + 40 <= v15 )
            {
              v19 = v16 + v2 + 32;
              if ( !*(_DWORD *)(v16 + v2 + 12) )
                v19 = v6;
              v6 = v19;
              goto LABEL_26;
            }
            goto LABEL_22;
          }
          v20 = v16 + 56;
        }
        else
        {
          v20 = v16 + 40;
        }
        if ( v20 <= v15 )
        {
          v11 = 1;
          if ( !*(_BYTE *)(v16 + v2 + 10) )
            goto LABEL_26;
          v6 = v16 + v2 + 24;
        }
LABEL_22:
        if ( v11 )
          goto LABEL_26;
        goto LABEL_23;
      }
    }
LABEL_26:
    if ( v6 )
    {
      v21 = 0;
      if ( *(_BYTE *)(v2 + 2) == 40 )
      {
        v22 = 0;
        if ( !*(_DWORD *)(v2 + 20) )
        {
          v23 = *(_DWORD *)(v2 + 56);
          v24 = 0;
          if ( v23 )
          {
            while ( 1 )
            {
              v25 = *(unsigned int *)(v2 + 4LL * v24 + 120);
              if ( (unsigned int)v25 >= 0x80 )
              {
                v26 = *(unsigned int *)(v2 + 16);
                if ( (unsigned int)v25 < (unsigned int)v26 )
                  break;
              }
LABEL_46:
              if ( ++v24 >= v23 )
                goto LABEL_36;
            }
            v27 = (unsigned int)v25;
            v28 = *(_DWORD *)(v25 + v2) - 64;
            if ( v28 )
            {
              v29 = v28 - 1;
              if ( v29 )
              {
                if ( v29 == 1 && v27 + 40 <= v26 )
                  goto LABEL_36;
                goto LABEL_45;
              }
              v31 = v27 + 56;
            }
            else
            {
              v31 = v27 + 40;
            }
            if ( v31 <= v26 )
            {
              v21 = *(_BYTE *)(v27 + v2 + 10);
              v22 = 1;
            }
LABEL_45:
            if ( v22 )
              goto LABEL_36;
            goto LABEL_46;
          }
LABEL_36:
          v4 = a2;
        }
      }
      else
      {
        v21 = *(_BYTE *)(v2 + 10);
      }
      v3 = v21;
    }
  }
  if ( (byte_1C0069844 & 4) != 0 )
  {
    v30 = v9 + 1976;
    LOBYTE(v30) = BYTE1(result);
    return McTemplateK0zquuujqqbr7_EtwWriteTransfer(
             v30,
             *(_QWORD *)(v9 + 24),
             (const GUID *)(a1 + 728),
             *(const wchar_t **)(v4 + 8),
             *(_DWORD *)(*(_QWORD *)(v9 + 24) + 56LL),
             result,
             SBYTE1(result),
             SBYTE2(result),
             v9 + 1976,
             v8,
             v3,
             v6);
  }
  return result;
}
