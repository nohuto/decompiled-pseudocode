/*
 * XREFs of NtGdiGetDhpdev @ 0x1C02CF0B0
 * Callers:
 *     <none>
 * Callees:
 *     ?ValidUmpdHdev@@YAPEAUHDEV__@@PEAU1@@Z @ 0x1C02C9BFC (-ValidUmpdHdev@@YAPEAUHDEV__@@PEAU1@@Z.c)
 */

__int64 __fastcall NtGdiGetDhpdev(Gre::Base *a1)
{
  __int64 v1; // rbx
  __int64 *v2; // rax
  __int64 *v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0LL;
  v2 = ValidUmpdHdev(a1);
  if ( v2 )
  {
    v4 = v2;
    v1 = v2[221];
    PDEVOBJ::vUnreferencePdev((PDEVOBJ *)&v4);
  }
  return v1;
}
