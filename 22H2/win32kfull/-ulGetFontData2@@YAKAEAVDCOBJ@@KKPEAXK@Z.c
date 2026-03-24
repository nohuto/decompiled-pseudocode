/*
 * XREFs of ?ulGetFontData2@@YAKAEAVDCOBJ@@KKPEAXK@Z @ 0x1C009AB1C
 * Callers:
 *     ulGetFontData @ 0x1C009B358 (ulGetFontData.c)
 * Callees:
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C0093A30 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ??0ATTACHOBJ@@QEAA@PEAVPFFOBJ@@@Z @ 0x1C0099684 (--0ATTACHOBJ@@QEAA@PEAVPFFOBJ@@@Z.c)
 *     ?bCheckFntFileInfo@PFFOBJ@@QEAAHXZ @ 0x1C009AC60 (-bCheckFntFileInfo@PFFOBJ@@QEAAHXZ.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C009AE74 (--1RFONTOBJ@@QEAA@XZ.c)
 *     EngUnmapFontFileFD @ 0x1C011D6F0 (EngUnmapFontFileFD.c)
 *     _guard_dispatch_icall_nop @ 0x1C016DB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ulGetFontData2(struct DCOBJ *a1, unsigned int a2, unsigned int a3, _BYTE *a4, unsigned int a5)
{
  __int64 *v8; // rax
  __int64 v9; // rbx
  unsigned int v10; // ebp
  __int64 v11; // r14
  unsigned int v12; // edi
  __int64 (__fastcall *v13)(__int64, _QWORD, _QWORD, _QWORD, unsigned int, _BYTE *, _QWORD, _QWORD); // rbx
  ULONG_PTR *v15; // rbx
  __int64 v16; // rsi
  __int64 v17; // [rsp+50h] [rbp-48h] BYREF
  _QWORD v18[2]; // [rsp+58h] [rbp-40h] BYREF
  ULONG_PTR *v19; // [rsp+68h] [rbp-30h] BYREF
  unsigned int v20; // [rsp+70h] [rbp-28h]

  v17 = 0LL;
  if ( (unsigned int)RFONTOBJ::bInit((RFONTOBJ *)&v17, a1, 0, 2u) )
    GreAcquireSemaphore(*(_QWORD *)(v17 + 504));
  if ( !v17 )
    goto LABEL_13;
  v8 = *(__int64 **)(v17 + 120);
  if ( !v8 || (v9 = *v8, (v18[0] = v9) == 0LL) )
  {
    EngSetLastError(6u);
LABEL_13:
    v12 = -1;
    goto LABEL_12;
  }
  v10 = *((_DWORD *)v8 + 2);
  v11 = *(_QWORD *)(v9 + 80);
  v12 = -1;
  if ( (unsigned int)PFFOBJ::bCheckFntFileInfo((PFFOBJ *)v18) )
  {
    v13 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, unsigned int, _BYTE *, _QWORD, _QWORD))(*(_QWORD *)(v9 + 88) + 3072LL);
    ATTACHOBJ::ATTACHOBJ((ATTACHOBJ *)&v19, (struct PFFOBJ *)v18);
    if ( a4 )
      *a4 = 0;
    if ( v13 )
      v12 = v13(v11, v10, a2, a3, a5, a4, 0LL, 0LL);
    if ( v20 )
    {
      v15 = v19;
      v16 = v20;
      do
      {
        EngUnmapFontFileFD(*v15++);
        --v16;
      }
      while ( v16 );
    }
  }
LABEL_12:
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v17);
  return v12;
}
