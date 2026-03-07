__int64 __fastcall CPropertyChangeResource::NotifyVector3PropertyChanged(
        CPropertyChangeResource *this,
        unsigned int a2,
        const struct D2DVector3 *a3)
{
  __int64 v3; // r10
  unsigned int v4; // ebx
  int v6; // eax
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rcx
  int v10; // eax
  unsigned int v11; // ecx
  __int64 v13; // [rsp+40h] [rbp-28h] BYREF
  int v14; // [rsp+48h] [rbp-20h]
  _QWORD v15[3]; // [rsp+50h] [rbp-18h] BYREF

  v3 = *((_QWORD *)this + 6);
  v4 = 0;
  if ( v3 )
  {
    if ( *(_DWORD *)(v3 + 76) )
    {
      if ( *((_DWORD *)this + 16) )
      {
        v6 = *((_DWORD *)this + 18);
        if ( _bittest(&v6, a2) )
        {
          v7 = *((_QWORD *)this + 2);
          v13 = *(_QWORD *)a3;
          v8 = *(_QWORD *)(v7 + 1240);
          v14 = *((_DWORD *)a3 + 2);
          v9 = *(_QWORD *)(v8 + 40);
          v15[0] = *(unsigned int *)(v3 + 76);
          v15[1] = *((unsigned int *)this + 16);
          v10 = CoreUICallSend(v9, v15, 2LL, 14LL, 3, &unk_180339473, a2, &v13);
          v4 = v10;
          if ( v10 == -2018375675 )
          {
            return 0;
          }
          else if ( v10 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x14Au, 0LL);
          }
        }
      }
    }
  }
  return v4;
}
