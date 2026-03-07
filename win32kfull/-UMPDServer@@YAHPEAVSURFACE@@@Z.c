__int64 __fastcall UMPDServer(struct SURFACE *a1)
{
  UMPDOBJ *v2; // rcx
  struct UMPDOBJ *v4; // [rsp+38h] [rbp+10h] BYREF

  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v4);
  if ( v4 && *((_DWORD *)v4 + 106) )
  {
    UMPDOBJ::vServer(v2, (_QWORD *)(((unsigned __int64)a1 + 24) & -(__int64)(a1 != 0LL)));
    XUMPDOBJ::~XUMPDOBJ(&v4);
    return 1LL;
  }
  else
  {
    XUMPDOBJ::~XUMPDOBJ(&v4);
    return 0LL;
  }
}
