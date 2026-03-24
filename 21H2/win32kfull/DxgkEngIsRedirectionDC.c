/*
 * XREFs of DxgkEngIsRedirectionDC @ 0x1C0277AF0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1C00F2958 (--0DCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C016A098 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 */

__int64 __fastcall DxgkEngIsRedirectionDC(HDC a1)
{
  unsigned int v1; // ebx
  __int64 v2; // rdi
  __int64 *v4; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v5[40]; // [rsp+30h] [rbp-28h] BYREF
  int v6; // [rsp+68h] [rbp+10h] BYREF

  DCOBJA::DCOBJA((DCOBJA *)&v4, a1);
  if ( v4 )
    v1 = *((_DWORD *)v4 + 9) & 0x4000;
  else
    v1 = 1;
  if ( v4 )
  {
    v6 = 0;
    v2 = *v4;
    HmgDecrementShareReferenceCountEx(v4, &v6);
    if ( v6 )
      bDeleteDCInternalEx(v2, 0LL);
  }
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v5);
  return v1;
}
