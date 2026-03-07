char __fastcall DirectComposition::CAnimationTriggerMarshaler::EmitUpdateCommands(
        DirectComposition::CAnimationTriggerMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v4; // bl
  int *v5; // r14
  int v6; // eax
  char *v8; // rcx
  char *v9; // rcx
  void *v10; // [rsp+70h] [rbp+18h] BYREF

  v4 = 0;
  if ( DirectComposition::CPropertyChangeResourceMarshaler::EmitUpdateCommands(
         this,
         (struct DirectComposition::CBatch **)a2)
    && DirectComposition::CAnimationTriggerMarshaler::EmitSetConditionCommand(
         this,
         (struct DirectComposition::CBatch **)a2) )
  {
    v5 = (int *)((char *)this + 16);
    if ( DirectComposition::CResourceMarshalerArrayBase::Marshal(
           (_QWORD *)this + 10,
           a2,
           *((_DWORD *)this + 8),
           (_DWORD *)this + 4,
           256,
           483,
           484) )
    {
      v6 = *v5;
      if ( (*v5 & 0x200) != 0 )
      {
        v10 = 0LL;
        if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x14uLL, &v10) )
          return v4;
        v8 = (char *)v10;
        *(_DWORD *)v10 = 20;
        *(_OWORD *)(v8 + 4) = 0LL;
        *((_DWORD *)v8 + 1) = 485;
        *((_DWORD *)v8 + 2) = *((_DWORD *)this + 8);
        *(_QWORD *)(v8 + 12) = *((_QWORD *)this + 13);
        *v5 &= ~0x200u;
        v6 = *v5;
      }
      if ( (v6 & 0x400) != 0 )
      {
        v10 = 0LL;
        if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x14uLL, &v10) )
          return v4;
        v9 = (char *)v10;
        *(_DWORD *)v10 = 20;
        *(_OWORD *)(v9 + 4) = 0LL;
        *((_DWORD *)v9 + 1) = 486;
        *((_DWORD *)v9 + 2) = *((_DWORD *)this + 8);
        *(_QWORD *)(v9 + 12) = *((_QWORD *)this + 14);
        *v5 &= ~0x400u;
      }
      return 1;
    }
  }
  return v4;
}
