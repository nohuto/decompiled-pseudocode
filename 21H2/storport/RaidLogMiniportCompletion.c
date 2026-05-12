/*
 * XREFs of RaidLogMiniportCompletion @ 0x1C000F520
 * Callers:
 *     RaidAdapterRequestComplete @ 0x1C000F360 (RaidAdapterRequestComplete.c)
 *     RaidAdapterRequestDirectComplete @ 0x1C002E174 (RaidAdapterRequestDirectComplete.c)
 * Callees:
 *     GetSrbScsiData @ 0x1C001D01C (GetSrbScsiData.c)
 */

__int64 __fastcall RaidLogMiniportCompletion(_QWORD *a1)
{
  __int64 v1; // rax
  unsigned __int64 v2; // rbx
  unsigned __int8 v4; // bp
  unsigned __int8 v5; // r10
  unsigned __int8 v6; // r8
  __int64 v7; // r14
  char v8; // cl
  int v9; // r9d
  int v10; // edx
  int v11; // esi
  unsigned __int64 v12; // r9
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // r9
  __int64 v15; // r10
  __int64 result; // rax
  int v17; // ecx
  __int64 v18; // r8
  __int64 v19; // r11
  __int64 v20; // rcx
  __int64 v21; // r10
  unsigned int v22; // esi
  unsigned int v23; // r8d
  unsigned int v24; // edx
  __int64 v25; // rcx
  unsigned __int64 v26; // rax
  unsigned int v27; // r8d
  unsigned int v28; // edx
  __int64 v29; // rcx
  unsigned __int64 v30; // rax
  unsigned int v31; // r9d
  unsigned int v32; // edx
  __int64 v33; // rcx
  unsigned __int64 v34; // rax
  unsigned __int8 *SrbScsiData; // rax
  unsigned __int8 v36; // [rsp+50h] [rbp+8h] BYREF

  v1 = a1[21];
  v2 = 0LL;
  v36 = 0;
  v4 = 0;
  v5 = 0;
  v6 = 0;
  v7 = 0LL;
  v8 = *(_BYTE *)(v1 + 2);
  v9 = 0;
  if ( v8 == 40 )
  {
    v10 = *(_DWORD *)(v1 + 20);
    v7 = v1;
  }
  else
  {
    v10 = *(unsigned __int8 *)(v1 + 2);
  }
  v11 = *(unsigned __int8 *)(v1 + 3);
  switch ( v10 )
  {
    case 0:
      if ( v8 == 40 )
      {
        SrbScsiData = (unsigned __int8 *)GetSrbScsiData(v7, 0, 0, (unsigned int)&v36, 0LL, 0LL);
        if ( SrbScsiData )
          v4 = *SrbScsiData;
        v12 = ((unsigned __int64)v4 << 16) | (unsigned int)(v11 << 8);
        v13 = v36;
        goto LABEL_7;
      }
      v12 = *(unsigned __int8 *)(v1 + 4) | ((unsigned __int64)*(unsigned __int8 *)(v1 + 72) << 16);
LABEL_6:
      v13 = (unsigned int)(v11 << 8);
LABEL_7:
      v14 = v13 | v12;
      break;
    case 23:
      if ( v8 == 40 )
      {
        v31 = *(_DWORD *)(v7 + 56);
        v32 = 0;
        if ( v31 )
        {
          while ( 1 )
          {
            v33 = *(unsigned int *)(v7 + 4LL * v32 + 120);
            if ( (unsigned int)v33 >= 0x80 )
            {
              v34 = *(unsigned int *)(v7 + 16);
              if ( (unsigned int)v33 <= (unsigned int)v34 && *(_DWORD *)(v33 + v7) == 96 && v33 + 24 <= v34 )
                break;
            }
            if ( ++v32 >= v31 )
              goto LABEL_53;
          }
          v6 = *(_BYTE *)((unsigned int)v33 + v7 + 8);
        }
LABEL_53:
        v12 = (v11 | 0x170000u) << 8;
        v13 = (unsigned __int64)v6 << 16;
        goto LABEL_7;
      }
      v12 = (unsigned __int64)*(unsigned __int8 *)(v1 + 4) << 16;
      v11 |= 0x170000u;
      goto LABEL_6;
    case 36:
      if ( v8 == 40 )
      {
        v27 = *(_DWORD *)(v7 + 56);
        v28 = 0;
        if ( v27 )
        {
          while ( 1 )
          {
            v29 = *(unsigned int *)(v7 + 4LL * v28 + 120);
            if ( (unsigned int)v29 >= 0x80 )
            {
              v30 = *(unsigned int *)(v7 + 16);
              if ( (unsigned int)v29 <= (unsigned int)v30 && *(_DWORD *)(v29 + v7) == 97 && v29 + 24 <= v30 )
                break;
            }
            if ( ++v28 >= v27 )
              goto LABEL_44;
          }
          v9 = *(_DWORD *)((unsigned int)v29 + v7 + 12);
        }
LABEL_44:
        v22 = (v9 << 16) | ((v11 | 0x240000) << 8);
      }
      else
      {
        v22 = ((v11 | 0x240000) << 8) | (*(_DWORD *)(v1 + 8) << 16);
      }
      v14 = v22;
      break;
    case 37:
      if ( v8 == 40 )
      {
        v23 = *(_DWORD *)(v7 + 56);
        v24 = 0;
        if ( v23 )
        {
          while ( 1 )
          {
            v25 = *(unsigned int *)(v7 + 4LL * v24 + 120);
            if ( (unsigned int)v25 >= 0x80 )
            {
              v26 = *(unsigned int *)(v7 + 16);
              if ( (unsigned int)v25 <= (unsigned int)v26 && *(_DWORD *)(v25 + v7) == 98 && v25 + 24 <= v26 )
                break;
            }
            if ( ++v24 >= v23 )
              goto LABEL_36;
          }
          v5 = *(_BYTE *)((unsigned int)v25 + v7 + 8);
        }
LABEL_36:
        v12 = (v11 | 0x250000u) << 8;
        v13 = (unsigned __int64)v5 << 16;
        goto LABEL_7;
      }
      v12 = (unsigned __int64)*(unsigned __int8 *)(v1 + 4) << 16;
      v11 |= 0x250000u;
      goto LABEL_6;
    default:
      v14 = (v11 | (unsigned int)(v10 << 16)) << 8;
      break;
  }
  v15 = a1[20];
  if ( !v15 )
  {
    v21 = a1[21];
    if ( *(_BYTE *)(v21 + 2) == 40 )
      v15 = *(_QWORD *)(v7 + 80);
    else
      v15 = *(_QWORD *)(v21 + 48);
  }
  result = a1[28];
  if ( result )
  {
    v17 = *(_DWORD *)(result + 96);
    result = BYTE2(v17);
    v2 = BYTE2(v17) | ((((unsigned __int64)(unsigned __int8)v17 << 8) | BYTE1(v17)) << 8);
  }
  v18 = a1[27];
  v19 = a1[21];
  if ( v18 && *(_DWORD *)(v18 + 5060) )
  {
    if ( *(_QWORD *)(v18 + 5064) )
    {
      v20 = *(_QWORD *)(v18 + 5064)
          + 48LL
          * ((unsigned int)_InterlockedIncrement((volatile signed __int32 *)(v18 + 5056)) % *(_DWORD *)(v18 + 5060));
      *(_DWORD *)v20 = 1;
      result = MEMORY[0xFFFFF78000000014];
      *(_QWORD *)(v20 + 40) = MEMORY[0xFFFFF78000000014];
      *(_QWORD *)(v20 + 8) = v15;
      *(_QWORD *)(v20 + 16) = v2;
      *(_QWORD *)(v20 + 24) = v19;
      *(_QWORD *)(v20 + 32) = v14;
    }
  }
  return result;
}
