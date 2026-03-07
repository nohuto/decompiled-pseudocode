void __fastcall CCachedData<BLTENTRY,3>::~CCachedData<BLTENTRY,3>(char *a1, unsigned int a2)
{
  BLTENTRY *v3; // rcx

  v3 = (BLTENTRY *)*((_QWORD *)a1 + 216);
  if ( v3 )
    BLTENTRY::`vector deleting destructor'(v3, a2);
  `vector destructor iterator'(a1, 576LL, 3LL, (void (__fastcall *)(char *))BLTENTRY::~BLTENTRY);
}
