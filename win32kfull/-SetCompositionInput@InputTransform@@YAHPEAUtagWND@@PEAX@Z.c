struct tagINPUTTRANSFORMLIST *__fastcall InputTransform::SetCompositionInput(
        InputTransform *this,
        struct tagWND *a2,
        void *a3)
{
  struct tagINPUTTRANSFORMLIST *result; // rax
  unsigned int v5; // ebx
  struct CompositionInputObject **v6; // rdi
  CompositionObject *v7; // rcx

  result = InitInputTransformList(this);
  v5 = 0;
  if ( result )
  {
    v6 = (struct CompositionInputObject **)((char *)result + 96);
    v7 = (CompositionObject *)*((_QWORD *)result + 12);
    if ( v7 )
    {
      CompositionObject::Release(v7);
      *v6 = 0LL;
    }
    LOBYTE(v5) = CompositionInputObject::ResolveHandle(a2, 1u, 1, v6) >= 0;
    return (struct tagINPUTTRANSFORMLIST *)v5;
  }
  return result;
}
