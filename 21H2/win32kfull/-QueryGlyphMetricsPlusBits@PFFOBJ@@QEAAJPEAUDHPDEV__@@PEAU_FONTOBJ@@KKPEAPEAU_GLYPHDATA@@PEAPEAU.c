/*
 * XREFs of ?QueryGlyphMetricsPlusBits@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAPEAU_GLYPHDATA@@PEAPEAU_GLYPHBITS@@@Z @ 0x1C009A398
 * Callers:
 *     xInsertMetricsPlusRFONTOBJ @ 0x1C009CA18 (xInsertMetricsPlusRFONTOBJ.c)
 *     xInsertGlyphbitsRFONTOBJ @ 0x1C009D88C (xInsertGlyphbitsRFONTOBJ.c)
 *     ?bInsertGlyphbitsLookaside@RFONTOBJ@@QEAAHPEAU_GLYPHPOS@@K@Z @ 0x1C02D5B6C (-bInsertGlyphbitsLookaside@RFONTOBJ@@QEAAHPEAU_GLYPHPOS@@K@Z.c)
 * Callees:
 *     ??1ATTACHOBJ@@QEAA@XZ @ 0x1C0098F94 (--1ATTACHOBJ@@QEAA@XZ.c)
 *     ??0ATTACHOBJ@@QEAA@PEAVPFFOBJ@@@Z @ 0x1C0099714 (--0ATTACHOBJ@@QEAA@PEAVPFFOBJ@@@Z.c)
 *     ?UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z @ 0x1C009A610 (-UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 *     ?ValidateGlyphDataAndBitmap@@YA_NJKPEAX@Z @ 0x1C016E2B8 (-ValidateGlyphDataAndBitmap@@YA_NJKPEAX@Z.c)
 */

__int64 __fastcall PFFOBJ::QueryGlyphMetricsPlusBits(
        PFFOBJ *this,
        struct DHPDEV__ *a2,
        struct _FONTOBJ *a3,
        int a4,
        unsigned int a5,
        struct _GLYPHDATA **a6,
        struct _GLYPHBITS **a7)
{
  int v11; // eax
  unsigned int v12; // ebx
  void **v13; // [rsp+30h] [rbp-91h] BYREF
  int v14; // [rsp+38h] [rbp-89h]
  struct _KTHREAD *CurrentThread; // [rsp+40h] [rbp-81h]
  __int64 v16; // [rsp+48h] [rbp-79h]
  char v17; // [rsp+50h] [rbp-71h]
  struct DHPDEV__ *v18; // [rsp+58h] [rbp-69h]
  int v19; // [rsp+60h] [rbp-61h]
  int v20; // [rsp+64h] [rbp-5Dh]
  struct _FONTOBJ *v21; // [rsp+68h] [rbp-59h]
  __int128 v22; // [rsp+70h] [rbp-51h]
  unsigned int v23; // [rsp+80h] [rbp-41h]
  int v24; // [rsp+84h] [rbp-3Dh]
  struct _GLYPHDATA **v25; // [rsp+88h] [rbp-39h]
  struct _GLYPHBITS **v26; // [rsp+90h] [rbp-31h]
  __int64 v27; // [rsp+98h] [rbp-29h]
  __int128 v28; // [rsp+A0h] [rbp-21h]
  __int64 v29; // [rsp+B0h] [rbp-11h]
  _BYTE v30[16]; // [rsp+C0h] [rbp-1h] BYREF
  __int128 ThreadInformation; // [rsp+D0h] [rbp+Fh] BYREF

  if ( *(struct PDEV **)(*(_QWORD *)this + 88LL) != qword_1C0341AF0 )
    return 0xFFFFFFFFLL;
  ATTACHOBJ::ATTACHOBJ((ATTACHOBJ *)v30, this);
  v14 = 2;
  CurrentThread = KeGetCurrentThread();
  v17 = 0;
  ThreadInformation = 0LL;
  if ( ZwQueryInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadAmILastThread|0x20, &ThreadInformation, 0x10u, 0LL) >= 0 )
  {
    v16 = ThreadInformation;
    v17 = 1;
  }
  v27 = 0LL;
  v29 = 0LL;
  v13 = &QueryGlyphMetricsPlusBitsRequest::`vftable';
  v20 = a4;
  v25 = a6;
  v23 = a5;
  v26 = a7;
  v28 = 0LL;
  v18 = a2;
  v19 = 1;
  v21 = a3;
  v22 = 0LL;
  v24 = -1;
  v11 = UmfdClientSendAndWaitForCompletion(*(unsigned int *)(a3->iFile + 8), &v13);
  v12 = v24;
  if ( v11 < 0 )
    v12 = -1;
  if ( !ValidateGlyphDataAndBitmap(v12, 1u, *a7) )
    v12 = -1;
  ATTACHOBJ::~ATTACHOBJ((ATTACHOBJ *)v30);
  return v12;
}
