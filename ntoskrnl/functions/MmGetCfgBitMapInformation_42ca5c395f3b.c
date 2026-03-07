__int64 __fastcall MmGetCfgBitMapInformation(int a1, _QWORD *a2)
{
  _QWORD *v2; // rax
  __int64 v3; // rcx
  __int64 v4; // r8

  v2 = (_QWORD *)KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.StaticBitmap[28];
  if ( a1 )
  {
    v3 = v2[57];
    v4 = v2[58];
  }
  else
  {
    v3 = v2[53];
    v4 = v2[54];
  }
  *a2 = v4;
  return v3;
}
