/*
 * XREFs of ?MulGetBitmapForDisplayDevice@@YAPEAUHBITMAP__@@PEAUHDEV__@@0PEAU1@@Z @ 0x1C015BD0A
 * Callers:
 *     GreSelectRedirectionBitmap @ 0x1C002F2A0 (GreSelectRedirectionBitmap.c)
 * Callees:
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C0030084 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013E000 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 */

HSURF __fastcall MulGetBitmapForDisplayDevice(HDEV a1, __int64 *a2, HSURF a3)
{
  HSURF v3; // rbx
  __int64 ***v5; // rax
  __int64 **v6; // rdx
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
        v5 = *(__int64 ****)(v10 + 40);
        v6 = *v5;
        v7 = *((_DWORD *)v5 + 4);
        while ( v6[6] != a2 )
        {
          v6 = (__int64 **)*v6;
          if ( !--v7 )
            goto LABEL_11;
        }
        v3 = *(HSURF *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v10 + 24) + 8LL) + 8LL * *((unsigned int *)v6 + 4)) + 8LL);
      }
LABEL_11:
      DEC_SHARE_REF_CNT(v10);
    }
    UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v9);
  }
  return v3;
}
