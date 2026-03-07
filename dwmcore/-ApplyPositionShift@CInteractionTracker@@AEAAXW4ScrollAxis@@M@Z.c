void __fastcall CInteractionTracker::ApplyPositionShift(__int64 a1, int a2, float a3)
{
  int v3; // r8d
  int v4; // edx
  __int64 v5; // rcx
  __int64 v6; // rax
  int v7; // eax
  __int64 v8; // [rsp+20h] [rbp-28h] BYREF
  int v9; // [rsp+28h] [rbp-20h]
  void *retaddr; // [rsp+48h] [rbp+0h]

  v3 = *(_DWORD *)(a1 + 176);
  if ( v3 )
  {
    if ( (unsigned int)(v3 - 1) <= 1 && CInteractionTracker::AreInteractionAnimationsAlive((CInteractionTracker *)a1) )
    {
      if ( v4 )
      {
        if ( v4 != 1 )
          ModuleFailFastForHRESULT(2147942487LL, retaddr);
        v6 = *(_QWORD *)(v5 + 344);
      }
      else
      {
        v6 = *(_QWORD *)(v5 + 336);
      }
      *(float *)(v6 + 600) = a3 + *(float *)(v6 + 600);
    }
  }
  else
  {
    v7 = *(_DWORD *)(a1 + 88);
    v8 = *(_QWORD *)(a1 + 80);
    v9 = v7;
    if ( a2 )
      *((float *)&v8 + 1) = *((float *)&v8 + 1) + a3;
    else
      *(float *)&v8 = *(float *)&v8 + a3;
    CInteractionTracker::SetPosition(a1, (__int64)&v8, 0);
  }
}
