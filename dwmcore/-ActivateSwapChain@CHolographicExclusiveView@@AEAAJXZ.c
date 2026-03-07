__int64 __fastcall CHolographicExclusiveView::ActivateSwapChain(CHolographicExclusiveView *this, __int64 a2)
{
  unsigned int v2; // edi
  __int64 v4; // rsi
  __int64 v5; // rsi
  int v6; // eax
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rcx
  char v11; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  if ( *((_BYTE *)this + 82) )
  {
    if ( !*((_BYTE *)this + 81) )
    {
      v4 = *((_QWORD *)this + 12);
      if ( v4 )
      {
        v5 = *(_QWORD *)(v4 + 104);
        if ( v5 )
        {
          LOBYTE(a2) = 1;
          v6 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 400LL))(v5, a2);
          v2 = v6;
          if ( v6 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x14Eu, 0LL);
          }
          else
          {
            *((_QWORD *)this + 16) = *(_QWORD *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v5 + 80LL))(
                                                  v5,
                                                  &v11);
            v8 = CHolographicExclusiveView::OpenSurfaceHandles(this);
            v2 = v8;
            if ( v8 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x152u, 0LL);
            else
              *((_BYTE *)this + 80) = 1;
          }
        }
      }
    }
  }
  return v2;
}
