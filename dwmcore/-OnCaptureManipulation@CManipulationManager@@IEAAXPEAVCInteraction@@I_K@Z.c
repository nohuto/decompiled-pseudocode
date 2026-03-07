void __fastcall CManipulationManager::OnCaptureManipulation(
        CManipulationManager *this,
        struct CInteraction *a2,
        unsigned int a3,
        __int64 a4)
{
  int Key; // eax
  __int64 v8; // r11
  __int64 v9; // rcx
  __int64 v10; // rax
  struct CInteraction *i; // rcx
  unsigned int v12; // [rsp+40h] [rbp+18h] BYREF

  v12 = a3;
  Key = CMap<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>>>::FindKey(
          (__int64)this + 160,
          (int *)&v12);
  if ( Key != -1 )
  {
    v9 = *(_QWORD *)(*(_QWORD *)(v8 + 168) + 8LL * Key);
    v10 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v9 + 24LL))(v9, a3);
    if ( v10 )
    {
      for ( i = (struct CInteraction *)(v10 - 64); i; i = (struct CInteraction *)*((_QWORD *)i + 27) )
      {
        if ( i == a2 )
        {
          (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(*((_QWORD *)i + 8) + 192LL))((_QWORD *)i + 8, a3, a4);
          return;
        }
      }
    }
  }
}
