/*
 * XREFs of IsPointerInputHookCall @ 0x1C0109A04
 * Callers:
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C01098A8 (-xxxCallHook@@YAHH_K_JH@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsPointerInputHookCall(int a1, unsigned int *a2)
{
  unsigned int v2; // r8d
  unsigned int v3; // ecx

  v2 = 0;
  if ( a1 )
  {
    if ( a1 == 4 )
    {
      v3 = a2[4];
      a2 = (unsigned int *)*((_QWORD *)a2 + 1);
      goto LABEL_9;
    }
    if ( a1 != 3 && a1 != 6 )
    {
      if ( a1 == 12 )
      {
        v3 = a2[6];
        goto LABEL_14;
      }
      if ( a1 != -1 )
      {
        v3 = 0;
        LOWORD(a2) = 0;
LABEL_10:
        if ( v3 < 0x245 || v3 > 0x257 || v3 == 589 )
          goto LABEL_11;
        goto LABEL_22;
      }
    }
    v3 = a2[2];
LABEL_14:
    a2 = (unsigned int *)*((_QWORD *)a2 + 2);
    goto LABEL_9;
  }
  v3 = *a2;
  LOWORD(a2) = 0;
LABEL_9:
  if ( v3 - 577 > 3 )
    goto LABEL_10;
LABEL_22:
  if ( v3 != 595 )
    return 1;
LABEL_11:
  if ( v3 == 528 && (_WORD)a2 == 582 )
    return 1;
  return v2;
}
