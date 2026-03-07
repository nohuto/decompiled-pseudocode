void __fastcall InteractionSourceManager::OnManipulationChanged(__int64 a1, int a2, const struct CManipulation *a3)
{
  int v5; // edx
  int v6; // edx
  int v7; // edx
  const struct CManipulation *v8; // r8
  _QWORD *v9; // rax
  __int64 v10; // rcx
  int v11; // r11d
  _BYTE *v12; // rsi
  _BYTE *v13; // rbx
  int v14; // r11d
  bool v15; // dl
  struct CManipulation *v16; // rdx
  __int64 v17; // [rsp+48h] [rbp+20h] BYREF

  v5 = a2 - 7;
  if ( v5 )
  {
    v6 = v5 - 3;
    if ( v6 )
    {
      v7 = v6 - 2;
      if ( v7 )
      {
        if ( v7 == 1
          && CInteractionTracker::AreInteractionAnimationsAlive(*(CInteractionTracker **)(*(_QWORD *)(a1 + 8) + 16LL)) )
        {
          if ( InteractionSourceManager::IsManipulationActive((InteractionSourceManager *)a1, v8) )
            *(_BYTE *)(*(_QWORD *)(*(_QWORD *)a1 + 424LL) + 448LL) |= 4u;
        }
      }
      else
      {
        wil::com_ptr_t<CManipulation,wil::err_returncode_policy>::com_ptr_t<CManipulation,wil::err_returncode_policy>(
          &v17,
          (__int64)a3);
        v9 = (_QWORD *)std::unordered_map<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>,std::unique_ptr<CChainingHelper>>::at(
                         a1 + 16,
                         &v17);
        v11 = 0;
        v12 = (_BYTE *)*v9;
        v13 = (_BYTE *)*v9;
        do
        {
          v15 = CInteractionTracker::ShouldChainForAxis(v10, v11, (__int64)a3, 1u)
             && CInteractionTracker::ShouldChainAllForAxis(v10, v14, (__int64)a3);
          LOBYTE(v10) = *v13;
          if ( (*v13 & 1) != v15 )
          {
            LOBYTE(v10) = v15 | v10 & 0xFE;
            *v13 = v10;
            v12[36] |= 1u;
          }
          v11 = v14 + 1;
          v13 += 12;
        }
        while ( v11 < 3 );
        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v17);
      }
    }
    else if ( !*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL) + 176LL) )
    {
      InteractionSourceManager::ReconfigureAllManipulations((InteractionSourceManager *)a1);
    }
  }
  else
  {
    if ( !InteractionSourceManager::IsManipulationActive((InteractionSourceManager *)a1, a3) )
      InteractionSourceManager::AddActiveManipulation((InteractionSourceManager *)a1, v16);
    *(_BYTE *)(a1 + 120) = 1;
  }
}
