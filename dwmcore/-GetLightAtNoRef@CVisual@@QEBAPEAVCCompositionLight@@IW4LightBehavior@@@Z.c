__int64 __fastcall CVisual::GetLightAtNoRef(_QWORD *a1, unsigned int a2, int a3)
{
  __int64 v4; // rcx
  __int64 v5; // rax

  if ( a3 )
    v4 = a1[39] - a1[38];
  else
    v4 = a1[36] - a1[35];
  if ( a2 >= (unsigned int)(v4 >> 4) )
    return 0LL;
  if ( a3 )
    v5 = a1[38];
  else
    v5 = a1[35];
  return *(_QWORD *)(v5 + 16LL * a2);
}
