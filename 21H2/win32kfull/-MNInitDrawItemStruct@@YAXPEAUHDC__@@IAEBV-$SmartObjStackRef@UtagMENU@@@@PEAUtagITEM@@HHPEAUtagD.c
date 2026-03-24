/*
 * XREFs of ?MNInitDrawItemStruct@@YAXPEAUHDC__@@IAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@HHPEAUtagDRAWITEMSTRUCT@@@Z @ 0x1C0044958
 * Callers:
 *     ?xxxSendMenuDrawItemMessage@@YAXPEAUHDC__@@IAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@HHPEAUtagWND@@@Z @ 0x1C0044B0C (-xxxSendMenuDrawItemMessage@@YAXPEAUHDC__@@IAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@HHPE.c)
 * Callees:
 *     ?MNDrawHilite@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C0044AE0 (-MNDrawHilite@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C0078B40 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 */

__int64 __fastcall MNInitDrawItemStruct(__int64 a1, int a2, __int64 ***a3, __int64 *a4, int a5, int a6, __int64 a7)
{
  int v10; // r10d
  int v11; // edi
  int v12; // esi
  int v13; // ebx
  int v14; // eax
  int v15; // r11d
  __int64 *v16; // rax
  __int64 v17; // rax
  _DWORD *v18; // rdx
  unsigned int v19; // ecx
  _DWORD *v20; // rax
  int v21; // edx
  __int64 v22; // rax
  int v23; // eax
  __int64 result; // rax

  *(_DWORD *)(a7 + 4) = 0;
  *(_DWORD *)a7 = 1;
  v10 = *(_DWORD *)(*a4 + 8);
  *(_DWORD *)(a7 + 12) = a2;
  *(_DWORD *)(a7 + 8) = v10;
  v11 = (*(_DWORD *)(*a4 + 4) >> 7) & 0x20;
  v12 = 2 * (*(_DWORD *)(*a4 + 4) & 1);
  v13 = *(_DWORD *)(*a4 + 4) & 8;
  v14 = MNDrawHilite(a3, a4);
  *(_DWORD *)(a7 + 16) = v13 | v11 | (v14 != 0) | v12 | v15 | (8 * (*(_DWORD *)((**a3)[5] + 40) & 0x10)) | (*(_DWORD *)(*a4 + 4) >> 2) & 0x40 | ~((unsigned __int16)*(_DWORD *)((**a3)[5] + 40) << 6) & 0x100;
  if ( (unsigned __int8)SmartObjStackRef<tagMENU>::operator==(a3) )
  {
    v17 = 0LL;
  }
  else
  {
    v16 = (__int64 *)a3[2];
    if ( !v16 )
      v16 = **a3;
    v17 = *v16;
  }
  *(_QWORD *)(a7 + 24) = v17;
  *(_QWORD *)(a7 + 32) = a1;
  v18 = (_DWORD *)*a4;
  v19 = *(_DWORD *)(*a4 + 68);
  if ( a5 )
    v19 = (unsigned int)(v18[19] - v18[27]) >> 1;
  *(_DWORD *)(a7 + 40) = a6 + v18[16];
  *(_DWORD *)(a7 + 44) = v19;
  v20 = (_DWORD *)*a4;
  if ( a5 )
    v21 = v20[26];
  else
    v21 = v20[18];
  *(_DWORD *)(a7 + 48) = a6 + v21 + v20[16];
  v22 = *a4;
  if ( a5 )
    v23 = *(_DWORD *)(v22 + 108);
  else
    v23 = *(_DWORD *)(v22 + 76);
  *(_DWORD *)(a7 + 52) = v19 + v23;
  result = *a4;
  *(_QWORD *)(a7 + 56) = *(_QWORD *)(*a4 + 56);
  return result;
}
