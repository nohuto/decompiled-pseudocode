/*
 * XREFs of ?GetResourceTag@CCachedVisualImage@@MEBA?AVCResourceTag@@XZ @ 0x1800FBB20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_OWORD *__fastcall CCachedVisualImage::GetResourceTag(__int64 a1, _OWORD *a2)
{
  char v2; // r8
  const char **v3; // rax
  __int128 v4; // xmm0
  _OWORD *result; // rax
  const char *v6; // [rsp+0h] [rbp-28h] BYREF
  int v7; // [rsp+8h] [rbp-20h]
  const char *v8; // [rsp+10h] [rbp-18h] BYREF
  int v9; // [rsp+18h] [rbp-10h]

  v2 = *(_BYTE *)(a1 + 1780);
  if ( v2 )
  {
    v9 = 18;
    v8 = "DWM Visual Surface";
  }
  else
  {
    v7 = 23;
    v6 = "DWM Cached Visual Image";
  }
  v3 = &v6;
  if ( v2 )
    v3 = &v8;
  v4 = *(_OWORD *)v3;
  result = a2;
  *a2 = v4;
  return result;
}
