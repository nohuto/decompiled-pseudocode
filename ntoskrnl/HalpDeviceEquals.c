/*
 * XREFs of HalpDeviceEquals @ 0x140AAF150
 * Callers:
 *     HalpKdEnumerateDebuggingDevices @ 0x140AAF060 (HalpKdEnumerateDebuggingDevices.c)
 * Callees:
 *     wcsncmp @ 0x1403D5ED0 (wcsncmp.c)
 */

char __fastcall HalpDeviceEquals(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  int v4; // edx
  int v5; // esi
  char v6; // al
  char v7; // cl
  int v8; // eax
  char v9; // al
  char v10; // cl
  int v11; // eax
  int v12; // eax
  int v13; // ecx
  int v14; // eax
  char v15; // cl
  __int16 v17; // ax
  __int16 v18; // cx
  int v19; // eax
  __int16 v20; // ax
  __int16 v21; // cx
  int v22; // eax
  unsigned int v23; // eax
  int v24; // ecx
  __int16 v25; // ax
  __int16 v26; // cx
  __int16 v27; // cx
  __int16 v28; // ax

  v2 = KdDebugDevice;
  v4 = *(_DWORD *)(KdDebugDevice + 220);
  v5 = *(_DWORD *)(a2 + 220);
  if ( v4 == 2 )
  {
LABEL_4:
    if ( (v5 & 0xFFFFFFFD) == 0 )
    {
      v6 = *(_BYTE *)(KdDebugDevice + 14);
      v7 = *(_BYTE *)(a2 + 14);
      if ( v6 == v7 || (v7 == -1 || v6 == -1 ? (v8 = 1) : (v8 = 0), v8) )
      {
        v9 = *(_BYTE *)(KdDebugDevice + 15);
        v10 = *(_BYTE *)(a2 + 15);
        if ( v9 == v10 || (v10 == -1 || v9 == -1 ? (v11 = 1) : (v11 = 0), v11) )
        {
          if ( *(_DWORD *)KdDebugDevice == *(_DWORD *)a2
            || (*(_DWORD *)a2 == -1 || *(_DWORD *)KdDebugDevice == -1 ? (v12 = 1) : (v12 = 0), v12) )
          {
            v13 = *(_DWORD *)(a2 + 4);
            v14 = *(_DWORD *)(KdDebugDevice + 4);
            if ( v13 == -1 || v14 == v13 || v14 == -1 )
              return 1;
          }
        }
      }
    }
    if ( v4 == 1 || v5 == 2 )
    {
      v17 = *(_WORD *)(KdDebugDevice + 204);
      v18 = *(_WORD *)(a2 + 204);
      if ( v17 == v18 || (v17 == -1 || v18 == -1 ? (v19 = 1) : (v19 = 0), v19) )
      {
        v20 = *(_WORD *)(KdDebugDevice + 206);
        v21 = *(_WORD *)(a2 + 206);
        if ( v20 == v21 || (v20 == -1 || v21 == -1 ? (v22 = 1) : (v22 = 0), v22) )
        {
          v23 = *(_DWORD *)(KdDebugDevice + 232);
          if ( v23 == -1 )
            return 1;
          v24 = *(_DWORD *)(a2 + 232);
          if ( v24 == -1
            || v23 == v24 && !wcsncmp(*(const wchar_t **)(KdDebugDevice + 224), *(const wchar_t **)(a2 + 224), v23) )
          {
            return 1;
          }
        }
      }
    }
    v15 = 0;
    if ( v5 != 3 || *(_DWORD *)(v2 + 220) != *(_DWORD *)(a2 + 220) )
      return v15;
    if ( ((v25 = *(_WORD *)(v2 + 204), v26 = *(_WORD *)(a2 + 204), v25 == v26) || v25 == -1 || v26 == -1)
      && ((v27 = *(_WORD *)(v2 + 206), v28 = *(_WORD *)(a2 + 206), v27 == v28) || v27 == -1 || v28 == -1) )
    {
      return 1;
    }
    else
    {
      return 0;
    }
  }
  if ( v5 == 2 || v4 == v5 )
  {
    v5 = *(_DWORD *)(KdDebugDevice + 220);
    goto LABEL_4;
  }
  return 0;
}
