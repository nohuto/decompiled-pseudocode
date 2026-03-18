/*
 * XREFs of ?UpdateMoveSizeDataForCancelation@@YAXPEAUMOVESIZEDATA@@@Z @ 0x1C020B5BC
 * Callers:
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z @ 0x1C020E1A8 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall UpdateMoveSizeDataForCancelation(struct MOVESIZEDATA *a1)
{
  __int128 v2; // xmm0
  __int64 v3; // r9
  __int64 v4; // rdx
  int v5; // eax
  int v6; // edx
  int v7; // ecx
  unsigned int v8; // ecx

  v2 = *(_OWORD *)((char *)a1 + 136);
  v3 = *((_QWORD *)a1 + 27);
  v4 = *((_QWORD *)a1 + 25) ^ (*((_QWORD *)a1 + 25) >> 5);
  *((_QWORD *)a1 + 26) = v3;
  *(_OWORD *)((char *)a1 + 24) = v2;
  if ( (v4 & 0x300) != 0 || (v5 = *((_DWORD *)a1 + 56), *((_DWORD *)a1 + 60) != v5) )
  {
    v5 = *((_DWORD *)a1 + 56);
    v6 = 0x80000;
  }
  else
  {
    v6 = 0;
  }
  v7 = *((_DWORD *)a1 + 50);
  *((_DWORD *)a1 + 60) = v5;
  *((_QWORD *)a1 + 29) = v3;
  v8 = (((unsigned __int16)(v6 | v7) | 0x1000) ^ (unsigned __int16)((v6 | v7 & 0xFFF7FFFF | 0x1000) >> 5)) & 0x100 ^ (v6 | v7 & 0xFFF7FFFF | 0x1000);
  *((_DWORD *)a1 + 50) = v8 ^ ((unsigned __int16)v8 ^ (unsigned __int16)(v8 >> 5)) & 0x200;
  *(_OWORD *)((char *)a1 + 296) = 0LL;
  *(_OWORD *)((char *)a1 + 312) = 0LL;
  *((_DWORD *)a1 + 83) &= 0xFFFFFFFC;
  *((_DWORD *)a1 + 82) = 0;
  *((_DWORD *)a1 + 50) &= ~0x100000u;
}
