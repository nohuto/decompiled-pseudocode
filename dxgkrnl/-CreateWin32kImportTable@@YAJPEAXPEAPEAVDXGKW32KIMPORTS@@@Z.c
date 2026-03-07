__int64 __fastcall CreateWin32kImportTable(void *a1, struct DXGKW32KIMPORTS **a2)
{
  unsigned int v4; // ebx
  W32KIMPORTS *v5; // rax
  struct DXGKW32KIMPORTS *v6; // rax

  v4 = 0;
  v5 = (W32KIMPORTS *)operator new[](0x248uLL, 0x4B677844u, 256LL);
  if ( v5 && (v6 = W32KIMPORTS::W32KIMPORTS(v5, a1)) != 0LL )
    *a2 = v6;
  else
    return (unsigned int)-1073741801;
  return v4;
}
