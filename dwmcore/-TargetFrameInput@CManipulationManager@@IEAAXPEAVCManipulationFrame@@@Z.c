void __fastcall CManipulationManager::TargetFrameInput(CManipulationManager *this, struct CManipulationFrame *a2)
{
  unsigned __int64 v2; // r14
  unsigned int i; // ebx
  __int64 v6; // rsi
  int *v7; // r15
  unsigned __int64 v8; // rcx
  void *v9; // r8
  int v10; // r15d
  __int64 v11; // r12
  unsigned int v12; // esi
  int v13; // eax
  __int64 v14; // rbx
  __int64 v15; // rax
  struct CManipulationContext *v16; // [rsp+70h] [rbp+8h] BYREF
  unsigned __int64 v17; // [rsp+78h] [rbp+10h] BYREF
  void *v18; // [rsp+80h] [rbp+18h] BYREF

  v2 = 0LL;
  for ( i = 0; i < *((_DWORD *)a2 + 4); ++i )
  {
    v6 = 248LL * i;
    v7 = (int *)((char *)a2 + v6);
    if ( (unsigned int)QpcTimeConverter::QpcToMicroSec(
                         (CManipulationManager *)((char *)this + 280),
                         *(_QWORD *)((char *)a2 + v6 + 448),
                         &v17) )
    {
      v8 = v17;
    }
    else
    {
      v8 = 1000LL * *(unsigned int *)((char *)a2 + v6 + 432);
      v17 = v8;
    }
    if ( v2 >= v8 )
      v8 = v2;
    v2 = v8;
    if ( (*((_BYTE *)a2 + 176) & 2) == 0 || *(_QWORD *)((char *)a2 + v6 + 392) == -1LL )
    {
      CMap<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>>>::Lookup(
        (__int64)this + 160,
        (__int64 (__fastcall ****)(_QWORD))&v16,
        v7 + 93);
      if ( (((*(_DWORD *)((_BYTE *)a2 + v6 + 380) & 0x20006) - 0x20000) & 0xFFFFFFFD) == 0 )
        Microsoft::WRL::ComPtr<IInteractionResource>::operator=(
          (__int64 (__fastcall ****)(_QWORD))&v16,
          (_QWORD *)this + 30);
      v9 = 0LL;
      v18 = 0LL;
      if ( v16 )
      {
        CManipulationManager::TargetPointer(this, v16, a2, i, &v18);
        v9 = v18;
      }
      *(_QWORD *)((char *)a2 + v6 + 392) = v9;
      if ( v9 != (void *)-1LL )
      {
        *((_BYTE *)a2 + 176) |= 1u;
        if ( (*((_BYTE *)a2 + 176) & 2) == 0 )
          CManipulationManager::TargetBufferedFrames(this, v7[93], v9, i);
      }
      Microsoft::WRL::ComPtr<CRenderingEffect>::InternalRelease((__int64 *)&v16);
    }
  }
  v10 = 0;
  if ( *((int *)this + 48) > 0 )
  {
    v11 = 0LL;
    do
    {
      v12 = 0;
      if ( *((_DWORD *)a2 + 4) == 1 && (*((_DWORD *)a2 + 95) & 0x800000) != 0 )
      {
        v13 = *((_DWORD *)a2 + 110);
        if ( v13 == 571 )
        {
          v12 = 1;
        }
        else if ( v13 == 572 )
        {
          v12 = 2;
        }
      }
      v14 = *(_QWORD *)(v11 + *((_QWORD *)this + 23));
      v15 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
      CGestureTargetingManager::ProcessHandledInteractionsWalk(v14, v15, v2, v12, (char *)a2 + 184);
      ++v10;
      v11 += 8LL;
    }
    while ( v10 < *((_DWORD *)this + 48) );
  }
}
