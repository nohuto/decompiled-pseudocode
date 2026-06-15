/*
 * XREFs of sub_1800CBBF0 @ 0x1800CBBF0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180033A70 @ 0x180033A70 (sub_180033A70.c)
 *     sub_18005E8F8 @ 0x18005E8F8 (sub_18005E8F8.c)
 *     sub_180061BA0 @ 0x180061BA0 (sub_180061BA0.c)
 *     sub_18006A1B0 @ 0x18006A1B0 (sub_18006A1B0.c)
 *     sub_1800BD8A8 @ 0x1800BD8A8 (sub_1800BD8A8.c)
 *     sub_1800CD21C @ 0x1800CD21C (sub_1800CD21C.c)
 */

__int64 __fastcall sub_1800CBBF0(__int64 a1, __int64 a2, __int64 a3, __int128 *a4)
{
  int v5; // edi
  __int64 v7; // rax
  int v8; // ecx
  __int64 v9; // rax
  unsigned int v10; // r15d
  unsigned __int64 v11; // r12
  unsigned int v12; // r13d
  _DWORD *v13; // rax
  _DWORD *v14; // rbx
  __int128 *v15; // rax
  __int128 v16; // xmm0
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v20; // [rsp+20h] [rbp-38h]

  v5 = 0;
  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_BYTE *)off_18019C348 + 28) & 0x40) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    sub_1800CD21C(*((_QWORD *)off_18019C348 + 2), 18, (unsigned int)&unk_18015DF00, 0, a3);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 32));
  v7 = *(_QWORD *)(a1 + 72);
  if ( v7 )
  {
    v8 = *(_DWORD *)(*(_QWORD *)(v7 + 728) - 16LL);
    v9 = -1LL;
    v10 = 2 * v8 + 2;
    do
      ++v9;
    while ( *(_WORD *)(a3 + 2 * v9) );
    v11 = 2 * v9 + 2;
    v12 = v11 + 2 * v8 + 74;
    v13 = sub_18006A1B0(v12);
    v14 = v13;
    if ( v13 )
    {
      *v13 = v12;
      v15 = &xmmword_18015B730;
      if ( a4 )
        v15 = a4;
      v16 = *v15;
      v14[1] = 16;
      v14[6] = v10;
      *(_OWORD *)(v14 + 7) = v16;
      v14[12] = v11;
      v14[13] = v10 + 72;
      sub_180061BA0((_WORD *)v14 + 36, v10, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 728LL));
      sub_180061BA0((_DWORD *)((char *)v14 + (unsigned int)v14[13]), v11, a3);
      if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
        && (*((_BYTE *)off_18019C348 + 28) & 0x40) != 0
        && *((_BYTE *)off_18019C348 + 25) >= 4u )
      {
        LODWORD(v20) = *(_DWORD *)(a1 + 80);
        sub_1800BD8A8(*((_QWORD *)off_18019C348 + 2), 0x13u, (__int64)&unk_18015DF00, v14, v20);
      }
      v5 = MMDevAPI_12(v14, *(unsigned int *)(a1 + 80), v17, v18);
      sub_180033A70(v14);
      if ( v5 < 0 )
        sub_18005E8F8((__int64)"CServerAudioSessionControl::OnDisplayNameChanged", 402, v5);
    }
  }
  if ( a1 != -32 )
    LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 32));
  return (unsigned int)v5;
}
