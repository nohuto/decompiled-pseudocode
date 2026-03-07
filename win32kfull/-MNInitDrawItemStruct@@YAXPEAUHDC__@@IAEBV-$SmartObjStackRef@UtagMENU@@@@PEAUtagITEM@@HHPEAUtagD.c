__int64 __fastcall MNInitDrawItemStruct(__int64 a1, int a2, __int64 ***a3, __int64 a4, int a5, int a6, __int64 a7)
{
  int v10; // r10d
  int v11; // edi
  int v12; // esi
  int v13; // ebx
  int v14; // eax
  int v15; // r11d
  __int64 v16; // rax
  __int64 *v17; // rax
  _DWORD *v18; // rdx
  unsigned int v19; // ecx
  _DWORD *v20; // rax
  int v21; // edx
  __int64 v22; // rax
  int v23; // eax
  __int64 result; // rax

  *(_DWORD *)(a7 + 4) = 0;
  *(_DWORD *)a7 = 1;
  v10 = *(_DWORD *)(*(_QWORD *)a4 + 8LL);
  *(_DWORD *)(a7 + 12) = a2;
  *(_DWORD *)(a7 + 8) = v10;
  v11 = (*(_DWORD *)(*(_QWORD *)a4 + 4LL) >> 7) & 0x20;
  v12 = 2 * (*(_DWORD *)(*(_QWORD *)a4 + 4LL) & 1);
  v13 = *(_DWORD *)(*(_QWORD *)a4 + 4LL) & 8;
  v14 = MNDrawHilite((__int64)a3, a4);
  *(_DWORD *)(a7 + 16) = v15 | v13 | v11 | (v14 != 0) | v12 | (*(_DWORD *)(*(_QWORD *)a4 + 4LL) >> 2) & 0x40 | (8 * (*(_DWORD *)((**a3)[5] + 40) & 0x10)) | ~((unsigned __int16)*(_DWORD *)((**a3)[5] + 40) << 6) & 0x100;
  if ( SmartObjStackRef<tagMENU>::operator==((__int64)a3) )
  {
    v16 = 0LL;
  }
  else
  {
    v17 = (__int64 *)a3[2];
    if ( !v17 )
      v17 = **a3;
    v16 = *v17;
  }
  *(_QWORD *)(a7 + 24) = v16;
  *(_QWORD *)(a7 + 32) = a1;
  v18 = *(_DWORD **)a4;
  v19 = *(_DWORD *)(*(_QWORD *)a4 + 68LL);
  if ( a5 )
    v19 = (unsigned int)(v18[19] - v18[27]) >> 1;
  *(_DWORD *)(a7 + 40) = a6 + v18[16];
  *(_DWORD *)(a7 + 44) = v19;
  v20 = *(_DWORD **)a4;
  if ( a5 )
    v21 = v20[26];
  else
    v21 = v20[18];
  *(_DWORD *)(a7 + 48) = a6 + v21 + v20[16];
  v22 = *(_QWORD *)a4;
  if ( a5 )
    v23 = *(_DWORD *)(v22 + 108);
  else
    v23 = *(_DWORD *)(v22 + 76);
  *(_DWORD *)(a7 + 52) = v19 + v23;
  result = *(_QWORD *)a4;
  *(_QWORD *)(a7 + 56) = *(_QWORD *)(*(_QWORD *)a4 + 56LL);
  return result;
}
