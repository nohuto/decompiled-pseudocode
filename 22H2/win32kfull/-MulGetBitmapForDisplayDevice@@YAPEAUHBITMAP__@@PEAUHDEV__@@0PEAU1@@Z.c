/*
 * XREFs of ?MulGetBitmapForDisplayDevice@@YAPEAUHBITMAP__@@PEAUHDEV__@@0PEAU1@@Z @ 0x1C02A33B0
 * Callers:
 *     GreSelectRedirectionBitmap @ 0x1C0083440 (GreSelectRedirectionBitmap.c)
 * Callees:
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C00838AC (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C01698C8 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 */

HSURF __fastcall MulGetBitmapForDisplayDevice(HDEV a1, HDEV a2, HSURF a3)
{
  HSURF v3; // rbx
  __int64 *v5; // rdx
  __int64 *v6; // rax
  int v7; // r8d
  _BYTE v9[32]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v10; // [rsp+40h] [rbp-18h]

  v3 = a3;
  if ( a1 && ((_DWORD)a1[10] & 0x20000) != 0 && a2 )
  {
    SURFREF::SURFREF((SURFREF *)v9, a3);
    if ( v10 )
    {
      if ( (*(_DWORD *)(v10 + 116) & 1) != 0 )
      {
        v6 = *(__int64 **)(v10 + 40);
        v5 = (__int64 *)*v6;
        v7 = *((_DWORD *)v6 + 4);
        while ( (HDEV)v5[6] != a2 )
        {
          v5 = (__int64 *)*v5;
          if ( !--v7 )
            goto LABEL_11;
        }
        v5 = *(__int64 **)(*(_QWORD *)(*(_QWORD *)(v10 + 24) + 8LL) + 8LL * *((unsigned int *)v5 + 4));
        v3 = (HSURF)v5[1];
      }
LABEL_11:
      DEC_SHARE_REF_CNT(v10, v5);
    }
    UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v9);
  }
  return v3;
}
