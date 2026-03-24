/*
 * XREFs of DxgkEngGetClientRect @ 0x1C0277240
 * Callers:
 *     <none>
 * Callees:
 *     ??0DCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1C00F2608 (--0DCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C01698C8 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 */

__int64 __fastcall DxgkEngGetClientRect(HDC a1, _OWORD *a2)
{
  __int64 *v3; // rcx
  unsigned int v4; // ebx
  __int64 v5; // rdi
  __int64 v7; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v8[40]; // [rsp+30h] [rbp-28h] BYREF
  int v9; // [rsp+70h] [rbp+18h] BYREF

  DCOBJA::DCOBJA((DCOBJA *)&v7, a1);
  v3 = (__int64 *)v7;
  if ( v7 )
  {
    *a2 = *(_OWORD *)(v7 + 1032);
    v4 = 1;
  }
  else
  {
    v4 = 0;
  }
  if ( v3 )
  {
    v9 = 0;
    v5 = *v3;
    HmgDecrementShareReferenceCountEx(v3, &v9);
    if ( v9 )
      bDeleteDCInternalEx(v5, 0LL);
  }
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v8);
  return v4;
}
