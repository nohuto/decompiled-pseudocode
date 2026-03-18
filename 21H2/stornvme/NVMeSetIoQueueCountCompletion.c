/*
 * XREFs of NVMeSetIoQueueCountCompletion @ 0x1C000DFE0
 * Callers:
 *     <none>
 * Callees:
 *     GetSrbExtension @ 0x1C00053D0 (GetSrbExtension.c)
 */

char __fastcall NVMeSetIoQueueCountCompletion(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  _WORD *v3; // r8
  __int64 v4; // r9
  __int64 SrbExtension; // r10
  __int64 v6; // r11
  __int64 v7; // rax
  unsigned __int16 v8; // ax
  unsigned int v9; // edi
  int v10; // ebx
  unsigned __int16 v11; // dx
  unsigned __int16 v12; // cx
  unsigned __int16 v13; // r8
  char v14; // cl
  unsigned __int16 v15; // ax
  int v16; // ebx
  unsigned int v17; // ecx
  int v18; // r8d
  int v19; // eax
  unsigned int v20; // edx

  SrbExtension = GetSrbExtension(a2);
  if ( !v3 || (LOBYTE(v7) = *(_BYTE *)(v2 + 3), (_BYTE)v7 == 14) )
  {
    v7 = *(_QWORD *)(v4 + 952);
    *(_QWORD *)(v7 + 4232) = 0LL;
  }
  else
  {
    if ( (_BYTE)v7 != 1 || *(_BYTE *)(v4 + 20) )
    {
      v13 = 1;
      v11 = 1;
    }
    else
    {
      v8 = *(_WORD *)(v4 + 272);
      v9 = *(_DWORD *)(v4 + 132);
      v10 = *(unsigned __int16 *)(v4 + 234);
      v11 = v8 - 1;
      if ( v8 <= 1u )
        v11 = 1;
      *(_WORD *)(v4 + 834) = *v3 + 1;
      *(_WORD *)(v4 + 836) = v3[1] + 1;
      v12 = *v3 + 1;
      if ( v9 )
      {
        v13 = *v3 + 1;
        if ( v12 < v9 + v10 )
        {
          if ( (unsigned int)(unsigned __int16)*(_DWORD *)v6 + 1 >= v9 )
            v13 = v9;
          *(_WORD *)(v4 + 838) = v13;
          if ( (unsigned __int16)(*(_WORD *)v6 - v13 + 1) < (unsigned __int16)v10 )
            LOWORD(v10) = *(_WORD *)v6 - v13 + 1;
          v13 = v10;
        }
        else
        {
          *(_WORD *)(v4 + 838) = v9;
          if ( v12 >= (unsigned __int16)v10 )
            v13 = v10;
        }
        v16 = *(unsigned __int16 *)(v6 + 2);
        v17 = (unsigned __int16)(v16 + 1);
        LODWORD(v7) = v9 + v11;
        if ( v17 < (unsigned int)v7 )
        {
          if ( v16 + 1 >= v9 )
            LOWORD(v17) = v9;
          *(_WORD *)(v4 + 838) = v17;
          LOWORD(v7) = *(_WORD *)(v6 + 2) - v17 + 1;
          if ( (unsigned __int16)v7 < v11 )
            v11 = *(_WORD *)(v6 + 2) - v17 + 1;
        }
        else
        {
          *(_WORD *)(v4 + 838) = v9;
          if ( (unsigned __int16)v17 < v11 )
            v11 = v16 + 1;
        }
      }
      else
      {
        if ( v12 >= (unsigned __int16)v10 )
          v12 = v10;
        LOWORD(v7) = v3[1] + 1;
        v13 = v12;
        if ( (unsigned __int16)v7 < v11 )
          v11 = v7;
      }
    }
    v14 = *(_BYTE *)(v4 + 20);
    if ( !v14 )
    {
      v15 = *(_WORD *)(v4 + 48);
      if ( v15 && v13 >= v15 )
        v13 = *(_WORD *)(v4 + 48);
      LOWORD(v7) = *(_WORD *)(v4 + 50);
      if ( (_WORD)v7 && v11 >= (unsigned __int16)v7 )
        v11 = *(_WORD *)(v4 + 50);
      if ( v11 > v13 )
        v11 = v13;
    }
    if ( *(_QWORD *)(SrbExtension + 4232) )
    {
      if ( v13 >= *(_WORD *)(v4 + 304) )
        v13 = *(_WORD *)(v4 + 304);
      LOWORD(v7) = *(_WORD *)(v4 + 306);
      if ( v11 >= (unsigned __int16)v7 )
        v11 = *(_WORD *)(v4 + 306);
    }
    *(_WORD *)(v4 + 304) = v13;
    *(_WORD *)(v4 + 306) = v11;
    if ( !v14 && *(_BYTE *)(v4 + 3832) )
    {
      v18 = *(unsigned __int16 *)(v4 + 306);
      v19 = *(_DWORD *)(v4 + 3844);
      v20 = v18 * *(_DWORD *)(v4 + 3836) / 0x64u;
      *(_WORD *)(v4 + 308) = v20;
      if ( (v19 & 0x80u) == 0 )
      {
        LOWORD(v7) = v20;
        if ( (_WORD)v18 && (_WORD)v20 == (_WORD)v18 )
        {
          LOWORD(v7) = v20 - 1;
          *(_WORD *)(v4 + 308) = v20 - 1;
        }
      }
      else
      {
        *(_WORD *)(v4 + 308) = v18;
        LOWORD(v7) = v18;
      }
      if ( (_WORD)v7 )
        *(_WORD *)(v4 + 304) = v18;
      else
        *(_BYTE *)(v4 + 3832) = 0;
    }
    *(_QWORD *)(SrbExtension + 4232) = 0LL;
  }
  *(_BYTE *)(SrbExtension + 4253) |= 8u;
  return v7;
}
