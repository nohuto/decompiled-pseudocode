/*
 * XREFs of RaidLogGetParm4 @ 0x1C00056D0
 * Callers:
 *     RaidAdapterPostScatterGatherExecute @ 0x1C0005010 (RaidAdapterPostScatterGatherExecute.c)
 * Callees:
 *     GetSrbScsiData @ 0x1C001D01C (GetSrbScsiData.c)
 */

unsigned __int64 __fastcall RaidLogGetParm4(__int64 a1)
{
  __int64 v1; // rdx
  unsigned int v2; // r8d
  unsigned __int8 v3; // r14
  unsigned __int8 v4; // si
  unsigned __int8 v5; // di
  unsigned __int8 v6; // r10
  unsigned __int8 v7; // r11
  __int64 v8; // r15
  int v9; // eax
  int v10; // ebp
  int v11; // ebx
  unsigned int v12; // ecx
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rax
  unsigned int v17; // r9d
  unsigned int v18; // edx
  __int64 v19; // rcx
  unsigned __int64 v20; // rax
  unsigned int v21; // r9d
  unsigned int v22; // edx
  __int64 v23; // rcx
  unsigned __int64 v24; // rax
  unsigned int v25; // edx
  __int64 v26; // rcx
  unsigned __int64 v27; // rax
  unsigned __int8 *SrbScsiData; // rax

  v1 = *(_QWORD *)(a1 + 168);
  v2 = 0;
  v3 = 0;
  v4 = 0;
  v5 = 0;
  v6 = 0;
  v7 = 0;
  v8 = 0LL;
  v9 = *(unsigned __int8 *)(v1 + 2);
  v10 = 255;
  v11 = 0;
  if ( (_BYTE)v9 == 40 )
  {
    v12 = *(_DWORD *)(v1 + 20);
    v8 = v1;
  }
  else
  {
    v12 = *(unsigned __int8 *)(v1 + 2);
  }
  if ( v12 )
  {
    switch ( v12 )
    {
      case 0x17u:
        if ( (_BYTE)v9 == 40 )
        {
          v25 = *(_DWORD *)(v8 + 56);
          if ( v25 )
          {
            while ( 1 )
            {
              v26 = *(unsigned int *)(v8 + 4LL * v2 + 120);
              if ( (unsigned int)v26 >= 0x80 )
              {
                v27 = *(unsigned int *)(v8 + 16);
                if ( (unsigned int)v26 <= (unsigned int)v27 && *(_DWORD *)(v26 + v8) == 96 && v26 + 24 <= v27 )
                  break;
              }
              if ( ++v2 >= v25 )
                goto LABEL_42;
            }
            v6 = *(_BYTE *)((unsigned int)v26 + v8 + 8);
            v7 = *(_BYTE *)((unsigned int)v26 + v8 + 9);
          }
LABEL_42:
          v14 = v7;
          v15 = (v6 | 0x1700LL) << 16;
          return v14 | v15;
        }
        v14 = *(unsigned __int8 *)(v1 + 9);
        LODWORD(v15) = ((v9 << 8) | *(unsigned __int8 *)(v1 + 4)) << 16;
        goto LABEL_7;
      case 0x24u:
        if ( (_BYTE)v9 == 40 )
        {
          v21 = *(_DWORD *)(v8 + 56);
          v22 = 0;
          if ( v21 )
          {
            while ( 1 )
            {
              v23 = *(unsigned int *)(v8 + 4LL * v22 + 120);
              if ( (unsigned int)v23 >= 0x80 )
              {
                v24 = *(unsigned int *)(v8 + 16);
                if ( (unsigned int)v23 <= (unsigned int)v24 && *(_DWORD *)(v23 + v8) == 97 && v23 + 24 <= v24 )
                  break;
              }
              if ( ++v22 >= v21 )
                goto LABEL_33;
            }
            v2 = *(_DWORD *)((unsigned int)v23 + v8 + 12);
            v11 = *(_DWORD *)((unsigned int)v23 + v8 + 16);
            v5 = *(_BYTE *)((unsigned int)v23 + v8 + 8);
          }
LABEL_33:
          v14 = v5;
          v15 = (int)((v11 | ((v2 | 0x2400) << 8)) << 8);
          return v14 | v15;
        }
        v14 = *(unsigned __int8 *)(v1 + 4);
        v13 = *(_DWORD *)(v1 + 64) | ((*(_DWORD *)(v1 + 8) | (v9 << 8)) << 8);
        goto LABEL_6;
      case 0x25u:
        if ( (_BYTE)v9 == 40 )
        {
          v17 = *(_DWORD *)(v8 + 56);
          v18 = 0;
          if ( v17 )
          {
            while ( 1 )
            {
              v19 = *(unsigned int *)(v8 + 4LL * v18 + 120);
              if ( (unsigned int)v19 >= 0x80 )
              {
                v20 = *(unsigned int *)(v8 + 16);
                if ( (unsigned int)v19 <= (unsigned int)v20 && *(_DWORD *)(v19 + v8) == 98 && v19 + 24 <= v20 )
                  break;
              }
              if ( ++v18 >= v17 )
                return (unsigned __int8)v2 | (unsigned __int64)((v10 | ((v4 | 0x2500u) << 8)) << 8);
            }
            v4 = *(_BYTE *)((unsigned int)v19 + v8 + 8);
            v10 = *(_DWORD *)((unsigned int)v19 + v8 + 12);
            v2 = *(_DWORD *)((unsigned int)v19 + v8 + 16);
          }
          return (unsigned __int8)v2 | (unsigned __int64)((v10 | ((v4 | 0x2500u) << 8)) << 8);
        }
        else
        {
          return (unsigned __int8)*(_DWORD *)(v1 + 64) | (unsigned __int64)((*(_DWORD *)(v1 + 8) | (((v9 << 8) | (unsigned int)*(unsigned __int8 *)(v1 + 4)) << 8)) << 8);
        }
      default:
        return (unsigned __int64)v12 << 24;
    }
  }
  else
  {
    if ( (_BYTE)v9 != 40 )
    {
      v13 = ((*(unsigned __int8 *)(v1 + 72) | (v9 << 8)) << 8) | *(unsigned __int8 *)(v1 + 9);
      v14 = *(unsigned __int8 *)(v1 + 8);
LABEL_6:
      LODWORD(v15) = v13 << 8;
LABEL_7:
      v15 = (int)v15;
      return v14 | v15;
    }
    SrbScsiData = (unsigned __int8 *)GetSrbScsiData(v8, 0, 0, 0, 0LL, 0LL);
    if ( SrbScsiData )
      v3 = *SrbScsiData;
    return (unsigned __int64)v3 << 16;
  }
}
