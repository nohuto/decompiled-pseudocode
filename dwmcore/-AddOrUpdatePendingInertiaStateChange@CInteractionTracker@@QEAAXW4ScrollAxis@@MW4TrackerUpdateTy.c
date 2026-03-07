void __fastcall CInteractionTracker::AddOrUpdatePendingInertiaStateChange(
        __int64 a1,
        unsigned int a2,
        float a3,
        int a4)
{
  __int64 v7; // r8
  __int64 v8; // rax
  int v9; // edx
  __int64 v10; // rcx
  int v11; // xmm7_4
  double CurrentValue; // xmm0_8
  unsigned int v13; // xmm6_4
  double v14; // xmm0_8
  unsigned __int64 v15; // [rsp+20h] [rbp-58h]
  unsigned __int64 v16; // [rsp+30h] [rbp-48h] BYREF
  int v17; // [rsp+38h] [rbp-40h]
  void *retaddr; // [rsp+78h] [rbp+0h]

  if ( *(_DWORD *)(a1 + 504)
    && (v7 = *(_QWORD *)(a1 + 480), v8 = (unsigned int)(*(_DWORD *)(a1 + 504) - 1), *(_DWORD *)(v7 + 24 * v8) == 2) )
  {
    if ( a2 )
    {
      if ( a2 != 1 )
      {
        if ( a2 != 2 )
          ModuleFailFastForHRESULT(2147942487LL, retaddr);
        *(float *)(v7 + 24 * v8 + 16) = a3;
LABEL_8:
        v9 = 57;
        goto LABEL_11;
      }
      *(float *)(v7 + 24 * v8 + 8) = a3;
    }
    else
    {
      *(float *)(v7 + 24 * v8 + 4) = a3;
    }
  }
  else
  {
    v11 = *(_DWORD *)(a1 + 88);
    CurrentValue = CInteractionTracker::GetCurrentValue(a1, 1LL);
    v13 = LODWORD(CurrentValue);
    v14 = CInteractionTracker::GetCurrentValue(a1, 0LL);
    v15 = __PAIR64__(v13, LODWORD(v14));
    CInteractionTracker::GetCurrentValue(a1, 2LL);
    if ( a2 )
    {
      if ( a2 == 1 )
      {
        *((float *)&v15 + 1) = a3;
      }
      else if ( a2 != 2 )
      {
        ModuleFailFastForHRESULT(2147942487LL, retaddr);
      }
    }
    else
    {
      *(float *)&v15 = a3;
    }
    v16 = v15;
    v17 = v11;
    CInteractionTracker::AddPendingStateChange(a1, 2LL, &v16);
    if ( a2 >= 2 )
      goto LABEL_8;
  }
  v9 = 56;
LABEL_11:
  CResource::InvalidateAnimationSources((CResource *)a1, v9);
  v10 = *(_QWORD *)(a1 + 640);
  if ( v10 )
  {
    if ( !a4 )
      CInteractionTrackerBindingManager::AddOrUpdatePendingInertiaStateChangeForBoundTrackers(v10, a1, a2);
  }
}
