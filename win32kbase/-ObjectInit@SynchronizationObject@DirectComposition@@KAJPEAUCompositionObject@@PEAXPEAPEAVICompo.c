__int64 __fastcall DirectComposition::SynchronizationObject::ObjectInit(
        struct CompositionObject *a1,
        void *a2,
        struct ICompositionObject **a3)
{
  struct ICompositionObject *v3; // rax
  __int64 result; // rax

  v3 = (struct CompositionObject *)((char *)a1 + 24);
  if ( a1 != (struct CompositionObject *)-24LL )
  {
    *((_WORD *)a1 + 17) = 0;
    *(_QWORD *)v3 = &DirectComposition::CSynchronizationInfo::`vftable';
  }
  *a3 = v3;
  result = 0LL;
  *((_WORD *)a1 + 16) = 1;
  *((_DWORD *)a1 + 9) = 0;
  return result;
}
