__int64 __fastcall DirectComposition::CPrimitiveGroupMarshaler::SetReferenceArrayProperty(
        DirectComposition::CPrimitiveGroupMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler **a4,
        unsigned __int64 a5,
        bool *a6)
{
  int v6; // ebx
  struct DirectComposition::CApplicationChannel *v8; // r10
  unsigned int v10; // r11d
  __int64 v11; // r9
  int v12; // r9d
  unsigned int v13; // ebp
  __int64 v14; // rax
  __int64 v16; // r9
  int v17; // r9d
  unsigned int v18; // ebp
  __int64 v19; // rax

  v6 = 0;
  v8 = a2;
  v10 = -1073741811;
  if ( a5 && !a4 )
    v6 = -1073741811;
  if ( a3 )
  {
    if ( a3 == 1 )
    {
      v16 = 0LL;
      if ( v6 >= 0 )
      {
        while ( (unsigned int)v16 < a5 )
        {
          if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::IsDerivedResourceType(
                                   *((unsigned int *)a4[v16] + 9),
                                   128LL) )
            return v10;
          v16 = (unsigned int)(v17 + 1);
        }
        DirectComposition::CPrimitiveGroupMarshaler::ReleaseResourceMarshalers(
          this,
          v8,
          *((struct DirectComposition::CResourceMarshaler ***)this + 12),
          (unsigned int *)this + 26);
        if ( *((_DWORD *)this + 27) )
          *((_DWORD *)this + 4) |= 0x80u;
        v18 = 0;
        if ( a5 )
        {
          v19 = 0LL;
          do
          {
            DirectComposition::CResourceMarshaler::AddRef(a4[v19]);
            v19 = ++v18;
          }
          while ( v18 < a5 );
        }
        *((_DWORD *)this + 27) = 0;
        *((_QWORD *)this + 12) = a4;
        *((_DWORD *)this + 26) = a5;
        *a6 = 1;
      }
    }
    else
    {
      return v10;
    }
  }
  else
  {
    v11 = 0LL;
    if ( v6 >= 0 )
    {
      while ( (unsigned int)v11 < a5 )
      {
        if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::IsDerivedResourceType(
                                 *((unsigned int *)a4[v11] + 9),
                                 42LL) )
          return v10;
        v11 = (unsigned int)(v12 + 1);
      }
      DirectComposition::CPrimitiveGroupMarshaler::ReleaseResourceMarshalers(
        this,
        v8,
        *((struct DirectComposition::CResourceMarshaler ***)this + 10),
        (unsigned int *)this + 22);
      if ( *((_DWORD *)this + 23) )
        *((_DWORD *)this + 4) |= 0x40u;
      v13 = 0;
      if ( a5 )
      {
        v14 = 0LL;
        do
        {
          DirectComposition::CResourceMarshaler::AddRef(a4[v14]);
          v14 = ++v13;
        }
        while ( v13 < a5 );
      }
      *((_DWORD *)this + 23) = 0;
      *((_QWORD *)this + 10) = a4;
      *((_DWORD *)this + 22) = a5;
      *a6 = 1;
    }
  }
  return (unsigned int)v6;
}
