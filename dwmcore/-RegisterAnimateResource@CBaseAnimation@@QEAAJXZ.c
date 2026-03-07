__int64 __fastcall CBaseAnimation::RegisterAnimateResource(CBaseAnimation *this)
{
  unsigned int v1; // ebx
  __int64 v3; // r10
  unsigned int v4; // eax
  unsigned int v5; // edx
  unsigned int v6; // edi
  int v8; // eax
  __int64 v9; // rcx
  unsigned int v10; // ebp
  __int64 v11; // rcx
  __int64 v12; // rcx
  char *v13; // [rsp+40h] [rbp+8h] BYREF

  v1 = 0;
  if ( !*((_BYTE *)this + 104) )
  {
    v3 = *((_QWORD *)this + 2);
    v13 = (char *)this + 64;
    v4 = *(_DWORD *)(v3 + 712);
    v5 = v4 + 1;
    if ( v4 + 1 < v4 )
    {
      v6 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, -2147024362, 0xB5u, 0LL);
      v10 = -2147024362;
    }
    else
    {
      v6 = 0;
      if ( v5 <= *(_DWORD *)(v3 + 708) )
      {
        *(_QWORD *)(*(_QWORD *)(v3 + 688) + 8LL * v4) = (char *)this + 64;
        *(_DWORD *)(v3 + 712) = v5;
LABEL_5:
        *((_BYTE *)this + 104) = 1;
        return v6;
      }
      v8 = DynArrayImpl<0>::AddMultipleAndSet(v3 + 688, 8, 1, &v13);
      v6 = v8;
      v10 = v8;
      if ( v8 >= 0 )
        goto LABEL_5;
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0xC0u, 0LL);
    }
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v6, 0x781u, 0LL);
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v6, 0x78u, 0LL);
    return v10;
  }
  return v1;
}
