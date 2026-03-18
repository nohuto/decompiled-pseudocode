/*
 * XREFs of IsPointerInputHookCall @ 0x1C004EB38
 * Callers:
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C004DAF8 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0050D70 (xxxSendTransformableMessageTimeout.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsPointerInputHookCall(int a1, int *a2)
{
  unsigned int v2; // r8d
  int v3; // ecx
  int v4; // r9d

  v2 = 0;
  if ( a1 )
  {
    if ( a1 == 4 )
    {
      v3 = a2[4];
      a2 = (int *)*((_QWORD *)a2 + 1);
    }
    else
    {
      if ( a1 == 3 || a1 == -1 || a1 == 6 )
      {
        v3 = a2[2];
      }
      else
      {
        if ( a1 != 12 )
        {
          v4 = 0;
          LOWORD(a2) = 0;
          goto LABEL_6;
        }
        v3 = a2[6];
      }
      a2 = (int *)*((_QWORD *)a2 + 2);
    }
  }
  else
  {
    v3 = *a2;
    LOWORD(a2) = 0;
  }
  if ( (unsigned int)(v3 - 577) <= 3 || (v4 = v3, (unsigned int)(v3 - 581) <= 0x12) && v3 != 589 )
  {
    if ( v3 == 595 )
      return v2;
    return 1;
  }
LABEL_6:
  if ( v4 == 528 && (_WORD)a2 == 582 )
    return 1;
  return v2;
}
