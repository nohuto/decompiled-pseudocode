void __fastcall UmfdEscXFORMOBJ_iGetXform(volatile void **a1)
{
  ULONG *v2; // rbx
  struct UmfdTls *v3; // rax
  XFORMOBJ *v4; // rcx
  XFORML pxform; // [rsp+30h] [rbp-28h] BYREF

  v2 = (ULONG *)(a1 + 1);
  v3 = UmfdTls::EnsureTls();
  if ( v3 && (v4 = (XFORMOBJ *)*((_QWORD *)v3 + 5)) != 0LL )
  {
    memset(&pxform, 0, sizeof(pxform));
    *v2 = XFORMOBJ_iGetXform(v4 + 56, &pxform);
    ProbeForWrite(a1[2], 0x18uLL, 4u);
    *(XFORML *)a1[2] = pxform;
  }
  else
  {
    *v2 = -1;
  }
}
