/*
 * XREFs of NVMeSetIoQueueCountCompletion @ 0x1C0023C00
 * Callers:
 *     <none>
 * Callees:
 *     GetSrbExtension @ 0x1C0001D98 (GetSrbExtension.c)
 */

char __fastcall NVMeSetIoQueueCountCompletion(__int64 a1, __int64 a2, _WORD *a3)
{
  __int64 v4; // rdx
  __int64 SrbExtension; // rdi
  __int64 v6; // r9
  __int64 v7; // r8
  __int64 v8; // rax
  _BYTE *v9; // rbx
  unsigned __int16 v10; // ax
  unsigned int v11; // ebp
  unsigned __int16 v12; // r8
  unsigned __int16 v13; // r11
  unsigned __int16 v14; // dx
  _WORD *v15; // r10
  unsigned __int16 v16; // cx
  unsigned int v17; // r10d
  int v18; // r11d
  unsigned int v19; // ecx
  unsigned int v20; // r11d
  unsigned __int16 v21; // ax
  int v22; // eax
  unsigned int v23; // edx

  SrbExtension = GetSrbExtension(a2);
  if ( !v7 || (LOBYTE(v8) = *(_BYTE *)(v4 + 3), (_BYTE)v8 == 14) )
  {
    v8 = *(_QWORD *)(v6 + 1040);
    *(_QWORD *)(v8 + 4232) = 0LL;
  }
  else
  {
    v9 = (_BYTE *)(v6 + 20);
    if ( (_BYTE)v8 != 1 || *v9 )
    {
      v14 = 1;
      v12 = 1;
    }
    else
    {
      v10 = *(_WORD *)(v6 + 280);
      v11 = *(_DWORD *)(v6 + 132);
      v12 = v10 - 1;
      v13 = 2 * *(_WORD *)(v6 + 242);
      if ( v10 <= 1u )
        v12 = 1;
      *(_WORD *)(v6 + 914) = *a3 + 1;
      *(_WORD *)(v6 + 916) = a3[1] + 1;
      v14 = *a3 + 1;
      if ( v11 )
      {
        if ( v14 < v11 + v13 )
        {
          v16 = *a3 + 1;
          v17 = (unsigned __int16)*(_DWORD *)a3 + 1;
          if ( v17 >= v11 )
            v16 = v11;
          if ( (unsigned __int16)*(_DWORD *)a3 )
          {
            if ( v16 == v17 )
              --v16;
          }
          else
          {
            v16 = 0;
          }
          v15 = (_WORD *)(v6 + 918);
          *(_WORD *)(v6 + 918) = v16;
          v14 = *a3 - v16 + 1;
          if ( v14 >= v13 )
            v14 = v13;
        }
        else
        {
          v15 = (_WORD *)(v6 + 918);
          *(_WORD *)(v6 + 918) = v11;
          if ( v14 >= v13 )
            v14 = v13;
        }
        v18 = (unsigned __int16)a3[1];
        v19 = (unsigned __int16)(v18 + 1);
        LODWORD(v8) = v11 + v12;
        if ( v19 < (unsigned int)v8 )
        {
          v20 = v18 + 1;
          if ( v20 >= v11 )
            LOWORD(v19) = v11;
          if ( v20 == 1 )
          {
            LOWORD(v19) = 0;
          }
          else if ( (unsigned __int16)v19 == v20 )
          {
            LOWORD(v19) = v19 - 1;
          }
          *v15 = v19;
          LOWORD(v8) = a3[1] - v19 + 1;
          if ( (unsigned __int16)v8 < v12 )
            v12 = a3[1] - v19 + 1;
        }
        else
        {
          *v15 = v11;
          if ( (unsigned __int16)v19 < v12 )
            v12 = v18 + 1;
        }
      }
      else
      {
        if ( v14 >= v13 )
          v14 = v13;
        LOWORD(v8) = a3[1] + 1;
        if ( (unsigned __int16)v8 < v12 )
          v12 = a3[1] + 1;
      }
    }
    if ( !*v9 )
    {
      v21 = *(_WORD *)(v6 + 48);
      if ( v21 && v14 >= v21 )
        v14 = *(_WORD *)(v6 + 48);
      LOWORD(v8) = *(_WORD *)(v6 + 50);
      if ( (_WORD)v8 && v12 >= (unsigned __int16)v8 )
        v12 = *(_WORD *)(v6 + 50);
      if ( v12 > v14 )
        v12 = v14;
    }
    if ( *(_QWORD *)(SrbExtension + 4232) )
    {
      if ( v14 >= *(_WORD *)(v6 + 336) )
        v14 = *(_WORD *)(v6 + 336);
      LOWORD(v8) = *(_WORD *)(v6 + 338);
      if ( v12 >= (unsigned __int16)v8 )
        v12 = *(_WORD *)(v6 + 338);
    }
    *(_WORD *)(v6 + 336) = v14;
    *(_WORD *)(v6 + 338) = v12;
    if ( !*v9 && *(_BYTE *)(v6 + 4032) )
    {
      v22 = *(_DWORD *)(v6 + 4044);
      v23 = *(_DWORD *)(v6 + 4036) * (unsigned int)v12 / 0x64;
      *(_WORD *)(v6 + 340) = v23;
      if ( (v22 & 0x80u) == 0 )
      {
        LOWORD(v8) = v23;
        if ( v12 && (_WORD)v23 == v12 )
        {
          LOWORD(v8) = v23 - 1;
          *(_WORD *)(v6 + 340) = v23 - 1;
        }
      }
      else
      {
        *(_WORD *)(v6 + 340) = v12;
        LOWORD(v8) = v12;
      }
      if ( (_WORD)v8 )
        *(_WORD *)(v6 + 336) = v12;
      else
        *(_BYTE *)(v6 + 4032) = 0;
    }
    *(_QWORD *)(SrbExtension + 4232) = 0LL;
  }
  *(_BYTE *)(SrbExtension + 4253) |= 8u;
  return v8;
}
