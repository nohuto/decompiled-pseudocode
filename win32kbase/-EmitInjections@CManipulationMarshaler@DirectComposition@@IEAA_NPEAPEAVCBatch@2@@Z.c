char __fastcall DirectComposition::CManipulationMarshaler::EmitInjections(
        DirectComposition::CManipulationMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char *v4; // rdx
  _OWORD *v5; // rcx
  char *v6; // rdx
  __int64 v7; // rcx
  __int64 v9; // r8
  void *v11; // [rsp+30h] [rbp+8h] BYREF

  if ( !*((_DWORD *)this + 34) )
    return 1;
  v11 = 0LL;
  while ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x8CuLL, &v11) )
  {
    v4 = (char *)v11;
    *(_DWORD *)v11 = 140;
    *(_QWORD *)(v4 + 4) = 0LL;
    *((_DWORD *)v4 + 1) = 249;
    *((_DWORD *)v4 + 2) = *((_DWORD *)this + 8);
    v5 = (_OWORD *)**((_QWORD **)this + 16);
    *(_OWORD *)(v4 + 12) = *v5;
    *(_OWORD *)(v4 + 28) = v5[1];
    *(_OWORD *)(v4 + 44) = v5[2];
    *(_OWORD *)(v4 + 60) = v5[3];
    *(_OWORD *)(v4 + 76) = v5[4];
    *(_OWORD *)(v4 + 92) = v5[5];
    *(_OWORD *)(v4 + 108) = v5[6];
    *(_OWORD *)(v4 + 124) = v5[7];
    v6 = (char *)**((_QWORD **)this + 16);
    if ( v6 )
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v6);
    v7 = 0LL;
    if ( (*((_DWORD *)this + 34))-- != 1 )
    {
      do
      {
        v9 = (unsigned int)(v7 + 1);
        *(_QWORD *)(*((_QWORD *)this + 16) + 8 * v7) = *(_QWORD *)(*((_QWORD *)this + 16) + 8 * v9);
        v7 = v9;
      }
      while ( (unsigned int)v9 < *((_DWORD *)this + 34) );
    }
    if ( !*((_DWORD *)this + 34) )
      return 1;
  }
  return 0;
}
