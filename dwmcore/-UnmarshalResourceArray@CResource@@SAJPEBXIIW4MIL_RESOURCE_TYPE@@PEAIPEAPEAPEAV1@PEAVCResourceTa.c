__int64 __fastcall CResource::UnmarshalResourceArray(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int *a5,
        void **a6,
        __int64 a7,
        char a8)
{
  int v8; // ebp
  unsigned int *v10; // r12
  unsigned int v11; // ebx
  unsigned int v12; // edi
  int v14; // eax
  __int64 v15; // rcx
  _QWORD *i; // r15
  unsigned int v17; // edx
  __int64 Resource; // rax

  v8 = 0;
  v10 = (unsigned int *)a1;
  v11 = 0;
  *a5 = 0;
  *a6 = 0LL;
  if ( a3 > a2 || (a3 & 3) != 0 )
  {
    v11 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0, -2003303421, 0x56u, 0LL);
  }
  else
  {
    v12 = a3 >> 2;
    *a5 = a3 >> 2;
    if ( !(a3 >> 2) )
      return v11;
    v14 = HrMalloc(8uLL, v12, a6);
    v11 = v14;
    if ( v14 >= 0 )
    {
      for ( i = *a6; ; ++i )
      {
        v17 = *v10;
        Resource = 0LL;
        ++v10;
        if ( v17 )
        {
          Resource = CResourceTable::GetResource(a7, v17, a4);
          if ( !Resource )
          {
            v11 = -2147024890;
            MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, -2147024890, 0x6Eu, 0LL);
            goto LABEL_16;
          }
        }
        else if ( !a8 )
        {
          v11 = -2147024890;
          MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, -2147024890, 0x72u, 0LL);
          goto LABEL_16;
        }
        *i = Resource;
        if ( ++v8 >= v12 )
          return v11;
      }
    }
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x61u, 0LL);
  }
LABEL_16:
  if ( *a6 )
  {
    operator delete(*a6);
    *a6 = 0LL;
  }
  *a5 = 0;
  return v11;
}
