__int64 __fastcall DirectComposition::CManipulationMarshaler::SetSourceModifier(
        __int64 a1,
        DirectComposition::CApplicationChannel *a2,
        signed int a3,
        struct DirectComposition::CResourceMarshaler *a4,
        struct DirectComposition::CWeakReferenceBase *a5)
{
  struct DirectComposition::CWeakReferenceBase *v5; // r12
  int WeakReferenceBase; // r14d
  __int64 v10; // rbp
  __int64 v11; // rbx
  struct DirectComposition::CResourceMarshaler *v12; // rax
  struct DirectComposition::CWeakReferenceBase *v13; // rsi

  v5 = a5;
  WeakReferenceBase = 0;
  *(_BYTE *)a5 = 0;
  if ( (unsigned int)a3 >= 5 )
    return 3221225485LL;
  _mm_lfence();
  v10 = a3;
  v11 = *(_QWORD *)(a1 + 8LL * a3 + 64);
  if ( v11 )
    v12 = *(struct DirectComposition::CResourceMarshaler **)(v11 + 16);
  else
    v12 = 0LL;
  if ( a4 == v12 )
  {
    if ( v11 && !v12 )
    {
      DirectComposition::CApplicationChannel::ReleaseWeakReference(
        a2,
        *(struct DirectComposition::CWeakReferenceBase **)(a1 + 8LL * a3 + 64));
      *(_QWORD *)(a1 + 8 * v10 + 64) = 0LL;
    }
    return (unsigned int)WeakReferenceBase;
  }
  v13 = 0LL;
  a5 = 0LL;
  if ( !a4 )
    goto LABEL_10;
  WeakReferenceBase = DirectComposition::CApplicationChannel::GetWeakReferenceBase(a2, a4, &a5);
  if ( WeakReferenceBase >= 0 )
  {
    v13 = a5;
LABEL_10:
    if ( v11 )
      DirectComposition::CApplicationChannel::ReleaseWeakReference(
        a2,
        (struct DirectComposition::CWeakReferenceBase *)v11);
    *(_QWORD *)(a1 + 8 * v10 + 64) = v13;
    *(_DWORD *)(a1 + 16) |= 0x80u;
    *(_BYTE *)v5 = 1;
  }
  return (unsigned int)WeakReferenceBase;
}
