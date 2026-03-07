__int64 __fastcall CInteractionTracker::OnChanged(__int64 a1, unsigned int a2, struct IUnknown *a3)
{
  __int64 v5; // r9
  int v7; // edx
  __int64 *i; // rax
  __int64 v9; // rcx
  __int64 v10; // [rsp+48h] [rbp+20h] BYREF

  v5 = a2 - 7;
  if ( a2 == 7 )
    goto LABEL_6;
  if ( a2 == 8 || a2 == 9 )
  {
    if ( a3 )
    {
      v7 = 0;
      for ( i = (__int64 *)(a1 + 352); ; ++i )
      {
        v9 = *i;
        if ( *i )
        {
          if ( *(_QWORD *)(v9 + 16) && *(struct IUnknown **)(v9 + 16) == a3 )
            break;
        }
        if ( (unsigned int)++v7 >= 2 )
        {
          if ( CInteractionTracker::CheckAndUnRegisterDefaultAnimations((CInteractionTracker *)a1, a3) )
            *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 424LL) + 448LL) |= 2u;
          return 1LL;
        }
      }
      CInteractionTracker::StopCustomAnimation((CInteractionTracker *)a1, v7, 0);
      if ( *(_DWORD *)(a1 + 176) == 3 )
        CInteractionTracker::CheckForIdle((CInteractionTracker *)a1);
    }
  }
  else
  {
    v5 = a2 - 10;
    if ( a2 == 10 || (v5 = a2 - 12, (unsigned int)v5 <= 1) )
    {
LABEL_6:
      v10 = 0LL;
      ((void (__fastcall *)(struct IUnknown *, GUID *, __int64 *, __int64))a3->lpVtbl->QueryInterface)(
        a3,
        &GUID_c3c5a1de_4dff_4600_9562_70179f475db1,
        &v10,
        v5);
      InteractionSourceManager::OnManipulationChanged(a1 + 200, a2, (v10 - 72) & -(__int64)(v10 != 0));
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v10);
    }
  }
  return 1LL;
}
