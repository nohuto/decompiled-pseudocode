/*
 * XREFs of bInitCacheTable @ 0x1C028881C
 * Callers:
 *     InitFNTCache @ 0x1C00E53A0 (InitFNTCache.c)
 * Callees:
 *     ?bMapFileRetainHandle@@YAHPEBGPEAU_FILEVIEW@@HPEAH@Z @ 0x1C00E5DB4 (-bMapFileRetainHandle@@YAHPEBGPEAU_FILEVIEW@@HPEAH@Z.c)
 *     vUnmapFontCacheFile @ 0x1C00E62CC (vUnmapFontCacheFile.c)
 *     memset @ 0x1C016DE00 (memset.c)
 */

__int64 __fastcall bInitCacheTable(int a1, int a2, __int64 a3, int *a4, __int64 a5, __int64 a6, int a7)
{
  int v7; // r13d
  __int64 v9; // rdx
  __int64 v10; // r13
  int v11; // r12d
  int v12; // r15d
  unsigned int v13; // r14d
  int v16; // ebp
  void *v17; // rcx
  __int64 v18; // rsi
  __int64 v19; // rcx

  v7 = a2 + 200;
  v9 = qword_1C0339BE8;
  v10 = (unsigned int)(a1 + v7);
  v11 = 768 * a1;
  v12 = a2 << 11;
  v13 = 0;
  v16 = v12 + 768 * a1 + ((80 * v10 + 327) & 0xFFFFFFF8);
  if ( *(_QWORD *)qword_1C0339BE8 )
  {
    vUnmapFontCacheFile();
    v9 = qword_1C0339BE8;
  }
  v17 = *(void **)(v9 + 96);
  if ( v17 )
  {
    ZwClose(v17);
    v9 = qword_1C0339BE8;
    *(_QWORD *)(qword_1C0339BE8 + 96) = 0LL;
  }
  if ( (unsigned int)bMapFileRetainHandle((const unsigned __int16 *)v17, (struct _FILEVIEW *)(v9 + 48), v16, a4) )
  {
    v18 = qword_1C0339BE8;
    v19 = *(_QWORD *)(qword_1C0339BE8 + 56);
    *(_QWORD *)qword_1C0339BE8 = v19;
    memset((void *)(v19 + 72), 255, 0xF4uLL);
    memset((void *)(*(_QWORD *)v18 + 320LL), 0, 80 * v10);
    *(_DWORD *)(*(_QWORD *)v18 + 12LL) = a7;
    *(_DWORD *)(*(_QWORD *)v18 + 16LL) = v10;
    *(_DWORD *)(*(_QWORD *)v18 + 20LL) = 0;
    **(_DWORD **)v18 = 0;
    *(_QWORD *)(*(_QWORD *)v18 + 56LL) = a3;
    *(_QWORD *)(*(_QWORD *)v18 + 64LL) = a4;
    *(_QWORD *)(*(_QWORD *)v18 + 40LL) = a5;
    *(_QWORD *)(*(_QWORD *)v18 + 48LL) = a6;
    *(_DWORD *)(*(_QWORD *)v18 + 24LL) = v16;
    *(_QWORD *)(*(_QWORD *)v18 + 28LL) = (unsigned int)(v11 + v12);
    *(_DWORD *)(*(_QWORD *)v18 + 36LL) = 0;
    return 1;
  }
  return v13;
}
