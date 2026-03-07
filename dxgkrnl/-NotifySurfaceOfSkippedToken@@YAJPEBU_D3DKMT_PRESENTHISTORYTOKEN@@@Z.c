__int64 __fastcall NotifySurfaceOfSkippedToken(const struct _D3DKMT_PRESENTHISTORYTOKEN *a1, __int64 a2, __int64 a3)
{
  int v4; // edi
  UINT64 CompositionBindingId; // rcx
  bool v6; // zf
  struct CToken *v7; // rbx
  CompositionSurfaceObject *v8; // rcx
  struct CToken *v10; // [rsp+30h] [rbp+8h] BYREF
  PVOID Object; // [rsp+38h] [rbp+10h] BYREF

  Object = 0LL;
  v4 = CompositionSurfaceObject::ResolveHandle(
         (void *)a1->Token.Flip.hLogicalSurface,
         2u,
         a3,
         (struct CompositionSurfaceObject **)&Object);
  if ( v4 >= 0 )
  {
    CompositionBindingId = a1->CompositionBindingId;
    v10 = 0LL;
    v4 = CToken::CreateFlipToken(CompositionBindingId, (struct CompositionSurfaceObject *)Object, &a1->Token.Flip, &v10);
    if ( v4 >= 0 )
    {
      v6 = (a1->Token.Flip.Flags.Value & 0x2000000) == 0;
      v7 = v10;
      if ( v6 )
        *((_BYTE *)v10 + 48) = 1;
      else
        *((_BYTE *)v10 + 49) = 1;
      v8 = (CompositionSurfaceObject *)Object;
      *((_DWORD *)v7 + 6) = 3;
      LOBYTE(v10) = 0;
      v4 = CompositionSurfaceObject::NotifyTokenInFrame(v8, v7, (bool *)&v10);
      if ( v7 )
        (**(void (__fastcall ***)(struct CToken *, __int64))v7)(v7, 1LL);
    }
    ObfDereferenceObject(Object);
  }
  return (unsigned int)v4;
}
