/*
 * XREFs of Isoch_Transfer_PrepareForCompletion @ 0x1C0045868
 * Callers:
 *     Isoch_Transfer_Complete @ 0x1C00454C0 (Isoch_Transfer_Complete.c)
 *     Isoch_Transfer_CompleteCancelable @ 0x1C0045590 (Isoch_Transfer_CompleteCancelable.c)
 * Callees:
 *     WPP_RECORDER_SF_DDqdDDDD @ 0x1C0002F20 (WPP_RECORDER_SF_DDqdDDDD.c)
 */

void __fastcall Isoch_Transfer_PrepareForCompletion(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  __int64 v7; // r11
  _DWORD *v8; // rcx
  int v9; // r10d
  __int64 v10; // r8
  unsigned int v11; // eax
  int v12; // eax
  int v13; // eax
  struct _MDL *v14; // rcx
  __int64 v15; // r8
  int v16; // [rsp+20h] [rbp-58h]

  v7 = *(_QWORD *)(a2 + 48);
  if ( *(_WORD *)(v7 + 2) == 8
    || *(_WORD *)(v7 + 2) == 9
    || *(_WORD *)(v7 + 2) == 10
    || *(_WORD *)(v7 + 2) == 50
    || *(_WORD *)(v7 + 2) == 55
    || *(_WORD *)(v7 + 2) == 56
    || (unsigned int)*(unsigned __int16 *)(v7 + 2) - 57 > 1 )
  {
    v8 = (_DWORD *)(v7 + 36);
  }
  else
  {
    v8 = (_DWORD *)(v7 + 52);
  }
  v9 = 0;
  *v8 = *(_DWORD *)(a2 + 84);
  v10 = 0LL;
  v11 = *(_DWORD *)(a2 + 96);
  if ( v11 )
  {
    do
    {
      if ( a3 == -1 )
      {
        v12 = *(_DWORD *)(v7 + 12 * v10 + 148);
        if ( v12 == -1 )
        {
          *(_DWORD *)(v7 + 12 * v10 + 148) = -1073610752;
          goto LABEL_14;
        }
      }
      else
      {
        *(_DWORD *)(v7 + 12 * v10 + 148) = a3;
        v12 = a3;
      }
      if ( !v12 )
      {
        ++v9;
        goto LABEL_18;
      }
LABEL_14:
      ++*(_DWORD *)(v7 + 136);
      ++*(_DWORD *)(a1 + 260);
LABEL_18:
      ++*(_DWORD *)(a1 + 256);
      v10 = (unsigned int)(v10 + 1);
      v11 = *(_DWORD *)(a2 + 96);
    }
    while ( (unsigned int)v10 < v11 );
  }
  if ( (_DWORD)a4 == -1 )
  {
    if ( *(_DWORD *)(v7 + 136) == v11 )
    {
      *(_DWORD *)(v7 + 4) = -1073739008;
LABEL_38:
      v13 = -1073741823;
      goto LABEL_41;
    }
    *(_DWORD *)(v7 + 4) = 0;
  }
  else
  {
    *(_DWORD *)(v7 + 4) = a4;
    if ( (int)a4 <= -1073737728 )
    {
      switch ( (_DWORD)a4 )
      {
        case 0xC0001000:
          v13 = -1073741670;
          goto LABEL_41;
        case 0x80000200:
        case 0x80000300:
        case 0x80000600:
        case 0xC0000A00:
          v13 = -1073741811;
          goto LABEL_41;
        case 0xC0000E00:
          v13 = -1073741637;
          goto LABEL_41;
      }
      goto LABEL_38;
    }
    if ( (_DWORD)a4 == -1073713152 )
    {
      v13 = -1073741810;
      goto LABEL_41;
    }
    if ( (_DWORD)a4 == -1073676288 )
    {
      v13 = -1073741536;
      goto LABEL_41;
    }
    if ( (unsigned int)a4 >= 2 )
      goto LABEL_38;
  }
  v13 = 0;
LABEL_41:
  *(_DWORD *)(a2 + 68) = v13;
  ++*(_DWORD *)(a1 + 240);
  *(_QWORD *)(a1 + 248) += *(unsigned int *)(a2 + 84);
  if ( *(int *)(a2 + 68) < 0 )
    ++*(_DWORD *)(a1 + 244);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_DDqdDDDD(
      *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
      *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL),
      v10,
      a4,
      v16);
  v14 = *(struct _MDL **)(a2 + 72);
  if ( v14 )
  {
    if ( (v15 = *(_QWORD *)(a2 + 48), *(_WORD *)(v15 + 2) != 8)
      && *(_WORD *)(v15 + 2) != 9
      && *(_WORD *)(v15 + 2) != 10
      && *(_WORD *)(v15 + 2) != 50
      && *(_WORD *)(v15 + 2) != 55
      && *(_WORD *)(v15 + 2) != 56
      && (unsigned int)*(unsigned __int16 *)(v15 + 2) - 57 < 2
      || v14 != *(struct _MDL **)(v15 + 48) )
    {
      IoFreeMdl(v14);
      *(_QWORD *)(a2 + 72) = 0LL;
    }
  }
  *(_BYTE *)(a2 + 16) = 0;
}
