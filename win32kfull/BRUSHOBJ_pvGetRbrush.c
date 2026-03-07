PVOID __stdcall BRUSHOBJ_pvGetRbrush(BRUSHOBJ *pbo)
{
  PVOID result; // rax
  int RealizedBrush; // eax
  char *pvRbrush; // rdx

  result = pbo->pvRbrush;
  if ( !result )
  {
    RealizedBrush = bGetRealizedBrush(
                      *(struct BRUSH **)&pbo[4].flColorType,
                      (struct EBRUSHOBJ *)pbo,
                      *(__int64 (__fastcall **)(struct _BRUSHOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _XLATEOBJ *, unsigned int))(*((_QWORD *)pbo[3].pvRbrush + 6) + 2760LL));
    pvRbrush = (char *)pbo->pvRbrush;
    if ( !RealizedBrush )
    {
      if ( pvRbrush )
      {
        Win32FreePool(pvRbrush - 16);
        pbo->pvRbrush = 0LL;
      }
      return 0LL;
    }
    if ( !pvRbrush )
      return 0LL;
    vTryToCacheRealization(
      (struct EBRUSHOBJ *)pbo,
      (struct RBRUSH *)(pvRbrush - 16),
      *(struct BRUSH **)&pbo[4].flColorType,
      0);
    return pbo->pvRbrush;
  }
  return result;
}
