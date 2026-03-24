/*
 * XREFs of ?ConfirmIndependentFlipEntry@CFlipExBuffer@@UEAAX_K0II0@Z @ 0x1C001DFD0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkConfirmToken @ 0x1C017487C (DxgkConfirmToken.c)
 */

void __fastcall CFlipExBuffer::ConfirmIndependentFlipEntry(
        CFlipExBuffer *this,
        struct DXGADAPTER *a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        unsigned __int64 a6)
{
  _QWORD *v9; // rax
  __int64 v10; // [rsp+50h] [rbp+8h]

  if ( *((_DWORD *)this + 88) == 2 && *((_QWORD *)this + 60) == a6 )
  {
    v10 = *((_QWORD *)this + 1);
    *((_DWORD *)this + 88) = 3;
    v9 = (_QWORD *)WdLogNewEntry5_WdPresentTokenEvent();
    v9[3] = a3;
    v9[4] = v10;
    v9[5] = *((_QWORD *)this + 2);
    v9[6] = a5;
    v9[7] = a6;
    WdLogEvent5_WdPresentTokenEvent(v9);
    DxgkConfirmToken(a2, *((_QWORD *)this + 2), a6);
  }
}
