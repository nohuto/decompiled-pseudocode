void __fastcall XUMPDOBJ::~XUMPDOBJ(struct UMPDOBJ **this)
{
  struct UMPDOBJ *v1; // rdi
  int v2; // ebx
  char *v4; // rdx

  v1 = *this;
  v2 = 0;
  if ( *this )
  {
    v4 = (char *)*((_QWORD *)v1 + 23);
    if ( v4 )
      *(_QWORD *)(*((_QWORD *)v1 + 22) + 48LL) = *((_QWORD *)UMPDOBJ::GetKernelPtr((char **)v1, v4) + 6);
    LOBYTE(v2) = *((_DWORD *)*this + 106) == 0;
    UMPDOBJ::vRelease(*this, v2);
  }
}
