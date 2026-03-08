/*
 * XREFs of ?_TTClip@@YAXPEAUtagTOUCHTARGETINGCONTACT@@JW4tagCLIP_SIDE@@@Z @ 0x1C0250478
 * Callers:
 *     TouchTargetingClipContact @ 0x1C0250B3C (TouchTargetingClipContact.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall _TTClip(_DWORD *a1, int a2, int a3)
{
  int v3; // r8d
  int v4; // r8d
  __int64 result; // rax

  if ( a3 )
  {
    v3 = a3 - 1;
    if ( v3 )
    {
      v4 = v3 - 1;
      if ( v4 )
      {
        if ( v4 == 1 )
          a1[3] = a2;
      }
      else
      {
        a1[1] = a2;
      }
    }
    else
    {
      a1[2] = a2;
    }
  }
  else
  {
    *a1 = a2;
  }
  result = (unsigned int)a1[2];
  if ( *a1 >= (int)result || (result = (unsigned int)a1[3], a1[1] >= (int)result) )
    a1[45] = 0;
  return result;
}
