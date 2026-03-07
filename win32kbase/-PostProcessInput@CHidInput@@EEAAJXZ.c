__int64 __fastcall CHidInput::PostProcessInput(CHidInput *this)
{
  if ( *((_BYTE *)this + 1424) )
  {
    *((_BYTE *)this + 1424) = 0;
    InitiatePTPMouseProcessing();
  }
  return 0LL;
}
