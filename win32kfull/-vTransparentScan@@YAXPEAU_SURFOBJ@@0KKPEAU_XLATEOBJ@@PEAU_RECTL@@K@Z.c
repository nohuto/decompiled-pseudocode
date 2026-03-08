/*
 * XREFs of ?vTransparentScan@@YAXPEAU_SURFOBJ@@0KKPEAU_XLATEOBJ@@PEAU_RECTL@@K@Z @ 0x1C029A048
 * Callers:
 *     ?GreTransparentBltPS@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3K@Z @ 0x1C0298358 (-GreTransparentBltPS@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3K@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 *     ?ReadScanLine@@YAKPEAEKKKK@Z @ 0x1C029869C (-ReadScanLine@@YAKPEAEKKKK@Z.c)
 *     ?SkipScanLine@@YAKPEAEKKKK@Z @ 0x1C029877C (-SkipScanLine@@YAKPEAEKKKK@Z.c)
 */

void __fastcall vTransparentScan(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        unsigned int a3,
        int a4,
        struct _XLATEOBJ *a5,
        struct _RECTL *a6,
        unsigned int a7)
{
  __int64 p_hdev; // rbx
  unsigned int v8; // edi
  int v10; // eax
  __int128 v12; // xmm0
  unsigned int v13; // esi
  unsigned __int8 *v14; // r13
  __int64 v15; // rbx
  unsigned int ScanLine; // eax
  unsigned int v17; // ebp
  __int64 p_hsurf; // rcx
  unsigned int v19; // ecx
  _DWORD v20[2]; // [rsp+40h] [rbp-78h] BYREF
  struct _XLATEOBJ *v21; // [rsp+48h] [rbp-70h]
  __int128 v22; // [rsp+50h] [rbp-68h] BYREF

  p_hdev = (__int64)&a1->hdev;
  v8 = a3;
  v21 = a5;
  v20[0] = a3;
  v10 = a2->lDelta * a4;
  v12 = (__int128)*a6;
  v13 = a3 + a6->right - a6->left;
  v20[1] = a4;
  v14 = (unsigned __int8 *)a2->pvScan0 + v10;
  v22 = v12;
  if ( !a1 )
    p_hdev = 48LL;
  v15 = *(_QWORD *)p_hdev;
  if ( a3 < v13 )
  {
    do
    {
      ScanLine = ReadScanLine(v14, v8, v13, a2->iBitmapFormat, a7);
      v17 = ScanLine;
      if ( ScanLine - 1 > v8 )
      {
        DWORD2(v22) = ScanLine + v22 - v8;
        p_hsurf = (__int64)&a1[1].hsurf;
        if ( !a1 )
          p_hsurf = 112LL;
        if ( (*(_DWORD *)p_hsurf & 0x400) != 0 )
          (*(void (__fastcall **)(struct _SURFOBJ *, struct _SURFOBJ *, _QWORD, struct _XLATEOBJ *, __int128 *, _DWORD *))(v15 + 2816))(
            a1,
            a2,
            0LL,
            v21,
            &v22,
            v20);
        else
          ((void (__fastcall *)(struct _SURFOBJ *, struct _SURFOBJ *, _QWORD, struct _XLATEOBJ *, __int128 *, _DWORD *))EngCopyBits)(
            a1,
            a2,
            0LL,
            v21,
            &v22,
            v20);
      }
      v20[0] = SkipScanLine(v14, v17, v13, a2->iBitmapFormat, a7);
      v19 = v20[0] - v8;
      v8 = v20[0];
      LODWORD(v22) = v19 + v22;
    }
    while ( v20[0] < v13 );
  }
}
