__int64 __fastcall Feedback::GetWindowBarrelVisualizationSetting(Feedback *this, const struct tagPOINTER_INFO *a2)
{
  unsigned int v2; // edi
  unsigned int v4; // ebx
  __int64 v5; // rax
  int PointerBarrelVisualization; // eax
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rax
  int v11; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0;
  v4 = 1;
  if ( (_DWORD)a2
    || (v5 = SGDGetUserSessionState(this),
        (PointerBarrelVisualization = CTouchProcessor::GetPointerBarrelVisualization(
                                        *(CTouchProcessor **)(v5 + 3424),
                                        *((_WORD *)this + 2))) == 0)
    || (*((_DWORD *)this + 3) & 0x10000) != 0 )
  {
    v7 = *((_QWORD *)this + 3);
    if ( v7 )
    {
      v8 = ValidateHwnd(v7);
      if ( v8 )
      {
        v11 = 1;
        if ( (unsigned int)FeedbackGetWindowSetting(v8, 2LL, 1LL, &v11) )
          v4 = v11;
      }
    }
    v9 = SGDGetUserSessionState(v7);
    CTouchProcessor::SetPointerBarrelVisualization(*(CTouchProcessor **)(v9 + 3424), *((_WORD *)this + 2), v4);
  }
  else
  {
    LOBYTE(v2) = PointerBarrelVisualization == 1;
    return v2;
  }
  return v4;
}
