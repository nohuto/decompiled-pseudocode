__int64 __fastcall CInteractionTracker::GetAnimationForAxis(__int64 *a1, int a2, __int64 *a3)
{
  int v4; // edx
  __int64 v5; // rbx
  __int64 *v6; // rdx
  void *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v9; // [rsp+48h] [rbp+20h] BYREF

  v9 = 0LL;
  if ( !a2 )
  {
    v6 = a1 + 42;
    goto LABEL_8;
  }
  v4 = a2 - 1;
  if ( !v4 )
  {
    v6 = a1 + 43;
LABEL_8:
    Microsoft::WRL::ComPtr<CScrollAnimation>::operator=<CInteractionTrackerPositionAnimation>(&v9, v6);
    v5 = v9;
    goto LABEL_9;
  }
  if ( v4 != 1 )
    ModuleFailFastForHRESULT(2147500037LL, retaddr);
  v5 = a1[41];
  v9 = v5;
  Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef(&v9);
  v9 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v9);
LABEL_9:
  v9 = 0LL;
  *a3 = v5;
  return Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v9);
}
