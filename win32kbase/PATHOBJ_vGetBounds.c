void __stdcall PATHOBJ_vGetBounds(PATHOBJ *ppo, PRECTFX prectfx)
{
  *prectfx = *(PRECTFX)(*(_QWORD *)&ppo[1] + 48LL);
  if ( *(_QWORD *)&prectfx->xLeft || prectfx->yBottom || prectfx->xRight )
  {
    ++prectfx->yBottom;
    ++prectfx->xRight;
  }
}
