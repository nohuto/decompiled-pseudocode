/*
 * XREFs of NtGdiCreateColorSpace @ 0x1C019A100
 * Callers:
 *     <none>
 * Callees:
 *     ?GreCreateColorSpace@@YAPEAUHCOLORSPACE__@@PEAU_LOGCOLORSPACEEXW@@@Z @ 0x1C0016D9C (-GreCreateColorSpace@@YAPEAUHCOLORSPACE__@@PEAU_LOGCOLORSPACEEXW@@@Z.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 *     memset @ 0x1C00E1980 (memset.c)
 */

struct HOBJ__ *__fastcall NtGdiCreateColorSpace(_OWORD *a1)
{
  _OWORD *v2; // rax
  __int64 v3; // rcx
  _BYTE v5[592]; // [rsp+30h] [rbp-268h] BYREF

  memset(v5, 0, sizeof(v5));
  if ( ((unsigned __int8)a1 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  v2 = v5;
  v3 = 4LL;
  do
  {
    *v2 = *a1;
    v2[1] = a1[1];
    v2[2] = a1[2];
    v2[3] = a1[3];
    v2[4] = a1[4];
    v2[5] = a1[5];
    v2[6] = a1[6];
    v2 += 8;
    *(v2 - 1) = a1[7];
    a1 += 8;
    --v3;
  }
  while ( v3 );
  *v2 = *a1;
  v2[1] = a1[1];
  v2[2] = a1[2];
  v2[3] = a1[3];
  v2[4] = a1[4];
  return GreCreateColorSpace((struct _LOGCOLORSPACEEXW *)v5);
}
