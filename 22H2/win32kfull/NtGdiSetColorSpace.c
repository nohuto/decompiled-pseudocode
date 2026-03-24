/*
 * XREFs of NtGdiSetColorSpace @ 0x1C015BDA0
 * Callers:
 *     <none>
 * Callees:
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C00B2890 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00B2938 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C01698C8 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??0COLORSPACEREF@@QEAA@PEAUHCOLORSPACE__@@@Z @ 0x1C02B55F0 (--0COLORSPACEREF@@QEAA@PEAUHCOLORSPACE__@@@Z.c)
 */

__int64 __fastcall NtGdiSetColorSpace(HDC a1, HCOLORSPACE a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rdx
  __int64 v5; // rdx
  _BYTE v7[32]; // [rsp+20h] [rbp-60h] BYREF
  __int64 v8; // [rsp+40h] [rbp-40h]
  _QWORD v9[7]; // [rsp+48h] [rbp-38h] BYREF

  v3 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v9, a1);
  if ( v9[0] )
  {
    if ( a2 == *(HCOLORSPACE *)(*(_QWORD *)(v9[0] + 976LL) + 16LL) )
    {
      v3 = 1;
    }
    else
    {
      COLORSPACEREF::COLORSPACEREF((COLORSPACEREF *)v7, a2);
      if ( v8 )
      {
        DEC_SHARE_REF_CNT(*(_QWORD *)(v9[0] + 96LL), v4);
        *(_QWORD *)(*(_QWORD *)(v9[0] + 976LL) + 16LL) = a2;
        *(_QWORD *)(v9[0] + 96LL) = v8;
        INC_SHARE_REF_CNT(v8);
        v3 = 1;
        if ( v8 )
          DEC_SHARE_REF_CNT(v8, v5);
      }
      UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v7);
    }
  }
  DCOBJ::~DCOBJ((DCOBJ *)v9);
  return v3;
}
