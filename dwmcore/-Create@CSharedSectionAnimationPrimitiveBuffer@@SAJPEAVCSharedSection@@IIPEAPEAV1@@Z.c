__int64 __fastcall CSharedSectionAnimationPrimitiveBuffer::Create(
        struct CSharedSection *a1,
        int a2,
        int a3,
        struct CSharedSectionAnimationPrimitiveBuffer **a4)
{
  unsigned int v5; // edi
  struct CSharedSectionAnimationPrimitiveBuffer *v9; // rax
  __int64 v10; // rcx
  struct CSharedSectionAnimationPrimitiveBuffer *v11; // rbx
  void (__fastcall **v12)(struct CSharedSectionAnimationPrimitiveBuffer *); // rax

  v5 = 0;
  v9 = (struct CSharedSectionAnimationPrimitiveBuffer *)operator new(0x20uLL);
  v11 = v9;
  if ( v9 )
  {
    *((_DWORD *)v9 + 2) = 0;
    *(_QWORD *)v9 = &CSharedSectionAnimationPrimitiveBuffer::`vftable';
    *((_QWORD *)v9 + 2) = a1;
    if ( a1 )
      CMILRefCountImpl::AddReference((struct CSharedSection *)((char *)a1 + 8));
    v12 = *(void (__fastcall ***)(struct CSharedSectionAnimationPrimitiveBuffer *))v11;
    *((_DWORD *)v11 + 6) = a2;
    *((_DWORD *)v11 + 7) = a3;
    (*v12)(v11);
    *a4 = v11;
  }
  else
  {
    v5 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, -2147024882, 0xDu, 0LL);
  }
  return v5;
}
