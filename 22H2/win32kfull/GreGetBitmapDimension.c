/*
 * XREFs of GreGetBitmapDimension @ 0x1C02C05D0
 * Callers:
 *     NtGdiGetBitmapDimension @ 0x1C02ADFA0 (NtGdiGetBitmapDimension.c)
 * Callees:
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0018B60 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0018E8C (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C00838AC (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C01698C8 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 */

__int64 __fastcall GreGetBitmapDimension(HSURF a1, _QWORD *a2)
{
  unsigned int v4; // esi
  __int64 v5; // rdx
  __int64 v6; // rcx
  ULONG v7; // ecx
  DYNAMICMODECHANGESHARELOCK *v8; // rcx
  _BYTE v10[32]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v11; // [rsp+40h] [rbp-18h]
  char v12; // [rsp+70h] [rbp+18h] BYREF

  v4 = 0;
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v12);
  SURFREF::SURFREF((SURFREF *)v10, a1);
  v6 = v11;
  if ( v11 )
  {
    if ( (*(_DWORD *)(v11 + 112) & 0x4000000) == 0 )
      goto LABEL_8;
    if ( a2 )
    {
      v4 = 1;
      *a2 = *(_QWORD *)(v11 + 152);
      goto LABEL_8;
    }
    v7 = 87;
  }
  else
  {
    v7 = 6;
  }
  EngSetLastError(v7);
  v6 = v11;
LABEL_8:
  if ( v6 )
    DEC_SHARE_REF_CNT(v6, v5);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v10);
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v8);
  return v4;
}
