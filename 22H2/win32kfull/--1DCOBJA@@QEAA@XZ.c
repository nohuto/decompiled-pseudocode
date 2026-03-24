/*
 * XREFs of ??1DCOBJA@@QEAA@XZ @ 0x1C0137884
 * Callers:
 *     GreCancelDC @ 0x1C029F410 (GreCancelDC.c)
 * Callees:
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C01698C8 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 */

void __fastcall DCOBJA::~DCOBJA(__int64 **this)
{
  __int64 *v2; // rcx
  __int64 v3; // rdi
  int v4; // [rsp+30h] [rbp+8h] BYREF

  v2 = *this;
  if ( v2 )
  {
    v4 = 0;
    v3 = *v2;
    HmgDecrementShareReferenceCountEx(v2, &v4);
    if ( v4 )
      bDeleteDCInternalEx(v3, 0LL);
  }
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(this + 2);
}
