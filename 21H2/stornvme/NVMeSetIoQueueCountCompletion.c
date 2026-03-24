/*
 * XREFs of NVMeSetIoQueueCountCompletion @ 0x1C001BA60
 * Callers:
 *     <none>
 * Callees:
 *     GetSrbExtension @ 0x1C0005A44 (GetSrbExtension.c)
 */

char __fastcall NVMeSetIoQueueCountCompletion(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // r9
  __int64 SrbExtension; // r10
  __int16 *v5; // r11
  __int64 v6; // r8
  __int64 v7; // rax
  char v8; // r8
  unsigned __int16 v9; // ax
  unsigned int v10; // esi
  int v11; // edi
  unsigned __int16 v12; // bx
  __int16 v13; // bp
  unsigned __int16 v14; // dx
  unsigned int v15; // edi
  unsigned int v16; // ecx
  bool v17; // cf
  unsigned __int16 v18; // ax
  int v19; // eax
  unsigned int v20; // edx

  SrbExtension = GetSrbExtension(a2);
  if ( !v6 || (LOBYTE(v7) = *(_BYTE *)(v2 + 3), (_BYTE)v7 == 14) )
  {
    v7 = *(_QWORD *)(v3 + 936);
    *(_QWORD *)(v7 + 4232) = 0LL;
    goto LABEL_55;
  }
  v8 = *(_BYTE *)(v3 + 16);
  if ( (_BYTE)v7 != 1 || v8 )
  {
    v14 = 1;
    LOWORD(v16) = 1;
  }
  else
  {
    v9 = *(_WORD *)(v3 + 256);
    v10 = *(_DWORD *)(v3 + 124);
    v11 = *(unsigned __int16 *)(v3 + 218);
    v12 = v9 - 1;
    if ( v9 <= 1u )
      v12 = 1;
    *(_WORD *)(v3 + 818) = *v5 + 1;
    *(_WORD *)(v3 + 820) = v5[1] + 1;
    v13 = *v5;
    v14 = *v5 + 1;
    if ( v10 )
    {
      if ( v14 < v10 + v11 )
      {
        if ( (unsigned __int16)*(_DWORD *)v5 >= v10 )
          v13 = v10;
        *(_WORD *)(v3 + 822) = v13;
        v14 = *v5 - v13 + 1;
      }
      else
      {
        *(_WORD *)(v3 + 822) = v10;
      }
      if ( v14 >= (unsigned __int16)v11 )
        v14 = v11;
      v15 = (unsigned __int16)v5[1];
      v16 = (unsigned __int16)(v15 + 1);
      LODWORD(v7) = v10 + v12;
      if ( v16 < (unsigned int)v7 )
      {
        if ( v15 >= v10 )
          LOWORD(v15) = v10;
        *(_WORD *)(v3 + 822) = v15;
        LOWORD(v7) = v5[1] - v15 + 1;
        if ( (unsigned __int16)v7 >= v12 )
          LOWORD(v7) = v12;
        LOWORD(v16) = v7;
        goto LABEL_29;
      }
      *(_WORD *)(v3 + 822) = v10;
      v17 = (unsigned __int16)v16 < v12;
    }
    else
    {
      LOWORD(v7) = v5[1] + 1;
      LOWORD(v16) = v7;
      if ( v14 >= (unsigned __int16)v11 )
        v14 = v11;
      v17 = (unsigned __int16)v7 < v12;
    }
    if ( !v17 )
      LOWORD(v16) = v12;
  }
LABEL_29:
  if ( !v8 )
  {
    v18 = *(_WORD *)(v3 + 40);
    if ( v18 && v14 >= v18 )
      v14 = *(_WORD *)(v3 + 40);
    LOWORD(v7) = *(_WORD *)(v3 + 42);
    if ( (_WORD)v7 && (unsigned __int16)v16 >= (unsigned __int16)v7 )
      LOWORD(v16) = *(_WORD *)(v3 + 42);
    if ( (unsigned __int16)v16 > v14 )
      LOWORD(v16) = v14;
  }
  if ( *(_QWORD *)(SrbExtension + 4232) )
  {
    if ( v14 >= *(_WORD *)(v3 + 288) )
      v14 = *(_WORD *)(v3 + 288);
    LOWORD(v7) = *(_WORD *)(v3 + 290);
    if ( (unsigned __int16)v16 >= (unsigned __int16)v7 )
      LOWORD(v16) = *(_WORD *)(v3 + 290);
  }
  *(_WORD *)(v3 + 288) = v14;
  *(_WORD *)(v3 + 290) = v16;
  if ( !*(_BYTE *)(v3 + 16) && *(_BYTE *)(v3 + 3816) )
  {
    v19 = *(_DWORD *)(v3 + 3828);
    v20 = (unsigned int)(unsigned __int16)v16 * *(_DWORD *)(v3 + 3820) / 0x64;
    *(_WORD *)(v3 + 292) = v20;
    if ( (v19 & 0x80u) == 0 )
    {
      LOWORD(v7) = v20;
      if ( (_WORD)v16 && (_WORD)v20 == (_WORD)v16 )
      {
        LOWORD(v7) = v20 - 1;
        *(_WORD *)(v3 + 292) = v20 - 1;
      }
    }
    else
    {
      *(_WORD *)(v3 + 292) = v16;
      LOWORD(v7) = v16;
    }
    if ( (_WORD)v7 )
      *(_WORD *)(v3 + 288) = v16;
    else
      *(_BYTE *)(v3 + 3816) = 0;
  }
  *(_QWORD *)(SrbExtension + 4232) = 0LL;
LABEL_55:
  *(_BYTE *)(SrbExtension + 4253) |= 8u;
  return v7;
}
