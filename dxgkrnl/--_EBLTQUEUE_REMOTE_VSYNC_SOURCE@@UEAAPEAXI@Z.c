BLTQUEUE_REMOTE_VSYNC_SOURCE *__fastcall BLTQUEUE_REMOTE_VSYNC_SOURCE::`vector deleting destructor'(
        BLTQUEUE_REMOTE_VSYNC_SOURCE *P,
        char a2)
{
  BLTQUEUE_REMOTE_VSYNC_SOURCE::~BLTQUEUE_REMOTE_VSYNC_SOURCE(P);
  if ( (a2 & 1) != 0 && P )
    ExFreePoolWithTag(P, 0);
  return P;
}
