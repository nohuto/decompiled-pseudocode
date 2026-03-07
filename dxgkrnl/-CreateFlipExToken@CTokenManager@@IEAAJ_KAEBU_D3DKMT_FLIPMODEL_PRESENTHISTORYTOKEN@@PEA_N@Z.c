__int64 __fastcall CTokenManager::CreateFlipExToken(
        HANDLE *this,
        unsigned __int64 a2,
        const struct _D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN *a3,
        bool *a4)
{
  int v8; // esi
  struct CToken *v9; // rbx
  HANDLE ****v10; // rcx
  HANDLE **v11; // rdx
  HANDLE ***v12; // rax
  CompositionSurfaceObject *v13; // rbx
  HANDLE v14; // rcx
  void (__fastcall *v15)(const struct _D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN *, __int64); // rax
  struct CToken *PreviousState; // [rsp+58h] [rbp+20h] BYREF

  PreviousState = 0LL;
  *a4 = 0;
  v8 = CToken::CreateFromCompletedFlipToken(a2, a3, &PreviousState);
  if ( v8 >= 0 )
  {
    v9 = PreviousState;
    if ( !(*(unsigned __int8 (__fastcall **)(struct CToken *))(*(_QWORD *)PreviousState + 144LL))(PreviousState)
      || (*(unsigned __int8 (__fastcall **)(struct CToken *))(*(_QWORD *)v9 + 152LL))(v9) )
    {
      v8 = CTokenManager::AddTokenToQueue((CTokenManager *)this, (struct CompositionSurfaceObject **)v9);
      if ( v8 < 0 )
      {
        (**(void (__fastcall ***)(struct CToken *, __int64))v9)(v9, 1LL);
        return (unsigned int)v8;
      }
    }
    else
    {
      v10 = (HANDLE ****)(this + 41);
      *a4 = 1;
      v11 = (HANDLE **)this[41];
      v12 = (HANDLE ***)((char *)v9 + 8);
      if ( v11[1] != this + 41 )
        __fastfail(3u);
      *v12 = v11;
      *((_QWORD *)v9 + 2) = v10;
      v11[1] = (HANDLE *)v12;
      *v10 = v12;
    }
    v13 = (CompositionSurfaceObject *)*((_QWORD *)v9 + 4);
    if ( v13 )
    {
      if ( CompositionSurfaceObject::StartCompositionEarly(v13, a2) )
      {
        LODWORD(PreviousState) = 0;
        ZwSetEvent(this[9], (PLONG)&PreviousState);
      }
      if ( CompositionSurfaceObject::GetAnalogExclusive(v13) )
      {
        LODWORD(PreviousState) = 0;
        v14 = this[10];
        if ( v14 )
          ZwSetEvent(v14, (PLONG)&PreviousState);
      }
    }
    v15 = *(void (__fastcall **)(const struct _D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN *, __int64))(*((_QWORD *)DXGGLOBAL::GetGlobal()
                                                                                                 + 38069)
                                                                                               + 56LL);
    v15(a3, 1LL);
  }
  return (unsigned int)v8;
}
