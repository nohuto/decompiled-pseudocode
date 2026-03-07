char __fastcall DirectComposition::CAnimationLoggingManagerMarshaler::EmitSetComments(
        DirectComposition::CAnimationLoggingManagerMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  unsigned int v2; // esi
  unsigned int v4; // r15d
  char v6; // di
  __int64 v8; // rbp
  struct DirectComposition::CWeakReferenceBase **v9; // r14
  int v10; // ecx
  struct DirectComposition::CBatch *v11; // rax
  unsigned __int64 v12; // r13
  char *v13; // r9
  void *v14; // rdx
  size_t v15; // r8
  __int64 Src; // [rsp+60h] [rbp+8h] BYREF
  void *v17; // [rsp+70h] [rbp+18h] BYREF

  v2 = *((_DWORD *)this + 60);
  v4 = *((_DWORD *)this + 56);
  v6 = 1;
  if ( v2 < v4 )
  {
    v8 = *((unsigned int *)this + 60);
    while ( 1 )
    {
      v9 = *(struct DirectComposition::CWeakReferenceBase ***)(*((_QWORD *)this + 29) * v8 + *((_QWORD *)this + 25));
      v10 = 2 * *((_DWORD *)v9 + 2);
      if ( ((2 * *((_BYTE *)v9 + 8)) & 3) != 0 )
        v10 += 4 - ((2 * *((_BYTE *)v9 + 8)) & 3);
      v11 = *a2;
      v12 = (unsigned int)(v10 + 20);
      LODWORD(Src) = v10 + 20;
      v17 = (void *)(4096LL - *(_QWORD *)(*((_QWORD *)v11 + 17) + 40LL));
      if ( (unsigned __int64)v17 < v12
        && (!DirectComposition::CBatch::AllocateNewFragment(a2, (unsigned __int64 *)&v17) || (unsigned __int64)v17 < v12) )
      {
        break;
      }
      if ( *v9 && *((_QWORD *)*v9 + 2) )
      {
        v17 = 0LL;
        DirectComposition::CBatch::EnsureBatchBuffer(a2, v12, &v17);
        v13 = (char *)v17;
        *(_DWORD *)v17 = Src;
        *(_OWORD *)(v13 + 4) = 0LL;
        *((_DWORD *)v13 + 1) = 14;
        *((_DWORD *)v13 + 2) = *((_DWORD *)this + 8);
        *((_DWORD *)v13 + 3) = *(_DWORD *)(*((_QWORD *)*v9 + 2) + 32LL);
        *((_DWORD *)v13 + 4) = *((_DWORD *)v9 + 2);
        memmove(v13 + 20, v9 + 2, 2LL * (_QWORD)v9[1]);
      }
      if ( *v9 )
      {
        DirectComposition::CApplicationChannel::ReleaseWeakReference(
          *((DirectComposition::CApplicationChannel **)*a2 + 1),
          *v9);
        *v9 = 0LL;
      }
      v14 = *(void **)(*((_QWORD *)this + 29) * v8 + *((_QWORD *)this + 25));
      if ( v14 )
        NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v14);
      v15 = *((_QWORD *)this + 29);
      Src = 0LL;
      memmove((void *)(*((_QWORD *)this + 25) + v15 * v2), &Src, v15);
      ++*((_DWORD *)this + 60);
      ++v2;
      ++v8;
      if ( v2 >= v4 )
        goto LABEL_2;
    }
    v6 = 0;
  }
LABEL_2:
  if ( *((_DWORD *)this + 60) == v4 )
  {
    v6 = 1;
    DirectComposition::CDCompDynamicArrayBase::SetCount(
      (DirectComposition::CAnimationLoggingManagerMarshaler *)((char *)this + 200),
      0LL,
      0x6D6C4344u);
    *((_DWORD *)this + 60) = 0;
  }
  return v6;
}
