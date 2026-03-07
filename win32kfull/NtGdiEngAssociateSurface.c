__int64 __fastcall NtGdiEngAssociateSurface(HSURF hsurf, Gre::Base *a2, int a3)
{
  Gre::Base *v3; // rbp
  unsigned int v6; // edi
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 *v9; // rax
  unsigned int v10; // esi
  HDEV v11; // r10
  __int64 *v13; // [rsp+58h] [rbp+20h] BYREF

  v3 = a2;
  LOBYTE(a2) = 5;
  v6 = 0;
  v7 = HmgShareLockCheckIgnoreStockBit(hsurf, a2);
  v8 = v7;
  if ( v7 )
  {
    if ( (*(_DWORD *)(v7 + 112) & 0x40000) != 0 )
    {
      v9 = ValidUmpdHdev(v3);
      if ( v9 )
      {
        v10 = a3 & 0xFFFFB7EF;
        v13 = v9;
        if ( (v10 & 0xFFFC4A10) == 0 && (unsigned int)ValidUmpdHooks((struct PDEVOBJ *)&v13, v10) )
          v6 = EngAssociateSurface(hsurf, v11, v10);
        PDEVOBJ::vUnreferencePdev((PDEVOBJ *)&v13);
      }
    }
    DEC_SHARE_REF_CNT(v8);
  }
  return v6;
}
