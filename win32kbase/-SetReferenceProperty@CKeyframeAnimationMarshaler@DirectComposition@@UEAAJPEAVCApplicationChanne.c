__int64 __fastcall DirectComposition::CKeyframeAnimationMarshaler::SetReferenceProperty(
        struct DirectComposition::CResourceMarshaler **this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler *a4,
        bool *a5)
{
  int WeakReferenceBase; // esi
  __int64 v9; // rax
  struct DirectComposition::CResourceMarshaler *v10; // rdx
  struct DirectComposition::CResourceMarshaler *v11; // rax
  struct DirectComposition::CWeakReferenceBase *v12; // r14
  struct DirectComposition::CWeakReferenceBase *v13; // rdx
  bool *v14; // rax
  __int64 result; // rax
  unsigned int v16; // ebx
  __int64 v17; // rax
  bool *v19; // rax
  bool *v20; // rcx
  bool *v21; // rcx
  struct DirectComposition::CWeakReferenceBase *v22; // [rsp+50h] [rbp-28h] BYREF
  char v23; // [rsp+90h] [rbp+18h] BYREF

  if ( a3 == 12 )
  {
    v16 = 0;
    if ( a4 && (v17 = *((unsigned int *)a4 + 9), (unsigned int)v17 < 0xCE) )
    {
      while ( (_DWORD)v17 != 169 )
      {
        LODWORD(v17) = dword_1C02934F0[v17];
        if ( (unsigned int)v17 >= 0xCE )
          return (unsigned int)-1073741811;
      }
      if ( a4 != this[16] )
      {
        if ( (*((_QWORD *)a4 + 3))++ == -1LL )
          KeBugCheck(0xC01E0103);
        DirectComposition::CApplicationChannel::ReleaseResource(a2, this[16]);
        v19 = a5;
        this[16] = a4;
        *((_DWORD *)this + 4) &= ~0x800u;
        *v19 = 1;
      }
    }
    else
    {
      return (unsigned int)-1073741811;
    }
    return v16;
  }
  else
  {
    if ( a3 == 25 )
      return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
               a2,
               this + 20,
               a4,
               1LL,
               2,
               this + 2,
               2048,
               1,
               a5);
    if ( a3 != 26 )
    {
      if ( a3 == 2 )
      {
        WeakReferenceBase = 0;
        if ( !a4 )
        {
LABEL_10:
          v10 = this[9];
          if ( v10 )
            v11 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)v10 + 2);
          else
            v11 = 0LL;
          if ( a4 == v11 )
          {
            if ( v10 && !v11 )
            {
              DirectComposition::CApplicationChannel::ReleaseWeakReference(a2, v10);
              v21 = a5;
              this[9] = 0LL;
              *((_DWORD *)this + 4) &= ~0x40u;
              *v21 = 1;
            }
            return (unsigned int)WeakReferenceBase;
          }
          v22 = 0LL;
          v12 = 0LL;
          if ( !a4 )
            goto LABEL_16;
          WeakReferenceBase = DirectComposition::CApplicationChannel::GetWeakReferenceBase(a2, a4, &v22);
          if ( WeakReferenceBase >= 0 )
          {
            v12 = v22;
LABEL_16:
            v13 = this[9];
            if ( v13 )
              DirectComposition::CApplicationChannel::ReleaseWeakReference(a2, v13);
            v14 = a5;
            this[9] = v12;
            *((_DWORD *)this + 4) &= ~0x40u;
            *v14 = 1;
          }
          return (unsigned int)WeakReferenceBase;
        }
        v9 = *((unsigned int *)a4 + 9);
        if ( (unsigned int)v9 < 0xCE )
        {
          while ( (_DWORD)v9 != 147 )
          {
            LODWORD(v9) = dword_1C02934F0[v9];
            if ( (unsigned int)v9 >= 0xCE )
              return (unsigned int)-1073741811;
          }
          goto LABEL_10;
        }
      }
      return (unsigned int)-1073741811;
    }
    v23 = 0;
    result = DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
               a2,
               this + 17,
               a4,
               0LL,
               169,
               this + 2,
               2048,
               1,
               &v23);
    if ( v23 )
    {
      v20 = a5;
      *((_BYTE *)this + 296) |= 1u;
      *v20 = 1;
    }
  }
  return result;
}
