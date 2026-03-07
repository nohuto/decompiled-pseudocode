PATHOBJ *__stdcall CLIPOBJ_ppoGetPath(CLIPOBJ *pco)
{
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 v3; // r9

  return XCLIPOBJ::ppoGetPath((XCLIPOBJ *)pco, v1, v2, v3);
}
