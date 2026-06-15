/*
 * XREFs of sub_1800324D0 @ 0x1800324D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18005E8F8 @ 0x18005E8F8 (sub_18005E8F8.c)
 *     sub_18006A1B0 @ 0x18006A1B0 (sub_18006A1B0.c)
 *     sub_1800BB524 @ 0x1800BB524 (sub_1800BB524.c)
 *     sub_1800BD8A8 @ 0x1800BD8A8 (sub_1800BD8A8.c)
 *     sub_1800CD394 @ 0x1800CD394 (sub_1800CD394.c)
 */

__int64 __fastcall sub_1800324D0(__int64 a1, int a2, int a3, char a4, __int128 *a5)
{
  float v5; // xmm2_4
  int v6; // ebp
  _QWORD *v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rax
  unsigned int v12; // ebx
  unsigned int v13; // edi
  unsigned int *v14; // rax
  unsigned __int64 v15; // r8
  unsigned int *v16; // r14
  __int128 *v17; // rax
  unsigned __int64 v18; // rdx
  _WORD *v19; // rcx
  __int128 v20; // xmm0
  __int64 v21; // r9
  __int16 v22; // ax
  HANDLE ProcessHeap; // rax
  double v25; // [rsp+20h] [rbp-48h]

  v6 = 0;
  v9 = off_18019C348;
  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348 )
  {
    if ( (*((_BYTE *)off_18019C348 + 28) & 0x40) != 0 && *((_BYTE *)off_18019C348 + 25) >= 4u )
    {
      sub_1800BB524(*((_QWORD *)off_18019C348 + 2), 28LL, &unk_18015DF00, 0LL);
      v9 = off_18019C348;
    }
    if ( v9 != &off_18019C348 && (*((_BYTE *)v9 + 28) & 0x40) != 0 && *((_BYTE *)v9 + 25) >= 4u )
    {
      v25 = v5;
      sub_1800CD394(v9[2], a2, a3, 0, SLOBYTE(v25), a4);
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 32));
  v10 = *(_QWORD *)(a1 + 72);
  if ( v10 )
  {
    v11 = *(_QWORD *)(v10 + 728);
    v12 = 2 * *(_DWORD *)(v11 - 16) + 2;
    v13 = 2 * *(_DWORD *)(v11 - 16) + 74;
    v14 = (unsigned int *)sub_18006A1B0(v13, &unk_18019F848);
    v16 = v14;
    if ( v14 )
    {
      *v14 = v13;
      v17 = a5;
      if ( !a5 )
        v17 = &xmmword_18015B730;
      v18 = (unsigned __int64)v12 >> 1;
      v19 = v16 + 18;
      v20 = *v17;
      v16[1] = 1;
      *((float *)v16 + 12) = v5;
      *(_OWORD *)(v16 + 7) = v20;
      v16[6] = v12;
      *((_BYTE *)v16 + 52) = a4;
      v21 = *(_QWORD *)(*(_QWORD *)(a1 + 72) + 728LL);
      if ( v18 )
      {
        v15 = 2147483646 - v18;
        v21 -= (__int64)v19;
        while ( v15 + v18 )
        {
          v22 = *(_WORD *)((char *)v19 + v21);
          if ( !v22 )
            break;
          *v19++ = v22;
          if ( !--v18 )
          {
            --v19;
            break;
          }
        }
        *v19 = 0;
      }
      if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
        && (*((_BYTE *)off_18019C348 + 28) & 0x40) != 0
        && *((_BYTE *)off_18019C348 + 25) >= 4u )
      {
        sub_1800BD8A8(*((_QWORD *)off_18019C348 + 2), 30LL, &unk_18015DF00, v16, *(_DWORD *)(a1 + 80));
      }
      v6 = MMDevAPI_12(v16, *(unsigned int *)(a1 + 80), v15, v21);
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v16);
      if ( v6 < 0 )
        sub_18005E8F8("CServerAudioSessionControl::OnVolumeChanged", 1131LL, (unsigned int)v6);
    }
  }
  if ( a1 != -32 )
    LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 32));
  return (unsigned int)v6;
}
