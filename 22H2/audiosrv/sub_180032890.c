/*
 * XREFs of sub_180032890 @ 0x180032890
 * Callers:
 *     <none>
 * Callees:
 *     sub_18005E8F8 @ 0x18005E8F8 (sub_18005E8F8.c)
 *     sub_18006A1B0 @ 0x18006A1B0 (sub_18006A1B0.c)
 *     sub_1800BB524 @ 0x1800BB524 (sub_1800BB524.c)
 *     sub_1800BD8A8 @ 0x1800BD8A8 (sub_1800BD8A8.c)
 */

__int64 __fastcall sub_180032890(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  int v4; // ebp
  __int64 v7; // rax
  __int64 v8; // rax
  unsigned int v9; // ebx
  unsigned int v10; // edi
  unsigned int *v11; // rax
  unsigned __int64 v12; // r9
  unsigned int *v13; // r14
  unsigned __int64 v14; // rdx
  __int64 v15; // r8
  _WORD *v16; // rax
  __int16 v17; // cx
  HANDLE ProcessHeap; // rax

  v4 = 0;
  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_BYTE *)off_18019C348 + 28) & 0x40) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    sub_1800BB524(*((_QWORD *)off_18019C348 + 2), 24LL, &unk_18015DF00, 0LL);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 32));
  v7 = *(_QWORD *)(a1 + 72);
  if ( !v7 )
    goto LABEL_15;
  v8 = *(_QWORD *)(v7 + 728);
  v9 = 2 * *(_DWORD *)(v8 - 16) + 2;
  v10 = 2 * *(_DWORD *)(v8 - 16) + 74;
  v11 = (unsigned int *)sub_18006A1B0(v10, &unk_18019F848);
  v13 = v11;
  if ( !v11 )
  {
    v4 = -2147024882;
LABEL_21:
    sub_18005E8F8("CServerAudioSessionControl::OnStateChanged", 765LL, (unsigned int)v4);
    goto LABEL_15;
  }
  *v11 = v10;
  v11[1] = 8;
  v11[6] = v9;
  v11[12] = a4;
  v14 = (unsigned __int64)v9 >> 1;
  v15 = *(_QWORD *)(*(_QWORD *)(a1 + 72) + 728LL);
  v16 = v11 + 18;
  if ( v14 )
  {
    v12 = 2147483646 - v14;
    v15 -= (__int64)v16;
    while ( v12 + v14 )
    {
      v17 = *(_WORD *)((char *)v16 + v15);
      if ( !v17 )
        break;
      *v16++ = v17;
      if ( !--v14 )
      {
        --v16;
        break;
      }
    }
    *v16 = 0;
  }
  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_BYTE *)off_18019C348 + 28) & 0x40) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    sub_1800BD8A8(*((_QWORD *)off_18019C348 + 2), 25LL, &unk_18015DF00, v13, *(_DWORD *)(a1 + 80));
  }
  v4 = MMDevAPI_12(v13, *(unsigned int *)(a1 + 80), v15, v12);
  ProcessHeap = GetProcessHeap();
  HeapFree(ProcessHeap, 0, v13);
  if ( v4 < 0 )
    goto LABEL_21;
LABEL_15:
  if ( a1 != -32 )
    LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 32));
  return (unsigned int)v4;
}
