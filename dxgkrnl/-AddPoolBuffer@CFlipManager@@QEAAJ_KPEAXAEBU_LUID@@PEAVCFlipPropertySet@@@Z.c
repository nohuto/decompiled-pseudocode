__int64 __fastcall CFlipManager::AddPoolBuffer(
        CFlipManager *this,
        unsigned __int64 a2,
        void *a3,
        const struct _LUID *a4,
        struct CFlipPropertySet *a5)
{
  char *v5; // rsi
  __int64 v7; // rbx
  unsigned __int64 v9; // rdx
  const struct _LUID *v10; // r11
  int v11; // edi
  struct CPoolBufferResourceState *v12; // rbp
  char **v13; // rcx
  char *v14; // rax
  struct DXGGLOBAL *Global; // rax
  __int64 v16; // rdx
  __int64 v17; // r9
  void (__fastcall *v18)(_QWORD, __int64, __int64); // rax
  __int64 v19; // r9
  __int64 v20; // r8
  struct CPoolBufferResourceState *v22; // [rsp+50h] [rbp+8h] BYREF

  v5 = (char *)this + 56;
  v7 = 0LL;
  v22 = 0LL;
  if ( CEndpointResourceStateManager::FindResourceState(this, a2, (struct _LIST_ENTRY *)((char *)this + 56)) )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    v11 = CPoolBufferResource::Create(this, v9, a3, v10, a5, &v22);
    if ( v11 >= 0 )
    {
      v12 = v22;
      v13 = (char **)*((_QWORD *)v5 + 1);
      v14 = (char *)(((unsigned __int64)v22 + 8) & -(__int64)(v22 != 0LL));
      if ( *v13 != v5 )
        __fastfail(3u);
      *(_QWORD *)v14 = v5;
      *((_QWORD *)v14 + 1) = v13;
      *v13 = v14;
      *((_QWORD *)v5 + 1) = v14;
      Global = DXGGLOBAL::GetGlobal();
      v16 = *((_QWORD *)v12 + 3);
      v17 = *(_QWORD *)(v16 + 64);
      v18 = *(void (__fastcall **)(_QWORD, __int64, __int64))(*((_QWORD *)Global + 38069) + 240LL);
      if ( v17 )
      {
        v19 = *(_QWORD *)(v17 + 16);
        if ( v19 )
        {
          v20 = *(_QWORD *)(v19 + 136);
          if ( v20 != v19 + 136 && v20 == *(_QWORD *)(v19 + 144) )
            v7 = *(_QWORD *)(v20 - 40);
        }
      }
      v18(*((unsigned int *)this + 83), v16, v7);
    }
  }
  return (unsigned int)v11;
}
