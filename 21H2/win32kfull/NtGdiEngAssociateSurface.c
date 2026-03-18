/*
 * XREFs of NtGdiEngAssociateSurface @ 0x1C014B6D0
 * Callers:
 *     <none>
 * Callees:
 *     ?ValidUmpdHooks@@YAHPEAVPDEVOBJ@@K@Z @ 0x1C014B7C4 (-ValidUmpdHooks@@YAHPEAVPDEVOBJ@@K@Z.c)
 *     ?ValidUmpdHdev@@YAPEAUHDEV__@@PEAU1@@Z @ 0x1C014B8D4 (-ValidUmpdHdev@@YAPEAUHDEV__@@PEAU1@@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C015D384 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??0SURFREF@@QEAA@XZ @ 0x1C026AD30 (--0SURFREF@@QEAA@XZ.c)
 */

__int64 __fastcall NtGdiEngAssociateSurface(HSURF hsurf, HDEV a2, int a3)
{
  unsigned int v6; // edi
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rcx
  HDEV v10; // rax
  FLONG v11; // ebx
  HDEV v12; // r9
  _BYTE v14[32]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v15; // [rsp+40h] [rbp-18h]
  HDEV v16; // [rsp+78h] [rbp+20h] BYREF

  v6 = 0;
  SURFREF::SURFREF((SURFREF *)v14);
  LOBYTE(v7) = 5;
  v8 = HmgShareLockCheckIgnoreStockBit(hsurf, v7);
  v15 = v8;
  v9 = v8;
  if ( v8 )
  {
    if ( (*(_DWORD *)(v8 + 112) & 0x40000) != 0 )
    {
      v10 = ValidUmpdHdev(a2);
      if ( v10 )
      {
        v11 = a3 & 0xFFFFB7EF;
        v16 = v10;
        if ( (v11 & 0xFFFC4A10) == 0 && (unsigned int)ValidUmpdHooks((struct PDEVOBJ *)&v16, v11) )
          v6 = EngAssociateSurface(hsurf, v12, v11);
        PDEVOBJ::vUnreferencePdev(&v16, 0LL);
      }
      v9 = v15;
    }
    if ( v9 )
      DEC_SHARE_REF_CNT(v9);
  }
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v14);
  return v6;
}
