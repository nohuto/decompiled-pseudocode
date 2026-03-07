__int64 __fastcall ScanPipelineBuilder::GetFreeIntermediateBuffer(__int64 a1)
{
  __int64 v1; // rdx
  _BYTE *v2; // rax

  v1 = 0LL;
  v2 = (_BYTE *)(a1 + 16);
  do
  {
    if ( *v2 )
      break;
    v1 = (unsigned int)(v1 + 1);
    ++v2;
  }
  while ( (unsigned int)v1 < 3 );
  *(_BYTE *)(v1 + a1 + 16) = 0;
  return (unsigned int)(v1 + 3);
}
