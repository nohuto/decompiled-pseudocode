/*
 * XREFs of NtGdiEngAssociateSurface @ 0x1C015AC70
 * Callers:
 *     <none>
 * Callees:
 *     ?ValidUmpdHooks@@YAHPEAVPDEVOBJ@@K@Z @ 0x1C015AD64 (-ValidUmpdHooks@@YAHPEAVPDEVOBJ@@K@Z.c)
 *     ?ValidUmpdHdev@@YAPEAUHDEV__@@PEAU1@@Z @ 0x1C015AF84 (-ValidUmpdHdev@@YAPEAUHDEV__@@PEAU1@@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C016A098 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??0SURFREF@@QEAA@XZ @ 0x1C026CF90 (--0SURFREF@@QEAA@XZ.c)
 */

__int64 __fastcall NtGdiEngAssociateSurface(HSURF hsurf, HDEV a2, int a3)
{
  unsigned int v6; // edi
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  HDEV v11; // rax
  FLONG v12; // ebx
  HDEV v13; // r10
  _BYTE v15[32]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v16; // [rsp+40h] [rbp-18h]
  HDEV v17; // [rsp+78h] [rbp+20h] BYREF

  v6 = 0;
  SURFREF::SURFREF((SURFREF *)v15);
  LOBYTE(v7) = 5;
  v8 = HmgShareLockCheckIgnoreStockBit(hsurf, v7);
  v16 = v8;
  v10 = v8;
  if ( v8 )
  {
    if ( (*(_DWORD *)(v8 + 112) & 0x40000) != 0 )
    {
      v11 = ValidUmpdHdev(a2);
      if ( v11 )
      {
        v12 = a3 & 0xFFFFB7EF;
        v17 = v11;
        if ( (v12 & 0xFFFC4A10) == 0 && (unsigned int)ValidUmpdHooks((struct PDEVOBJ *)&v17, v12) )
          v6 = EngAssociateSurface(hsurf, v13, v12);
        PDEVOBJ::vUnreferencePdev(&v17, 0LL);
      }
      v10 = v16;
    }
    if ( v10 )
      DEC_SHARE_REF_CNT(v10, v9);
  }
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v15);
  return v6;
}
